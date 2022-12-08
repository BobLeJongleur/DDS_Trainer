
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

// Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModernVillaSlidingDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.UserConstructionScript");

	AModernVillaSlidingDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.Slide__FinishedFunc
// (BlueprintEvent)

void AModernVillaSlidingDoor_C::Slide__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.Slide__FinishedFunc");

	AModernVillaSlidingDoor_C_Slide__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.Slide__UpdateFunc
// (BlueprintEvent)

void AModernVillaSlidingDoor_C::Slide__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.Slide__UpdateFunc");

	AModernVillaSlidingDoor_C_Slide__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVillaSlidingDoor_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.InteractionActivate");

	AModernVillaSlidingDoor_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.closeDoor
// (BlueprintCallable, BlueprintEvent)

void AModernVillaSlidingDoor_C::closeDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.closeDoor");

	AModernVillaSlidingDoor_C_closeDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.autoClose
// (BlueprintCallable, BlueprintEvent)

void AModernVillaSlidingDoor_C::autoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.autoClose");

	AModernVillaSlidingDoor_C_autoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.ExecuteUbergraph_ModernVillaSlidingDoor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVillaSlidingDoor_C::ExecuteUbergraph_ModernVillaSlidingDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVillaSlidingDoor.ModernVillaSlidingDoor_C.ExecuteUbergraph_ModernVillaSlidingDoor");

	AModernVillaSlidingDoor_C_ExecuteUbergraph_ModernVillaSlidingDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
