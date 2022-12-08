
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

// Function weedAnnihilator.weedAnnihilator_C.ClearWeed
// (Public, BlueprintCallable, BlueprintEvent)

void AweedAnnihilator_C::ClearWeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedAnnihilator.weedAnnihilator_C.ClearWeed");

	AweedAnnihilator_C_ClearWeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedAnnihilator.weedAnnihilator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AweedAnnihilator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedAnnihilator.weedAnnihilator_C.UserConstructionScript");

	AweedAnnihilator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedAnnihilator.weedAnnihilator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AweedAnnihilator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedAnnihilator.weedAnnihilator_C.ReceiveBeginPlay");

	AweedAnnihilator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedAnnihilator.weedAnnihilator_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AweedAnnihilator_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedAnnihilator.weedAnnihilator_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");

	AweedAnnihilator_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedAnnihilator.weedAnnihilator_C.ExecuteUbergraph_weedAnnihilator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedAnnihilator_C::ExecuteUbergraph_weedAnnihilator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedAnnihilator.weedAnnihilator_C.ExecuteUbergraph_weedAnnihilator");

	AweedAnnihilator_C_ExecuteUbergraph_weedAnnihilator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
