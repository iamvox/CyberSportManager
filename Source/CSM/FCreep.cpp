// Fill out your copyright notice in the Description page of Project Settings.

#include "CSM.h"
#include "FCreep.h"


// Sets default values
AFCreep::AFCreep()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFCreep::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFCreep::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AFCreep::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

