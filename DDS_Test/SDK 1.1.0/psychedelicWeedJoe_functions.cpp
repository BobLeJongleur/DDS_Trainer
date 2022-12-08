
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

// Function psychedelicWeedJoe.psychedelicWeedJoe_C.getReturnLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMixProportionsStruct> ItemMixes                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Quantities                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Amounts                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Trade_canceled                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FdialogueData           ReturnData                     (Parm, OutParm)
// TArray<int>                    ReturnIndexes                  (Parm, OutParm, ZeroConstructor)

void ApsychedelicWeedJoe_C::getReturnLine(bool Trade_canceled, TArray<struct FinventoryItemStruct>* Items, TArray<struct FMixProportionsStruct>* ItemMixes, TArray<int>* Quantities, TArray<int>* Amounts, struct FdialogueData* ReturnData, TArray<int>* ReturnIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.getReturnLine");

	ApsychedelicWeedJoe_C_getReturnLine_Params params;
	params.Trade_canceled = Trade_canceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (ItemMixes != nullptr)
		*ItemMixes = params.ItemMixes;
	if (Quantities != nullptr)
		*Quantities = params.Quantities;
	if (Amounts != nullptr)
		*Amounts = params.Amounts;
	if (ReturnData != nullptr)
		*ReturnData = params.ReturnData;
	if (ReturnIndexes != nullptr)
		*ReturnIndexes = params.ReturnIndexes;
}


// Function psychedelicWeedJoe.psychedelicWeedJoe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApsychedelicWeedJoe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.UserConstructionScript");

	ApsychedelicWeedJoe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicWeedJoe.psychedelicWeedJoe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApsychedelicWeedJoe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.ReceiveBeginPlay");

	ApsychedelicWeedJoe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicWeedJoe.psychedelicWeedJoe_C.retryInitiate
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicWeedJoe_C::retryInitiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.retryInitiate");

	ApsychedelicWeedJoe_C_retryInitiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicWeedJoe.psychedelicWeedJoe_C.ExecuteUbergraph_psychedelicWeedJoe
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApsychedelicWeedJoe_C::ExecuteUbergraph_psychedelicWeedJoe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.ExecuteUbergraph_psychedelicWeedJoe");

	ApsychedelicWeedJoe_C_ExecuteUbergraph_psychedelicWeedJoe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
