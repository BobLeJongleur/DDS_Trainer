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

// Function deaRaidCounterWidget.deaRaidCounterWidget_C.SecondsToTime
struct UdeaRaidCounterWidget_C_SecondsToTime_Params
{
	int                                                Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       timeText;                                                 // (Parm, OutParm)
};

// Function deaRaidCounterWidget.deaRaidCounterWidget_C.Construct
struct UdeaRaidCounterWidget_C_Construct_Params
{
};

// Function deaRaidCounterWidget.deaRaidCounterWidget_C.setup
struct UdeaRaidCounterWidget_C_setup_Params
{
	int                                                baseSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function deaRaidCounterWidget.deaRaidCounterWidget_C.updateCountdown
struct UdeaRaidCounterWidget_C_updateCountdown_Params
{
	bool                                               Drama;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                leftSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function deaRaidCounterWidget.deaRaidCounterWidget_C.killWidget
struct UdeaRaidCounterWidget_C_killWidget_Params
{
};

// Function deaRaidCounterWidget.deaRaidCounterWidget_C.ExecuteUbergraph_deaRaidCounterWidget
struct UdeaRaidCounterWidget_C_ExecuteUbergraph_deaRaidCounterWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
