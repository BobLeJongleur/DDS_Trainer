
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function lsdEffectSmallTree.lsdEffectSmallTree_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlsdEffectSmallTree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.UserConstructionScript");

	AlsdEffectSmallTree_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lsdEffectSmallTree.lsdEffectSmallTree_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlsdEffectSmallTree_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.ReceiveTick");

	AlsdEffectSmallTree_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lsdEffectSmallTree.lsdEffectSmallTree_C.beginEffectWork
// (BlueprintCallable, BlueprintEvent)

void AlsdEffectSmallTree_C::beginEffectWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.beginEffectWork");

	AlsdEffectSmallTree_C_beginEffectWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lsdEffectSmallTree.lsdEffectSmallTree_C.endEffectWork
// (BlueprintCallable, BlueprintEvent)

void AlsdEffectSmallTree_C::endEffectWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.endEffectWork");

	AlsdEffectSmallTree_C_endEffectWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lsdEffectSmallTree.lsdEffectSmallTree_C.randomScale
// (BlueprintCallable, BlueprintEvent)

void AlsdEffectSmallTree_C::randomScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.randomScale");

	AlsdEffectSmallTree_C_randomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lsdEffectSmallTree.lsdEffectSmallTree_C.ExecuteUbergraph_lsdEffectSmallTree
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlsdEffectSmallTree_C::ExecuteUbergraph_lsdEffectSmallTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.ExecuteUbergraph_lsdEffectSmallTree");

	AlsdEffectSmallTree_C_ExecuteUbergraph_lsdEffectSmallTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
