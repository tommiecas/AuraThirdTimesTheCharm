// Copyright Gravity Well Games

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * Aura Gameplay Tags
 *
 * Singleton containing native Gameplay Tags
 */

struct FAuraGameplayTags
{
public:
    static const FAuraGameplayTags& Get() {return GameplayTags;}
    static void InitializeNativeGameplayTags(); 

	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Resilience;
	FGameplayTag Attributes_Primary_Vigor;
	
    FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CriticalHitChance;
	FGameplayTag Attributes_Secondary_CriticalHitDamage;
	FGameplayTag Attributes_Secondary_CriticalHitResistance;
	FGameplayTag Attributes_Secondary_HealthRegeneration;
	FGameplayTag Attributes_Secondary_ManaRegeneration;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;

	FGameplayTag InputTag_AbilityLeft;
	FGameplayTag InputTag_AbilityRight;
	FGameplayTag InputTag_Ability1;
	FGameplayTag InputTag_Ability2;
	FGameplayTag InputTag_Ability3;
	FGameplayTag InputTag_Ability4;

private:
    static FAuraGameplayTags GameplayTags;
 
};