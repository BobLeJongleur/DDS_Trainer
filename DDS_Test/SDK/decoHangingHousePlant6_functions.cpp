
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

// Function decoHangingHousePlant6.decoHangingHousePlant6_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoHangingHousePlant6_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoHangingHousePlant6.decoHangingHousePlant6_C.UserConstructionScript");

	AdecoHangingHousePlant6_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
