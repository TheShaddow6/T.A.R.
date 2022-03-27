// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRenderTargetStage.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AFGRenderTargetStage::AFGRenderTargetStage() : Super() {
	this->mDynamicRenderTargetSizeX = 512;
	this->mDynamicRenderTargetSizeY = 512;
	this->mDynamicPixelFormat = EPixelFormat::PF_B8G8R8A8;
	this->mSceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
	this->mStage = CreateDefaultSubobject<USceneComponent>(TEXT("Stage"));
	this->mDynamicRenderTarget = false;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mSceneCaptureComponent->SetupAttachment(RootComponent);
	this->mStage->SetupAttachment(RootComponent);
}
void AFGRenderTargetStage::BeginPlay(){ }
void AFGRenderTargetStage::BeginCapture(){ }
void AFGRenderTargetStage::EndCapture(){ }
void AFGRenderTargetStage::CaptureOnce(){ }
void AFGRenderTargetStage::SetRenderTargetFormat(int32 width, int32 height, EPixelFormat pixelFormat){ }
void AFGRenderTargetStage::UpdateRenderedComponents(){ }
void AFGRenderTargetStage::SetPreviewDistance(float distance){ }
void AFGRenderTargetStage::SetView(const FItemView& view){ }
UTextureRenderTarget2D* AFGRenderTargetStage::GetRenderTarget() const{ return nullptr; }