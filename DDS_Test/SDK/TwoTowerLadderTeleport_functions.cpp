
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

// Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATwoTowerLadderTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.UserConstructionScript");

	ATwoTowerLadderTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATwoTowerLadderTeleport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.ReceiveBeginPlay");

	ATwoTowerLadderTeleport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATwoTowerLadderTeleport_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.InteractionActivate");

	ATwoTowerLadderTeleport_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.updateActivity
// (BlueprintCallable, BlueprintEvent)

void ATwoTowerLadderTeleport_C::updateActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.updateActivity");

	ATwoTowerLadderTeleport_C_updateActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.ExecuteUbergraph_TwoTowerLadderTeleport
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATwoTowerLadderTeleport_C::ExecuteUbergraph_TwoTowerLadderTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerLadderTeleport.TwoTowerLadderTeleport_C.ExecuteUbergraph_TwoTowerLadderTeleport");

	ATwoTowerLadderTeleport_C_ExecuteUbergraph_TwoTowerLadderTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
