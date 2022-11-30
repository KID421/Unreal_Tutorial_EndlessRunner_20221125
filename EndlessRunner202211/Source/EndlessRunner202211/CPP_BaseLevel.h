#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_BaseLevel.generated.h"

class UBoxComponent;

UCLASS()
class ENDLESSRUNNER202211_API ACPP_BaseLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	ACPP_BaseLevel();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "觸發")
	UBoxComponent* trigger;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "觸發")
	UBoxComponent* spawnLocation;

public:

	UBoxComponent* GetTrigger();
	UBoxComponent* GetSpawnLocation();
};
