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

// Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase
struct AbackpackBase_C_ExecuteUbergraph_backpackBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
