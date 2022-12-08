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

// Function VillaRoomInstance.VillaRoomInstance_C.ToggleLights
struct AVillaRoomInstance_C_ToggleLights_Params
{
};

// Function VillaRoomInstance.VillaRoomInstance_C.UserConstructionScript
struct AVillaRoomInstance_C_UserConstructionScript_Params
{
};

// Function VillaRoomInstance.VillaRoomInstance_C.ReceiveBeginPlay
struct AVillaRoomInstance_C_ReceiveBeginPlay_Params
{
};

// Function VillaRoomInstance.VillaRoomInstance_C.ReceiveActorBeginOverlap
struct AVillaRoomInstance_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaRoomInstance.VillaRoomInstance_C.ReceiveActorEndOverlap
struct AVillaRoomInstance_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaRoomInstance.VillaRoomInstance_C.OverlapEnter
struct AVillaRoomInstance_C_OverlapEnter_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaRoomInstance.VillaRoomInstance_C.OverlapLeave
struct AVillaRoomInstance_C_OverlapLeave_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaRoomInstance.VillaRoomInstance_C.LightChangedMaster
struct AVillaRoomInstance_C_LightChangedMaster_Params
{
};

// Function VillaRoomInstance.VillaRoomInstance_C.ExecuteUbergraph_VillaRoomInstance
struct AVillaRoomInstance_C_ExecuteUbergraph_VillaRoomInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaRoomInstance.VillaRoomInstance_C.MasterLightsChange__DelegateSignature
struct AVillaRoomInstance_C_MasterLightsChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
