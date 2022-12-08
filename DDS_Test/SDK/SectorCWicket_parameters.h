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

// Function SectorCWicket.SectorCWicket_C.UserConstructionScript
struct ASectorCWicket_C_UserConstructionScript_Params
{
};

// Function SectorCWicket.SectorCWicket_C.LongRadiusChanged
struct ASectorCWicket_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SectorCWicket.SectorCWicket_C.eventDoorActivated
struct ASectorCWicket_C_eventDoorActivated_Params
{
};

// Function SectorCWicket.SectorCWicket_C.ShortRadiusChanged
struct ASectorCWicket_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SectorCWicket.SectorCWicket_C.ExecuteUbergraph_SectorCWicket
struct ASectorCWicket_C_ExecuteUbergraph_SectorCWicket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
