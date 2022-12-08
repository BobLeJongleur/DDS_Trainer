
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

// Function SectantKnockOnDoor.SectantKnockOnDoor_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USectantKnockOnDoor_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantKnockOnDoor.SectantKnockOnDoor_C.ReceiveExecute");

	USectantKnockOnDoor_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantKnockOnDoor.SectantKnockOnDoor_C.ExecuteUbergraph_SectantKnockOnDoor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USectantKnockOnDoor_C::ExecuteUbergraph_SectantKnockOnDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantKnockOnDoor.SectantKnockOnDoor_C.ExecuteUbergraph_SectantKnockOnDoor");

	USectantKnockOnDoor_C_ExecuteUbergraph_SectantKnockOnDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
