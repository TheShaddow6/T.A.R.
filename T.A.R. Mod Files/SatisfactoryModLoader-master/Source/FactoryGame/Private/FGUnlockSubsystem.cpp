// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGUnlockSubsystem.h"

AFGUnlockSubsystem::AFGUnlockSubsystem() : Super() {
	this->mMapUnlockedMessage = nullptr;
	this->mInventorySlotUnlockedMessage = nullptr;
	this->mBuildingEfficiencyUnlockedMessage = nullptr;
	this->mBuildingOverclockUnlockedMessage = nullptr;
	this->mArmEquipmentSlotUnlockedMessage = nullptr;
	this->mIsMapUnlocked = false;
	this->mIsBuildingEfficiencyUnlocked = false;
	this->mIsBuildingOverclockUnlocked = false;
	this->mNumTotalInventorySlots = 18;
	this->mNumTotalArmEquipmentSlots = 1;
}
void AFGUnlockSubsystem::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGUnlockSubsystem, mScannableResourcesPairs);
	DOREPLIFETIME(AFGUnlockSubsystem, mIsMapUnlocked);
	DOREPLIFETIME(AFGUnlockSubsystem, mIsBuildingEfficiencyUnlocked);
	DOREPLIFETIME(AFGUnlockSubsystem, mIsBuildingOverclockUnlocked);
	DOREPLIFETIME(AFGUnlockSubsystem, mNumTotalInventorySlots);
	DOREPLIFETIME(AFGUnlockSubsystem, mNumTotalArmEquipmentSlots);
	DOREPLIFETIME(AFGUnlockSubsystem, mUnlockedEmotes);
}
void AFGUnlockSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
AFGUnlockSubsystem* AFGUnlockSubsystem::Get(UWorld* world){ return nullptr; }
AFGUnlockSubsystem* AFGUnlockSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGUnlockSubsystem::Init(){ }
void AFGUnlockSubsystem::UnlockRecipe(TSubclassOf<  UFGRecipe > recipe){ }
void AFGUnlockSubsystem::UnlockScannableResource(FScannableResourcePair newResource){ }
void AFGUnlockSubsystem::UnlockMap(){ }
void AFGUnlockSubsystem::UnlockBuildEfficiency(){ }
void AFGUnlockSubsystem::UnlockBuildOverclock(){ }
void AFGUnlockSubsystem::UnlockInventorySlots(int32 numSlotsToUnlock){ }
void AFGUnlockSubsystem::UnlockArmEquipmentSlots(int32 numSlotsToUnlock){ }
void AFGUnlockSubsystem::UnlockEmote(TSubclassOf<  UFGEmote > newEmote){ }
TArray<TSubclassOf<class UFGResourceDescriptor>> AFGUnlockSubsystem::GetScannableResources() const{ return TArray<TSubclassOf<class UFGResourceDescriptor>>(); }
bool AFGUnlockSubsystem::IsNodeScannable(FScannableResourcePair scannableResourcePair){ return bool(); }
void AFGUnlockSubsystem::OnSchematicPurchased(TSubclassOf<  UFGSchematic > newSchematic){ }
void AFGUnlockSubsystem::SetTotalNumInventorySlots(int32 totalNumSlots){ }
void AFGUnlockSubsystem::SetTotalNumArmEquipmentSlots(int32 totalNumSlots){ }
void AFGUnlockSubsystem::GetUnlockedEmotes(TArray< TSubclassOf<class UFGEmote> >& out_unlockedEmotes) const{ }
void AFGUnlockSubsystem::SetNumOfAdditionalInventorySlots(int32 newNumSlots){ }
void AFGUnlockSubsystem::SetNumAdditionalArmEquipmentSlots(int32 newNumSlots){ }
void AFGUnlockSubsystem::SendMessageToAllPlayers(TSubclassOf<  UFGMessageBase > inMessage){ }