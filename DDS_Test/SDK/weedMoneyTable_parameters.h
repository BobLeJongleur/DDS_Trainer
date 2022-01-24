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

// Function weedMoneyTable.weedMoneyTable_C.depositeSafeMoney
struct AweedMoneyTable_C_depositeSafeMoney_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weedMoneyTable.weedMoneyTable_C.parseInventory
struct AweedMoneyTable_C_parseInventory_Params
{
	TArray<struct FinventoryItemStruct>                Backpack;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        backpackQuan;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FinventoryItemStruct>                pockets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        pocketQuan;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                quantityFound;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weedMoneyTable.weedMoneyTable_C.UserConstructionScript
struct AweedMoneyTable_C_UserConstructionScript_Params
{
};

// Function weedMoneyTable.weedMoneyTable_C.tableActivated
struct AweedMoneyTable_C_tableActivated_Params
{
	class AplayerCharacterBP_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weedMoneyTable.weedMoneyTable_C.ExecuteUbergraph_weedMoneyTable
struct AweedMoneyTable_C_ExecuteUbergraph_weedMoneyTable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
