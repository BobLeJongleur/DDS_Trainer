
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

// Function ProceduralSidewalk400.ProceduralSidewalk400_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProceduralSidewalk400_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralSidewalk400.ProceduralSidewalk400_C.UserConstructionScript");

	AProceduralSidewalk400_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
