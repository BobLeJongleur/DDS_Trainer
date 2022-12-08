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

// Function VillaConstructionTable.VillaConstructionTable_C.UserConstructionScript
struct AVillaConstructionTable_C_UserConstructionScript_Params
{
};

// Function VillaConstructionTable.VillaConstructionTable_C.InteractionActivate
struct AVillaConstructionTable_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaConstructionTable.VillaConstructionTable_C.ExecuteUbergraph_VillaConstructionTable
struct AVillaConstructionTable_C_ExecuteUbergraph_VillaConstructionTable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
