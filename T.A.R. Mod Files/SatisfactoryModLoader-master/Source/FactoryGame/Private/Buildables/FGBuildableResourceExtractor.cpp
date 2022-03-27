// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableResourceExtractor.h"

void AFGBuildableResourceExtractor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableResourceExtractor, mExtractStartupTimer);
	DOREPLIFETIME(AFGBuildableResourceExtractor, mCurrentExtractProgress);
	DOREPLIFETIME(AFGBuildableResourceExtractor, mReplicatedFlowRate);
}
void AFGBuildableResourceExtractor::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildableResourceExtractor::AFGBuildableResourceExtractor() : Super() {
	this->mExtractStartupTime = -10.0;
	this->mExtractStartupTimer = 10.0;
	this->mExtractCycleTime = 1.0;
	this->mItemsPerCycle = 1;
	this->mCurrentExtractProgress = 0.0;
	this->mOutputInventory = nullptr;
	this->mReplicatedFlowRate = 0.0;
}
void AFGBuildableResourceExtractor::OnReplicationDetailActorRemoved(){ }
void AFGBuildableResourceExtractor::BeginPlay(){ }
bool AFGBuildableResourceExtractor::CanProduce_Implementation() const{ return bool(); }
float AFGBuildableResourceExtractor::GetProductionCycleTime() const{ return float(); }
float AFGBuildableResourceExtractor::GetProductionProgress() const{ return float(); }
float AFGBuildableResourceExtractor::CalcProductionCycleTimeForPotential(float potential) const{ return float(); }
float AFGBuildableResourceExtractor::GetNumExtractedItemsPerCycleConverted() const{ return float(); }
float AFGBuildableResourceExtractor::GetExtractionPerMinute() const{ return float(); }
bool AFGBuildableResourceExtractor::IsStartupComplete(){ return bool(); }
float AFGBuildableResourceExtractor::GetMaxFlowRate() const{ return float(); }
void AFGBuildableResourceExtractor::Factory_StartProducing(){ }
void AFGBuildableResourceExtractor::Factory_TickProducing(float dt){ }
void AFGBuildableResourceExtractor::Factory_PushPipeOutput_Implementation(float dt){ }
void AFGBuildableResourceExtractor::OnRep_ReplicationDetailActor(){ }
void AFGBuildableResourceExtractor::OnRep_CurrentPotential(){ }
void AFGBuildableResourceExtractor::OnExtractableResourceSet(){ }
void AFGBuildableResourceExtractor::OnRep_ExtractableResource(){ }
void AFGBuildableResourceExtractor::CalculateProductionCycleTime(){ }