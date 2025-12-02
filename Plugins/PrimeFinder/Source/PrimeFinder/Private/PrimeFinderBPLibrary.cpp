// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrimeFinderBPLibrary.h"
#include "PrimeFinder.h"

UPrimeFinderBPLibrary::UPrimeFinderBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UPrimeFinderBPLibrary::IsPrime(int value)
{
	if (value <= 1)
		return false;

	/*
	 * ad condition : Unreal's own example uses i < sqrt(value), but I fail to see any reason to use more expensive sqrt operation instead of cheaper multiplication.
	 * May have something to do with big numbers, though
	 */ 
	for (int i = 2; i * i <= value; ++i)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

TArray<int> UPrimeFinderBPLibrary::GetAllPrimes(TArray<int>& input)
{
	TArray<int> ret;
	ret.Reserve(input.Num());

	for (int value : input)
	{
		if (IsPrime(value))
			ret.Add(value);
	}

	return ret;

}

