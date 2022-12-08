
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

// Function InteractionInterface.InteractionInterface_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    PlayerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractionInterface_C::InteractionActivate(class AplayerCharacterBP_C* PlayerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionInterface.InteractionInterface_C.InteractionActivate");

	UInteractionInterface_C_InteractionActivate_Params params;
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
