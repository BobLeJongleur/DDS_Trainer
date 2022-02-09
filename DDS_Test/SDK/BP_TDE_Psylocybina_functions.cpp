
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

// Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TDE_Psylocybina_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.UserConstructionScript");

	ABP_TDE_Psylocybina_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.StartEffect
// (Event, Public, BlueprintEvent)

void ABP_TDE_Psylocybina_C::StartEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.StartEffect");

	ABP_TDE_Psylocybina_C_StartEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.EffectTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TDE_Psylocybina_C::EffectTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.EffectTick");

	ABP_TDE_Psylocybina_C_EffectTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.EndEffect
// (Event, Public, BlueprintEvent)

void ABP_TDE_Psylocybina_C::EndEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.EndEffect");

	ABP_TDE_Psylocybina_C_EndEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.ExecuteUbergraph_BP_TDE_Psylocybina
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TDE_Psylocybina_C::ExecuteUbergraph_BP_TDE_Psylocybina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Psylocybina.BP_TDE_Psylocybina_C.ExecuteUbergraph_BP_TDE_Psylocybina");

	ABP_TDE_Psylocybina_C_ExecuteUbergraph_BP_TDE_Psylocybina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
