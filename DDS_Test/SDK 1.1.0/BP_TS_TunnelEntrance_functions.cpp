
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

// Function BP_TS_TunnelEntrance.BP_TS_TunnelEntrance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TS_TunnelEntrance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TS_TunnelEntrance.BP_TS_TunnelEntrance_C.UserConstructionScript");

	ABP_TS_TunnelEntrance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
