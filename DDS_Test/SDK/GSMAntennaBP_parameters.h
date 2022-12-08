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

// Function GSMAntennaBP.GSMAntennaBP_C.RamaExtend
struct AGSMAntennaBP_C_RamaExtend_Params
{
};

// Function GSMAntennaBP.GSMAntennaBP_C.CheckAllHacked
struct AGSMAntennaBP_C_CheckAllHacked_Params
{
};

// Function GSMAntennaBP.GSMAntennaBP_C.UserConstructionScript
struct AGSMAntennaBP_C_UserConstructionScript_Params
{
};

// Function GSMAntennaBP.GSMAntennaBP_C.ReceiveBeginPlay
struct AGSMAntennaBP_C_ReceiveBeginPlay_Params
{
};

// Function GSMAntennaBP.GSMAntennaBP_C.ReceiveTick
struct AGSMAntennaBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GSMAntennaBP.GSMAntennaBP_C.InteractionActivate
struct AGSMAntennaBP_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GSMAntennaBP.GSMAntennaBP_C.RefreshActivity
struct AGSMAntennaBP_C_RefreshActivity_Params
{
};

// Function GSMAntennaBP.GSMAntennaBP_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AGSMAntennaBP_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GSMAntennaBP.GSMAntennaBP_C.ExecuteUbergraph_GSMAntennaBP
struct AGSMAntennaBP_C_ExecuteUbergraph_GSMAntennaBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
