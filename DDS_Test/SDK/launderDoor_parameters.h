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

// Function launderDoor.launderDoor_C.CheckAvailable
struct AlaunderDoor_C_CheckAvailable_Params
{
	bool                                               IsAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function launderDoor.launderDoor_C.GetChanceNooneHome
struct AlaunderDoor_C_GetChanceNooneHome_Params
{
	bool                                               NooneHome;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function launderDoor.launderDoor_C.GetOpenReactionTime
struct AlaunderDoor_C_GetOpenReactionTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function launderDoor.launderDoor_C.UserConstructionScript
struct AlaunderDoor_C_UserConstructionScript_Params
{
};

// Function launderDoor.launderDoor_C.LongRadiusChanged
struct AlaunderDoor_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function launderDoor.launderDoor_C.ReceiveBeginPlay
struct AlaunderDoor_C_ReceiveBeginPlay_Params
{
};

// Function launderDoor.launderDoor_C.ReceiveTick
struct AlaunderDoor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function launderDoor.launderDoor_C.InteractionActivate
struct AlaunderDoor_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function launderDoor.launderDoor_C.OpenKnock
struct AlaunderDoor_C_OpenKnock_Params
{
};

// Function launderDoor.launderDoor_C.ShortRadiusChanged
struct AlaunderDoor_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function launderDoor.launderDoor_C.OpenKnock2
struct AlaunderDoor_C_OpenKnock2_Params
{
};

// Function launderDoor.launderDoor_C.VerifyAvailability
struct AlaunderDoor_C_VerifyAvailability_Params
{
};

// Function launderDoor.launderDoor_C.ExecuteUbergraph_launderDoor
struct AlaunderDoor_C_ExecuteUbergraph_launderDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
