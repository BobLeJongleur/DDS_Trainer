
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function weedMoneyTable.weedMoneyTable_C.depositeSafeMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedMoneyTable_C::depositeSafeMoney(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.depositeSafeMoney");

	AweedMoneyTable_C_depositeSafeMoney_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedMoneyTable.weedMoneyTable_C.parseInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> backpack                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    backpackQuan                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FinventoryItemStruct> pockets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    pocketQuan                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            quantityFound                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AweedMoneyTable_C::parseInventory(TArray<struct FinventoryItemStruct>* backpack, TArray<int>* backpackQuan, TArray<struct FinventoryItemStruct>* pockets, TArray<int>* pocketQuan, int* quantityFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.parseInventory");

	AweedMoneyTable_C_parseInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (backpack != nullptr)
		*backpack = params.backpack;
	if (backpackQuan != nullptr)
		*backpackQuan = params.backpackQuan;
	if (pockets != nullptr)
		*pockets = params.pockets;
	if (pocketQuan != nullptr)
		*pocketQuan = params.pocketQuan;
	if (quantityFound != nullptr)
		*quantityFound = params.quantityFound;
}


// Function weedMoneyTable.weedMoneyTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AweedMoneyTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.UserConstructionScript");

	AweedMoneyTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedMoneyTable.weedMoneyTable_C.tableActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedMoneyTable_C::tableActivated(class AplayerCharacterBP_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.tableActivated");

	AweedMoneyTable_C_tableActivated_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedMoneyTable.weedMoneyTable_C.ExecuteUbergraph_weedMoneyTable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedMoneyTable_C::ExecuteUbergraph_weedMoneyTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.ExecuteUbergraph_weedMoneyTable");

	AweedMoneyTable_C_ExecuteUbergraph_weedMoneyTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
