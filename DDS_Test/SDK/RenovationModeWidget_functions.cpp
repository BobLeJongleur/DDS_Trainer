
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

// Function RenovationModeWidget.RenovationModeWidget_C.CloseFrontWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanClose                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URenovationModeWidget_C::CloseFrontWidget(bool* CanClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.CloseFrontWidget");

	URenovationModeWidget_C_CloseFrontWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClose != nullptr)
		*CanClose = params.CanClose;
}


// Function RenovationModeWidget.RenovationModeWidget_C.GetCurMaterial
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       CurMaterial                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurMatID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URenovationModeWidget_C::GetCurMaterial(class UMaterialInstance** CurMaterial, struct FName* CurMatID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.GetCurMaterial");

	URenovationModeWidget_C_GetCurMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurMaterial != nullptr)
		*CurMaterial = params.CurMaterial;
	if (CurMatID != nullptr)
		*CurMatID = params.CurMatID;
}


// Function RenovationModeWidget.RenovationModeWidget_C.RenderList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URenovationModeWidget_C::RenderList()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.RenderList");

	URenovationModeWidget_C_RenderList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationModeWidget.RenovationModeWidget_C.ChangeSurfaceSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenovationModeWidget_C::ChangeSurfaceSource(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.ChangeSurfaceSource");

	URenovationModeWidget_C_ChangeSurfaceSource_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationModeWidget.RenovationModeWidget_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText URenovationModeWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.GetText_1");

	URenovationModeWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenovationModeWidget.RenovationModeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URenovationModeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.Construct");

	URenovationModeWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationModeWidget.RenovationModeWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenovationModeWidget_C::setup(class AplayerCharacterBP_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.setup");

	URenovationModeWidget_C_setup_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationModeWidget.RenovationModeWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URenovationModeWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.Destruct");

	URenovationModeWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationModeWidget.RenovationModeWidget_C.scrolledUp
// (BlueprintCallable, BlueprintEvent)

void URenovationModeWidget_C::scrolledUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.scrolledUp");

	URenovationModeWidget_C_scrolledUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationModeWidget.RenovationModeWidget_C.scrolledDown
// (BlueprintCallable, BlueprintEvent)

void URenovationModeWidget_C::scrolledDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.scrolledDown");

	URenovationModeWidget_C_scrolledDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationModeWidget.RenovationModeWidget_C.ExecuteUbergraph_RenovationModeWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenovationModeWidget_C::ExecuteUbergraph_RenovationModeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationModeWidget.RenovationModeWidget_C.ExecuteUbergraph_RenovationModeWidget");

	URenovationModeWidget_C_ExecuteUbergraph_RenovationModeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
