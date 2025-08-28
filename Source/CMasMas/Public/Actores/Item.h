// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class CMASMAS_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (ClamMin = "0.0", ClampMax = "2500", ToolTip = "Velocidad a la que se mueve el jugador caminando"))
	int MovSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (ClamMin = "0.0", ClampMax = "2500", UIMin = "2500", UIMax = "5000", ToolTip = "Velocidad del dash"))
	int DashSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (ClamMin = "0.0", ClampMax = "2500", ToolTip = "Distancia del salto del player"))
	int JumpHeigh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (ClamMin = "0.0", ClampMax = "30", ToolTip = "Danio de ataque"))
	int AttackDmg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (ClamMin = "0.0", ClampMax = "50", UIMin = "0", UIMax = "50", ToolTip = "Defensa contra ataques normales"))
	int Defense;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat", meta = (ClamMin = "0.0", ClampMax = "200", ToolTip = "Vida maxima del jugador"))
	int HP;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
