// Fill out your copyright notice in the Description page of Project Settings.


#include "CCGProjAssetManager.h"
#include "AbilitySystemGlobals.h"

void UCCGProjAssetManager::StartInitialLoading()
{
    Super::StartInitialLoading();

    UAbilitySystemGlobals::Get().InitGlobalData();
}
