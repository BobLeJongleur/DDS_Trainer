
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

// Function SewageExitPeekPawn.SewageExitPeekPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASewageExitPeekPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.UserConstructionScript");

	ASewageExitPeekPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASewageExitPeekPawn_C::InpActEvt_Escape_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_4");

	ASewageExitPeekPawn_C_InpActEvt_Escape_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASewageExitPeekPawn_C::InpActEvt_F10_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_3");

	ASewageExitPeekPawn_C_InpActEvt_F10_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASewageExitPeekPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2");

	ASewageExitPeekPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASewageExitPeekPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1");

	ASewageExitPeekPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewageExitPeekPawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveTick");

	ASewageExitPeekPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewageExitPeekPawn_C::InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1");

	ASewageExitPeekPawn_C_InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AsewageExit_C*           ExitLadderRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewageExitPeekPawn_C::Setup(class AsewageExit_C* ExitLadderRef, class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.Setup");

	ASewageExitPeekPawn_C_Setup_Params params;
	params.ExitLadderRef = ExitLadderRef;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewageExitPeekPawn_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceivePossessed");

	ASewageExitPeekPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewageExitPeekPawn_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveUnpossessed");

	ASewageExitPeekPawn_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewageExitPeekPawn.SewageExitPeekPawn_C.ExecuteUbergraph_SewageExitPeekPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASewageExitPeekPawn_C::ExecuteUbergraph_SewageExitPeekPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ExecuteUbergraph_SewageExitPeekPawn");

	ASewageExitPeekPawn_C_ExecuteUbergraph_SewageExitPeekPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
