
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

// Function Villa_Pond_SectorB.Villa_Pond_SectorB_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVilla_Pond_SectorB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_Pond_SectorB.Villa_Pond_SectorB_C.UserConstructionScript");

	AVilla_Pond_SectorB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Villa_Pond_SectorB.Villa_Pond_SectorB_C.SubclassActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVilla_Pond_SectorB_C::SubclassActivation(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_Pond_SectorB.Villa_Pond_SectorB_C.SubclassActivation");

	AVilla_Pond_SectorB_C_SubclassActivation_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Villa_Pond_SectorB.Villa_Pond_SectorB_C.ExecuteUbergraph_Villa_Pond_SectorB
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVilla_Pond_SectorB_C::ExecuteUbergraph_Villa_Pond_SectorB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_Pond_SectorB.Villa_Pond_SectorB_C.ExecuteUbergraph_Villa_Pond_SectorB");

	AVilla_Pond_SectorB_C_ExecuteUbergraph_Villa_Pond_SectorB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
