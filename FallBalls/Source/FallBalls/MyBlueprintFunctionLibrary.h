// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class FALLBALLS_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int test_my_libraly_fun(int a, int b);
	UFUNCTION(BlueprintPure, Category = "MyCategory")
		int test_my_libraly_fun2(int a, int b);
};
