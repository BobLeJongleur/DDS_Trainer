
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

// Function SmuggleBox.SmuggleBox_C.CanAccessContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   DeclineReason                  (Parm, OutParm)

void ASmuggleBox_C::CanAccessContainer(bool* CanAccess, struct FText* DeclineReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.CanAccessContainer");

	ASmuggleBox_C_CanAccessContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccess != nullptr)
		*CanAccess = params.CanAccess;
	if (DeclineReason != nullptr)
		*DeclineReason = params.DeclineReason;
}


// Function SmuggleBox.SmuggleBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASmuggleBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.UserConstructionScript");

	ASmuggleBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmuggleBox.SmuggleBox_C.SmuggleContents
// (BlueprintCallable, BlueprintEvent)

void ASmuggleBox_C::SmuggleContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.SmuggleContents");

	ASmuggleBox_C_SmuggleContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmuggleBox.SmuggleBox_C.openEventScript
// (BlueprintCallable, BlueprintEvent)

void ASmuggleBox_C::openEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.openEventScript");

	ASmuggleBox_C_openEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmuggleBox.SmuggleBox_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void ASmuggleBox_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.closeEventScript");

	ASmuggleBox_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmuggleBox.SmuggleBox_C.RamaLoaded
// (BlueprintCallable, BlueprintEvent)

void ASmuggleBox_C::RamaLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.RamaLoaded");

	ASmuggleBox_C_RamaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmuggleBox.SmuggleBox_C.ExecuteUbergraph_SmuggleBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmuggleBox_C::ExecuteUbergraph_SmuggleBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.ExecuteUbergraph_SmuggleBox");

	ASmuggleBox_C_ExecuteUbergraph_SmuggleBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
