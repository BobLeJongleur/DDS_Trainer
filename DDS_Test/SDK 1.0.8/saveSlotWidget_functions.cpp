
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

// Function saveSlotWidget.saveSlotWidget_C.Get_txtSaveDate_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UsaveSlotWidget_C::Get_txtSaveDate_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.Get_txtSaveDate_ColorAndOpacity_1");

	UsaveSlotWidget_C_Get_txtSaveDate_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function saveSlotWidget.saveSlotWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UsaveSlotWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.OnMouseButtonDown");

	UsaveSlotWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function saveSlotWidget.saveSlotWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UsaveSlotWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.OnMouseButtonUp");

	UsaveSlotWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function saveSlotWidget.saveSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsaveSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.Construct");

	UsaveSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveSlotWidget.saveSlotWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           occupied                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SlotCustomName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 saveDateTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Slot_Num                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UsaveLoadWidget_C*       Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UsaveSlotWidget_C::Setup(bool occupied, const struct FString& SlotCustomName, const struct FString& saveDateTime, int Slot_Num, class UsaveLoadWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.Setup");

	UsaveSlotWidget_C_Setup_Params params;
	params.occupied = occupied;
	params.SlotCustomName = SlotCustomName;
	params.saveDateTime = saveDateTime;
	params.Slot_Num = Slot_Num;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveSlotWidget.saveSlotWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UsaveSlotWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.OnMouseEnter");

	UsaveSlotWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveSlotWidget.saveSlotWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UsaveSlotWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.OnMouseLeave");

	UsaveSlotWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveSlotWidget.saveSlotWidget_C.ExecuteUbergraph_saveSlotWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaveSlotWidget_C::ExecuteUbergraph_saveSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSlotWidget.saveSlotWidget_C.ExecuteUbergraph_saveSlotWidget");

	UsaveSlotWidget_C_ExecuteUbergraph_saveSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
