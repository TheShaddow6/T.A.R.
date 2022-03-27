// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTrain.h"
#include "Components/SceneComponent.h"

float TrainConstants::CATCH_DISTANCE = float();
float TrainConstants::DOCK_STOP_OFFSET = float();
float TrainConstants::SIGNAL_STOP_OFFSET = float();
float TrainConstants::DOCK_DISTANCE = float();
float TrainConstants::DOCK_SPEED = float();
float TrainConstants::RESTRICTED_SPEED = float();
float TrainConstants::RESTRICTED_SPEED_DISTANCE = float();
float TrainConstants::SWITCH_FACING_OCCUPY_DISTANCE = float();
float TrainConstants::SWITCH_TRAILING_OCCUPY_DISTANCE = float();
float TrainConstants::SWITCH_INTERACTION_DISTANCE = float();
float TrainConstants::MIN_SPEED_FOR_DERAILMENT = float();
bool FTrainAtcData::SetPath(const FRailroadPathFindingResult& result){ return bool(); }
void FTrainAtcData::ClearPath(){ }
bool FTrainAtcData::HasPath() const{ return bool(); }
bool FTrainAtcData::AdvanceTargetPoints(UFGRailroadTrackConnectionComponent* current){ return bool(); }
bool FTrainAtcData::AdvanceCurrentPathSegment(UFGRailroadTrackConnectionComponent* current){ return bool(); }
bool FTrainAtcData::RefreshTargetPointsDistanceAndAspect(float currentPathSegmentOffset){ return bool(); }
void FTrainAtcData::UpdateNextSwitch(float searchDistance){ }
void FTrainAtcData::UpdateNextRestrictiveSignal(float searchDistance){ }
void FTrainAtcData::UpdateNextSignal(float searchDistance){ }
bool FTrainAtcData::IsRelevantForATC(const UFGRailroadTrackConnectionComponent* connection){ return bool(); }
void FClientTrainData::SetForwardSpeed(float speed){ }
float FClientTrainData::GetForwardSpeed(){ return float(); }
void FClientTrainData::SetTractionPct(float pct){ }
float FClientTrainData::GetTractionPct(){ return float(); }
void FClientTrainData::SetAirBrakePct(float pct){ }
float FClientTrainData::GetAirBrakePct(){ return float(); }
void FClientTrainData::SetDynamicBrakePct(float pct){ }
float FClientTrainData::GetDynamicBrakePct(){ return float(); }
#if WITH_CHEATS
void AFGTrain::Cheat_Teleport( AFGBuildableRailroadStation* station){ }
#endif 
AFGTrain::AFGTrain() : Super() {
	this->mSoundComponentClass = nullptr;
	this->mConsistData.Length = 0.0;
	this->mConsistData.Mass = 0.0;
	this->mConsistData.MaxSpeed = 0.0;
	this->mSimulationData.MasterMovement = nullptr;
	this->mSimulationData.Velocity = 0.0;
	this->mTrainName = INVTEXT("Train");
	this->mTrackGraphID = -1;
	this->FirstVehicle = nullptr;
	this->LastVehicle = nullptr;
	this->mMultipleUnitMaster = nullptr;
	this->TimeTable = nullptr;
	this->mTrainStatus = ETrainStatus::TS_Parked;
	this->mIsSelfDrivingEnabled = false;
	this->mSelfDrivingError = ESelfDrivingLocomotiveError::SDLE_NoError;
	this->mLongWaitAtSignalThreshold = 300.0;
	this->mDockingState = ETrainDockingState::TDS_None;
	this->mDockedAtStation = nullptr;
	this->mIsDerailed = false;
	this->mSoundComponent = nullptr;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.2;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}
