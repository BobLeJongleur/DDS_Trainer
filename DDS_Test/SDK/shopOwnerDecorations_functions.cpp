
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function shopOwnerDecorations.shopOwnerDecorations_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AshopOwnerDecorations_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopOwnerDecorations.shopOwnerDecorations_C.UserConstructionScript");

	AshopOwnerDecorations_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopOwnerDecorations.shopOwnerDecorations_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AshopOwnerDecorations_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopOwnerDecorations.shopOwnerDecorations_C.ReceiveBeginPlay");

	AshopOwnerDecorations_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopOwnerDecorations.shopOwnerDecorations_C.ExecuteUbergraph_shopOwnerDecorations
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AshopOwnerDecorations_C::ExecuteUbergraph_shopOwnerDecorations(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shopOwnerDecorations.shopOwnerDecorations_C.ExecuteUbergraph_shopOwnerDecorations");

	AshopOwnerDecorations_C_ExecuteUbergraph_shopOwnerDecorations_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
