// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSignSettings.h"

UFGSignSettings::UFGSignSettings() : Super() {
	this->mGridSize = 0;
	this->mTextMaterial = nullptr;
	this->mIconMaterial = nullptr;
	this->mBackgroundMaterial = nullptr;
	this->mBackgroundMeshMaterialIndex = 0;
	this->mTextMaterialColorParam = TEXT("None");
	this->mIconMaterialColorParam = TEXT("None");
	this->mBackgroundMaterialColorParam = TEXT("None");
	this->mLayerIcon = nullptr;
	this->mTextIcon = nullptr;
	this->mIconIcon = nullptr;
	this->mPanelIcon = nullptr;
	this->SizeDefinitionToFontSize.Add(ESignSizeDefinition::ESSD_VERYSMALL, 8);
	this->SizeDefinitionToFontSize.Add(ESignSizeDefinition::ESSD_SMALL, 12);
	this->SizeDefinitionToFontSize.Add(ESignSizeDefinition::ESSD_MEDIUM, 18);
	this->SizeDefinitionToFontSize.Add(ESignSizeDefinition::ESSD_LARGE, 32);
	this->SizeDefinitionToFontSize.Add(ESignSizeDefinition::ESSD_VERYLARGE, 46);
	this->SizeDefinitionToIconSize.Add(ESignSizeDefinition::ESSD_VERYSMALL, 32);
	this->SizeDefinitionToIconSize.Add(ESignSizeDefinition::ESSD_SMALL, 64);
	this->SizeDefinitionToIconSize.Add(ESignSizeDefinition::ESSD_MEDIUM, 128);
	this->SizeDefinitionToIconSize.Add(ESignSizeDefinition::ESSD_LARGE, 256);
	this->SizeDefinitionToIconSize.Add(ESignSizeDefinition::ESSD_VERYLARGE, 512);
}
UFGSignSettings* UFGSignSettings::Get(){ return nullptr; }
FString UFGSignSettings::GetStringKeyFromAttributeTag(SignTags::AttributeTag tag) const{ return FString(); }
FString UFGSignSettings::GetStringKeyFromElementClass(TSubclassOf<UWidget> widgetClass) const{ return FString(); }
