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

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.UserConstructionScript
struct APontonMeetingPerson01_C_UserConstructionScript_Params
{
};

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.ReceiveBeginPlay
struct APontonMeetingPerson01_C_ReceiveBeginPlay_Params
{
};

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.ReceiveTick
struct APontonMeetingPerson01_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.SetTalking
struct APontonMeetingPerson01_C_SetTalking_Params
{
	struct FVector                                     LookAtLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Talking;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.TeleportMe
struct APontonMeetingPerson01_C_TeleportMe_Params
{
};

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.RamaLoadedEvent
struct APontonMeetingPerson01_C_RamaLoadedEvent_Params
{
};

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.ExecuteUbergraph_PontonMeetingPerson01
struct APontonMeetingPerson01_C_ExecuteUbergraph_PontonMeetingPerson01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
