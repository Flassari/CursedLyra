#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CursedActor.generated.h"

USTRUCT()
struct CURSEDLYRARUNTIME_API FStatsCapture
{
	GENERATED_BODY()

public:
	FStatsCapture() : Time(0) { };

	FStatsCapture(float NewTime) : FStatsCapture() {
		Time = NewTime;
	};

	char SomeFatBytes[256 * 1024];

	float Time;
};

UCLASS()
class CURSEDLYRARUNTIME_API ACursedActor : public AActor
{
	GENERATED_BODY()

public:
	ACursedActor();

protected:
	virtual void BeginPlay() override;
	void SendStatsToAnalyticsServer(TArray<FStatsCapture>) {};

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	TArray<FStatsCapture> StatsCaptures;
};

