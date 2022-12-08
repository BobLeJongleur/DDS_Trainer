
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

// Function worldMapMarker.worldMapMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.UserConstructionScript");

	AworldMapMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AworldMapMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay");

	AworldMapMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EmapMarkerCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ToolTip                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           dealer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            taskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldMapMarker_C::setup(TEnumAsByte<EmapMarkerCategories> Category, const struct FText& Name, const struct FText& ToolTip, bool dealer, int taskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.setup");

	AworldMapMarker_C_setup_Params params;
	params.Category = Category;
	params.Name = Name;
	params.ToolTip = ToolTip;
	params.dealer = dealer;
	params.taskID = taskID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.checkTaskEnded
// (BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::checkTaskEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.checkTaskEnded");

	AworldMapMarker_C_checkTaskEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.reInitialise
// (BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::reInitialise()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.reInitialise");

	AworldMapMarker_C_reInitialise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.recalcWaitTime
// (BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::recalcWaitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.recalcWaitTime");

	AworldMapMarker_C_recalcWaitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AworldMapMarker_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");

	AworldMapMarker_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldMapMarker_C::ExecuteUbergraph_worldMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker");

	AworldMapMarker_C_ExecuteUbergraph_worldMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
