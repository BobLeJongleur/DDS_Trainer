
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

// Function shopExpositionModel_HangingPlant.shopExpositionModel_HangingPlant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AshopExpositionModel_HangingPlant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopExpositionModel_HangingPlant.shopExpositionModel_HangingPlant_C.UserConstructionScript");

	AshopExpositionModel_HangingPlant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
