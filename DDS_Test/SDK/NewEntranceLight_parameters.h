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

// Function NewEntranceLight.NewEntranceLight_C.UserConstructionScript
struct ANewEntranceLight_C_UserConstructionScript_Params
{
};

// Function NewEntranceLight.NewEntranceLight_C.ReceiveBeginPlay
struct ANewEntranceLight_C_ReceiveBeginPlay_Params
{
};

// Function NewEntranceLight.NewEntranceLight_C.LightStateChanged
struct ANewEntranceLight_C_LightStateChanged_Params
{
	bool                                               LightVisible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CastShadows;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntranceLight.NewEntranceLight_C.ExecuteUbergraph_NewEntranceLight
struct ANewEntranceLight_C_ExecuteUbergraph_NewEntranceLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
