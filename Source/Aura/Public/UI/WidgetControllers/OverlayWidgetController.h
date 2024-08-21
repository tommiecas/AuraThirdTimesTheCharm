// Copyright Gravity Well Games

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetControllers/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSignature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChangedSignature, float, NewMaxHealth);
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()

public:
	virtual void BroadcastInitialValues() override;

	UPROPERTY(BlueprintAssignable, Category = "Gameplay Ability System | Attributes")
	FOnHealthChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "Gameplay Ability System | Attributes")
	FOnMaxHealthChangedSignature OnMaxHealthChanged;
	
};
