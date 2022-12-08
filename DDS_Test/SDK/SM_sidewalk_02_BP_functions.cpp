
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

// Function SM_sidewalk_02_BP.SM_sidewalk_02_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASM_sidewalk_02_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_sidewalk_02_BP.SM_sidewalk_02_BP_C.UserConstructionScript");

	ASM_sidewalk_02_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
