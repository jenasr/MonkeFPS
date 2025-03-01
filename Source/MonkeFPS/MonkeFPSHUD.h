// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MonkeFPSHUD.generated.h"

UCLASS()
class AMonkeFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMonkeFPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

