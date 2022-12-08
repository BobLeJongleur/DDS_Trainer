
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

// Function OutputTableWidget.OutputTableWidget_C.Get_txtPercent_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UOutputTableWidget_C::Get_txtPercent_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutputTableWidget.OutputTableWidget_C.Get_txtPercent_Visibility_1");

	UOutputTableWidget_C_Get_txtPercent_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutputTableWidget.OutputTableWidget_C.GetTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeSecondsLeft                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Time                           (Parm, OutParm)

void UOutputTableWidget_C::GetTime(float TimeSecondsLeft, struct FText* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutputTableWidget.OutputTableWidget_C.GetTime");

	UOutputTableWidget_C_GetTime_Params params;
	params.TimeSecondsLeft = TimeSecondsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function OutputTableWidget.OutputTableWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOutputTableWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutputTableWidget.OutputTableWidget_C.Construct");

	UOutputTableWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutputTableWidget.OutputTableWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutputTableWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutputTableWidget.OutputTableWidget_C.Tick");

	UOutputTableWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutputTableWidget.OutputTableWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AlabPrefabMaster_C*      LabPrefab                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutputTableWidget_C::setup(class AlabPrefabMaster_C* LabPrefab)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutputTableWidget.OutputTableWidget_C.setup");

	UOutputTableWidget_C_setup_Params params;
	params.LabPrefab = LabPrefab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutputTableWidget.OutputTableWidget_C.Update
// (BlueprintCallable, BlueprintEvent)

void UOutputTableWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutputTableWidget.OutputTableWidget_C.Update");

	UOutputTableWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutputTableWidget.OutputTableWidget_C.ExecuteUbergraph_OutputTableWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutputTableWidget_C::ExecuteUbergraph_OutputTableWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutputTableWidget.OutputTableWidget_C.ExecuteUbergraph_OutputTableWidget");

	UOutputTableWidget_C_ExecuteUbergraph_OutputTableWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
