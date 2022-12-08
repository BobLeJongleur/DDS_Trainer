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

// Function SewerSectorTeleport.SewerSectorTeleport_C.UserConstructionScript
struct ASewerSectorTeleport_C_UserConstructionScript_Params
{
};

// Function SewerSectorTeleport.SewerSectorTeleport_C.InteractionActivate
struct ASewerSectorTeleport_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SewerSectorTeleport.SewerSectorTeleport_C.ExecuteUbergraph_SewerSectorTeleport
struct ASewerSectorTeleport_C_ExecuteUbergraph_SewerSectorTeleport_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
