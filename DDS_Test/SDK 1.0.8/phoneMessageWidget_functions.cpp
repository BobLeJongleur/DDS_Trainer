
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

// Function phoneMessageWidget.phoneMessageWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Sent                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UphoneMessageWidget_C::Setup(const struct FText& Message, bool Sent)
{
	static auto fn = UObject::FindObject<UFunction>("Function phoneMessageWidget.phoneMessageWidget_C.Setup");

	UphoneMessageWidget_C_Setup_Params params;
	params.Message = Message;
	params.Sent = Sent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
