
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BU_ManagerActor.BP_BU_ManagerActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BU_ManagerActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BU_ManagerActor.BP_BU_ManagerActor_C.UserConstructionScript");

	ABP_BU_ManagerActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
