// Sebastian Lara

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
	GENERATED_BODY()

public:

	// Set up a UI widget which shows the cursor. Perfect for main menus.
	UFUNCTION(BlueprintCallable)
	void MenuSetup();
};
