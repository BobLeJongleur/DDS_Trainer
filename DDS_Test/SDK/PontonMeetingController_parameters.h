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

// Function PontonMeetingController.PontonMeetingController_C.CheckCanSpawn
struct APontonMeetingController_C_CheckCanSpawn_Params
{
	bool                                               CanSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingController.PontonMeetingController_C.SwitchTalk
struct APontonMeetingController_C_SwitchTalk_Params
{
	bool                                               Talk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingController.PontonMeetingController_C.UserConstructionScript
struct APontonMeetingController_C_UserConstructionScript_Params
{
};

// Function PontonMeetingController.PontonMeetingController_C.ReceiveActorEndOverlap
struct APontonMeetingController_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingController.PontonMeetingController_C.ReceiveBeginPlay
struct APontonMeetingController_C_ReceiveBeginPlay_Params
{
};

// Function PontonMeetingController.PontonMeetingController_C.TrySpawnMeeters
struct APontonMeetingController_C_TrySpawnMeeters_Params
{
};

// Function PontonMeetingController.PontonMeetingController_C.ConfirmOneArrived
struct APontonMeetingController_C_ConfirmOneArrived_Params
{
	class AbaseNPC_C*                                  Meeter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingController.PontonMeetingController_C.BndEvt__breakDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APontonMeetingController_C_BndEvt__breakDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PontonMeetingController.PontonMeetingController_C.TestCanTalk
struct APontonMeetingController_C_TestCanTalk_Params
{
};

// Function PontonMeetingController.PontonMeetingController_C.KillMeeters
struct APontonMeetingController_C_KillMeeters_Params
{
};

// Function PontonMeetingController.PontonMeetingController_C.ExecuteUbergraph_PontonMeetingController
struct APontonMeetingController_C_ExecuteUbergraph_PontonMeetingController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
