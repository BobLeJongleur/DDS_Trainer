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

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ClearBlockade
struct APoliceBlockadeArea_C_ClearBlockade_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.SpawnBlockade
struct APoliceBlockadeArea_C_SpawnBlockade_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanDespawn
struct APoliceBlockadeArea_C_CanDespawn_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanSpawn
struct APoliceBlockadeArea_C_CanSpawn_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.RegisterPlayerPass
struct APoliceBlockadeArea_C_RegisterPlayerPass_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.UserConstructionScript
struct APoliceBlockadeArea_C_UserConstructionScript_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveBeginPlay
struct APoliceBlockadeArea_C_ReceiveBeginPlay_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveTick
struct APoliceBlockadeArea_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APoliceBlockadeArea_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.TrySpawnBlockade
struct APoliceBlockadeArea_C_TrySpawnBlockade_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.TryDespawnBlockade
struct APoliceBlockadeArea_C_TryDespawnBlockade_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceSpawn
struct APoliceBlockadeArea_C_ForceSpawn_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceClear
struct APoliceBlockadeArea_C_ForceClear_Params
{
};

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ExecuteUbergraph_PoliceBlockadeArea
struct APoliceBlockadeArea_C_ExecuteUbergraph_PoliceBlockadeArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
