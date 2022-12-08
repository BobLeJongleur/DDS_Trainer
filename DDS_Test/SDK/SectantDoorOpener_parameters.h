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

// Function SectantDoorOpener.SectantDoorOpener_C.UserConstructionScript
struct ASectantDoorOpener_C_UserConstructionScript_Params
{
};

// Function SectantDoorOpener.SectantDoorOpener_C.BndEvt__DialogueOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ASectantDoorOpener_C_BndEvt__DialogueOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SectantDoorOpener.SectantDoorOpener_C.RamaLoadedEvent
struct ASectantDoorOpener_C_RamaLoadedEvent_Params
{
};

// Function SectantDoorOpener.SectantDoorOpener_C.ExecuteUbergraph_SectantDoorOpener
struct ASectantDoorOpener_C_ExecuteUbergraph_SectantDoorOpener_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
