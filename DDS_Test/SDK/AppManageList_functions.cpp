
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

// Function AppManageList.AppManageList_C.HandleDropQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::HandleDropQuantity(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.HandleDropQuantity");

	UAppManageList_C_HandleDropQuantity_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageList.AppManageList_C.Get_txtPrice_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UAppManageList_C::Get_txtPrice_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.Get_txtPrice_ColorAndOpacity_1");

	UAppManageList_C_Get_txtPrice_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageList.AppManageList_C.FindEqPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EquipmentID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemSourcePrice                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::FindEqPrice(const struct FName& EquipmentID, int* ItemSourcePrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.FindEqPrice");

	UAppManageList_C_FindEqPrice_Params params;
	params.EquipmentID = EquipmentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSourcePrice != nullptr)
		*ItemSourcePrice = params.ItemSourcePrice;
}


// Function AppManageList.AppManageList_C.Get_txtPrice_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAppManageList_C::Get_txtPrice_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.Get_txtPrice_Visibility_1");

	UAppManageList_C_Get_txtPrice_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageList.AppManageList_C.CountMoney
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            countedMoney                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::CountMoney(int* countedMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.CountMoney");

	UAppManageList_C_CountMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (countedMoney != nullptr)
		*countedMoney = params.countedMoney;
}


// Function AppManageList.AppManageList_C.GetVisibility_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAppManageList_C::GetVisibility_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.GetVisibility_3");

	UAppManageList_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageList.AppManageList_C.RemoveListIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::RemoveListIndex(int Index, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.RemoveListIndex");

	UAppManageList_C_RemoveListIndex_Params params;
	params.Index = Index;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageList.AppManageList_C.AddListIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipDispatch                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::AddListIndex(int Index, int Quantity, bool SkipDispatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.AddListIndex");

	UAppManageList_C_AddListIndex_Params params;
	params.Index = Index;
	params.Quantity = Quantity;
	params.SkipDispatch = SkipDispatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageList.AppManageList_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAppManageList_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.OnDrop");

	UAppManageList_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageList.AppManageList_C.isListEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::isListEmpty(bool* Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.isListEmpty");

	UAppManageList_C_isListEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Empty != nullptr)
		*Empty = params.Empty;
}


// Function AppManageList.AppManageList_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAppManageList_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.GetVisibility_2");

	UAppManageList_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageList.AppManageList_C.addListItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SourceIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quan                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::addListItem(const struct FName& ItemID, int SourceIndex, int Quan)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.addListItem");

	UAppManageList_C_addListItem_Params params;
	params.ItemID = ItemID;
	params.SourceIndex = SourceIndex;
	params.Quan = Quan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageList.AppManageList_C.ClearList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PurgeArrays                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageList_C::ClearList(bool PurgeArrays)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.ClearList");

	UAppManageList_C_ClearList_Params params;
	params.PurgeArrays = PurgeArrays;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageList.AppManageList_C.Get_furnitureList_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAppManageList_C::Get_furnitureList_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.Get_furnitureList_Visibility_1");

	UAppManageList_C_Get_furnitureList_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageList.AppManageList_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAppManageList_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.GetVisibility_1");

	UAppManageList_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageList.AppManageList_C.ListContentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAppManageList_C::ListContentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageList.AppManageList_C.ListContentChanged__DelegateSignature");

	UAppManageList_C_ListContentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
