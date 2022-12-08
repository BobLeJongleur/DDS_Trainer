
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

// Function AppManageShippmentListItem.AppManageShippmentListItem_C.Get_btnChose_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAppManageShippmentListItem_C::Get_btnChose_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.Get_btnChose_ToolTipWidget_1");

	UAppManageShippmentListItem_C_Get_btnChose_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAppManageShippmentListItem_C::UserClickedCancel(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedCancel");

	UAppManageShippmentListItem_C_UserClickedCancel_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageShippmentListItem.AppManageShippmentListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ArentAppartmentArea_C*   AppartmentRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UappartmentModeWidget_C* appModeWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAppManageShippmentListItem_C::Setup(class ArentAppartmentArea_C* AppartmentRef, class UappartmentModeWidget_C* appModeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.Setup");

	UAppManageShippmentListItem_C_Setup_Params params;
	params.AppartmentRef = AppartmentRef;
	params.appModeWidget = appModeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageShippmentListItem.AppManageShippmentListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAppManageShippmentListItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UAppManageShippmentListItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAppManageShippmentListItem_C::UserClickedConfirm(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedConfirm");

	UAppManageShippmentListItem_C_UserClickedConfirm_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageShippmentListItem.AppManageShippmentListItem_C.ExecuteUbergraph_AppManageShippmentListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageShippmentListItem_C::ExecuteUbergraph_AppManageShippmentListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.ExecuteUbergraph_AppManageShippmentListItem");

	UAppManageShippmentListItem_C_ExecuteUbergraph_AppManageShippmentListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
