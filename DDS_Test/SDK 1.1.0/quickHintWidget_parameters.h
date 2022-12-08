#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function quickHintWidget.quickHintWidget_C.Construct
struct UquickHintWidget_C_Construct_Params
{
};

// Function quickHintWidget.quickHintWidget_C.Tick
struct UquickHintWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function quickHintWidget.quickHintWidget_C.Setup
struct UquickHintWidget_C_Setup_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EquickHintType>                        Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function quickHintWidget.quickHintWidget_C.ExecuteUbergraph_quickHintWidget
struct UquickHintWidget_C_ExecuteUbergraph_quickHintWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
