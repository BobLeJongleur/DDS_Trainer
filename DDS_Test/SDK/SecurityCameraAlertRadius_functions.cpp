
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

// Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASecurityCameraAlertRadius_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.UserConstructionScript");

	ASecurityCameraAlertRadius_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASecurityCameraAlertRadius_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ReceiveBeginPlay");

	ASecurityCameraAlertRadius_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ExecuteUbergraph_SecurityCameraAlertRadius
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityCameraAlertRadius_C::ExecuteUbergraph_SecurityCameraAlertRadius(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ExecuteUbergraph_SecurityCameraAlertRadius");

	ASecurityCameraAlertRadius_C_ExecuteUbergraph_SecurityCameraAlertRadius_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
