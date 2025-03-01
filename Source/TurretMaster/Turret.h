// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class TURRETMASTER_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* RotationPoint;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ArmMesh;
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* CannonMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* CentreMuzzle;	
};
