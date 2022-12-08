
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

// Function Candle1.Candle1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACandle1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle1.Candle1_C.UserConstructionScript");

	ACandle1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle1.Candle1_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACandle1_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle1.Candle1_C.Timeline_0__FinishedFunc");

	ACandle1_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle1.Candle1_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACandle1_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle1.Candle1_C.Timeline_0__UpdateFunc");

	ACandle1_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle1.Candle1_C.startPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle1_C::startPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle1.Candle1_C.startPlayAnim");

	ACandle1_C_startPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle1.Candle1_C.endPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle1_C::endPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle1.Candle1_C.endPlayAnim");

	ACandle1_C_endPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle1.Candle1_C.ExecuteUbergraph_Candle1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACandle1_C::ExecuteUbergraph_Candle1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle1.Candle1_C.ExecuteUbergraph_Candle1");

	ACandle1_C_ExecuteUbergraph_Candle1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
