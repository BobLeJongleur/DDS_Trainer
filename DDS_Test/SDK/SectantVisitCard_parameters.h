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

// Function SectantVisitCard.SectantVisitCard_C.UserConstructionScript
struct ASectantVisitCard_C_UserConstructionScript_Params
{
};

// Function SectantVisitCard.SectantVisitCard_C.InteractionActivate
struct ASectantVisitCard_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SectantVisitCard.SectantVisitCard_C.ExecuteUbergraph_SectantVisitCard
struct ASectantVisitCard_C_ExecuteUbergraph_SectantVisitCard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
