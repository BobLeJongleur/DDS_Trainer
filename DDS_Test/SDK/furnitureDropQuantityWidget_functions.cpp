
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

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.getMaxQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TargetString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            sourceQuan                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            maxQuantity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UfurnitureDropQuantityWidget_C::getMaxQuantity(const struct FString& TargetString, class UUserWidget* Widget, int sourceQuan, const struct FinventoryItemStruct& Data, int* maxQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.getMaxQuantity");

	UfurnitureDropQuantityWidget_C_getMaxQuantity_Params params;
	params.TargetString = TargetString;
	params.Widget = Widget;
	params.sourceQuan = sourceQuan;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxQuantity != nullptr)
		*maxQuantity = params.maxQuantity;
}


// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UfurnitureDropQuantityWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.PreConstruct");

	UfurnitureDropQuantityWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UfurnitureDropQuantityWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Construct");

	UfurnitureDropQuantityWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UfurnitureDropQuantityWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UfurnitureDropQuantityWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TargetString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            quanMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAppManageList_C*        ManageList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UfurnitureDropQuantityWidget_C::setup(const struct FString& TargetString, int quanMax, class UAppManageList_C* ManageList)
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.setup");

	UfurnitureDropQuantityWidget_C_setup_Params params;
	params.TargetString = TargetString;
	params.quanMax = quanMax;
	params.ManageList = ManageList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UfurnitureDropQuantityWidget_C::BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	UfurnitureDropQuantityWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UfurnitureDropQuantityWidget_C::BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UfurnitureDropQuantityWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.ExecuteUbergraph_furnitureDropQuantityWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UfurnitureDropQuantityWidget_C::ExecuteUbergraph_furnitureDropQuantityWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.ExecuteUbergraph_furnitureDropQuantityWidget");

	UfurnitureDropQuantityWidget_C_ExecuteUbergraph_furnitureDropQuantityWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
