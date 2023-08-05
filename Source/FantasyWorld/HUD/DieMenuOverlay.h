// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DieMenuOverlay.generated.h"

class USoundBase;
class UTextBlock;

/**
 * 
 */
UCLASS()
class FANTASYWORLD_API UDieMenuOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public :

	void NativeConstruct();
	UFUNCTION()
	void OnReturnToMenuButtonClicked();

	UFUNCTION()
	void OnRestartLevelButtonClicked();

	UFUNCTION()
	void UpdateTextBlock(int32 SlayedEnemy, int32 LeftEnemy);


private:

	UPROPERTY(meta = (BindWidget))
	class UButton* ReturnToMenu;

	UPROPERTY(meta = (BindWidget))
	UButton* RestartLevel;

	UPROPERTY()
	USoundBase* ButtonClickedSound;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text;

};
