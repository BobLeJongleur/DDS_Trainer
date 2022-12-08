
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

// Function confirmPopupFrame.confirmPopupFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UconfirmPopupFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.Construct");

	UconfirmPopupFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UconfirmPopupFrame_C::BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UconfirmPopupFrame_C_BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmPopupFrame.confirmPopupFrame_C.configure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PopupTitle                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   PopupDesc                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ShowMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Querier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UconfirmPopupFrame_C::configure(const struct FText& PopupTitle, const struct FText& PopupDesc, bool ShowMouse, class UObject* Querier, const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.configure");

	UconfirmPopupFrame_C_configure_Params params;
	params.PopupTitle = PopupTitle;
	params.PopupDesc = PopupDesc;
	params.ShowMouse = ShowMouse;
	params.Querier = Querier;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmPopupFrame.confirmPopupFrame_C.killWidget
// (BlueprintCallable, BlueprintEvent)

void UconfirmPopupFrame_C::killWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.killWidget");

	UconfirmPopupFrame_C_killWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UconfirmPopupFrame_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UconfirmPopupFrame_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmPopupFrame.confirmPopupFrame_C.ExecuteUbergraph_confirmPopupFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UconfirmPopupFrame_C::ExecuteUbergraph_confirmPopupFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.ExecuteUbergraph_confirmPopupFrame");

	UconfirmPopupFrame_C_ExecuteUbergraph_confirmPopupFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
