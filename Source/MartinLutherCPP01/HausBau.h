// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HausBau.generated.h"

UCLASS()
class MARTINLUTHERCPP01_API AHausBau : public AActor
{
    GENERATED_BODY()
        UPROPERTY(VisibleAnywhere)
        UStaticMeshComponent* VisualMesh;

public:
    // Sets default values for this actor's properties
    AHausBau();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
