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

// Function DeathSiteVolume.DeathSiteVolume_C.RamaExtend
struct ADeathSiteVolume_C_RamaExtend_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.GetStageIndex
struct ADeathSiteVolume_C_GetStageIndex_Params
{
	int                                                Stage;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSiteVolume.DeathSiteVolume_C.UpdateSitePrefab
struct ADeathSiteVolume_C_UpdateSitePrefab_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.SetSitePost
struct ADeathSiteVolume_C_SetSitePost_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.CheckOtherVolumes
struct ADeathSiteVolume_C_CheckOtherVolumes_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.ActivateSpot
struct ADeathSiteVolume_C_ActivateSpot_Params
{
	int                                                taskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSiteVolume.DeathSiteVolume_C.UserConstructionScript
struct ADeathSiteVolume_C_UserConstructionScript_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.ReceiveBeginPlay
struct ADeathSiteVolume_C_ReceiveBeginPlay_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ADeathSiteVolume_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeathSiteVolume.DeathSiteVolume_C.ExecuteSiteEvent
struct ADeathSiteVolume_C_ExecuteSiteEvent_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
struct ADeathSiteVolume_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DeathSiteVolume.DeathSiteVolume_C.SubclassSiteActivated
struct ADeathSiteVolume_C_SubclassSiteActivated_Params
{
};

// Function DeathSiteVolume.DeathSiteVolume_C.OverrideSitePrefab
struct ADeathSiteVolume_C_OverrideSitePrefab_Params
{
	int                                                Stage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeathSiteVolume.DeathSiteVolume_C.ExecuteUbergraph_DeathSiteVolume
struct ADeathSiteVolume_C_ExecuteUbergraph_DeathSiteVolume_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
