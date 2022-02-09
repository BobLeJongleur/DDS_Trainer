#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ActiveBush.ActiveBush_C.UserConstructionScript
struct AActiveBush_C_UserConstructionScript_Params
{
};

// Function ActiveBush.ActiveBush_C.ReceiveTick
struct AActiveBush_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActiveBush.ActiveBush_C.ReceiveActorBeginOverlap
struct AActiveBush_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActiveBush.ActiveBush_C.ReceiveActorEndOverlap
struct AActiveBush_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActiveBush.ActiveBush_C.PlaySound
struct AActiveBush_C_PlaySound_Params
{
};

// Function ActiveBush.ActiveBush_C.ExecuteUbergraph_ActiveBush
struct AActiveBush_C_ExecuteUbergraph_ActiveBush_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
