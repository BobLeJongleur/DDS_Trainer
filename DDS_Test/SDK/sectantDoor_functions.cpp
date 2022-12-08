
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

// Function sectantDoor.sectantDoor_C.CheckKnockPattern
// (Public, BlueprintCallable, BlueprintEvent)

void AsectantDoor_C::CheckKnockPattern()
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoor.sectantDoor_C.CheckKnockPattern");

	AsectantDoor_C_CheckKnockPattern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoor.sectantDoor_C.AddKnock
// (Public, BlueprintCallable, BlueprintEvent)

void AsectantDoor_C::AddKnock()
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoor.sectantDoor_C.AddKnock");

	AsectantDoor_C_AddKnock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoor.sectantDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsectantDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoor.sectantDoor_C.UserConstructionScript");

	AsectantDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoor.sectantDoor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsectantDoor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoor.sectantDoor_C.ReceiveTick");

	AsectantDoor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoor.sectantDoor_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsectantDoor_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoor.sectantDoor_C.InteractionActivate");

	AsectantDoor_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoor.sectantDoor_C.ExecuteUbergraph_sectantDoor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsectantDoor_C::ExecuteUbergraph_sectantDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoor.sectantDoor_C.ExecuteUbergraph_sectantDoor");

	AsectantDoor_C_ExecuteUbergraph_sectantDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoor.sectantDoor_C.SectantDoorUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AsectantDoor_C::SectantDoorUnlocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoor.sectantDoor_C.SectantDoorUnlocked__DelegateSignature");

	AsectantDoor_C_SectantDoorUnlocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
