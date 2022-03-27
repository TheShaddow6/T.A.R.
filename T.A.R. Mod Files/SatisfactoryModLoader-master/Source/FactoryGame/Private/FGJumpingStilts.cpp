// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGJumpingStilts.h"
#include "Equipment/FGEquipment.h"

AFGJumpingStilts::AFGJumpingStilts() : Super() {
	this->mFallDamageCurveOverride = nullptr;
	this->mSprintSpeedFactor = 0.0;
	this->mJumpSpeedFactor = 0.0;
	this->mEquipmentSlot = EEquipmentSlot::ES_BACK;
}
void AFGJumpingStilts::Equip( AFGCharacterPlayer* character){ }
void AFGJumpingStilts::UnEquip(){ }
float AFGJumpingStilts::GetAdjustedMaxSpeed(float defaultMaxSpeed){ return float(); }
float AFGJumpingStilts::GetAdjustedZJumpSpeed(float defaultJumpZ){ return float(); }
float AFGJumpingStilts::GetMaxFallSpeedBeforeDamage(){ return float(); }
float AFGJumpingStilts::GetCurrentFallSpeed(){ return float(); }
float AFGJumpingStilts::GetNormalizedFallSpeedUntilDamaged(){ return float(); }