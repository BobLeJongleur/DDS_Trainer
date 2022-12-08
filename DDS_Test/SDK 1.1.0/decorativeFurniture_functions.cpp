
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

// Function decorativeFurniture.decorativeFurniture_C.respawnFurniture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdecorativeFurniture_C::respawnFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.respawnFurniture");

	AdecorativeFurniture_C_respawnFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecorativeFurniture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript");

	AdecorativeFurniture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecorativeFurniture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.ReceiveBeginPlay");

	AdecorativeFurniture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    PlayerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecorativeFurniture_C::InteractionActivate(class AplayerCharacterBP_C* PlayerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.InteractionActivate");

	AdecorativeFurniture_C_InteractionActivate_Params params;
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void AdecorativeFurniture_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.InputToggleOn");

	AdecorativeFurniture_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void AdecorativeFurniture_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.InputToggleOff");

	AdecorativeFurniture_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.ExecuteUbergraph_decorativeFurniture
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecorativeFurniture_C::ExecuteUbergraph_decorativeFurniture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.ExecuteUbergraph_decorativeFurniture");

	AdecorativeFurniture_C_ExecuteUbergraph_decorativeFurniture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
