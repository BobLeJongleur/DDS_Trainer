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

// Function SecurityCamera.SecurityCamera_C.UserConstructionScript
struct ASecurityCamera_C_UserConstructionScript_Params
{
};

// Function SecurityCamera.SecurityCamera_C.Reactivate
struct ASecurityCamera_C_Reactivate_Params
{
};

// Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ASecurityCamera_C_BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ASecurityCamera_C_BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCamera.SecurityCamera_C.TriggerAlarm
struct ASecurityCamera_C_TriggerAlarm_Params
{
};

// Function SecurityCamera.SecurityCamera_C.StopAlarm
struct ASecurityCamera_C_StopAlarm_Params
{
};

// Function SecurityCamera.SecurityCamera_C.PowerChanged
struct ASecurityCamera_C_PowerChanged_Params
{
};

// Function SecurityCamera.SecurityCamera_C.RestorePower
struct ASecurityCamera_C_RestorePower_Params
{
};

// Function SecurityCamera.SecurityCamera_C.RetryLineTrace
struct ASecurityCamera_C_RetryLineTrace_Params
{
};

// Function SecurityCamera.SecurityCamera_C.SetActivity
struct ASecurityCamera_C_SetActivity_Params
{
	bool                                               NewActivity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCamera.SecurityCamera_C.ReceiveTick
struct ASecurityCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCamera.SecurityCamera_C.ReceiveBeginPlay
struct ASecurityCamera_C_ReceiveBeginPlay_Params
{
};

// Function SecurityCamera.SecurityCamera_C.LongRadiusChanged
struct ASecurityCamera_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCamera.SecurityCamera_C.ShortRadiusChanged
struct ASecurityCamera_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityCamera.SecurityCamera_C.ExecuteUbergraph_SecurityCamera
struct ASecurityCamera_C_ExecuteUbergraph_SecurityCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
