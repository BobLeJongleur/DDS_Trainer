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

// Function policePenaltyWidget.policePenaltyWidget_C.Construct
struct UpolicePenaltyWidget_C_Construct_Params
{
};

// Function policePenaltyWidget.policePenaltyWidget_C.Setup
struct UpolicePenaltyWidget_C_Setup_Params
{
	struct FText                                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policePenaltyWidget.policePenaltyWidget_C.ExecuteUbergraph_policePenaltyWidget
struct UpolicePenaltyWidget_C_ExecuteUbergraph_policePenaltyWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
