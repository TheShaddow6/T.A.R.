// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGEquipmentBoomBox.h"

AFGEquipmentBoomBox::AFGEquipmentBoomBox() : Super() {
	this->mCurrentTapeDescriptor = nullptr;
}
void AFGEquipmentBoomBox::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGEquipmentBoomBox, mCurrentTapeDescriptor);
}
TArray< TSubclassOf< class UFGTapeDescriptor > > AFGEquipmentBoomBox::GetAvailableTapes(){ return TArray<TSubclassOf<class UFGTapeDescriptor> >(); }