
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

// Function TrashBin_LargeContainer.TrashBin_LargeContainer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrashBin_LargeContainer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrashBin_LargeContainer.TrashBin_LargeContainer_C.UserConstructionScript");

	ATrashBin_LargeContainer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
