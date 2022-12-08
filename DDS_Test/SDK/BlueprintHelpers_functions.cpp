
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

// Function BlueprintHelpers.BlueprintHelpers_C.SecondsToTime
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeSeconds                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutTextTime                    (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_SecondsToTime(float TimeSeconds, class UObject* __WorldContext, struct FText* OutTextTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.SecondsToTime");

	UBlueprintHelpers_C_SecondsToTime_Params params;
	params.TimeSeconds = TimeSeconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTextTime != nullptr)
		*OutTextTime = params.OutTextTime;
}


// Function BlueprintHelpers.BlueprintHelpers_C.DrugFormToText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EdrugForm>         drugForm                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutText                        (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_DrugFormToText(TEnumAsByte<EdrugForm> drugForm, class UObject* __WorldContext, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.DrugFormToText");

	UBlueprintHelpers_C_DrugFormToText_Params params;
	params.drugForm = drugForm;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetHourTimestamp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AdayTimeControler_C*     dayTimeCon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IntTimestamp                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_GetHourTimestamp(class AdayTimeControler_C* dayTimeCon, class UObject* __WorldContext, int* IntTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetHourTimestamp");

	UBlueprintHelpers_C_GetHourTimestamp_Params params;
	params.dayTimeCon = dayTimeCon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntTimestamp != nullptr)
		*IntTimestamp = params.IntTimestamp;
}


// Function BlueprintHelpers.BlueprintHelpers_C.DisplayConfirmWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Querier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Descritpion                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ShowMouseAfter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_DisplayConfirmWidget(class UObject* Querier, const struct FText& Title, const struct FText& Descritpion, bool ShowMouseAfter, const struct FString& ActionID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.DisplayConfirmWidget");

	UBlueprintHelpers_C_DisplayConfirmWidget_Params params;
	params.Querier = Querier;
	params.Title = Title;
	params.Descritpion = Descritpion;
	params.ShowMouseAfter = ShowMouseAfter;
	params.ActionID = ActionID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetDealerLevel
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DealerExp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLevel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NextLevelProgress              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_GetDealerLevel(float DealerExp, class UObject* __WorldContext, int* OutLevel, float* NextLevelProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetDealerLevel");

	UBlueprintHelpers_C_GetDealerLevel_Params params;
	params.DealerExp = DealerExp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLevel != nullptr)
		*OutLevel = params.OutLevel;
	if (NextLevelProgress != nullptr)
		*NextLevelProgress = params.NextLevelProgress;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetMixName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMixProportionsStruct   InMix                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   substanceName                  (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_GetMixName(const struct FMixProportionsStruct& InMix, class UObject* __WorldContext, struct FText* substanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetMixName");

	UBlueprintHelpers_C_GetMixName_Params params;
	params.InMix = InMix;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (substanceName != nullptr)
		*substanceName = params.substanceName;
}


// Function BlueprintHelpers.BlueprintHelpers_C.MixToDrugData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMixProportionsStruct   MixProportions                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FdrugData               OutData                        (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_MixToDrugData(const struct FMixProportionsStruct& MixProportions, class UObject* __WorldContext, struct FdrugData* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.MixToDrugData");

	UBlueprintHelpers_C_MixToDrugData_Params params;
	params.MixProportions = MixProportions;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function BlueprintHelpers.BlueprintHelpers_C.SubstanceCloseEnough
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMixProportionsStruct   Substance1                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMixProportionsStruct   Substance2                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ToleranceLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowNameMissmatch             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CloseEnough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NameMismatch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_SubstanceCloseEnough(const struct FMixProportionsStruct& Substance1, const struct FMixProportionsStruct& Substance2, float ToleranceLevel, bool AllowNameMissmatch, class UObject* __WorldContext, bool* CloseEnough, bool* NameMismatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.SubstanceCloseEnough");

	UBlueprintHelpers_C_SubstanceCloseEnough_Params params;
	params.Substance1 = Substance1;
	params.Substance2 = Substance2;
	params.ToleranceLevel = ToleranceLevel;
	params.AllowNameMissmatch = AllowNameMissmatch;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CloseEnough != nullptr)
		*CloseEnough = params.CloseEnough;
	if (NameMismatch != nullptr)
		*NameMismatch = params.NameMismatch;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GramsToStackSizing
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Grams                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutMaxStack                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_GramsToStackSizing(int Grams, class UObject* __WorldContext, int* OutMaxStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GramsToStackSizing");

	UBlueprintHelpers_C_GramsToStackSizing_Params params;
	params.Grams = Grams;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMaxStack != nullptr)
		*OutMaxStack = params.OutMaxStack;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetDrugMeta
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DrugID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FNewDrugData            DrugMeta                       (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_GetDrugMeta(const struct FName& DrugID, class UObject* __WorldContext, bool* Success, struct FNewDrugData* DrugMeta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetDrugMeta");

	UBlueprintHelpers_C_GetDrugMeta_Params params;
	params.DrugID = DrugID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DrugMeta != nullptr)
		*DrugMeta = params.DrugMeta;
}


// Function BlueprintHelpers.BlueprintHelpers_C.SubstanceFormToIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EdrugForm>         drugForm                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Gramature                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              IconOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_SubstanceFormToIcon(TEnumAsByte<EdrugForm> drugForm, int Gramature, class UObject* __WorldContext, class UTexture2D** IconOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.SubstanceFormToIcon");

	UBlueprintHelpers_C_SubstanceFormToIcon_Params params;
	params.drugForm = drugForm;
	params.Gramature = Gramature;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconOut != nullptr)
		*IconOut = params.IconOut;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetBalanceFlag
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFlagStruct             FlagData                       (Parm, OutParm)
// bool                           FlagExists                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_GetBalanceFlag(const struct FName& FlagID, class UObject* __WorldContext, struct FFlagStruct* FlagData, bool* FlagExists)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetBalanceFlag");

	UBlueprintHelpers_C_GetBalanceFlag_Params params;
	params.FlagID = FlagID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlagData != nullptr)
		*FlagData = params.FlagData;
	if (FlagExists != nullptr)
		*FlagExists = params.FlagExists;
}


