
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

// Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UConfirmPopupInterface_C::UserClickedCancel(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedCancel");

	UConfirmPopupInterface_C_UserClickedCancel_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UConfirmPopupInterface_C::UserClickedConfirm(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedConfirm");

	UConfirmPopupInterface_C_UserClickedConfirm_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
