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

// Function NewStreetLantern.NewStreetLantern_C.UserConstructionScript
struct ANewStreetLantern_C_UserConstructionScript_Params
{
};

// Function NewStreetLantern.NewStreetLantern_C.LightStateChanged
struct ANewStreetLantern_C_LightStateChanged_Params
{
	bool                                               LightVisible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CastShadows;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewStreetLantern.NewStreetLantern_C.ExecuteUbergraph_NewStreetLantern
struct ANewStreetLantern_C_ExecuteUbergraph_NewStreetLantern_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
