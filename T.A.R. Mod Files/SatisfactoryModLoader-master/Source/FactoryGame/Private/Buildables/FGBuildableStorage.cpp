// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableStorage.h"

void AFGBuildableStorage::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}
AFGBuildableStorage::AFGBuildableStorage() : Super() {
	this->mStackingHeight = 0.0;
	this->mInventorySizeX = 4;
	this->mInventorySizeY = 4;
	this->mStorageInventory = nullptr;
	this->mPowerInfoClass = nullptr;
	this->mAddToSignificanceManager = false;
	this->mForceNetUpdateOnRegisterPlayer = true;
	this->mToggleDormancyOnInteraction = true;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->NetDormancy = ENetDormancy::DORM_Initial;
}
void AFGBuildableStorage::BeginPlay(){ }
void AFGBuildableStorage::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableStorage::OnReplicationDetailActorRemoved(){ }
void AFGBuildableStorage::Factory_CollectInput_Implementation(){ }
void AFGBuildableStorage::OnRep_ReplicationDetailActor(){ }