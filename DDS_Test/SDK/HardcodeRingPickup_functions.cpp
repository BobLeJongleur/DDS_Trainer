
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

// Function HardcodeRingPickup.HardcodeRingPickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHardcodeRingPickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HardcodeRingPickup.HardcodeRingPickup_C.UserConstructionScript");

	AHardcodeRingPickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HardcodeRingPickup.HardcodeRingPickup_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHardcodeRingPickup_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function HardcodeRingPickup.HardcodeRingPickup_C.InteractionActivate");

	AHardcodeRingPickup_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HardcodeRingPickup.HardcodeRingPickup_C.ExecuteUbergraph_HardcodeRingPickup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHardcodeRingPickup_C::ExecuteUbergraph_HardcodeRingPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HardcodeRingPickup.HardcodeRingPickup_C.ExecuteUbergraph_HardcodeRingPickup");

	AHardcodeRingPickup_C_ExecuteUbergraph_HardcodeRingPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
