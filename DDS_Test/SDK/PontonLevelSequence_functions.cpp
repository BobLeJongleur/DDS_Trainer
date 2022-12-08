
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

// Function PontonLevelSequence.SequenceDirector_C.SequenceEvent_1
// (Public, BlueprintCallable, BlueprintEvent)

void USequenceDirector_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonLevelSequence.SequenceDirector_C.SequenceEvent_1");

	USequenceDirector_C_SequenceEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
