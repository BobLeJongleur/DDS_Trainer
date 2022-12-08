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

// Function FactoryGateDoor.FactoryGateDoor_C.HasPlayerKeys
struct AFactoryGateDoor_C_HasPlayerKeys_Params
{
	class AplayerCharacterBP_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasKeys;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FactoryGateDoor.FactoryGateDoor_C.UserConstructionScript
struct AFactoryGateDoor_C_UserConstructionScript_Params
{
};

// Function FactoryGateDoor.FactoryGateDoor_C.InteractionActivate
struct AFactoryGateDoor_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FactoryGateDoor.FactoryGateDoor_C.Reopen
struct AFactoryGateDoor_C_Reopen_Params
{
};

// Function FactoryGateDoor.FactoryGateDoor_C.ExecuteUbergraph_FactoryGateDoor
struct AFactoryGateDoor_C_ExecuteUbergraph_FactoryGateDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
