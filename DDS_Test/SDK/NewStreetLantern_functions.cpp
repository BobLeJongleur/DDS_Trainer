
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

// Function NewStreetLantern.NewStreetLantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewStreetLantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStreetLantern.NewStreetLantern_C.UserConstructionScript");

	ANewStreetLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStreetLantern.NewStreetLantern_C.LightStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightVisible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CastShadows                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewStreetLantern_C::LightStateChanged(bool LightVisible, bool CastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStreetLantern.NewStreetLantern_C.LightStateChanged");

	ANewStreetLantern_C_LightStateChanged_Params params;
	params.LightVisible = LightVisible;
	params.CastShadows = CastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStreetLantern.NewStreetLantern_C.ExecuteUbergraph_NewStreetLantern
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewStreetLantern_C::ExecuteUbergraph_NewStreetLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStreetLantern.NewStreetLantern_C.ExecuteUbergraph_NewStreetLantern");

	ANewStreetLantern_C_ExecuteUbergraph_NewStreetLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
