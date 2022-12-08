
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

// Function MeetinPerson_GetTargetLocation.MeetinPerson_GetTargetLocation_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeetinPerson_GetTargetLocation_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeetinPerson_GetTargetLocation.MeetinPerson_GetTargetLocation_C.ReceiveExecute");

	UMeetinPerson_GetTargetLocation_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeetinPerson_GetTargetLocation.MeetinPerson_GetTargetLocation_C.ExecuteUbergraph_MeetinPerson_GetTargetLocation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeetinPerson_GetTargetLocation_C::ExecuteUbergraph_MeetinPerson_GetTargetLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeetinPerson_GetTargetLocation.MeetinPerson_GetTargetLocation_C.ExecuteUbergraph_MeetinPerson_GetTargetLocation");

	UMeetinPerson_GetTargetLocation_C_ExecuteUbergraph_MeetinPerson_GetTargetLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
