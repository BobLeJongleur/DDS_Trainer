
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

// Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AevidenceDocumentSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.UserConstructionScript");

	AevidenceDocumentSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.spawnTheDocuments
// (BlueprintCallable, BlueprintEvent)

void AevidenceDocumentSpawn_C::spawnTheDocuments()
{
	static auto fn = UObject::FindObject<UFunction>("Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.spawnTheDocuments");

	AevidenceDocumentSpawn_C_spawnTheDocuments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.ExecuteUbergraph_evidenceDocumentSpawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AevidenceDocumentSpawn_C::ExecuteUbergraph_evidenceDocumentSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.ExecuteUbergraph_evidenceDocumentSpawn");

	AevidenceDocumentSpawn_C_ExecuteUbergraph_evidenceDocumentSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
