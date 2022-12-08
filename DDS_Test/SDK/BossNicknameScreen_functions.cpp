
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

// Function BossNicknameScreen.BossNicknameScreen_C.Get_btnLoadGame_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBossNicknameScreen_C::Get_btnLoadGame_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossNicknameScreen.BossNicknameScreen_C.Get_btnLoadGame_bIsEnabled_1");

	UBossNicknameScreen_C_Get_btnLoadGame_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BossNicknameScreen.BossNicknameScreen_C.UserClickedCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBossNicknameScreen_C::UserClickedCancel(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossNicknameScreen.BossNicknameScreen_C.UserClickedCancel");

	UBossNicknameScreen_C_UserClickedCancel_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossNicknameScreen.BossNicknameScreen_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBossNicknameScreen_C::BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossNicknameScreen.BossNicknameScreen_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBossNicknameScreen_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossNicknameScreen.BossNicknameScreen_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBossNicknameScreen_C::BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossNicknameScreen.BossNicknameScreen_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	UBossNicknameScreen_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossNicknameScreen.BossNicknameScreen_C.UserClickedConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBossNicknameScreen_C::UserClickedConfirm(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossNicknameScreen.BossNicknameScreen_C.UserClickedConfirm");

	UBossNicknameScreen_C_UserClickedConfirm_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossNicknameScreen.BossNicknameScreen_C.ExecuteUbergraph_BossNicknameScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBossNicknameScreen_C::ExecuteUbergraph_BossNicknameScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossNicknameScreen.BossNicknameScreen_C.ExecuteUbergraph_BossNicknameScreen");

	UBossNicknameScreen_C_ExecuteUbergraph_BossNicknameScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
