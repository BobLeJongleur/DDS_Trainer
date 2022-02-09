#pragma once

#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TunnelMusic.TunnelMusic_C.PickRandomSound
struct ATunnelMusic_C_PickRandomSound_Params
{
};

// Function TunnelMusic.TunnelMusic_C.UserConstructionScript
struct ATunnelMusic_C_UserConstructionScript_Params
{
};

// Function TunnelMusic.TunnelMusic_C.ReceiveBeginPlay
struct ATunnelMusic_C_ReceiveBeginPlay_Params
{
};

// Function TunnelMusic.TunnelMusic_C.ReceiveTick
struct ATunnelMusic_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TunnelMusic.TunnelMusic_C.EventPlayerEnteredTunnels
struct ATunnelMusic_C_EventPlayerEnteredTunnels_Params
{
};

// Function TunnelMusic.TunnelMusic_C.EventPlayerPeeking
struct ATunnelMusic_C_EventPlayerPeeking_Params
{
};

// Function TunnelMusic.TunnelMusic_C.EventPlayerBack
struct ATunnelMusic_C_EventPlayerBack_Params
{
};

// Function TunnelMusic.TunnelMusic_C.EventPlayerLeft
struct ATunnelMusic_C_EventPlayerLeft_Params
{
};

// Function TunnelMusic.TunnelMusic_C.ExecuteUbergraph_TunnelMusic
struct ATunnelMusic_C_ExecuteUbergraph_TunnelMusic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
