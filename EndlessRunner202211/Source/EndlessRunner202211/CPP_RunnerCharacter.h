#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_RunnerCharacter.generated.h"

UCLASS()
class ENDLESSRUNNER202211_API ACPP_RunnerCharacter : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere)
		class UCameraComponent* sideViewCamera;

public:
	ACPP_RunnerCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	void MoveRight(float value);

public:

	class UCameraComponent* GetSideViewCameraComponent() const
	{
		return sideViewCamera;
	}

	void RestartLevel();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* overlappedComp,
			AActor* otherActor, UPrimitiveComponent* otherComp,
			int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

private:

	float zPosition;
	FVector tempPos = FVector();
	bool canMove;
};
