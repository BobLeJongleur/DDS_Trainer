
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

// Function SectantVisitCard.SectantVisitCard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectantVisitCard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantVisitCard.SectantVisitCard_C.UserConstructionScript");

	ASectantVisitCard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantVisitCard.SectantVisitCard_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectantVisitCard_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantVisitCard.SectantVisitCard_C.InteractionActivate");

	ASectantVisitCard_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantVisitCard.SectantVisitCard_C.ExecuteUbergraph_SectantVisitCard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectantVisitCard_C::ExecuteUbergraph_SectantVisitCard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantVisitCard.SectantVisitCard_C.ExecuteUbergraph_SectantVisitCard");

	ASectantVisitCard_C_ExecuteUbergraph_SectantVisitCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
