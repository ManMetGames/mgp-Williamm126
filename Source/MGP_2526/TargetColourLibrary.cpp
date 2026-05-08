// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetColourLibrary.h"

FLinearColor UTargetColourLibrary::GetColourForTargetNumber(int32 TargetNumber)
{
    const float MinNumber = 1.0f;
    const float MaxNumber = 250.0f;

    const float Alpha = FMath::Clamp(
        (TargetNumber - MinNumber) / (MaxNumber - MinNumber),
        0.0f,
        1.0f
    );

    return FLinearColor::LerpUsingHSV(
        FLinearColor::Green,
        FLinearColor::Red,
        Alpha
    );
}