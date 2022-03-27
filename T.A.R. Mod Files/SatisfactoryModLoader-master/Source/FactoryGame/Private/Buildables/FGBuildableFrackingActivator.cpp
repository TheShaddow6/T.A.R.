// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableFrackingActivator.h"

AFGBuildableFrackingActivator::AFGBuildableFrackingActivator() : Super() {
	this->mActivationStartupTime = 0.0;
	this->mActivationStartupTimer = 0.0;
	this->mSatelliteActivationComplete = false;
	this->mSatelliteNodeCount = 0;
	this->mConnectedExtractorCount = 0;
	this->mDefaultPotentialExtractionPerMinute = 0.0;
	this->mDefaultExtractor = nullptr;
}
void AFGBuildableFrackingActivator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableFrackingActivator, mSatelliteNodeCount);
	DOREPLIFETIME(AFGBuildableFrackingActivator, mConnectedExtractorCount);
	DOREPLIFETIME(AFGBuildableFrackingActivator, mDefaultPotentialExtractionPerMinute);
}
float AFGBuildableFrackingActivator::GetPotentialExtractionPerMinute() const{ return float(); }
void AFGBuildableFrackingActivator::OnExtractorSet(){ }
void AFGBuildableFrackingActivator::BeginPlay(){ }
void AFGBuildableFrackingActivator::Factory_StartProducing(){ }
void AFGBuildableFrackingActivator::Factory_TickProducing(float dt){ }
void AFGBuildableFrackingActivator::Factory_StopProducing(){ }
void AFGBuildableFrackingActivator::SetPendingPotential(float newPendingPotential){ }
void AFGBuildableFrackingActivator::OnRep_CurrentPotential(){ }
void AFGBuildableFrackingActivator::OnExtractableResourceSet(){ }
void AFGBuildableFrackingActivator::CalculateConnectedExtractorCount(){ }
void AFGBuildableFrackingActivator::CalculateDefaultPotentialExtractionPerMinute(){ }
bool AFGBuildableFrackingActivator::AreAllNodesActivated() const{ return bool(); }
void AFGBuildableFrackingActivator::OnRep_ConnectedExtractorCount(){ }