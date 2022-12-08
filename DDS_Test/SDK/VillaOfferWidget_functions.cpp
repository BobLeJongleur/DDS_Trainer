
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

// Function VillaOfferWidget.VillaOfferWidget_C.CloseFrontWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanClose                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVillaOfferWidget_C::CloseFrontWidget(bool* CanClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.CloseFrontWidget");

	UVillaOfferWidget_C_CloseFrontWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClose != nullptr)
		*CanClose = params.CanClose;
}


// Function VillaOfferWidget.VillaOfferWidget_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVillaOfferWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.GetText_1");

	UVillaOfferWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaOfferWidget.VillaOfferWidget_C.BuyVilla
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   VillaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaOfferWidget_C::BuyVilla(const struct FName& VillaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.BuyVilla");

	UVillaOfferWidget_C_BuyVilla_Params params;
	params.VillaID = VillaID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferWidget.VillaOfferWidget_C.RenderVillas
// (Public, BlueprintCallable, BlueprintEvent)

void UVillaOfferWidget_C::RenderVillas()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.RenderVillas");

	UVillaOfferWidget_C_RenderVillas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferWidget.VillaOfferWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVillaOfferWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.Construct");

	UVillaOfferWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferWidget.VillaOfferWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UVillaOfferWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.killMe");

	UVillaOfferWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferWidget.VillaOfferWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVillaOfferWidget_C::BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UVillaOfferWidget_C_BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaOfferWidget.VillaOfferWidget_C.ExecuteUbergraph_VillaOfferWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaOfferWidget_C::ExecuteUbergraph_VillaOfferWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaOfferWidget.VillaOfferWidget_C.ExecuteUbergraph_VillaOfferWidget");

	UVillaOfferWidget_C_ExecuteUbergraph_VillaOfferWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
