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

// Function dealerMurderPopup.dealerMurderPopup_C.Construct
struct UdealerMurderPopup_C_Construct_Params
{
};

// Function dealerMurderPopup.dealerMurderPopup_C.setup
struct UdealerMurderPopup_C_setup_Params
{
	struct FText                                       ClientName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ClientOverdoseDrug;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function dealerMurderPopup.dealerMurderPopup_C.killMe
struct UdealerMurderPopup_C_killMe_Params
{
};

// Function dealerMurderPopup.dealerMurderPopup_C.ExecuteUbergraph_dealerMurderPopup
struct UdealerMurderPopup_C_ExecuteUbergraph_dealerMurderPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
