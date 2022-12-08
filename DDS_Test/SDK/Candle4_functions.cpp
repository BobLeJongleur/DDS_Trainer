
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

// Function Candle4.Candle4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACandle4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle4.Candle4_C.UserConstructionScript");

	ACandle4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle4.Candle4_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACandle4_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle4.Candle4_C.Timeline_0__FinishedFunc");

	ACandle4_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle4.Candle4_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACandle4_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle4.Candle4_C.Timeline_0__UpdateFunc");

	ACandle4_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle4.Candle4_C.startPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle4_C::startPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle4.Candle4_C.startPlayAnim");

	ACandle4_C_startPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle4.Candle4_C.endPlayAnim
// (BlueprintCallable, BlueprintEvent)

void ACandle4_C::endPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle4.Candle4_C.endPlayAnim");

	ACandle4_C_endPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Candle4.Candle4_C.ExecuteUbergraph_Candle4
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACandle4_C::ExecuteUbergraph_Candle4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle4.Candle4_C.ExecuteUbergraph_Candle4");

	ACandle4_C_ExecuteUbergraph_Candle4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
