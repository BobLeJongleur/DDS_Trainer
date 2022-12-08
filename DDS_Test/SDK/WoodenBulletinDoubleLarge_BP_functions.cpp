
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

// Function WoodenBulletinDoubleLarge_BP.WoodenBulletinDoubleLarge_BP_C.SetLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightsOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWoodenBulletinDoubleLarge_BP_C::SetLights(bool LightsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodenBulletinDoubleLarge_BP.WoodenBulletinDoubleLarge_BP_C.SetLights");

	AWoodenBulletinDoubleLarge_BP_C_SetLights_Params params;
	params.LightsOn = LightsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodenBulletinDoubleLarge_BP.WoodenBulletinDoubleLarge_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWoodenBulletinDoubleLarge_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodenBulletinDoubleLarge_BP.WoodenBulletinDoubleLarge_BP_C.UserConstructionScript");

	AWoodenBulletinDoubleLarge_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
