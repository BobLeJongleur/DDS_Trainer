
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

// Function ThePalace_Barrier.ThePalace_Barrier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AThePalace_Barrier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThePalace_Barrier.ThePalace_Barrier_C.UserConstructionScript");

	AThePalace_Barrier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
