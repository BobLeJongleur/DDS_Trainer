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

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.UserConstructionScript
struct APontonMeetingPerson02_C_UserConstructionScript_Params
{
};

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.ReceiveBeginPlay
struct APontonMeetingPerson02_C_ReceiveBeginPlay_Params
{
};

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.ReceiveTick
struct APontonMeetingPerson02_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.SetTalking
struct APontonMeetingPerson02_C_SetTalking_Params
{
	struct FVector                                     LookAtLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Talking;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.TeleportMe
struct APontonMeetingPerson02_C_TeleportMe_Params
{
};

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.RamaLoadedEvent
struct APontonMeetingPerson02_C_RamaLoadedEvent_Params
{
};

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.ExecuteUbergraph_PontonMeetingPerson02
struct APontonMeetingPerson02_C_ExecuteUbergraph_PontonMeetingPerson02_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
