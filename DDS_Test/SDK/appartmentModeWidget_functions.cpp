
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

// Function appartmentModeWidget.appartmentModeWidget_C.Get_txt_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UappartmentModeWidget_C::Get_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.Get_txt_Text_1");

	UappartmentModeWidget_C_Get_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function appartmentModeWidget.appartmentModeWidget_C.Get_tabsVilla_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UappartmentModeWidget_C::Get_tabsVilla_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.Get_tabsVilla_Visibility_1");

	UappartmentModeWidget_C_Get_tabsVilla_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function appartmentModeWidget.appartmentModeWidget_C.ClearLocalList
// (Public, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::ClearLocalList()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.ClearLocalList");

	UappartmentModeWidget_C_ClearLocalList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.PrepListItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           IDs                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Quantities                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EVillaListCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentModeWidget_C::PrepListItems(TEnumAsByte<EVillaListCategories> Category, TArray<struct FName>* IDs, TArray<int>* Quantities)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.PrepListItems");

	UappartmentModeWidget_C_PrepListItems_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDs != nullptr)
		*IDs = params.IDs;
	if (Quantities != nullptr)
		*Quantities = params.Quantities;
}


// Function appartmentModeWidget.appartmentModeWidget_C.SellItems
// (Public, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::SellItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.SellItems");

	UappartmentModeWidget_C_SellItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.ShowShipmentPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::ShowShipmentPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.ShowShipmentPanel");

	UappartmentModeWidget_C_ShowShipmentPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.ShipItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ArentAppartmentArea_C*   TargetAppartment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentModeWidget_C::ShipItems(class ArentAppartmentArea_C* TargetAppartment)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.ShipItems");

	UappartmentModeWidget_C_ShipItems_Params params;
	params.TargetAppartment = TargetAppartment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.PrepareManager
// (Public, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::PrepareManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.PrepareManager");

	UappartmentModeWidget_C_PrepareManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UappartmentModeWidget_C::GetbIsEnabled_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_2");

	UappartmentModeWidget_C_GetbIsEnabled_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UappartmentModeWidget_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_1");

	UappartmentModeWidget_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function appartmentModeWidget.appartmentModeWidget_C.RenderManager
// (Public, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::RenderManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.RenderManager");

	UappartmentModeWidget_C_RenderManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.reconstructSourceIndexes
// (Public, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::reconstructSourceIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.reconstructSourceIndexes");

	UappartmentModeWidget_C_reconstructSourceIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.renderObjectList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::renderObjectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.renderObjectList");

	UappartmentModeWidget_C_renderObjectList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentModeWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.PreConstruct");

	UappartmentModeWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UappartmentModeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.Construct");

	UappartmentModeWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.SetupWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ArentAppartmentArea_C*   AppartmentRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ERROR_XXX*               VillaRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentModeWidget_C::SetupWidget(class ArentAppartmentArea_C* AppartmentRef, class ERROR_XXX* VillaRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.SetupWidget");

	UappartmentModeWidget_C_SetupWidget_Params params;
	params.AppartmentRef = AppartmentRef;
	params.VillaRef = VillaRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.setNewObjectGizmo
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::setNewObjectGizmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.setNewObjectGizmo");

	UappartmentModeWidget_C_setNewObjectGizmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexUp
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::selectIndexUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.selectIndexUp");

	UappartmentModeWidget_C_selectIndexUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexDown
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::selectIndexDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.selectIndexDown");

	UappartmentModeWidget_C_selectIndexDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.removeSelectedIndex
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::removeSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.removeSelectedIndex");

	UappartmentModeWidget_C_removeSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.TabSwitch
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::TabSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.TabSwitch");

	UappartmentModeWidget_C_TabSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UappartmentModeWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.Destruct");

	UappartmentModeWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature
// (BlueprintEvent)

void UappartmentModeWidget_C::BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature");

	UappartmentModeWidget_C_BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature
// (BlueprintEvent)

void UappartmentModeWidget_C::BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature");

	UappartmentModeWidget_C_BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature
// (BlueprintEvent)

void UappartmentModeWidget_C::BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature");

	UappartmentModeWidget_C_BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UappartmentModeWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UappartmentModeWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UappartmentModeWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UappartmentModeWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UappartmentModeWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UappartmentModeWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.ExecuteUbergraph_appartmentModeWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentModeWidget_C::ExecuteUbergraph_appartmentModeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.ExecuteUbergraph_appartmentModeWidget");

	UappartmentModeWidget_C_ExecuteUbergraph_appartmentModeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
