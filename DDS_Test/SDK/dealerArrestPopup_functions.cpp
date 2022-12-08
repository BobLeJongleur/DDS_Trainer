
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

// Function dealerArrestPopup.dealerArrestPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdealerArrestPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.Construct");

	UdealerArrestPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerArrestPopup.dealerArrestPopup_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ClientName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Released                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdealerArrestPopup_C::setup(const struct FText& ClientName, bool Released)
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.setup");

	UdealerArrestPopup_C_setup_Params params;
	params.ClientName = ClientName;
	params.Released = Released;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerArrestPopup.dealerArrestPopup_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UdealerArrestPopup_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.killMe");

	UdealerArrestPopup_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerArrestPopup.dealerArrestPopup_C.ExecuteUbergraph_dealerArrestPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdealerArrestPopup_C::ExecuteUbergraph_dealerArrestPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.ExecuteUbergraph_dealerArrestPopup");

	UdealerArrestPopup_C_ExecuteUbergraph_dealerArrestPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
