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

// Function VillaPropertyInstance.VillaPropertyInstance_C.CheckVillaAchievements
struct AVillaPropertyInstance_C_CheckVillaAchievements_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.TryInstallModule
struct AVillaPropertyInstance_C_TryInstallModule_Params
{
	struct FGuid                                       ModuleGuid;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Installed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.IsStageReady
struct AVillaPropertyInstance_C_IsStageReady_Params
{
	bool                                               Ready;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.InstallCurrentStage
struct AVillaPropertyInstance_C_InstallCurrentStage_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.StartCurrentStage
struct AVillaPropertyInstance_C_StartCurrentStage_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.SaveConfigs
struct AVillaPropertyInstance_C_SaveConfigs_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.ExpandRama
struct AVillaPropertyInstance_C_ExpandRama_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.CheckGuids
struct AVillaPropertyInstance_C_CheckGuids_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.OpenConfig
struct AVillaPropertyInstance_C_OpenConfig_Params
{
	struct FGuid                                       Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               KeyFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KeyValue;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.SaveConfig
struct AVillaPropertyInstance_C_SaveConfig_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.BuyVilla
struct AVillaPropertyInstance_C_BuyVilla_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.RemoveInventoryObject
struct AVillaPropertyInstance_C_RemoveInventoryObject_Params
{
	struct FName                                       EquipmentID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.AddInventoryObject
struct AVillaPropertyInstance_C_AddInventoryObject_Params
{
	struct FName                                       EquipmentID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.UpdateBuildStage
struct AVillaPropertyInstance_C_UpdateBuildStage_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.GetUpgradeDetails
struct AVillaPropertyInstance_C_GetUpgradeDetails_Params
{
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Nam;                                                      // (Parm, OutParm)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.UserConstructionScript
struct AVillaPropertyInstance_C_UserConstructionScript_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.ReceiveBeginPlay
struct AVillaPropertyInstance_C_ReceiveBeginPlay_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.ReceiveTick
struct AVillaPropertyInstance_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.UpgradeVilla
struct AVillaPropertyInstance_C_UpgradeVilla_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.PlayerEnteredPremise
struct AVillaPropertyInstance_C_PlayerEnteredPremise_Params
{
	class APawn*                                       PawnRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.PlayerLeftPremise
struct AVillaPropertyInstance_C_PlayerLeftPremise_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AVillaPropertyInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSavePreSaveSignature__DelegateSignature
struct AVillaPropertyInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSavePreSaveSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.BuiltFirstVilla
struct AVillaPropertyInstance_C_BuiltFirstVilla_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__PropertyArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AVillaPropertyInstance_C_BndEvt__PropertyArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.NotifyConstructionStage
struct AVillaPropertyInstance_C_NotifyConstructionStage_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.ForceSetPremise
struct AVillaPropertyInstance_C_ForceSetPremise_Params
{
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.ExecuteUbergraph_VillaPropertyInstance
struct AVillaPropertyInstance_C_ExecuteUbergraph_VillaPropertyInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPropertyInstance.VillaPropertyInstance_C.BuildStageUpdated__DelegateSignature
struct AVillaPropertyInstance_C_BuildStageUpdated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
