// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "BasicDamageCalculate.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_CENTRIC_GAME_API UBasicDamageCalculate : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
    UBasicDamageCalculate();
    virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

	
};
