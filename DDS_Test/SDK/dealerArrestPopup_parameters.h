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

// Function dealerArrestPopup.dealerArrestPopup_C.Construct
struct UdealerArrestPopup_C_Construct_Params
{
};

// Function dealerArrestPopup.dealerArrestPopup_C.Setup
struct UdealerArrestPopup_C_Setup_Params
{
	struct FText                                       ClientName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Released;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dealerArrestPopup.dealerArrestPopup_C.killMe
struct UdealerArrestPopup_C_killMe_Params
{
};

// Function dealerArrestPopup.dealerArrestPopup_C.ExecuteUbergraph_dealerArrestPopup
struct UdealerArrestPopup_C_ExecuteUbergraph_dealerArrestPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
