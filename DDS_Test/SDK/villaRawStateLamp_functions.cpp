
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

// Function villaRawStateLamp.villaRawStateLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AvillaRawStateLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaRawStateLamp.villaRawStateLamp_C.UserConstructionScript");

	AvillaRawStateLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
