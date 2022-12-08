
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

// Function drugPickupItem.drugPickupItem_C.GetItemName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   OutName                        (Parm, OutParm)

void AdrugPickupItem_C::GetItemName(struct FText* OutName)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.GetItemName");

	AdrugPickupItem_C_GetItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;
}


// Function drugPickupItem.drugPickupItem_C.ReconstructRama
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::ReconstructRama()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.ReconstructRama");

	AdrugPickupItem_C_ReconstructRama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.makeAdditiveTypeModel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           BigPackage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             OutModel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdrugPickupItem_C::makeAdditiveTypeModel(const struct FdrugData& drugData, bool BigPackage, class UStaticMesh** OutModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.makeAdditiveTypeModel");

	AdrugPickupItem_C_makeAdditiveTypeModel_Params params;
	params.drugData = drugData;
	params.BigPackage = BigPackage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutModel != nullptr)
		*OutModel = params.OutModel;
}


// Function drugPickupItem.drugPickupItem_C.makePackageTypeModel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMixProportionsStruct   MixProportions                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           BigPackage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             OutModel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdrugPickupItem_C::makePackageTypeModel(const struct FdrugData& drugData, const struct FMixProportionsStruct& MixProportions, bool BigPackage, class UStaticMesh** OutModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.makePackageTypeModel");

	AdrugPickupItem_C_makePackageTypeModel_Params params;
	params.drugData = drugData;
	params.MixProportions = MixProportions;
	params.BigPackage = BigPackage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutModel != nullptr)
		*OutModel = params.OutModel;
}


// Function drugPickupItem.drugPickupItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.UserConstructionScript");

	AdrugPickupItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdrugPickupItem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.ReceiveBeginPlay");

	AdrugPickupItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.configPackage
// (BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::configPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.configPackage");

	AdrugPickupItem_C_configPackage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.objectPickup
// (BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::objectPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.objectPickup");

	AdrugPickupItem_C_objectPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.verifyCorrectNaming
// (Public, BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::verifyCorrectNaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.verifyCorrectNaming");

	AdrugPickupItem_C_verifyCorrectNaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.selectPackToggle
// (BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::selectPackToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.selectPackToggle");

	AdrugPickupItem_C_selectPackToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.retryConfig
// (BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::retryConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.retryConfig");

	AdrugPickupItem_C_retryConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.SubclassRamaLoaded
// (BlueprintCallable, BlueprintEvent)

void AdrugPickupItem_C::SubclassRamaLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.SubclassRamaLoaded");

	AdrugPickupItem_C_SubclassRamaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugPickupItem.drugPickupItem_C.ExecuteUbergraph_drugPickupItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdrugPickupItem_C::ExecuteUbergraph_drugPickupItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.ExecuteUbergraph_drugPickupItem");

	AdrugPickupItem_C_ExecuteUbergraph_drugPickupItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
