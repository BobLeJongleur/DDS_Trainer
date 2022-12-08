
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

// Function Candle3.Candle3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACandle3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle3.Candle3_C.UserConstructionScript");

	ACandle3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle3.Candle3_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACandle3_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle3.Candle3_C.Timeline_0__FinishedFunc");

	ACandle3_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle3.Candle3_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACandle3_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle3.Candle3_C.Timeline_0__UpdateFunc");

	ACandle3_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle3.Candle3_C.startPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle3_C::startPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle3.Candle3_C.startPlayAnim");

	ACandle3_C_startPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle3.Candle3_C.endPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle3_C::endPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle3.Candle3_C.endPlayAnim");

	ACandle3_C_endPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle3.Candle3_C.ExecuteUbergraph_Candle3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACandle3_C::ExecuteUbergraph_Candle3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle3.Candle3_C.ExecuteUbergraph_Candle3");

	ACandle3_C_ExecuteUbergraph_Candle3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
