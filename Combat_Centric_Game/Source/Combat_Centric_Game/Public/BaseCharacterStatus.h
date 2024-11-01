// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseCharacterStatus.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDHPCanged, float, hpRate);


/**
 * 
 */
UCLASS()
class COMBAT_CENTRIC_GAME_API UBaseCharacterStatus : public UAttributeSet
{
	GENERATED_BODY()

public:
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& newValue) override;
    virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

    void AdjustChangeMaxStatus(FGameplayAttributeData& affectAttribute, const FGameplayAttributeData& maxAttribute, float newValue, const FGameplayAttribute& affectAttributeProperty);

    UPROPERTY(BlueprintReadWrite)
    FGameplayAttributeData _health;
    ATTRIBUTE_ACCESSORS(UBaseCharacterStatus, _health)

    UPROPERTY(BlueprintReadWrite)
    FGameplayAttributeData _maxHealth;
    ATTRIBUTE_ACCESSORS(UBaseCharacterStatus, _maxHealth)

    UPROPERTY(BlueprintReadWrite)
    FGameplayAttributeData _stamina;
    ATTRIBUTE_ACCESSORS(UBaseCharacterStatus, _stamina)

    UPROPERTY(BlueprintReadWrite)
    FGameplayAttributeData _maxStamina;
    ATTRIBUTE_ACCESSORS(UBaseCharacterStatus, _maxStamina)

    UPROPERTY(BlueprintReadWrite)
    FGameplayAttributeData _attackPoint;
    ATTRIBUTE_ACCESSORS(UBaseCharacterStatus, _attackPoint)

    UPROPERTY(BlueprintReadWrite)
    FGameplayAttributeData _defencePoint;
    ATTRIBUTE_ACCESSORS(UBaseCharacterStatus, _defencePoint)

    UPROPERTY(BlueprintAssignable, Category = "Event")
    FDHPCanged HPChanged;
	
};
