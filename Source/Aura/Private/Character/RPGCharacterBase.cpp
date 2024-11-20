// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGCharacterBase.h"

// Sets default values
ARPGCharacterBase::ARPGCharacterBase()
{
	PrimaryActorTick.bCanEverTick =  false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* ARPGCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void ARPGCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

