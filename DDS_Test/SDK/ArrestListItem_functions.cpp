
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

// Function ArrestListItem.ArrestListItem_C.Get_BAILAMT_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UArrestListItem_C::Get_BAILAMT_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestListItem.ArrestListItem_C.Get_BAILAMT_Visibility_1");

	UArrestListItem_C_Get_BAILAMT_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArrestListItem.ArrestListItem_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UArrestListItem_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestListItem.ArrestListItem_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UArrestListItem_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrestListItem.ArrestListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CliendID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AsalesManager_C*         salesManager                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArrestScreenWidget_C*   MyParentRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UArrestListItem_C::Setup(int CliendID, class AsalesManager_C* salesManager, class UArrestScreenWidget_C* MyParentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestListItem.ArrestListItem_C.Setup");

	UArrestListItem_C_Setup_Params params;
	params.CliendID = CliendID;
	params.salesManager = salesManager;
	params.MyParentRef = MyParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrestListItem.ArrestListItem_C.ExecuteUbergraph_ArrestListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UArrestListItem_C::ExecuteUbergraph_ArrestListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestListItem.ArrestListItem_C.ExecuteUbergraph_ArrestListItem");

	UArrestListItem_C_ExecuteUbergraph_ArrestListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrestListItem.ArrestListItem_C.ButtonChuj__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UArrestListItem_C::ButtonChuj__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestListItem.ArrestListItem_C.ButtonChuj__DelegateSignature");

	UArrestListItem_C_ButtonChuj__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
