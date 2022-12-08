
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

// Function VillaRenovationActivator.VillaRenovationActivator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaRenovationActivator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationActivator.VillaRenovationActivator_C.UserConstructionScript");

	AVillaRenovationActivator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRenovationActivator.VillaRenovationActivator_C.Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaRenovationActivator_C::Activated(class AplayerCharacterBP_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationActivator.VillaRenovationActivator_C.Activated");

	AVillaRenovationActivator_C_Activated_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRenovationActivator.VillaRenovationActivator_C.ExecuteUbergraph_VillaRenovationActivator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaRenovationActivator_C::ExecuteUbergraph_VillaRenovationActivator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationActivator.VillaRenovationActivator_C.ExecuteUbergraph_VillaRenovationActivator");

	AVillaRenovationActivator_C_ExecuteUbergraph_VillaRenovationActivator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRenovationActivator.VillaRenovationActivator_C.RenovationModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AVillaRenovationActivator_C::RenovationModeChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationActivator.VillaRenovationActivator_C.RenovationModeChanged__DelegateSignature");

	AVillaRenovationActivator_C_RenovationModeChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
