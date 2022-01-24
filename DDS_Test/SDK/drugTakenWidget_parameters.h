#pragma once

#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function drugTakenWidget.drugTakenWidget_C.Construct
struct UdrugTakenWidget_C_Construct_Params
{
};

// Function drugTakenWidget.drugTakenWidget_C.Setup
struct UdrugTakenWidget_C_Setup_Params
{
	struct FText                                       DrugName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function drugTakenWidget.drugTakenWidget_C.ExecuteUbergraph_drugTakenWidget
struct UdrugTakenWidget_C_ExecuteUbergraph_drugTakenWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
