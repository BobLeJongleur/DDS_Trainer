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

// Function policePatrolPoint.policePatrolPoint_C.UserConstructionScript
struct ApolicePatrolPoint_C_UserConstructionScript_Params
{
};

// Function policePatrolPoint.policePatrolPoint_C.ShortRadiusChanged
struct ApolicePatrolPoint_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolPoint.policePatrolPoint_C.LongRadiusChanged
struct ApolicePatrolPoint_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolPoint.policePatrolPoint_C.ExecuteUbergraph_policePatrolPoint
struct ApolicePatrolPoint_C_ExecuteUbergraph_policePatrolPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
