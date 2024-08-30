// Fill out your copyright notice in the Description page of Project Settings.


#include "CCGProjPlayerController.h"
#include "BaseCharacter.h"
#include "AbilitySystemComponent.h"

void ACCGProjPlayerController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    auto base = Cast <ABaseCharacter>(InPawn);
    if (nullptr != base)
    {
        base->GetAbilitySystemComponent()->InitAbilityActorInfo(InPawn, this);
    }
}
