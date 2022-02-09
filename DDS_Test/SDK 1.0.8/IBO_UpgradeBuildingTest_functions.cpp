
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

// Function IBO_UpgradeBuildingTest.IBO_UpgradeBuildingTest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIBO_UpgradeBuildingTest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBO_UpgradeBuildingTest.IBO_UpgradeBuildingTest_C.UserConstructionScript");

	AIBO_UpgradeBuildingTest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
