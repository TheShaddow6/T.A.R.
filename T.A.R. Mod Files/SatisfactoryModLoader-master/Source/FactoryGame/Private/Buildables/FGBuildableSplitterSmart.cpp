// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableSplitterSmart.h"

AFGBuildableSplitterSmart::AFGBuildableSplitterSmart() : Super() {
	this->mMaxNumSortRules = 64;
	this->mLastOutputIndex = 0;
	this->NetDormancy = ENetDormancy::DORM_Awake;
}
void AFGBuildableSplitterSmart::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableSplitterSmart, mSortRules);
}
void AFGBuildableSplitterSmart::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
FSplitterSortRule AFGBuildableSplitterSmart::GetSortRuleAt(int32 index) const{ return FSplitterSortRule(); }
void AFGBuildableSplitterSmart::AddSortRule(FSplitterSortRule rule){ }
void AFGBuildableSplitterSmart::RemoveSortRuleAt(int32 index){ }
void AFGBuildableSplitterSmart::SetSortRuleAt(int32 index, FSplitterSortRule rule){ }
bool AFGBuildableSplitterSmart::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
void AFGBuildableSplitterSmart::FillDistributionTable(float deltaTime){ }
void AFGBuildableSplitterSmart::OnRep_SortRules(){ }
TArray<UFGFactoryConnectionComponent*> AFGBuildableSplitterSmart::GetAllOutputConnectionsForItem(const FInventoryItem& item, float deltaTime) const{ return TArray<UFGFactoryConnectionComponent*>(); }