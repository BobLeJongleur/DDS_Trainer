
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

// Function playerCharacterPC.playerCharacterPC_C.HasFrontWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasWidgets                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AplayerCharacterPC_C::HasFrontWidgets(bool* HasWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.HasFrontWidgets");

	AplayerCharacterPC_C_HasFrontWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasWidgets != nullptr)
		*HasWidgets = params.HasWidgets;
}


// Function playerCharacterPC.playerCharacterPC_C.CloseFrontWidget
// (Public, BlueprintCallable, BlueprintEvent)

void AplayerCharacterPC_C::CloseFrontWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.CloseFrontWidget");

	AplayerCharacterPC_C_CloseFrontWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerCharacterPC.playerCharacterPC_C.RegisterFrontWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void AplayerCharacterPC_C::RegisterFrontWidget(class UUserWidget* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.RegisterFrontWidget");

	AplayerCharacterPC_C_RegisterFrontWidget_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerCharacterPC.playerCharacterPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AplayerCharacterPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.UserConstructionScript");

	AplayerCharacterPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerCharacterPC.playerCharacterPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AplayerCharacterPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.ReceiveBeginPlay");

	AplayerCharacterPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerCharacterPC.playerCharacterPC_C.ExecuteUbergraph_playerCharacterPC
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AplayerCharacterPC_C::ExecuteUbergraph_playerCharacterPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.ExecuteUbergraph_playerCharacterPC");

	AplayerCharacterPC_C_ExecuteUbergraph_playerCharacterPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
