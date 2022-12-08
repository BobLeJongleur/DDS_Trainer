
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

// Function MeetinPerson_ConfirmArrival.MeetinPerson_ConfirmArrival_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeetinPerson_ConfirmArrival_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeetinPerson_ConfirmArrival.MeetinPerson_ConfirmArrival_C.ReceiveExecute");

	UMeetinPerson_ConfirmArrival_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeetinPerson_ConfirmArrival.MeetinPerson_ConfirmArrival_C.ExecuteUbergraph_MeetinPerson_ConfirmArrival
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeetinPerson_ConfirmArrival_C::ExecuteUbergraph_MeetinPerson_ConfirmArrival(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeetinPerson_ConfirmArrival.MeetinPerson_ConfirmArrival_C.ExecuteUbergraph_MeetinPerson_ConfirmArrival");

	UMeetinPerson_ConfirmArrival_C_ExecuteUbergraph_MeetinPerson_ConfirmArrival_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
