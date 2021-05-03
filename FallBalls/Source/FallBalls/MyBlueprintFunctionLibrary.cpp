// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

int UMyBlueprintFunctionLibrary::test_my_libraly_fun(int a, int b)
{
	int c = a + b;

	return c;
}

int UMyBlueprintFunctionLibrary::test_my_libraly_fun2(int a, int b)
{
	int c = b - a;
	return c;
}
