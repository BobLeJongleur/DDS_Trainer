
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

// Function dialShopDecorations.dialShopDecorations_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdialShopDecorations_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialShopDecorations.dialShopDecorations_C.UserConstructionScript");

	AdialShopDecorations_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialShopDecorations.dialShopDecorations_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdialShopDecorations_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialShopDecorations.dialShopDecorations_C.ReceiveBeginPlay");

	AdialShopDecorations_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialShopDecorations.dialShopDecorations_C.forceResetDialogue
// (BlueprintCallable, BlueprintEvent)

void AdialShopDecorations_C::forceResetDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialShopDecorations.dialShopDecorations_C.forceResetDialogue");

	AdialShopDecorations_C_forceResetDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialShopDecorations.dialShopDecorations_C.ExecuteUbergraph_dialShopDecorations
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdialShopDecorations_C::ExecuteUbergraph_dialShopDecorations(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialShopDecorations.dialShopDecorations_C.ExecuteUbergraph_dialShopDecorations");

	AdialShopDecorations_C_ExecuteUbergraph_dialShopDecorations_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
