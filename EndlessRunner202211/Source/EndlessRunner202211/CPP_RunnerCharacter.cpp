#include "CPP_RunnerCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ACPP_RunnerCharacter::ACPP_RunnerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
	GetCapsuleComponent()->SetCollisionResponseToChannel
	(ECC_GameTraceChannel1, ECR_Overlap);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	sideViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("側面攝影機"));
	sideViewCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 720.f, 0.f);
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.8f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	tempPos = GetActorLocation();
	zPosition = tempPos.Z + 300.f;
}

void ACPP_RunnerCharacter::BeginPlay()
{
	Super::BeginPlay();

	canMove = true;
}

void ACPP_RunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	tempPos = GetActorLocation();
	tempPos.X -= 850.;
	tempPos.Z = zPosition;
	sideViewCamera->SetWorldLocation(tempPos);
}

void ACPP_RunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Move Right / Left", this, &ACPP_RunnerCharacter::MoveRight);
}

void ACPP_RunnerCharacter::MoveRight(float value)
{
	if (canMove) AddMovementInput(FVector(0.f, 1.f, 0.f), value);
}

void ACPP_RunnerCharacter::RestartLevel()
{
}

void ACPP_RunnerCharacter::OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

