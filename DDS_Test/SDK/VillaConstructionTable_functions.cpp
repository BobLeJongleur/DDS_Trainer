
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

// Function VillaConstructionTable.VillaConstructionTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaConstructionTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionTable.VillaConstructionTable_C.UserConstructionScript");

	AVillaConstructionTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionTable.VillaConstructionTable_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaConstructionTable_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionTable.VillaConstructionTable_C.InteractionActivate");

	AVillaConstructionTable_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionTable.VillaConstructionTable_C.ExecuteUbergraph_VillaConstructionTable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaConstructionTable_C::ExecuteUbergraph_VillaConstructionTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionTable.VillaConstructionTable_C.ExecuteUbergraph_VillaConstructionTable");

	AVillaConstructionTable_C_ExecuteUbergraph_VillaConstructionTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
