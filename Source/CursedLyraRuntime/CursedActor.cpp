#include "CursedActor.h"

ACursedActor::ACursedActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACursedActor::BeginPlay()
{
	Super::BeginPlay();
}

void ACursedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Add a new stats capture
	StatsCaptures.Add(*new FStatsCapture(GetWorld()->GetTimeSeconds()));

	// Send stat captures to analytics server in bundles
	if (StatsCaptures.Num() > 60)
	{
		SendStatsToAnalyticsServer(StatsCaptures);
		StatsCaptures.Empty();
	}
}