void AFGTrain::Initialize( AFGRailroadVehicle* firstVehicle,  AFGRailroadVehicle* lastVehicle){ }
void AFGTrain::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGTrain, mClientTrainData);
	DOREPLIFETIME(AFGTrain, mTrainName);
	DOREPLIFETIME(AFGTrain, mTrackGraphID);
	DOREPLIFETIME(AFGTrain, mMultipleUnitMaster);
	DOREPLIFETIME(AFGTrain, TimeTable);
	DOREPLIFETIME(AFGTrain, mTrainStatus);
	DOREPLIFETIME(AFGTrain, mIsSelfDrivingEnabled);
	DOREPLIFETIME(AFGTrain, mSelfDrivingError);
	DOREPLIFETIME(AFGTrain, mDockingState);
	DOREPLIFETIME(AFGTrain, mIsDerailed);
}
void AFGTrain::Tick(float dt){ }
void AFGTrain::BeginPlay(){ }
void AFGTrain::Destroyed(){ }
void AFGTrain::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
bool AFGTrain::IsLevelBoundsRelevant() const{ return bool(); }
void AFGTrain::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTrain::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTrain::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTrain::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTrain::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGTrain::NeedTransform_Implementation(){ return bool(); }
bool AFGTrain::ShouldSave_Implementation() const{ return bool(); }
void AFGTrain::TickAtc(float dt){ }
void AFGTrain::TickSelfDriving(float dt){ }
void AFGTrain::TickPlayerDriving(float dt){ }
void AFGTrain::GainedSignificance_Implementation(){ }
void AFGTrain::LostSignificance_Implementation(){ }
void AFGTrain::GainedSignificance_Native(){ }
void AFGTrain::LostSignificance_Native(){ }
float AFGTrain::GetSignificanceRange(){ return float(); }
bool AFGTrain::AddAsRepresentation(){ return bool(); }
bool AFGTrain::UpdateRepresentation(){ return bool(); }
bool AFGTrain::RemoveAsRepresentation(){ return bool(); }
bool AFGTrain::IsActorStatic(){ return bool(); }
FVector AFGTrain::GetRealActorLocation(){ return FVector(); }
FRotator AFGTrain::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGTrain::GetActorRepresentationTexture(){ return nullptr; }
FText AFGTrain::GetActorRepresentationText(){ return FText(); }
void AFGTrain::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGTrain::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGTrain::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGTrain::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGTrain::GetActorShouldShowInCompass(){ return bool(); }
bool AFGTrain::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGTrain::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGTrain::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGTrain::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGTrain::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
void AFGTrain::SetTrainName(const FText& name){ }
void AFGTrain::SetTrackGraphID(int32 newID){ }
bool AFGTrain::IsPlayerDriven() const{ return bool(); }
bool AFGTrain::IsSelfDrivingEnabled() const{ return bool(); }
void AFGTrain::SetSelfDrivingEnabled(bool isEnabled){ }
AFGLocomotive* AFGTrain::GetMultipleUnitMaster() const{ return nullptr; }
bool AFGTrain::CanSetMultipleUnitMaster(const  AFGLocomotive* locomotive) const{ return bool(); }
bool AFGTrain::SetMultipleUnitMaster( AFGLocomotive* locomotive, bool force){ return bool(); }
bool AFGTrain::IsInputDisabled() const{ return bool(); }
AFGRailroadTimeTable* AFGTrain::GetTimeTable() const{ return nullptr; }
AFGRailroadTimeTable* AFGTrain::NewTimeTable(){ return nullptr; }
bool AFGTrain::HasTimeTable() const{ return bool(); }
AFGRailroadVehicle* AFGTrain::GetFirstVehicle() const{ return nullptr; }
AFGRailroadVehicle* AFGTrain::GetLastVehicle() const{ return nullptr; }
void AFGTrain::Dock(){ }
void AFGTrain::CancelDockingSequence(){ }
bool AFGTrain::IsDockingCancelRequested(){ return bool(); }
void AFGTrain::OnDocked(AFGBuildableRailroadStation* station){ }
void AFGTrain::OnDockingComplete(){ }
void AFGTrain::ConnectToThirdRail( UFGPowerConnectionComponent* thirdRail){ }
void AFGTrain::OnVehiclesChanged(){ }
void AFGTrain::OnConsistChanged(){ }
void AFGTrain::GetDockingRuleSetForCurrentStop(FTrainDockingRuleSet& out_ruleSet) const{ }
void AFGTrain::OnCollided(AFGRailroadVehicle* ourVehicle, float ourVelocity, AFGRailroadVehicle* otherVehicle, float otherVelocity, bool shouldDerail){ }
void AFGTrain::OnDerail(float velocity){ }
void AFGTrain::Rerail(){ }
void AFGTrain::OnDriverEntered(){ }
void AFGTrain::OnDriverLeft(){ }
void AFGTrain::AddLocalVehicle( AFGRailroadVehicle* vehicle){ }
void AFGTrain::RemoveLocalVehicle( AFGRailroadVehicle* vehicle){ }
void AFGTrain::UpdateTrainStatus(){ }
void AFGTrain::ReportSelfDrivingError(ESelfDrivingLocomotiveError error){ }
void AFGTrain::ClearSelfDrivingError(){ }
bool AFGTrain::FindPath( AFGBuildableRailroadStation* station, bool runDiagnosticsOnFailure){ return bool(); }
void AFGTrain::UpdateReadyToDock(){ }
void AFGTrain::SetDockingState(ETrainDockingState state){ }
void AFGTrain::GotoSelfDrivingState(ESelfDrivingLocomotiveState newState){ }
void AFGTrain::TickSelfDriving_Idle(ESelfDrivingLocomotiveError& out_error){ }
void AFGTrain::TickSelfDriving_FollowPath(ESelfDrivingLocomotiveError& out_error){ }
void AFGTrain::TickSelfDriving_Docking(ESelfDrivingLocomotiveError& out_error){ }
void AFGTrain::TickSelfDriving_DockingCompleted(ESelfDrivingLocomotiveError& out_error){ }
void AFGTrain::TickAtc_BlockReservations(){ }
float AFGTrain::CalcBrakeDistance(float currentSpeed, float targetSpeed, float deceleration) const{ return float(); }
float AFGTrain::CalcTargetSpeed(float targetSpeed, float distance, float deceleration) const{ return float(); }
float AFGTrain::CalcTargetAcceleration(float currentSpeed, float targetSpeed, float distance) const{ return float(); }
float AFGTrain::CalcTargetDeceleration(float currentSpeed, float targetSpeed, float distance) const{ return float(); }
void AFGTrain::OnRep_DockingState(){ }
void AFGTrain::OnRep_IsSelfDrivingEnabled(){ }
void AFGTrain::OnRep_SelfDrivingError(){ }
void AFGTrain::OnRep_IsDerailed(){ }
void AFGTrain::OnRep_TrainStatus(){ }