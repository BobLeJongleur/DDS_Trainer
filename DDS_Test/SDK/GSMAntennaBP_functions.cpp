
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

// Function GSMAntennaBP.GSMAntennaBP_C.RamaExtend
// (Public, BlueprintCallable, BlueprintEvent)

void AGSMAntennaBP_C::RamaExtend()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.RamaExtend");

	AGSMAntennaBP_C_RamaExtend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.CheckAllHacked
// (Public, BlueprintCallable, BlueprintEvent)

void AGSMAntennaBP_C::CheckAllHacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.CheckAllHacked");

	AGSMAntennaBP_C_CheckAllHacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGSMAntennaBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.UserConstructionScript");

	AGSMAntennaBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGSMAntennaBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.ReceiveBeginPlay");

	AGSMAntennaBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGSMAntennaBP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.ReceiveTick");

	AGSMAntennaBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGSMAntennaBP_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.InteractionActivate");

	AGSMAntennaBP_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.RefreshActivity
// (BlueprintCallable, BlueprintEvent)

void AGSMAntennaBP_C::RefreshActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.RefreshActivity");

	AGSMAntennaBP_C_RefreshActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AGSMAntennaBP_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");

	AGSMAntennaBP_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMAntennaBP.GSMAntennaBP_C.ExecuteUbergraph_GSMAntennaBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGSMAntennaBP_C::ExecuteUbergraph_GSMAntennaBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMAntennaBP.GSMAntennaBP_C.ExecuteUbergraph_GSMAntennaBP");

	AGSMAntennaBP_C_ExecuteUbergraph_GSMAntennaBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
