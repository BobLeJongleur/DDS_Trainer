
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

// Function SectorB_PicnicAreaPrefab.SectorB_PicnicAreaPrefab_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectorB_PicnicAreaPrefab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorB_PicnicAreaPrefab.SectorB_PicnicAreaPrefab_C.UserConstructionScript");

	ASectorB_PicnicAreaPrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
