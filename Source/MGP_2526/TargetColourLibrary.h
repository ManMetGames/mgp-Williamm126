// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TargetColourLibrary.generated.h"

UCLASS()
class MGP_2526_API UTargetColourLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "Target")
    static FLinearColor GetColourForTargetNumber(int32 TargetNumber);
};