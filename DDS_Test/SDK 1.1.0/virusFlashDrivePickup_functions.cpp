
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

// Function virusFlashDrivePickup.virusFlashDrivePickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AvirusFlashDrivePickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function virusFlashDrivePickup.virusFlashDrivePickup_C.UserConstructionScript");

	AvirusFlashDrivePickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function virusFlashDrivePickup.virusFlashDrivePickup_C.pickupEventScript
// (BlueprintCallable, BlueprintEvent)

void AvirusFlashDrivePickup_C::pickupEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function virusFlashDrivePickup.virusFlashDrivePickup_C.pickupEventScript");

	AvirusFlashDrivePickup_C_pickupEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function virusFlashDrivePickup.virusFlashDrivePickup_C.ExecuteUbergraph_virusFlashDrivePickup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AvirusFlashDrivePickup_C::ExecuteUbergraph_virusFlashDrivePickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function virusFlashDrivePickup.virusFlashDrivePickup_C.ExecuteUbergraph_virusFlashDrivePickup");

	AvirusFlashDrivePickup_C_ExecuteUbergraph_virusFlashDrivePickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
