
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

// Function tooltipWidget.tooltipWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UtooltipWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function tooltipWidget.tooltipWidget_C.Construct");

	UtooltipWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tooltipWidget.tooltipWidget_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UtooltipWidget_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function tooltipWidget.tooltipWidget_C.SetText");

	UtooltipWidget_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tooltipWidget.tooltipWidget_C.ExecuteUbergraph_tooltipWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtooltipWidget_C::ExecuteUbergraph_tooltipWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function tooltipWidget.tooltipWidget_C.ExecuteUbergraph_tooltipWidget");

	UtooltipWidget_C_ExecuteUbergraph_tooltipWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
