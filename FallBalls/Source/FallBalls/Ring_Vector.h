// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ring_Vector.generated.h"

UCLASS()
class FALLBALLS_API ARing_Vector : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARing_Vector();
	UFUNCTION(BlueprintPure)
		FVector Rotate_vector(FVector a, FVector b, float bc_, float angle_X, float distance, FVector axis, FVector axisZ);
	UFUNCTION(BlueprintPure)
		FVector Curve_Bezier(FVector point1, FVector point2, FVector point3, FVector point4, float time);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
