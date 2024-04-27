#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZombieCharacter.generated.h"

UCLASS()
class FPS_API AZombieCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AZombieCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	class UAIPerceptionComponent* AIPerceptionComponent;
	class UAISenseConfig_Sight* SightConfig;

private:
	UFUNCTION()
	void isDetectedPlayer(AActor* SourceActor, FAIStimulus Stimulus);
};
