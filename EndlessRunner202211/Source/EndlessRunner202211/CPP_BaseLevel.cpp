#include "CPP_BaseLevel.h"

ACPP_BaseLevel::ACPP_BaseLevel()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACPP_BaseLevel::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACPP_BaseLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UBoxComponent* ACPP_BaseLevel::GetTrigger()
{
	return nullptr;
}

UBoxComponent* ACPP_BaseLevel::GetSpawnLocation()
{
	return nullptr;
}

