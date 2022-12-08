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

// Function OutputTableWidget.OutputTableWidget_C.Get_txtPercent_Visibility_1
struct UOutputTableWidget_C_Get_txtPercent_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OutputTableWidget.OutputTableWidget_C.GetTime
struct UOutputTableWidget_C_GetTime_Params
{
	float                                              TimeSecondsLeft;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Time;                                                     // (Parm, OutParm)
};

// Function OutputTableWidget.OutputTableWidget_C.Construct
struct UOutputTableWidget_C_Construct_Params
{
};

// Function OutputTableWidget.OutputTableWidget_C.Tick
struct UOutputTableWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutputTableWidget.OutputTableWidget_C.setup
struct UOutputTableWidget_C_setup_Params
{
	class AlabPrefabMaster_C*                          LabPrefab;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutputTableWidget.OutputTableWidget_C.Update
struct UOutputTableWidget_C_Update_Params
{
};

// Function OutputTableWidget.OutputTableWidget_C.ExecuteUbergraph_OutputTableWidget
struct UOutputTableWidget_C_ExecuteUbergraph_OutputTableWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
