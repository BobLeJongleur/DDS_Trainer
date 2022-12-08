
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

// Function SewerSectorTeleport.SewerSectorTeleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASewerSectorTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SewerSectorTeleport.SewerSectorTeleport_C.UserConstructionScript");

	ASewerSectorTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewerSectorTeleport.SewerSectorTeleport_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewerSectorTeleport_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewerSectorTeleport.SewerSectorTeleport_C.InteractionActivate");

	ASewerSectorTeleport_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewerSectorTeleport.SewerSectorTeleport_C.ExecuteUbergraph_SewerSectorTeleport
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewerSectorTeleport_C::ExecuteUbergraph_SewerSectorTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewerSectorTeleport.SewerSectorTeleport_C.ExecuteUbergraph_SewerSectorTeleport");

	ASewerSectorTeleport_C_ExecuteUbergraph_SewerSectorTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
