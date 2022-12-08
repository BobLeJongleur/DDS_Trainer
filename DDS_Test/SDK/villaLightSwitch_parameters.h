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

// Function villaLightSwitch.villaLightSwitch_C.UserConstructionScript
struct AvillaLightSwitch_C_UserConstructionScript_Params
{
};

// Function villaLightSwitch.villaLightSwitch_C.InteractionActivate
struct AvillaLightSwitch_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function villaLightSwitch.villaLightSwitch_C.SetActivity
struct AvillaLightSwitch_C_SetActivity_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function villaLightSwitch.villaLightSwitch_C.ExecuteUbergraph_villaLightSwitch
struct AvillaLightSwitch_C_ExecuteUbergraph_villaLightSwitch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
