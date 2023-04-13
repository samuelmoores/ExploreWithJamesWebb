// Copyright Epic Games, Inc. All Rights Reserved.

#include "cppThirdPersonTestCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"


//////////////////////////////////////////////////////////////////////////
// AcppThirdPersonTestCharacter

AcppThirdPersonTestCharacter::AcppThirdPersonTestCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 150.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm



	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AcppThirdPersonTestCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	GetMesh()->OnComponentBeginOverlap.AddDynamic(this, &AcppThirdPersonTestCharacter::OnOverlapBegin);



	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AcppThirdPersonTestCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AcppThirdPersonTestCharacter::JumpCustom);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AcppThirdPersonTestCharacter::StopJumpCustom);

		if(JumpAction)
		{
			UE_LOG(LogTemp, Warning, TEXT("Jumping"));
		}
		

		//Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &AcppThirdPersonTestCharacter::Sprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AcppThirdPersonTestCharacter::StopSprint);

		//Health
		EnhancedInputComponent->BindAction(DamageAction, ETriggerEvent::Started, this, &AcppThirdPersonTestCharacter::StartDamage);
		EnhancedInputComponent->BindAction(HealAction, ETriggerEvent::Started, this, &AcppThirdPersonTestCharacter::StartHealing);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AcppThirdPersonTestCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AcppThirdPersonTestCharacter::Look);

		//Aiming
		EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Triggered, this, &AcppThirdPersonTestCharacter::Aim);
		EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Completed, this, &AcppThirdPersonTestCharacter::StopAim);

		//Punching
		EnhancedInputComponent->BindAction(PunchAction, ETriggerEvent::Triggered, this, &AcppThirdPersonTestCharacter::Punch);
		EnhancedInputComponent->BindAction(PunchAction, ETriggerEvent::Completed, this, &AcppThirdPersonTestCharacter::StopPunch);

		//Equiping
		EnhancedInputComponent->BindAction(EquipAction, ETriggerEvent::Started, this, &AcppThirdPersonTestCharacter::equipItem);

		//Blocking
		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Triggered, this, &AcppThirdPersonTestCharacter::block);
		
	}


}

void AcppThirdPersonTestCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AcppThirdPersonTestCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AcppThirdPersonTestCharacter::JumpCustom(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("jumpCount: %d"), jumpCount);
	if(jumpCount == 0 && !isDead)
	{
		jumpCount++;
		//GetWorldTimerManager().SetTimer(timer, this, &ACharacter::Jump, 0.5f, false);
		//bPressedJump = true;
	}
}

void AcppThirdPersonTestCharacter::StopJumpCustom(const FInputActionValue& Value)
{
	jumpCount = 0;
	UE_LOG(LogTemp, Error, TEXT("StopJump: %d"), jumpCount);
	bPressedJump = false;
}

void AcppThirdPersonTestCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                                  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("COLLISION"));
}

void AcppThirdPersonTestCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(!isSprinting && playerStamina < 1.0f && !isDead)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Not Sprinting"));
		playerStamina += .002f;
	}
	else
	{
		//UE_LOG(LogTemp, Error, TEXT("Sprinting"));
	}

}

void AcppThirdPersonTestCharacter::Sprint(const FInputActionValue& Value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Sprinting"));

	if(playerStamina > 0 && !isDead)
	{
		isSprinting = true;
		playerStamina -= .0015;
		
		if(playerStamina < 0)
		{
			playerStamina = 0;
		}
		
		GetCharacterMovement()->MaxWalkSpeed = 300.00;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = 100.00;

	}
	
	
}

void AcppThirdPersonTestCharacter::StopSprint()
{
	//UE_LOG(LogTemp, Warning, TEXT("Sprinting"));
	isSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = 100.00;
}

void AcppThirdPersonTestCharacter::Aim(const FInputActionValue& Value)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("CPP ------ Aiming"));

	if(canAim)
	{
		isAiming = true;

		CameraBoom->TargetArmLength = 275.0f;

		FollowCamera->bUsePawnControlRotation = true;
		bUseControllerRotationYaw = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}

	//UE_LOG(LogTemp, Warning, TEXT("Aim Pawn Rotation: %d"), FollowCamera->bUsePawnControlRotation);

}

