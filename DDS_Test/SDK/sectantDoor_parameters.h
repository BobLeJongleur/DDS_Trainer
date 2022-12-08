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

// Function sectantDoor.sectantDoor_C.CheckKnockPattern
struct AsectantDoor_C_CheckKnockPattern_Params
{
};

// Function sectantDoor.sectantDoor_C.AddKnock
struct AsectantDoor_C_AddKnock_Params
{
};

// Function sectantDoor.sectantDoor_C.UserConstructionScript
struct AsectantDoor_C_UserConstructionScript_Params
{
};

// Function sectantDoor.sectantDoor_C.ReceiveTick
struct AsectantDoor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sectantDoor.sectantDoor_C.InteractionActivate
struct AsectantDoor_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sectantDoor.sectantDoor_C.ExecuteUbergraph_sectantDoor
struct AsectantDoor_C_ExecuteUbergraph_sectantDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sectantDoor.sectantDoor_C.SectantDoorUnlocked__DelegateSignature
struct AsectantDoor_C_SectantDoorUnlocked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
