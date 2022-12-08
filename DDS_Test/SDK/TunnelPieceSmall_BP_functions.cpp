
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

// Function TunnelPieceSmall_BP.TunnelPieceSmall_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATunnelPieceSmall_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelPieceSmall_BP.TunnelPieceSmall_BP_C.UserConstructionScript");

	ATunnelPieceSmall_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
