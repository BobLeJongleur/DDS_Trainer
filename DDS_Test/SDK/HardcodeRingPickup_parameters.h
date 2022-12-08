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

// Function HardcodeRingPickup.HardcodeRingPickup_C.UserConstructionScript
struct AHardcodeRingPickup_C_UserConstructionScript_Params
{
};

// Function HardcodeRingPickup.HardcodeRingPickup_C.InteractionActivate
struct AHardcodeRingPickup_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HardcodeRingPickup.HardcodeRingPickup_C.ExecuteUbergraph_HardcodeRingPickup
struct AHardcodeRingPickup_C_ExecuteUbergraph_HardcodeRingPickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
