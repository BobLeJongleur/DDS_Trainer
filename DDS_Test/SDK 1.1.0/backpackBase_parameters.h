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

// Function backpackBase.backpackBase_C.NewRamaVars
struct AbackpackBase_C_NewRamaVars_Params
{
};

// Function backpackBase.backpackBase_C.TransferInventory
struct AbackpackBase_C_TransferInventory_Params
{
	class UInventoryComponent_C*                       PlayerInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function backpackBase.backpackBase_C.ReconstructOldInventory
struct AbackpackBase_C_ReconstructOldInventory_Params
{
};

// Function backpackBase.backpackBase_C.checkBackpackEmpty
struct AbackpackBase_C_checkBackpackEmpty_Params
{
};

// Function backpackBase.backpackBase_C.UserConstructionScript
struct AbackpackBase_C_UserConstructionScript_Params
{
};

// Function backpackBase.backpackBase_C.ReceiveBeginPlay
struct AbackpackBase_C_ReceiveBeginPlay_Params
{
};

// Function backpackBase.backpackBase_C.ReceiveTick
struct AbackpackBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function backpackBase.backpackBase_C.BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct AbackpackBase_C_BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function backpackBase.backpackBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
struct AbackpackBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function backpackBase.backpackBase_C.DelayedPhysics
struct AbackpackBase_C_DelayedPhysics_Params
{
};

// Function backpackBase.backpackBase_C.Playerbinding
struct AbackpackBase_C_Playerbinding_Params
{
};

// Function backpackBase.backpackBase_C.RetryPlayerBind
struct AbackpackBase_C_RetryPlayerBind_Params
{
};

// Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase
struct AbackpackBase_C_ExecuteUbergraph_backpackBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
