
#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function saleAreaManagementWidget.saleAreaManagementWidget_C.Get_btnChangeSpray_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UsaleAreaManagementWidget_C::Get_btnChangeSpray_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.Get_btnChangeSpray_ToolTipWidget_1");

	UsaleAreaManagementWidget_C_Get_btnChangeSpray_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerSetAreaVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BorderOpacity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             BorderColor                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaleAreaManagementWidget_C::markerSetAreaVisuals(float BorderOpacity, const struct FSlateColor& BorderColor, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerSetAreaVisuals");

	UsaleAreaManagementWidget_C_markerSetAreaVisuals_Params params;
	params.BorderOpacity = BorderOpacity;
	params.BorderColor = BorderColor;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerHoverAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaleAreaManagementWidget_C::markerHoverAction(int Index, class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerHoverAction");

	UsaleAreaManagementWidget_C_markerHoverAction_Params params;
	params.Index = Index;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManagementWidget.saleAreaManagementWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsaleAreaManagementWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.Construct");

	UsaleAreaManagementWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManagementWidget.saleAreaManagementWidget_C.BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsaleAreaManagementWidget_C::BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UsaleAreaManagementWidget_C_BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManagementWidget.saleAreaManagementWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsaleAreaManagementWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.Destruct");

	UsaleAreaManagementWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManagementWidget.saleAreaManagementWidget_C.ExecuteUbergraph_saleAreaManagementWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaleAreaManagementWidget_C::ExecuteUbergraph_saleAreaManagementWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.ExecuteUbergraph_saleAreaManagementWidget");

	UsaleAreaManagementWidget_C_ExecuteUbergraph_saleAreaManagementWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
