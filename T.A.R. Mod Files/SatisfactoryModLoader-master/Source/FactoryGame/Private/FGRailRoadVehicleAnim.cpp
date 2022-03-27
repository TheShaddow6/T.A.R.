// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadVehicleAnim.h"

void FAnimInstanceProxyRailroadVehicle::PreUpdate(UAnimInstance* inAnimInstance, float dt){ }
void FAnimInstanceProxyRailroadVehicle::Update(float dt){ }
void FAnimInstanceProxyRailroadVehicle::Initialize(UAnimInstance* inAnimInstance){ }
UFGRailroadVehicleAnim::UFGRailroadVehicleAnim() : Super() {
	this->mBrakeCurve = nullptr;
	this->mVehicle = nullptr;
	this->mLocomotive = nullptr;
	this->mProxy.mFrontBogieRotation.Pitch = 0.0;
	this->mProxy.mFrontBogieRotation.Yaw = 0.0;
	this->mProxy.mFrontBogieRotation.Roll = 0.0;
	this->mProxy.mBackBogieRotation.Pitch = 0.0;
	this->mProxy.mBackBogieRotation.Yaw = 0.0;
	this->mProxy.mBackBogieRotation.Roll = 0.0;
	this->mProxy.mWheelRotation.Pitch = 0.0;
	this->mProxy.mWheelRotation.Yaw = 0.0;
	this->mProxy.mWheelRotation.Roll = 0.0;
	this->mProxy.mFrontConnectorRotation.Pitch = 0.0;
	this->mProxy.mFrontConnectorRotation.Yaw = 0.0;
	this->mProxy.mFrontConnectorRotation.Roll = 0.0;
	this->mProxy.mFrontConnectorTranslation.X = 0.0;
	this->mProxy.mFrontConnectorTranslation.Y = 0.0;
	this->mProxy.mFrontConnectorTranslation.Z = 0.0;
	this->mProxy.mBackConnectorRotation.Pitch = 0.0;
	this->mProxy.mBackConnectorRotation.Yaw = 0.0;
	this->mProxy.mBackConnectorRotation.Roll = 0.0;
	this->mProxy.mBackConnectorTranslation.X = 0.0;
	this->mProxy.mBackConnectorTranslation.Y = 0.0;
	this->mProxy.mBackConnectorTranslation.Z = 0.0;
	this->mProxy.mTrackCurvature.Pitch = 0.0;
	this->mProxy.mTrackCurvature.Yaw = 0.0;
	this->mProxy.mTrackCurvature.Roll = 0.0;
	this->mProxy.mForwardSpeed = 0.0;
	this->mProxy.mTractiveForce = 0.0;
	this->mProxy.mHandBrakeForce = 0.0;
	this->mProxy.mBrakeForce = 0.0;
	this->mProxy.mHandBrakeForceSpeed = 0.0;
	this->mProxy.mHandBrakeGlow = 0.0;
	this->mProxy.mHandBrakeVfxSpawn = 0.0;
	this->mProxy.mAGBrakePlayRate = 0.0;
	this->mProxy.mIsMoving = false;
	this->mProxy.mIsUsingHandBrake = false;
	this->mProxy.mIsLocomotive = false;
	this->mProxy.mHasPower = false;
	this->mProxy.mAGThrottleZero = false;
	this->mProxy.mAGThrottlePositive = false;
	this->mProxy.mAGStartToRunningTransition = false;
	this->mProxy.mAGHandBrakeTransition01 = false;
	this->mProxy.mAGHandBrakeTransition02 = false;
	this->mProxy.mAGBrakeForcePositive = false;
	this->mProxy.mAGBrakeToRunningTransition = false;
	this->mProxy.mAGHandBrakeReset01 = false;
	this->mProxy.mAGHandBrakeReset02 = false;
	this->mProxy.mAGHandBrakeStop = false;
	this->mTrainMaterial = nullptr;
	this->mBrakeSparkTemplate = nullptr;
	this->mSteamTemplate = nullptr;
	this->mBrakeSound = nullptr;
	this->mHandBrakeVfxTemplate = nullptr;
	this->mHandBrakeVfxComponent = nullptr;
}
void UFGRailroadVehicleAnim::NativeUpdateAnimation(float dt){ }
void UFGRailroadVehicleAnim::NativeInitializeAnimation(){ }
void UFGRailroadVehicleAnim::SetUsingHandBrake(bool inValue){ }
void UFGRailroadVehicleAnim::SetupHandBrakeEffects(){ }
void UFGRailroadVehicleAnim::RemoveBrakeEffects(){ }
void UFGRailroadVehicleAnim::RemoveHandBrakeEffects(){ }
void UFGRailroadVehicleAnim::TriggerHandBrakeVfx(){ }
