
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

// Function labWeedPlant.labWeedPlant_C.AdaptModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabWeedPlant_C::AdaptModel(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function labWeedPlant.labWeedPlant_C.AdaptModel");

	AlabWeedPlant_C_AdaptModel_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labWeedPlant.labWeedPlant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlabWeedPlant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function labWeedPlant.labWeedPlant_C.UserConstructionScript");

	AlabWeedPlant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labWeedPlant.labWeedPlant_C.SetGrowingActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AlabPrefabMaster_C*      Prefab                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabWeedPlant_C::SetGrowingActive(class AlabPrefabMaster_C* Prefab, bool Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function labWeedPlant.labWeedPlant_C.SetGrowingActive");

	AlabWeedPlant_C_SetGrowingActive_Params params;
	params.Prefab = Prefab;
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labWeedPlant.labWeedPlant_C.ProgressChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabWeedPlant_C::ProgressChange(float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function labWeedPlant.labWeedPlant_C.ProgressChange");

	AlabWeedPlant_C_ProgressChange_Params params;
	params.ProgressPercent = ProgressPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labWeedPlant.labWeedPlant_C.ExecuteUbergraph_labWeedPlant
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabWeedPlant_C::ExecuteUbergraph_labWeedPlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labWeedPlant.labWeedPlant_C.ExecuteUbergraph_labWeedPlant");

	AlabWeedPlant_C_ExecuteUbergraph_labWeedPlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
