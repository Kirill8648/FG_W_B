// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorCPlusPlus.generated.h"
//#include "DrawDebugHelpers.h"

UCLASS()
class FALLBALLS_API AMyActorCPlusPlus : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActorCPlusPlus();
	UFUNCTION(BlueprintPure)
		FVector XYI(FVector vector);
	UFUNCTION(BlueprintPure)
		FVector Curve_Bezier(FVector point1, FVector point2, FVector point3, FVector point4, float time);
	UFUNCTION(BlueprintPure)
		FVector perpendicular_vector(FVector a, FVector b, float bc_);
	UFUNCTION(BlueprintPure)
		FVector Ring_rotate_vector(FVector a, FVector b, float bc_, float angle_Y, float angle_Z, float angle_xz, float distance);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
