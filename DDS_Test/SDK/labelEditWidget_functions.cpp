
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function labelEditWidget.labelEditWidget_C.GetColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UlabelEditWidget_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.GetColorAndOpacity_1");

	UlabelEditWidget_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function labelEditWidget.labelEditWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UlabelEditWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.Construct");

	UlabelEditWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlabelEditWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.Tick");

	UlabelEditWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AadditiveContainerBase_C* ParentContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DefaultName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DisableCancel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlabelEditWidget_C::Setup(class AadditiveContainerBase_C* ParentContainer, const struct FText& DefaultName, bool DisableCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.Setup");

	UlabelEditWidget_C_Setup_Params params;
	params.ParentContainer = ParentContainer;
	params.DefaultName = DefaultName;
	params.DisableCancel = DisableCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UlabelEditWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UlabelEditWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UlabelEditWidget_C::BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UlabelEditWidget_C_BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UlabelEditWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.killMe");

	UlabelEditWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.ExecuteUbergraph_labelEditWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlabelEditWidget_C::ExecuteUbergraph_labelEditWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.ExecuteUbergraph_labelEditWidget");

	UlabelEditWidget_C_ExecuteUbergraph_labelEditWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