// Function BlueprintHelpers.BlueprintHelpers_C.StringIDToSubstanceName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 stringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   OutSubstanceName               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_StringIDToSubstanceName(const struct FString& stringID, class UObject* __WorldContext, bool* Found, struct FName* OutSubstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.StringIDToSubstanceName");

	UBlueprintHelpers_C_StringIDToSubstanceName_Params params;
	params.stringID = stringID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (OutSubstanceName != nullptr)
		*OutSubstanceName = params.OutSubstanceName;
}


// Function BlueprintHelpers.BlueprintHelpers_C.DrugToMixProportions
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               InDrugData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMixProportionsStruct   OutProportions                 (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_DrugToMixProportions(const struct FdrugData& InDrugData, class UObject* __WorldContext, struct FMixProportionsStruct* OutProportions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.DrugToMixProportions");

	UBlueprintHelpers_C_DrugToMixProportions_Params params;
	params.InDrugData = InDrugData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProportions != nullptr)
		*OutProportions = params.OutProportions;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetSaleAreaMeta
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AreaID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSaleAreaData           OutMeta                        (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_GetSaleAreaMeta(const struct FName& AreaID, class UObject* __WorldContext, bool* Success, struct FSaleAreaData* OutMeta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetSaleAreaMeta");

	UBlueprintHelpers_C_GetSaleAreaMeta_Params params;
	params.AreaID = AreaID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (OutMeta != nullptr)
		*OutMeta = params.OutMeta;
}


// Function BlueprintHelpers.BlueprintHelpers_C.IsEmptyGuid
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBlueprintHelpers_C::STATIC_IsEmptyGuid(const struct FGuid& Guid, class UObject* __WorldContext, bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.IsEmptyGuid");

	UBlueprintHelpers_C_IsEmptyGuid_Params params;
	params.Guid = Guid;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetEquipmentMeta
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EquipmentID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FappartmentEquipment    EqMeta                         (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_GetEquipmentMeta(const struct FName& EquipmentID, class UObject* __WorldContext, bool* Success, struct FappartmentEquipment* EqMeta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetEquipmentMeta");

	UBlueprintHelpers_C_GetEquipmentMeta_Params params;
	params.EquipmentID = EquipmentID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (EqMeta != nullptr)
		*EqMeta = params.EqMeta;
}


// Function BlueprintHelpers.BlueprintHelpers_C.GetItemMeta
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FNewItemStructure       ItemMeta                       (Parm, OutParm)

void UBlueprintHelpers_C::STATIC_GetItemMeta(const struct FName& ItemID, class UObject* __WorldContext, bool* Success, struct FNewItemStructure* ItemMeta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetItemMeta");

	UBlueprintHelpers_C_GetItemMeta_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ItemMeta != nullptr)
		*ItemMeta = params.ItemMeta;
}


// Function BlueprintHelpers.BlueprintHelpers_C.ParseItemsToNames
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)

void UBlueprintHelpers_C::STATIC_ParseItemsToNames(class UObject* __WorldContext, TArray<struct FinventoryItemStruct>* Items, TArray<struct FName>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.ParseItemsToNames");

	UBlueprintHelpers_C_ParseItemsToNames_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function BlueprintHelpers.BlueprintHelpers_C.ParseEquipmentToNames
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FappartmentEquipment> EqList                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)

void UBlueprintHelpers_C::STATIC_ParseEquipmentToNames(class UObject* __WorldContext, TArray<struct FappartmentEquipment>* EqList, TArray<struct FName>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.ParseEquipmentToNames");

	UBlueprintHelpers_C_ParseEquipmentToNames_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EqList != nullptr)
		*EqList = params.EqList;
	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
