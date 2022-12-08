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

// Function VillaModuleInstance.VillaModuleInstance_C.MeshRemoval
struct AVillaModuleInstance_C_MeshRemoval_Params
{
	bool                                               ModuleBuit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaModuleInstance.VillaModuleInstance_C.RespawnPlayer
struct AVillaModuleInstance_C_RespawnPlayer_Params
{
};

// Function VillaModuleInstance.VillaModuleInstance_C.UserConstructionScript
struct AVillaModuleInstance_C_UserConstructionScript_Params
{
};

// Function VillaModuleInstance.VillaModuleInstance_C.ReceiveBeginPlay
struct AVillaModuleInstance_C_ReceiveBeginPlay_Params
{
};

// Function VillaModuleInstance.VillaModuleInstance_C.StageUpdated
struct AVillaModuleInstance_C_StageUpdated_Params
{
};

// Function VillaModuleInstance.VillaModuleInstance_C.UpdateActorStage
struct AVillaModuleInstance_C_UpdateActorStage_Params
{
};

// Function VillaModuleInstance.VillaModuleInstance_C.InteractionActivate
struct AVillaModuleInstance_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaModuleInstance.VillaModuleInstance_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AVillaModuleInstance_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VillaModuleInstance.VillaModuleInstance_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AVillaModuleInstance_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaModuleInstance.VillaModuleInstance_C.InstalModule
struct AVillaModuleInstance_C_InstalModule_Params
{
};

// Function VillaModuleInstance.VillaModuleInstance_C.ExecuteUbergraph_VillaModuleInstance
struct AVillaModuleInstance_C_ExecuteUbergraph_VillaModuleInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
