
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

// Function FactoryGateDoor.FactoryGateDoor_C.HasPlayerKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasKeys                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFactoryGateDoor_C::HasPlayerKeys(class AplayerCharacterBP_C* Player, bool* HasKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.HasPlayerKeys");

	AFactoryGateDoor_C_HasPlayerKeys_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasKeys != nullptr)
		*HasKeys = params.HasKeys;
}


// Function FactoryGateDoor.FactoryGateDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFactoryGateDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.UserConstructionScript");

	AFactoryGateDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FactoryGateDoor.FactoryGateDoor_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFactoryGateDoor_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.InteractionActivate");

	AFactoryGateDoor_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FactoryGateDoor.FactoryGateDoor_C.Reopen
// (BlueprintCallable, BlueprintEvent)

void AFactoryGateDoor_C::Reopen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.Reopen");

	AFactoryGateDoor_C_Reopen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FactoryGateDoor.FactoryGateDoor_C.ExecuteUbergraph_FactoryGateDoor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFactoryGateDoor_C::ExecuteUbergraph_FactoryGateDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.ExecuteUbergraph_FactoryGateDoor");

	AFactoryGateDoor_C_ExecuteUbergraph_FactoryGateDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
