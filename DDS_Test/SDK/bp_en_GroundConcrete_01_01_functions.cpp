
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

// Function bp_en_GroundConcrete_01_01.bp_en_GroundConcrete_01_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_en_GroundConcrete_01_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_en_GroundConcrete_01_01.bp_en_GroundConcrete_01_01_C.UserConstructionScript");

	Abp_en_GroundConcrete_01_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
