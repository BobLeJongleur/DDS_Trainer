
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

// Function dealerMurderPopup.dealerMurderPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdealerMurderPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerMurderPopup.dealerMurderPopup_C.Construct");

	UdealerMurderPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerMurderPopup.dealerMurderPopup_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ClientName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ClientOverdoseDrug             (BlueprintVisible, BlueprintReadOnly, Parm)

void UdealerMurderPopup_C::setup(const struct FText& ClientName, const struct FText& ClientOverdoseDrug)
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerMurderPopup.dealerMurderPopup_C.setup");

	UdealerMurderPopup_C_setup_Params params;
	params.ClientName = ClientName;
	params.ClientOverdoseDrug = ClientOverdoseDrug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerMurderPopup.dealerMurderPopup_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UdealerMurderPopup_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerMurderPopup.dealerMurderPopup_C.killMe");

	UdealerMurderPopup_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerMurderPopup.dealerMurderPopup_C.ExecuteUbergraph_dealerMurderPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdealerMurderPopup_C::ExecuteUbergraph_dealerMurderPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerMurderPopup.dealerMurderPopup_C.ExecuteUbergraph_dealerMurderPopup");

	UdealerMurderPopup_C_ExecuteUbergraph_dealerMurderPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
