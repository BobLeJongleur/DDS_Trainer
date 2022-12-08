
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

// Function Candle2.Candle2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACandle2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle2.Candle2_C.UserConstructionScript");

	ACandle2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle2.Candle2_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACandle2_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle2.Candle2_C.Timeline_0__FinishedFunc");

	ACandle2_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle2.Candle2_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACandle2_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle2.Candle2_C.Timeline_0__UpdateFunc");

	ACandle2_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle2.Candle2_C.startPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle2_C::startPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle2.Candle2_C.startPlayAnim");

	ACandle2_C_startPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle2.Candle2_C.endPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle2_C::endPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle2.Candle2_C.endPlayAnim");

	ACandle2_C_endPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle2.Candle2_C.ExecuteUbergraph_Candle2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACandle2_C::ExecuteUbergraph_Candle2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle2.Candle2_C.ExecuteUbergraph_Candle2");

	ACandle2_C_ExecuteUbergraph_Candle2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
