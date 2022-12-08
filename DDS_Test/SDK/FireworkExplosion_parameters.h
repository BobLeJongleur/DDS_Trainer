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

// Function FireworkExplosion.FireworkExplosion_C.UserConstructionScript
struct AFireworkExplosion_C_UserConstructionScript_Params
{
};

// Function FireworkExplosion.FireworkExplosion_C.ReceiveTick
struct AFireworkExplosion_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FireworkExplosion.FireworkExplosion_C.ExecuteUbergraph_FireworkExplosion
struct AFireworkExplosion_C_ExecuteUbergraph_FireworkExplosion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
