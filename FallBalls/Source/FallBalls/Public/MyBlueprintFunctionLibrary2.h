
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary2.generated.h"

UCLASS()
class FALLBALLS_API UMyBlueprintFunctionLibrary2 : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintPure, Category = "MyCategory")
		static float test_function(int a, int b);
};
