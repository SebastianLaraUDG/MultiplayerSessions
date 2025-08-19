// Sebastian Lara


#include "MultiplayerSessionsSubsystem.h"
#include "OnlineSubsystem.h"

UMultiplayerSessionsSubsystem::UMultiplayerSessionsSubsystem()
{
	// Get session interface from online subsystem
	if (const IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get())
	{
		SessionInterface = Subsystem->GetSessionInterface();
	}
}

void UMultiplayerSessionsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMultiplayerSessionsSubsystem::Deinitialize()
{
	Super::Deinitialize();
}
