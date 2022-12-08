#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BlueprintHelpers.BlueprintHelpers_C.DrugFormToText
struct UBlueprintHelpers_C_DrugFormToText_Params
{
	TEnumAsByte<EdrugForm>                             drugForm;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetHourTimestamp
struct UBlueprintHelpers_C_GetHourTimestamp_Params
{
	class AdayTimeControler_C*                         dayTimeCon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntTimestamp;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.DisplayConfirmWidget
struct UBlueprintHelpers_C_DisplayConfirmWidget_Params
{
	class UObject*                                     Querier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Descritpion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShowMouseAfter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetDealerLevel
struct UBlueprintHelpers_C_GetDealerLevel_Params
{
	float                                              DealerExp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NextLevelProgress;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetMixName
struct UBlueprintHelpers_C_GetMixName_Params
{
	struct FMixProportionsStruct                       InMix;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       substanceName;                                            // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.MixToDrugData
struct UBlueprintHelpers_C_MixToDrugData_Params
{
	struct FMixProportionsStruct                       MixProportions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FdrugData                                   OutData;                                                  // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.SubstanceCloseEnough
struct UBlueprintHelpers_C_SubstanceCloseEnough_Params
{
	struct FMixProportionsStruct                       Substance1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMixProportionsStruct                       Substance2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ToleranceLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowNameMissmatch;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CloseEnough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NameMismatch;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GramsToStackSizing
struct UBlueprintHelpers_C_GramsToStackSizing_Params
{
	int                                                Grams;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutMaxStack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetDrugMeta
struct UBlueprintHelpers_C_GetDrugMeta_Params
{
	struct FName                                       DrugID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FNewDrugData                                DrugMeta;                                                 // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.SubstanceFormToIcon
struct UBlueprintHelpers_C_SubstanceFormToIcon_Params
{
	TEnumAsByte<EdrugForm>                             drugForm;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gramature;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetBalanceFlag
struct UBlueprintHelpers_C_GetBalanceFlag_Params
{
	struct FName                                       FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFlagStruct                                 FlagData;                                                 // (Parm, OutParm)
	bool                                               FlagExists;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.StringIDToSubstanceName
struct UBlueprintHelpers_C_StringIDToSubstanceName_Params
{
	struct FString                                     stringID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OutSubstanceName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.DrugToMixProportions
struct UBlueprintHelpers_C_DrugToMixProportions_Params
{
	struct FdrugData                                   InDrugData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMixProportionsStruct                       OutProportions;                                           // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetSaleAreaMeta
struct UBlueprintHelpers_C_GetSaleAreaMeta_Params
{
	struct FName                                       AreaID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSaleAreaData                               OutMeta;                                                  // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.IsEmptyGuid
struct UBlueprintHelpers_C_IsEmptyGuid_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEmpty;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetEquipmentMeta
struct UBlueprintHelpers_C_GetEquipmentMeta_Params
{
	struct FName                                       EquipmentID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FappartmentEquipment                        EqMeta;                                                   // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.GetItemMeta
struct UBlueprintHelpers_C_GetItemMeta_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FNewItemStructure                           ItemMeta;                                                 // (Parm, OutParm)
};

// Function BlueprintHelpers.BlueprintHelpers_C.ParseItemsToNames
struct UBlueprintHelpers_C_ParseItemsToNames_Params
{
	TArray<struct FinventoryItemStruct>                Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutNames;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BlueprintHelpers.BlueprintHelpers_C.ParseEquipmentToNames
struct UBlueprintHelpers_C_ParseEquipmentToNames_Params
{
	TArray<struct FappartmentEquipment>                EqList;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutNames;                                                 // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
