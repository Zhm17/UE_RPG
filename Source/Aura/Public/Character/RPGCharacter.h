// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGCharacterBase.h"
#include "RPGCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API ARPGCharacter : public ARPGCharacterBase
{
	GENERATED_BODY()

public:
	ARPGCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	void InitAbilityActorInfo();
};
