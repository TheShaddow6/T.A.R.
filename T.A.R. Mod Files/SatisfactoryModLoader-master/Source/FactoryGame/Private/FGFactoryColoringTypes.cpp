// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryColoringTypes.h"

UFGFactoryCustomizationDescriptor::UFGFactoryCustomizationDescriptor() : Super() {
	this->ID = 0;
	this->mIcon = nullptr;
}
bool UFGFactoryCustomizationDescriptor_Material::BuildableRecipeIsMappedTo(TSubclassOf<  UFGRecipe > recipe){ return bool(); }
void UFGFactorySkinActorData::GetSkinComponentDataForSkinActorData(TSubclassOf< UFGFactorySkinActorData > skinClass, TMap< TSubclassOf< UFGFactoryCustomizationDescriptor_Skin >, FFactorySkinComponentGroup >& out_componentGroupData){ }
#if WITH_EDITOR
EDataValidationResult UFGFactoryCustomizationCollection::IsDataValid(TArray< FText >& ValidationErrors){ return EDataValidationResult::Valid; }
#endif 
UFGFactoryCustomizationCollection::UFGFactoryCustomizationCollection() : Super() {
	this->mCustomizationClass = nullptr;
}
void FFactoryCustomizationData::Initialize( AFGGameState* gameState){ }
void FFactoryCustomizationData::InlineCombine(const FFactoryCustomizationData& other){ }
void FFactoryCustomizationData::UpdateHasPowerData(){ }
void FFactoryCustomizationData::GetCustomizationArray(TArray< TSubclassOf <  UFGFactoryCustomizationDescriptor > >& out_customizations){ }