
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

// Function Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVilla_BlowupPool_SectorA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C.UserConstructionScript");

	AVilla_BlowupPool_SectorA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C.SubclassActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVilla_BlowupPool_SectorA_C::SubclassActivation(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C.SubclassActivation");

	AVilla_BlowupPool_SectorA_C_SubclassActivation_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C.ExecuteUbergraph_Villa_BlowupPool_SectorA
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVilla_BlowupPool_SectorA_C::ExecuteUbergraph_Villa_BlowupPool_SectorA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C.ExecuteUbergraph_Villa_BlowupPool_SectorA");

	AVilla_BlowupPool_SectorA_C_ExecuteUbergraph_Villa_BlowupPool_SectorA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
