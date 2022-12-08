
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

// Function inventoryItemWidget.inventoryItemWidget_C.DisplayMixProportions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryItemWidget_C::DisplayMixProportions()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.DisplayMixProportions");

	UinventoryItemWidget_C_DisplayMixProportions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UinventoryItemWidget_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.OnDrop");

	UinventoryItemWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.Get_TextBlock_1_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UinventoryItemWidget_C::Get_TextBlock_1_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.Get_TextBlock_1_Visibility_1");

	UinventoryItemWidget_C_Get_TextBlock_1_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UinventoryItemWidget_C::GetVisibility_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_4");

	UinventoryItemWidget_C_GetVisibility_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UinventoryItemWidget_C::GetVisibility_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_3");

	UinventoryItemWidget_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UinventoryItemWidget_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_2");

	UinventoryItemWidget_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.SetLooted
// (Public, BlueprintCallable, BlueprintEvent)

void UinventoryItemWidget_C::SetLooted()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.SetLooted");

	UinventoryItemWidget_C_SetLooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.VerifyLooting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryItemWidget_C::VerifyLooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.VerifyLooting");

	UinventoryItemWidget_C_VerifyLooting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.Get_bgImage_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UinventoryItemWidget_C::Get_bgImage_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.Get_bgImage_ToolTipWidget_1");

	UinventoryItemWidget_C_Get_bgImage_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.GetShortName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ShortName                      (Parm, OutParm)

void UinventoryItemWidget_C::GetShortName(struct FText* ShortName)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.GetShortName");

	UinventoryItemWidget_C_GetShortName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShortName != nullptr)
		*ShortName = params.ShortName;
}


// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UinventoryItemWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_1");

	UinventoryItemWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.formToText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EdrugForm>         Form                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutText                        (Parm, OutParm)

void UinventoryItemWidget_C::formToText(TEnumAsByte<EdrugForm> Form, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.formToText");

	UinventoryItemWidget_C_formToText_Params params;
	params.Form = Form;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UinventoryItemWidget_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDoubleClick");

	UinventoryItemWidget_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.widgetSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            setPrice                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowPrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromVendor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           workStation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowAsGrid                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CustomName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UinventoryItemWidget_C::widgetSetup(int setPrice, bool ShowPrice, bool FromVendor, bool workStation, bool ShowAsGrid, int SetAmount, const struct FText& CustomName)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.widgetSetup");

	UinventoryItemWidget_C_widgetSetup_Params params;
	params.setPrice = setPrice;
	params.ShowPrice = ShowPrice;
	params.FromVendor = FromVendor;
	params.workStation = workStation;
	params.ShowAsGrid = ShowAsGrid;
	params.SetAmount = SetAmount;
	params.CustomName = CustomName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UinventoryItemWidget_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.OnDragDetected");

	UinventoryItemWidget_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UinventoryItemWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDown");

	UinventoryItemWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryItemWidget.inventoryItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UinventoryItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.Construct");

	UinventoryItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryItemWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.Tick");

	UinventoryItemWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryItemWidget_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.OnDragCancelled");

	UinventoryItemWidget_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UinventoryItemWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.Destruct");

	UinventoryItemWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryItemWidget_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.OnDragEnter");

	UinventoryItemWidget_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryItemWidget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.OnDragLeave");

	UinventoryItemWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryItemWidget.inventoryItemWidget_C.ExecuteUbergraph_inventoryItemWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryItemWidget_C::ExecuteUbergraph_inventoryItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryItemWidget.inventoryItemWidget_C.ExecuteUbergraph_inventoryItemWidget");

	UinventoryItemWidget_C_ExecuteUbergraph_inventoryItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
