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

// Function oneTaskWidget.oneTaskWidget_C.Construct
struct UoneTaskWidget_C_Construct_Params
{
};

// Function oneTaskWidget.oneTaskWidget_C.setup
struct UoneTaskWidget_C_setup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function oneTaskWidget.oneTaskWidget_C.ExecuteUbergraph_oneTaskWidget
struct UoneTaskWidget_C_ExecuteUbergraph_oneTaskWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
