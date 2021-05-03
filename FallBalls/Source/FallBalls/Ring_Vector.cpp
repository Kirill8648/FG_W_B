// Fill out your copyright notice in the Description page of Project Settings.


#include "Ring_Vector.h"

// Sets default values
ARing_Vector::ARing_Vector()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

FVector ARing_Vector::Rotate_vector(FVector a, FVector b, float bc_, float angle_X, float distance, FVector axis, FVector axisZ)
{
	FVector temp = b - a;
	//const FRotator rot(angle_X, angle_Y, angle_Z);
	//FVector temp_left = rot.RotateVector(temp);

	FVector temp_left = temp;

	float lenght = sqrt(temp_left.SizeSquared());
	temp_left.Set(temp_left.X / lenght, temp_left.Y / lenght, temp_left.Z / lenght);
	FVector temp_final = temp_left * bc_;


	temp_final = temp_final.RotateAngleAxis(1, axisZ);
	temp_final = temp_final.RotateAngleAxis(angle_X, axis);

	//temp_final = temp_final.RotateAngleAxis(angle_Z, FVector(0, 0.5, 1));

	FVector C = FMath::Lerp(a, b, distance);

	temp_final += C;
	//temp_final.Z -= (temp_final.Z - C.Z);


	return temp_final;
}

FVector ARing_Vector::Curve_Bezier(FVector point1, FVector point2, FVector point3, FVector point4, float time)
{
	float one_minus_time = 1 - time;

	FVector final_point(point1 * one_minus_time * one_minus_time * one_minus_time + point2 * 3 * one_minus_time * one_minus_time * time
		+ point3 * 3 * one_minus_time * time * time + point4 * time * time * time);

	return final_point;
}

// Called when the game starts or when spawned
void ARing_Vector::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ARing_Vector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

