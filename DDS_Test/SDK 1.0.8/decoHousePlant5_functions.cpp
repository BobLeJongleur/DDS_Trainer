
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

// Function decoHousePlant5.decoHousePlant5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoHousePlant5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoHousePlant5.decoHousePlant5_C.UserConstructionScript");

	AdecoHousePlant5_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
