// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/RPGCharacter.h"
#include "Interaction/EnemyInterface.h"
#include "RPGEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API ARPGEnemy : public ARPGCharacter, public IEnemyInterface
{
	GENERATED_BODY()

	
public:
	ARPGEnemy();
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

};
