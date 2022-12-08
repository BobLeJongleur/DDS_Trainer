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

// Function PontonSignal.PontonSignal_C.UserConstructionScript
struct APontonSignal_C_UserConstructionScript_Params
{
};

// Function PontonSignal.PontonSignal_C.ReceiveBeginPlay
struct APontonSignal_C_ReceiveBeginPlay_Params
{
};

// Function PontonSignal.PontonSignal_C.ReceiveTick
struct APontonSignal_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonSignal.PontonSignal_C.InteractionActivate
struct APontonSignal_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonSignal.PontonSignal_C.OverrideSendSignal
struct APontonSignal_C_OverrideSendSignal_Params
{
};

// Function PontonSignal.PontonSignal_C.ExecuteUbergraph_PontonSignal
struct APontonSignal_C_ExecuteUbergraph_PontonSignal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonSignal.PontonSignal_C.SignalSent__DelegateSignature
struct APontonSignal_C_SignalSent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
