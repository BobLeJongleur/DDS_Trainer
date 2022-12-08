
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

// Function VillaOfferEntry.VillaOfferEntry_C.VillaToSector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   VillaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SectorNam                      (Parm, OutParm)

void UVillaOfferEntry_C::VillaToSector(const struct FName& VillaID, struct FText* SectorNam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.VillaToSector");

	UVillaOfferEntry_C_VillaToSector_Params params;
	params.VillaID = VillaID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectorNam != nullptr)
		*SectorNam = params.SectorNam;
}


// Function VillaOfferEntry.VillaOfferEntry_C.Get_txtPriceTotal_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UVillaOfferEntry_C::Get_txtPriceTotal_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.Get_txtPriceTotal_ToolTipWidget_1");

	UVillaOfferEntry_C_Get_txtPriceTotal_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaOfferEntry.VillaOfferEntry_C.Get_btnBuy_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UVillaOfferEntry_C::Get_btnBuy_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.Get_btnBuy_ToolTipWidget_1");

	UVillaOfferEntry_C_Get_btnBuy_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaOfferEntry.VillaOfferEntry_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVillaOfferEntry_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.GetText_1");

	UVillaOfferEntry_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaOfferEntry.VillaOfferEntry_C.UserClickedCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UVillaOfferEntry_C::UserClickedCancel(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.UserClickedCancel");

	UVillaOfferEntry_C_UserClickedCancel_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferEntry.VillaOfferEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVillaOfferEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.Construct");

	UVillaOfferEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferEntry.VillaOfferEntry_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   VillaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVillaOfferWidget_C*     Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Bought                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AVillaPropertyInstance_C* Property                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaOfferEntry_C::setup(const struct FName& VillaID, class UVillaOfferWidget_C* Parent, bool Bought, class AVillaPropertyInstance_C* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.setup");

	UVillaOfferEntry_C_setup_Params params;
	params.VillaID = VillaID;
	params.Parent = Parent;
	params.Bought = Bought;
	params.Property = Property;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferEntry.VillaOfferEntry_C.BndEvt__btnBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVillaOfferEntry_C::BndEvt__btnBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.BndEvt__btnBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UVillaOfferEntry_C_BndEvt__btnBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferEntry.VillaOfferEntry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVillaOfferEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.OnMouseEnter");

	UVillaOfferEntry_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferEntry.VillaOfferEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVillaOfferEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.OnMouseLeave");

	UVillaOfferEntry_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferEntry.VillaOfferEntry_C.UserClickedConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UVillaOfferEntry_C::UserClickedConfirm(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.UserClickedConfirm");

	UVillaOfferEntry_C_UserClickedConfirm_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferEntry.VillaOfferEntry_C.ExecuteUbergraph_VillaOfferEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaOfferEntry_C::ExecuteUbergraph_VillaOfferEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferEntry.VillaOfferEntry_C.ExecuteUbergraph_VillaOfferEntry");

	UVillaOfferEntry_C_ExecuteUbergraph_VillaOfferEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
