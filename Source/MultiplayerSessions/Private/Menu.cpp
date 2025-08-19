// Sebastian Lara


#include "Menu.h"

void UMenu::MenuSetup()
{
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	SetIsFocusable(true);

	if (UWorld* const World = GetWorld())
	{
		if (APlayerController* const PlayerController = World->GetFirstPlayerController())
		{
			FInputModeUIOnly InputModeData;
			// Focus on this widget
			InputModeData.SetWidgetToFocus(TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}
}
