
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

// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TDE_Ergolina_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.UserConstructionScript");

	ABP_TDE_Ergolina_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__FinishedFunc
// (BlueprintEvent)

void ABP_TDE_Ergolina_C::fadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__FinishedFunc");

	ABP_TDE_Ergolina_C_fadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__UpdateFunc
// (BlueprintEvent)

void ABP_TDE_Ergolina_C::fadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__UpdateFunc");

	ABP_TDE_Ergolina_C_fadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.StartEffect
// (Event, Public, BlueprintEvent)

void ABP_TDE_Ergolina_C::StartEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.StartEffect");

	ABP_TDE_Ergolina_C_StartEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EffectTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TDE_Ergolina_C::EffectTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EffectTick");

	ABP_TDE_Ergolina_C_EffectTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EndEffect
// (Event, Public, BlueprintEvent)

void ABP_TDE_Ergolina_C::EndEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EndEffect");

	ABP_TDE_Ergolina_C_EndEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.retryResetEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_TDE_Ergolina_C::retryResetEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.retryResetEffect");

	ABP_TDE_Ergolina_C_retryResetEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.ExecuteUbergraph_BP_TDE_Ergolina
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TDE_Ergolina_C::ExecuteUbergraph_BP_TDE_Ergolina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.ExecuteUbergraph_BP_TDE_Ergolina");

	ABP_TDE_Ergolina_C_ExecuteUbergraph_BP_TDE_Ergolina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
