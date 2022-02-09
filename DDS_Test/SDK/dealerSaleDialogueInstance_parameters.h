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

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.chooseKnowSomething
struct AdealerSaleDialogueInstance_C_chooseKnowSomething_Params
{
	TArray<struct FText>                               outResponses;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.UserConstructionScript
struct AdealerSaleDialogueInstance_C_UserConstructionScript_Params
{
};

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ConfigDialogue
struct AdealerSaleDialogueInstance_C_ConfigDialogue_Params
{
	bool                                               male;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ReceiveBeginPlay
struct AdealerSaleDialogueInstance_C_ReceiveBeginPlay_Params
{
};

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.gangUnlock
struct AdealerSaleDialogueInstance_C_gangUnlock_Params
{
};

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.askedAround
struct AdealerSaleDialogueInstance_C_askedAround_Params
{
};

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ExecuteUbergraph_dealerSaleDialogueInstance
struct AdealerSaleDialogueInstance_C_ExecuteUbergraph_dealerSaleDialogueInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
