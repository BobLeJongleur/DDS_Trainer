
#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function smugglerShopSectorC.smugglerShopSectorC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsmugglerShopSectorC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopSectorC.smugglerShopSectorC_C.UserConstructionScript");

	AsmugglerShopSectorC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smugglerShopSectorC.smugglerShopSectorC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsmugglerShopSectorC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopSectorC.smugglerShopSectorC_C.ReceiveBeginPlay");

	AsmugglerShopSectorC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smugglerShopSectorC.smugglerShopSectorC_C.ExecuteUbergraph_smugglerShopSectorC
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsmugglerShopSectorC_C::ExecuteUbergraph_smugglerShopSectorC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopSectorC.smugglerShopSectorC_C.ExecuteUbergraph_smugglerShopSectorC");

	AsmugglerShopSectorC_C_ExecuteUbergraph_smugglerShopSectorC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
