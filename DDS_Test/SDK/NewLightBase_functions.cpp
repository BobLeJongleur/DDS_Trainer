
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

// Function NewLightBase.NewLightBase_C.HasPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Power                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANewLightBase_C::HasPower(bool* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.HasPower");

	ANewLightBase_C_HasPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Power != nullptr)
		*Power = params.Power;
}


// Function NewLightBase.NewLightBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewLightBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.UserConstructionScript");

	ANewLightBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewLightBase_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.LongRadiusChanged");

	ANewLightBase_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANewLightBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.ReceiveBeginPlay");

	ANewLightBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.LightStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightVisible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CastShadows                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewLightBase_C::LightStateChanged(bool LightVisible, bool CastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.LightStateChanged");

	ANewLightBase_C_LightStateChanged_Params params;
	params.LightVisible = LightVisible;
	params.CastShadows = CastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewLightBase_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.ShortRadiusChanged");

	ANewLightBase_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.UpdateDaytimeCon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AdayTimeControler_C*     dayTimeCon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewLightBase_C::UpdateDaytimeCon(class AdayTimeControler_C* dayTimeCon)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.UpdateDaytimeCon");

	ANewLightBase_C_UpdateDaytimeCon_Params params;
	params.dayTimeCon = dayTimeCon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.Switch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewLightBase_C::Switch(bool TurnedOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.Switch");

	ANewLightBase_C_Switch_Params params;
	params.TurnedOn = TurnedOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.RefreshLantern
// (BlueprintCallable, BlueprintEvent)

void ANewLightBase_C::RefreshLantern()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.RefreshLantern");

	ANewLightBase_C_RefreshLantern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.PowerChange
// (BlueprintCallable, BlueprintEvent)

void ANewLightBase_C::PowerChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.PowerChange");

	ANewLightBase_C_PowerChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.updatePlayerDistance
// (BlueprintCallable, BlueprintEvent)

void ANewLightBase_C::updatePlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.updatePlayerDistance");

	ANewLightBase_C_updatePlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.openOutLightRange
// (BlueprintCallable, BlueprintEvent)

void ANewLightBase_C::openOutLightRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.openOutLightRange");

	ANewLightBase_C_openOutLightRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLightBase.NewLightBase_C.ExecuteUbergraph_NewLightBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewLightBase_C::ExecuteUbergraph_NewLightBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.ExecuteUbergraph_NewLightBase");

	ANewLightBase_C_ExecuteUbergraph_NewLightBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