void AcppThirdPersonTestCharacter::StopAim()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("CPP ------ Not Aiming"));


	isAiming = false;

	CameraBoom->TargetArmLength = 400.0f;

	FollowCamera->bUsePawnControlRotation = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	
	//UE_LOG(LogTemp, Warning, TEXT("Stop Aim Pawn Rotation: %d"), FollowCamera->bUsePawnControlRotation);

}

void AcppThirdPersonTestCharacter::Punch(const FInputActionValue& Value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Punching"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("CPP - Punch"));

	if(!isDead) 
	{
		isPunching = true;
		UE_LOG(LogTemp, Error, TEXT("Odoyle Rules"));
	}
}

void AcppThirdPersonTestCharacter::StopPunch(const FInputActionValue& Value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Not Punching"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("CPP - StopPunch"));

	isPunching = false;
}

void AcppThirdPersonTestCharacter::StartHealing()
{
	Heal(.05);
}

void AcppThirdPersonTestCharacter::Heal(float healAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Heal Amount:%f"), healAmount);

	playerHealth += healAmount;
	playerStamina = 1.0f;
	
	if(playerHealth > 1.0)
	{
		playerHealth = 1.0;
	}
}

void AcppThirdPersonTestCharacter::StartDamage()
{
	Damage(.2);
}


void AcppThirdPersonTestCharacter::Damage(float damageAmount)
{
	
	UE_LOG(LogTemp, Warning, TEXT("Damage Amount:%f"), damageAmount);

	if(hasArmor)
	{
		playerArmor -= damageAmount;
		UE_LOG(LogTemp, Warning, TEXT("Armor Amount: %f"), playerArmor);

		if(playerArmor < 0)
		{
			playerHealth += playerArmor;
			hasArmor = false;
			playerArmor = 0.0f;
		}
	}
	else if(!isDead)
	{
		playerHealth -= damageAmount;
		
		UE_LOG(LogTemp, Warning, TEXT("-------You're Alive-----------Player Health:%f"), playerHealth);

		if(playerHealth <= 0)
		{
			isDead = true;
			UE_LOG(LogTemp, Error, TEXT("You're dead"));
			playerStamina = 0;
			playerArmor = 0;
			canAim = false;
			StopAim();
			//Destroy();
			//playerHealth = 0;
		}
	}

	
}

void AcppThirdPersonTestCharacter::equipItem()
{

	if(isOverlappingItem)
	{
		UE_LOG(LogTemp, Warning, TEXT("Picked up Item"));
	}
}

void AcppThirdPersonTestCharacter::healArmor(float healAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Armor Amount:%f"), playerArmor);

	playerArmor += healAmount;

	if(playerArmor > 1.0f)
	{
		playerArmor = 1.0f;
	}

}

void AcppThirdPersonTestCharacter::block()
{
	isBlocking = true;

	if(isBlocking)
	{
		UE_LOG(LogTemp, Warning, TEXT("Blocking"));
	}
}

void AcppThirdPersonTestCharacter::endBlock()
{
	isBlocking = false;
}

void AcppThirdPersonTestCharacter::Shoot()
{

	if(GetWorld()->GetTimeSeconds() - lastFireTime >= GunCoolDown)
	{
		UStaticMeshComponent* BulletRef = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("bulletRef")));
		FRotator BulletRefRot = BulletRef->GetComponentRotation();

		FRotator CharacterRot = GetOwner()->GetActorRotation();

		const FVector StartLocation = BulletRef->GetComponentLocation();
		const FVector EndLocation = StartLocation + BulletRef->GetForwardVector().RotateAngleAxis(90.0f, FVector(0.0f, 0.0f, 1.0f)) + BulletRef->GetComponentRotation().RotateVector(FVector::ForwardVector) * 10000;
		
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, false, 0.1f, 0, 5.0f);

		lastFireTime = GetWorld()->GetTimeSeconds();
		
	}
	
}









