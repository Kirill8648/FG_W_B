// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorCPlusPlus.h"

// Sets default values
AMyActorCPlusPlus::AMyActorCPlusPlus()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

FVector AMyActorCPlusPlus::XYI(FVector vector)
{
	FVector n(vector.X, vector.Y, 12);
	return n;
}

FVector AMyActorCPlusPlus::Curve_Bezier(FVector point1, FVector point2, FVector point3, FVector point4, float time)
{
	float one_minus_time = 1 - time;

	FVector final_point(point1 * one_minus_time * one_minus_time * one_minus_time + point2 * 3 * one_minus_time * one_minus_time * time
		+ point3 * 3 * one_minus_time * time * time + point4 * time * time * time);

	return final_point;

}

FVector AMyActorCPlusPlus::perpendicular_vector(FVector a, FVector b, float bc_)
{
	FVector temp = a - b;
	const FRotator rot(0, 0, -90);
	FVector temp_left = rot.RotateVector(temp);

	//FVector temp_left;
	//temp_left.X = temp.Y;
	//temp_left.Y = -1 * temp.X;
	//temp_left.Z = temp.Z;
	float lenght = sqrt(temp_left.SizeSquared());

	temp_left.Set(temp_left.X / lenght, temp_left.Y / lenght, temp_left.Z / lenght);

	FVector temp_final = temp_left * bc_;

	return temp_final;
}

FVector AMyActorCPlusPlus::Ring_rotate_vector(FVector a, FVector b, float bc_, float angle_Y, float angle_Z, float angle_xz, float distance)
{
	FVector temp = b - a;
	const FRotator rot(angle_Y, 0, 0);
	FVector temp_left = rot.RotateVector(temp);

	//temp_left.RotateAngleAxis(angle_Z, FVector(0, 0, 1));

	float lenght = sqrt(temp_left.SizeSquared());

	temp_left.Set(temp_left.X / lenght, temp_left.Y / lenght, temp_left.Z / lenght);

	FVector temp_final = temp_left * bc_;

	temp_final = temp_final.RotateAngleAxis(angle_Z, FVector(0, 0, 1));
	temp_final = temp_final.RotateAngleAxis(angle_xz, FVector(1, 0, 0));

	//const FRotator rot2(angle_xz, 0, 0);
	//temp_final = rot2.RotateVector(temp_final);

	FVector C = FMath::Lerp(a, b, distance);

	temp_final += C;

	return temp_final;
}




// Called when the game starts or when spawned
void AMyActorCPlusPlus::BeginPlay()
{
	Super::BeginPlay();
	FVector(12, 34, 767);

}

// Called every frame
void AMyActorCPlusPlus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

