// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Components/SphereComponent.h"
#include "cppThirdPersonTestCharacter.generated.h"


UCLASS(config=Game)
class AcppThirdPersonTestCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Sprint Input Action*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* SprintAction;

	/** Aim Input Action*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* AimAction;

	/** Punch Input Action*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* PunchAction;

	/** Heal Input Action*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* HealAction;

	/** Damage Input Action*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* DamageAction;

	/** Damage Input Action*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* EquipAction;

	/** Damage Input Action*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* BlockAction;

public:
	AcppThirdPersonTestCharacter();

	/** called when something enters the sphere component */
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void Tick(float DeltaSeconds) override;
	
	FTimerHandle timer;

	UPROPERTY(BlueprintReadWrite)
	bool isSprinting = false;

	int jumpCount = 0;

	float lastFireTime = 0.0f;

	UPROPERTY(BlueprintReadWrite)
	bool isPunching = false;

	UPROPERTY(BlueprintReadWrite)
	bool isAiming = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float playerHealth = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float playerStamina = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isOverlappingItem = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasArmor = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float playerArmor = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool canAim = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isJumping = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isBlocking = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GunCoolDown = 0.5f;


protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void JumpCustom(const FInputActionValue& Value);

	void StopJumpCustom(const FInputActionValue& Value);

	void Sprint(const FInputActionValue& Value);

	void StopSprint();
	
	void Aim(const FInputActionValue& Value);

	void StopAim();

	void Punch(const FInputActionValue& Value);
	
	void StopPunch(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable)
	void StartHealing();

	UFUNCTION(BlueprintCallable)
	void Heal(float healAmount);

	void StartDamage();

	UFUNCTION(BlueprintCallable)
	void Damage(float DamageAmount);

	void equipItem();
	
	UFUNCTION(BlueprintCallable)
	void healArmor(float healAmount);

	UFUNCTION(BlueprintCallable)
	void block();

	UFUNCTION(BlueprintCallable)
	void endBlock();

	UFUNCTION(BlueprintCallable)
	void Shoot();
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};


