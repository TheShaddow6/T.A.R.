// This file has been automatically generated by the Unreal Header Implementation tool

#include "Server/FGServerBeaconHostObject.h"
#include "Server/FGServerBeaconClient.h"

AFGServerBeaconHostObject::AFGServerBeaconHostObject() : Super() {
	this->BeaconTypeName = TEXT("FGServerBeaconClient");
	this->ClientBeaconActorClass = AFGServerBeaconClient::StaticClass();
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 1.0;
}
void AFGServerBeaconHostObject::BeginPlay(){ }
void AFGServerBeaconHostObject::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGServerBeaconHostObject::Tick(float DeltaSeconds){ }
void AFGServerBeaconHostObject::OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection){ }
void AFGServerBeaconHostObject::NotifyClientDisconnected(AOnlineBeaconClient* LeavingClientActor){ }
void AFGServerBeaconHostObject::PushBasicSettings(){ }
void AFGServerBeaconHostObject::SavesCollectionChanged(){ }
