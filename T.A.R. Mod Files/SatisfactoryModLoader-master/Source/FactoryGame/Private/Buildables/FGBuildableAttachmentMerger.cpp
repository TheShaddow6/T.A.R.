// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableAttachmentMerger.h"

AFGBuildableAttachmentMerger::AFGBuildableAttachmentMerger() : Super() {
	this->mCurrentInputIndex = -1;
	this->mCurrentInventoryIndex = 0;
	this->mPowerInfoClass = nullptr;
	this->mMinimumProducingTime = -1.0;
	this->mMinimumStoppedTime = -1.0;
}
void AFGBuildableAttachmentMerger::BeginPlay(){ }
void AFGBuildableAttachmentMerger::Factory_Tick(float deltaTime){ }
void AFGBuildableAttachmentMerger::Factory_CollectInput_Implementation(){ }
bool AFGBuildableAttachmentMerger::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
