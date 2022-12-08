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

// Function InteractiveGraveManager.InteractiveGraveManager_C.OneBombPlanted
struct AInteractiveGraveManager_C_OneBombPlanted_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesActive
struct AInteractiveGraveManager_C_SetGravesActive_Params
{
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.UserConstructionScript
struct AInteractiveGraveManager_C_UserConstructionScript_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.ReceiveBeginPlay
struct AInteractiveGraveManager_C_ReceiveBeginPlay_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.ReceiveTick
struct AInteractiveGraveManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.StartGraveTask
struct AInteractiveGraveManager_C_StartGraveTask_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.ObtainedBombs
struct AInteractiveGraveManager_C_ObtainedBombs_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AInteractiveGraveManager_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.PlantedEvent
struct AInteractiveGraveManager_C_PlantedEvent_Params
{
	int                                                NumPlanted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesPostExplosion
struct AInteractiveGraveManager_C_SetGravesPostExplosion_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.ForceDetonateGraves
struct AInteractiveGraveManager_C_ForceDetonateGraves_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
struct AInteractiveGraveManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesPreExplosion
struct AInteractiveGraveManager_C_SetGravesPreExplosion_Params
{
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.ExecuteUbergraph_InteractiveGraveManager
struct AInteractiveGraveManager_C_ExecuteUbergraph_InteractiveGraveManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveGraveManager.InteractiveGraveManager_C.AllBombsPlanted__DelegateSignature
struct AInteractiveGraveManager_C_AllBombsPlanted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
