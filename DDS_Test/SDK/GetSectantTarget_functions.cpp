
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

// Function GetSectantTarget.GetSectantTarget_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGetSectantTarget_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetSectantTarget.GetSectantTarget_C.ReceiveExecute");

	UGetSectantTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GetSectantTarget.GetSectantTarget_C.ExecuteUbergraph_GetSectantTarget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGetSectantTarget_C::ExecuteUbergraph_GetSectantTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetSectantTarget.GetSectantTarget_C.ExecuteUbergraph_GetSectantTarget");

	UGetSectantTarget_C_ExecuteUbergraph_GetSectantTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
