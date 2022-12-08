
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

// Function trashFurnitureArtits.trashFurnitureArtits_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtrashFurnitureArtits_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function trashFurnitureArtits.trashFurnitureArtits_C.UserConstructionScript");

	AtrashFurnitureArtits_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trashFurnitureArtits.trashFurnitureArtits_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AtrashFurnitureArtits_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function trashFurnitureArtits.trashFurnitureArtits_C.ReceiveBeginPlay");

	AtrashFurnitureArtits_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trashFurnitureArtits.trashFurnitureArtits_C.ExecuteUbergraph_trashFurnitureArtits
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtrashFurnitureArtits_C::ExecuteUbergraph_trashFurnitureArtits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function trashFurnitureArtits.trashFurnitureArtits_C.ExecuteUbergraph_trashFurnitureArtits");

	AtrashFurnitureArtits_C_ExecuteUbergraph_trashFurnitureArtits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
