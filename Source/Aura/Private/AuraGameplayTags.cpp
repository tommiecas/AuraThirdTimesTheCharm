// Copyright Gravity Well Games


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/*
	 * Primary Attributes
	 */
	 
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Strength"),
		FString("Increases physical Damage")
		);

	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attributes.Primary.Intelligence"),
	FString("Increases magical Damage")
	);

	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attributes.Primary.Resilience"),
	FString("Affects your Defensive Attributes: Armor and Armor Penetration")
	);

	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attributes.Primary.Vigor"),
	FString("Increases Health")
	);

	/*
	 * Secondary Attributes
	*/

	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Armor"),
		FString("Based off Resilience, reduces Damage taken and improves Block Chance")
		);

	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ArmorPenetration"),
		FString("Based off Resilience, ignores percentage of enemy's Armor and increases Critical Hit Chance")
		);

	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.BlockChance"),
		FString("Based off Armor, chance to cut incoming damage by 50%")
		);

	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalHitChance"),
		FString("Based off Armor Penetration, chance to double your damage plus score a Critical Hit Bonus")
		);

	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalHitDamage"),
		FString("Based off Armor Penetration, chance to double your damage plus score a Critical Hit Bonus")
		);

	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
			FName("Attributes.Secondary.CriticalHitResistance"),
			FString("Based off Armor, reduces Critical Hit Chance of enemies attacking you")
			);

	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
			FName("Attributes.Secondary.HealthRegeneration"),
			FString("Based off Vigor, the amount of Health regenerated every one second")
			);

	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
			FName("Attributes.Secondary.ManaRegeneration"),
			FString("Based off Intelligence, the amount of Mana regenerated every one second")
			);

	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
			FName("Attributes.Secondary.MaxHealth"),
			FString("Based off Vigor, the maximum amount of Health obtainable at any given time")
			);
	
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MaxMana"),
		FString("Based off Intelligence, the maximum amount of Mana obtainable at any given time")
		);

	/*
	 * Input Tags (Mouse and Keyboard)
	 */
	
	GameplayTags.InputTag_AbilityLeft = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.AbilityLeft"),
		FString("Input Tag for the Left Mouse Button (when using a mouse and keyboard), or the Left Shoulder Trigger (when using a gamepad controller)")
		);

	GameplayTags.InputTag_AbilityRight = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.AbilityRight"),
		FString("Input Tag for the Right Mouse Button (when using a mouse and keyboard), or the Right Shoulder Trigger (when using a gamepad controller)")
		);

	GameplayTags.InputTag_Ability1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Ability1"),
		FString("Input Tag for the '1' Key (when using a mouse and keyboard), or the 'Up' button on the left-hand-side D-Pad (when using a gamepad controller)")
		);

	GameplayTags.InputTag_Ability2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Ability2"),
		FString("Input Tag for the '2' Key (when using a mouse and keyboard), or the 'Down' button on the left-hand-side D-Pad (when using a gamepad controller)")
		);

	GameplayTags.InputTag_Ability3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Ability3"),
		FString("Input Tag for the '3' Key (when using a mouse and keyboard), or the 'Left' button on the left-hand-side D-Pad (when using a gamepad controller)")
		);

	GameplayTags.InputTag_Ability4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Ability4"),
		FString("Input Tag for the '4' Key (when using a mouse and keyboard), or the 'Right' button on the left-hand-side D-Pad (when using a gamepad controller)")
		);
}
