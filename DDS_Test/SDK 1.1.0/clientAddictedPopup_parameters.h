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

// Function clientAddictedPopup.clientAddictedPopup_C.Construct
struct UclientAddictedPopup_C_Construct_Params
{
};

// Function clientAddictedPopup.clientAddictedPopup_C.Setup
struct UclientAddictedPopup_C_Setup_Params
{
	struct FText                                       ClientName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ClientAddictionDrug;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function clientAddictedPopup.clientAddictedPopup_C.ExecuteUbergraph_clientAddictedPopup
struct UclientAddictedPopup_C_ExecuteUbergraph_clientAddictedPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
