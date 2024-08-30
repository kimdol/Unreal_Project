// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CCGProjPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_CENTRIC_GAME_API ACCGProjPlayerController : public APlayerController
{
	GENERATED_BODY()

    virtual void OnPossess(APawn* InPawn) override;
	
};
