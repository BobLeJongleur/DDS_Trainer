
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

// Function ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModernVilla_VillaCeilingBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C.UserConstructionScript");

	AModernVilla_VillaCeilingBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVilla_VillaCeilingBeam_C::SubclassSetActivity(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C.SubclassSetActivity");

	AModernVilla_VillaCeilingBeam_C_SubclassSetActivity_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C.ExecuteUbergraph_ModernVilla_VillaCeilingBeam
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVilla_VillaCeilingBeam_C::ExecuteUbergraph_ModernVilla_VillaCeilingBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C.ExecuteUbergraph_ModernVilla_VillaCeilingBeam");

	AModernVilla_VillaCeilingBeam_C_ExecuteUbergraph_ModernVilla_VillaCeilingBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
