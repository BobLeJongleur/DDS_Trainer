
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function colorSelectWidget.colorSelectWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcolorSelectWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorSelectWidget.colorSelectWidget_C.Tick");

	UcolorSelectWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderREd_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcolorSelectWidget_C::BndEvt__sliderREd_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderREd_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UcolorSelectWidget_C_BndEvt__sliderREd_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderGreen_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcolorSelectWidget_C::BndEvt__sliderGreen_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderGreen_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	UcolorSelectWidget_C_BndEvt__sliderGreen_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderBlue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcolorSelectWidget_C::BndEvt__sliderBlue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderBlue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UcolorSelectWidget_C_BndEvt__sliderBlue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorSelectWidget.colorSelectWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             SlateColor                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UsettingsWidget_C*       settingsWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UcolorSelectWidget_C::Setup(const struct FSlateColor& SlateColor, class UsettingsWidget_C* settingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorSelectWidget.colorSelectWidget_C.Setup");

	UcolorSelectWidget_C_Setup_Params params;
	params.SlateColor = SlateColor;
	params.settingsWidget = settingsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorSelectWidget.colorSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UcolorSelectWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function colorSelectWidget.colorSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UcolorSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorSelectWidget.colorSelectWidget_C.ExecuteUbergraph_colorSelectWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcolorSelectWidget_C::ExecuteUbergraph_colorSelectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorSelectWidget.colorSelectWidget_C.ExecuteUbergraph_colorSelectWidget");

	UcolorSelectWidget_C_ExecuteUbergraph_colorSelectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
