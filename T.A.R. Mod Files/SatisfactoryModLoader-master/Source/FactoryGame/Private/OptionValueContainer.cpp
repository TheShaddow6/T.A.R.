// This file has been automatically generated by the Unreal Header Implementation tool

#include "OptionValueContainer.h"

float OptionValueContainer::GetActiveNumericValue(const FString& cvar) const{ return float(); }
int32 OptionValueContainer::GetActiveIntValue(FString cvar) const{ return int32(); }
float OptionValueContainer::GetActiveFloatValue(FString cvar) const{ return float(); }
int32 OptionValueContainer::GetIntDisplayValue(FString cvar) const{ return int32(); }
float OptionValueContainer::GetFloatDisplayValue(FString cvar) const{ return float(); }
TMap< FString, int32 > OptionValueContainer::GetIntValues(EOptionValueState valueType) const{ return TMap<FString,int32>(); }
TMap< FString, float > OptionValueContainer::GetFloatValues(EOptionValueState valueType) const{ return TMap<FString,float>(); }
void OptionValueContainer::SetBoolValue(EOptionValueState valueType, FString cvar, bool value){ }
void OptionValueContainer::SetIntValue(EOptionValueState valueType, FString cvar, int32 value){ }
void OptionValueContainer::SetFloatValue(EOptionValueState valueType, FString cvar, float value){ }
void OptionValueContainer::SetIntValue(FString cvar, int32 value){ }
void OptionValueContainer::SetFloatValue(FString cvar, float value){ }
void OptionValueContainer::ApplyIntValue(FString cvar, int32 value){ }
void OptionValueContainer::ApplyFloatValue(FString cvar, float value){ }
void OptionValueContainer::InitDefaultIntValue(FString cvar, int32 value, EOptionApplyType optionApplyType){ }
void OptionValueContainer::InitDefaultFloatValue(FString cvar, float value, EOptionApplyType optionApplyType){ }
bool OptionValueContainer::HasAnyUnsavedOptionValueChanges() const{ return bool(); }
bool OptionValueContainer::HasPendingApplyOptionValue(FString cvar) const{ return bool(); }
bool OptionValueContainer::HasPendingSessionRestartOptionValue(FString cvar) const{ return bool(); }
bool OptionValueContainer::HasPendingGameRestartOptionValue(FString cvar) const{ return bool(); }
bool OptionValueContainer::HasAnyPendingSessionRestartOptionValues() const{ return bool(); }
bool OptionValueContainer::HasAnyPendingGameRestartOptionValues() const{ return bool(); }
void OptionValueContainer::ApplyPendingChanges(){ }
void OptionValueContainer::ApplyRestartSessionRequiredChanges(){ }
void OptionValueContainer::ApplyRestartGameRequiredChanges(){ }
void OptionValueContainer::ResetOptionValue(FString cvar){ }
void OptionValueContainer::ResetPendingChanges(){ }
void OptionValueContainer::ResetValuesToDefault(){ }
void OptionValueContainer::RemoveValues(EOptionValueState valueType){ }
void OptionValueContainer::GetOptionsDebugData(TArray<FString>& out_debugData){ }
void OptionValueContainer::RemoveValue(EOptionValueState valueType, FString cvar){ }
bool OptionValueContainer::ContainsValue(EOptionValueState valueType, FString cvar) const{ return bool(); }
bool OptionValueContainer::ContainsValue(TArray< EOptionValueState > valueTypes, FString cvar) const{ return bool(); }
bool OptionValueContainer::ContainsValues(EOptionValueState valueType) const{ return bool(); }
bool OptionValueContainer::ContainsValues(TArray< EOptionValueState > valueTypes) const{ return bool(); }
bool OptionValueContainer::GetBoolValue(EOptionValueState valueType, FString cvar, bool& out_value) const{ return bool(); }
bool OptionValueContainer::GetIntValue(EOptionValueState valueType, FString cvar, int32& out_value) const{ return bool(); }
bool OptionValueContainer::GetFloatValue(EOptionValueState valueType, FString cvar, float& out_value) const{ return bool(); }
bool OptionValueContainer::GetBoolValue(EOptionValueState valueType, FString cvar) const{ return bool(); }
int32 OptionValueContainer::GetIntValue(EOptionValueState valueType, FString cvar) const{ return int32(); }
float OptionValueContainer::GetFloatValue(EOptionValueState valueType, FString cvar) const{ return float(); }
void OptionValueContainer::ResetIntValue(FString cvar){ }
void OptionValueContainer::ResetFloatValue(FString cvar){ }
void OptionValueContainer::SetCvarValue(FString cvar, int32 value){ }
void OptionValueContainer::SetCvarValue(FString cvar, float value){ }
