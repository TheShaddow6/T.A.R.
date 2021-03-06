// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSplineComponent.h"

UFGSplineComponent::UFGSplineComponent() : Super() {
	this->mSplineMesh = nullptr;
	this->mSplineMeshLength = 100.0;
	this->mGenerateCollisions = false;
	this->mCollisionSpacing = 100.0;
	this->mCollisionExtent.X = 1.0;
	this->mCollisionExtent.Y = 1.0;
	this->mCollisionExtent.Z = 1.0;
	this->mCollisionOffset.X = 0.0;
	this->mCollisionOffset.Y = 0.0;
	this->mCollisionOffset.Z = 0.0;
	this->mOverrideMaterial = nullptr;
	this->mUseInstancing = true;
	this->mSplineMeshInstances = nullptr;
	this->mCustomDepthSplineMeshInstances = nullptr;
}
void UFGSplineComponent::SetOverrideMaterial( UMaterialInterface* material){ }
void UFGSplineComponent::UpdateSplineMeshes(){ }
void UFGSplineComponent::DrawDebugSpline(const FColor& color1, const FColor& color2, float thickness) const{ }
int32 UFGSplineComponent::GetNumberOfMeshes() const{ return int32(); }
USplineMeshComponent* UFGSplineComponent::GetMesh(int32 index) const{ return nullptr; }
UFGInstancedSplineMeshComponent* UFGSplineComponent::GetInstancedMesh() const{ return nullptr; }
void UFGSplineComponent::SetVectorParameterOnInstancedMeshMaterials(FName parameterName, FVector inVector){ }
void UFGSplineComponent::SetUseInstancing(bool useInstancing){ }
void UFGSplineComponent::SetAdditionalCustomDepthPass(bool enable){ }
void UFGSplineComponent::GenerateCollisionIdx(int32 idx, float splineLength, int32 numCollisions){ }
void UFGSplineComponent::GenerateSplineCollisions(){ }
UFGInstancedSplineMeshComponent* UFGSplineComponent::CreateInstancedSplineMeshComponent(){ return nullptr; }
USplineMeshComponent* UFGSplineComponent::CreateSplineMeshComponent(){ return nullptr; }
