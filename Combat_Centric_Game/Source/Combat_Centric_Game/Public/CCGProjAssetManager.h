// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "CCGProjAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_CENTRIC_GAME_API UCCGProjAssetManager : public UAssetManager
{
	GENERATED_BODY()


    virtual void StartInitialLoading() override;
};
