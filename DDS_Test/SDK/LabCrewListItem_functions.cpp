
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

// Function LabCrewListItem.LabCrewListItem_C.UserClickedCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULabCrewListItem_C::UserClickedCancel(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.UserClickedCancel");

	ULabCrewListItem_C_UserClickedCancel_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AsalesManager_C*         salesManager                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AcontactsManager_C*      contactsManager                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UappartmentModeWidget_C* Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULabCrewListItem_C::setup(int ClientId, class AsalesManager_C* salesManager, class AcontactsManager_C* contactsManager, class UappartmentModeWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.setup");

	ULabCrewListItem_C_setup_Params params;
	params.ClientId = ClientId;
	params.salesManager = salesManager;
	params.contactsManager = contactsManager;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnPromote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULabCrewListItem_C::BndEvt__btnPromote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnPromote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULabCrewListItem_C_BndEvt__btnPromote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnLabAssign_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULabCrewListItem_C::BndEvt__btnLabAssign_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnLabAssign_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	ULabCrewListItem_C_BndEvt__btnLabAssign_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnRemove_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULabCrewListItem_C::BndEvt__btnRemove_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnRemove_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	ULabCrewListItem_C_BndEvt__btnRemove_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.ConfirmTrain
// (BlueprintCallable, BlueprintEvent)

void ULabCrewListItem_C::ConfirmTrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.ConfirmTrain");

	ULabCrewListItem_C_ConfirmTrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.ContinueTrain
// (BlueprintCallable, BlueprintEvent)

void ULabCrewListItem_C::ContinueTrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.ContinueTrain");

	ULabCrewListItem_C_ContinueTrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.UserClickedConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULabCrewListItem_C::UserClickedConfirm(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.UserClickedConfirm");

	ULabCrewListItem_C_UserClickedConfirm_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.MoneyDeposited
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULabCrewListItem_C::MoneyDeposited(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.MoneyDeposited");

	ULabCrewListItem_C_MoneyDeposited_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewListItem.LabCrewListItem_C.ExecuteUbergraph_LabCrewListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULabCrewListItem_C::ExecuteUbergraph_LabCrewListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewListItem.LabCrewListItem_C.ExecuteUbergraph_LabCrewListItem");

	ULabCrewListItem_C_ExecuteUbergraph_LabCrewListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
