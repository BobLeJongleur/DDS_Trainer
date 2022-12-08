
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

// Function FrontWidgetInterface.FrontWidgetInterface_C.CloseFrontWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanClose                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontWidgetInterface_C::CloseFrontWidget(bool* CanClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontWidgetInterface.FrontWidgetInterface_C.CloseFrontWidget");

	UFrontWidgetInterface_C_CloseFrontWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClose != nullptr)
		*CanClose = params.CanClose;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
