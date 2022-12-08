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

// Function halogenLightBP.halogenLightBP_C.lightTest
struct AhalogenLightBP_C_lightTest_Params
{
};

// Function halogenLightBP.halogenLightBP_C.UserConstructionScript
struct AhalogenLightBP_C_UserConstructionScript_Params
{
};

// Function halogenLightBP.halogenLightBP_C.ReceiveBeginPlay
struct AhalogenLightBP_C_ReceiveBeginPlay_Params
{
};

// Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AhalogenLightBP_C_BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AhalogenLightBP_C_BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function halogenLightBP.halogenLightBP_C.endDetected
struct AhalogenLightBP_C_endDetected_Params
{
};

// Function halogenLightBP.halogenLightBP_C.turnLightOn
struct AhalogenLightBP_C_turnLightOn_Params
{
};

// Function halogenLightBP.halogenLightBP_C.turnLightOff
struct AhalogenLightBP_C_turnLightOff_Params
{
};

// Function halogenLightBP.halogenLightBP_C.ToggleShadows
struct AhalogenLightBP_C_ToggleShadows_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function halogenLightBP.halogenLightBP_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AhalogenLightBP_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function halogenLightBP.halogenLightBP_C.ExecuteUbergraph_halogenLightBP
struct AhalogenLightBP_C_ExecuteUbergraph_halogenLightBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
