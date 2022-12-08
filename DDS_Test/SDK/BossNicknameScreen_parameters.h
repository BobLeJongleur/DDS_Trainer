#pragma once

#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BossNicknameScreen.BossNicknameScreen_C.Get_btnLoadGame_bIsEnabled_1
struct UBossNicknameScreen_C_Get_btnLoadGame_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BossNicknameScreen.BossNicknameScreen_C.UserClickedCancel
struct UBossNicknameScreen_C_UserClickedCancel_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BossNicknameScreen.BossNicknameScreen_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBossNicknameScreen_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BossNicknameScreen.BossNicknameScreen_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
struct UBossNicknameScreen_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BossNicknameScreen.BossNicknameScreen_C.UserClickedConfirm
struct UBossNicknameScreen_C_UserClickedConfirm_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BossNicknameScreen.BossNicknameScreen_C.ExecuteUbergraph_BossNicknameScreen
struct UBossNicknameScreen_C_ExecuteUbergraph_BossNicknameScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
