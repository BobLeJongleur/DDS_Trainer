
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

// Function SampleClientSpawner.SampleClientSpawner_C.TrySpawnAreaClient
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AsprayAreaGizmo_C*       AreaGizmo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AreaString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASampleClientSpawner_C::TrySpawnAreaClient(class AsprayAreaGizmo_C* AreaGizmo, const struct FString& AreaString, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.TrySpawnAreaClient");

	ASampleClientSpawner_C_TrySpawnAreaClient_Params params;
	params.AreaGizmo = AreaGizmo;
	params.AreaString = AreaString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function SampleClientSpawner.SampleClientSpawner_C.HasAreaClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Area                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           HasClient                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASampleClientSpawner_C::HasAreaClient(const struct FString& Area, bool* HasClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.HasAreaClient");

	ASampleClientSpawner_C_HasAreaClient_Params params;
	params.Area = Area;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasClient != nullptr)
		*HasClient = params.HasClient;
}


// Function SampleClientSpawner.SampleClientSpawner_C.UnregisterClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Area                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           DirectClear                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASampleClientSpawner_C::UnregisterClient(const struct FString& Area, bool DirectClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.UnregisterClient");

	ASampleClientSpawner_C_UnregisterClient_Params params;
	params.Area = Area;
	params.DirectClear = DirectClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SampleClientSpawner.SampleClientSpawner_C.RegisterClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OnArea                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ASampleClientSpawner_C::RegisterClient(const struct FString& OnArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.RegisterClient");

	ASampleClientSpawner_C_RegisterClient_Params params;
	params.OnArea = OnArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SampleClientSpawner.SampleClientSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASampleClientSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.UserConstructionScript");

	ASampleClientSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SampleClientSpawner.SampleClientSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASampleClientSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.ReceiveBeginPlay");

	ASampleClientSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SampleClientSpawner.SampleClientSpawner_C.CheckSampleClients
// (BlueprintCallable, BlueprintEvent)

void ASampleClientSpawner_C::CheckSampleClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.CheckSampleClients");

	ASampleClientSpawner_C_CheckSampleClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SampleClientSpawner.SampleClientSpawner_C.BreakAreaLoop
// (BlueprintCallable, BlueprintEvent)

void ASampleClientSpawner_C::BreakAreaLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.BreakAreaLoop");

	ASampleClientSpawner_C_BreakAreaLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SampleClientSpawner.SampleClientSpawner_C.CleanAreas
// (BlueprintCallable, BlueprintEvent)

void ASampleClientSpawner_C::CleanAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.CleanAreas");

	ASampleClientSpawner_C_CleanAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SampleClientSpawner.SampleClientSpawner_C.ExecuteUbergraph_SampleClientSpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASampleClientSpawner_C::ExecuteUbergraph_SampleClientSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.ExecuteUbergraph_SampleClientSpawner");

	ASampleClientSpawner_C_ExecuteUbergraph_SampleClientSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
