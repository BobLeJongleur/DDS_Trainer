
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

// Function tutorialTipWidget.tutorialTipWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UtutorialTipWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function tutorialTipWidget.tutorialTipWidget_C.Construct");

	UtutorialTipWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tutorialTipWidget.tutorialTipWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UtutorialTipWidget_C::Setup(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function tutorialTipWidget.tutorialTipWidget_C.Setup");

	UtutorialTipWidget_C_Setup_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tutorialTipWidget.tutorialTipWidget_C.ExecuteUbergraph_tutorialTipWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtutorialTipWidget_C::ExecuteUbergraph_tutorialTipWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function tutorialTipWidget.tutorialTipWidget_C.ExecuteUbergraph_tutorialTipWidget");

	UtutorialTipWidget_C_ExecuteUbergraph_tutorialTipWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
