// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGSignElementWidget.h"

void UFGSignElementWidget::InitSignElementForInteract(const FInteractElementWidgetData& elementWidgetData){ }
void UFGSignElementWidget::InitSignElementForBuildable(FBuildableElementWidgetData& buildableWidgetData){ }
void UFGSignElementWidget::RefreshElement(bool isInitialization){ }
UCanvasPanelSlot* UFGSignElementWidget::GetPanelSlot() const{ return nullptr; }
void UFGSignElementWidget::SetPanelSlot( UCanvasPanelSlot* panelSlot){ }
void UFGSignElementWidget::NativeNotifyElementSelected(){ }
void UFGSignElementWidget::NativeNotifyElementDeselected(){ }
TSubclassOf<class UFGSignElementSettingsWidget> UFGSignElementWidget::GetSettingsWidgetClass(){ return TSubclassOf<class UFGSignElementSettingsWidget>(); }
FString UFGSignElementWidget::GetTextStringAttr() const{ return FString(); }
int32 UFGSignElementWidget::GetIconIDAttr() const{ return int32(); }
FVector2D UFGSignElementWidget::GetPositionAttr() const{ return FVector2D(); }
int32 UFGSignElementWidget::GetSizeSpecifierAttr() const{ return int32(); }
FVector2D UFGSignElementWidget::GetSizeAttr() const{ return FVector2D(); }
ETextJustify::Type UFGSignElementWidget::GetAlignmentAttr() const{ return ETextJustify::Type(); }
FReply UFGSignElementWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InAnalogEvent){ return FReply::Unhandled(); }
FReply UFGSignElementWidget::NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InAnalogEvent){ return FReply::Unhandled(); }
void UFGSignElementWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation){ }
bool UFGSignElementWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation){ return bool(); }
