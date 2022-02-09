#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BlueprintHelpers.BlueprintHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBlueprintHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlueprintHelpers.BlueprintHelpers_C");
		return ptr;
	}


	void STATIC_DrugFormToText(TEnumAsByte<EdrugForm> drugForm, class UObject* __WorldContext, struct FText* OutText);
	void STATIC_GetHourTimestamp(class AdayTimeControler_C* dayTimeCon, class UObject* __WorldContext, int* IntTimestamp);
	void STATIC_DisplayConfirmWidget(class UObject* Querier, const struct FText& Title, const struct FText& Descritpion, bool ShowMouseAfter, const struct FString& ActionID, class UObject* __WorldContext);
	void STATIC_GetDealerLevel(float DealerExp, class UObject* __WorldContext, int* OutLevel, float* NextLevelProgress);
	void STATIC_GetMixName(const struct FMixProportionsStruct& InMix, class UObject* __WorldContext, struct FText* substanceName);
	void STATIC_MixToDrugData(const struct FMixProportionsStruct& MixProportions, class UObject* __WorldContext, struct FdrugData* OutData);
	void STATIC_SubstanceCloseEnough(const struct FMixProportionsStruct& Substance1, const struct FMixProportionsStruct& Substance2, float ToleranceLevel, bool AllowNameMissmatch, class UObject* __WorldContext, bool* CloseEnough, bool* NameMismatch);
	void STATIC_GramsToStackSizing(int Grams, class UObject* __WorldContext, int* OutMaxStack);
	void STATIC_GetDrugMeta(const struct FName& DrugID, class UObject* __WorldContext, bool* Success, struct FNewDrugData* DrugMeta);
	void STATIC_SubstanceFormToIcon(TEnumAsByte<EdrugForm> drugForm, int Gramature, class UObject* __WorldContext, class UTexture2D** IconOut);
	void STATIC_GetBalanceFlag(const struct FName& FlagID, class UObject* __WorldContext, struct FFlagStruct* FlagData, bool* FlagExists);
	void STATIC_StringIDToSubstanceName(const struct FString& stringID, class UObject* __WorldContext, bool* Found, struct FName* OutSubstanceName);
	void STATIC_DrugToMixProportions(const struct FdrugData& InDrugData, class UObject* __WorldContext, struct FMixProportionsStruct* OutProportions);
	void STATIC_GetSaleAreaMeta(const struct FName& AreaID, class UObject* __WorldContext, bool* Success, struct FSaleAreaData* OutMeta);
	void STATIC_IsEmptyGuid(const struct FGuid& Guid, class UObject* __WorldContext, bool* IsEmpty);
	void STATIC_GetEquipmentMeta(const struct FName& EquipmentID, class UObject* __WorldContext, bool* Success, struct FappartmentEquipment* EqMeta);
	void STATIC_GetItemMeta(const struct FName& ItemID, class UObject* __WorldContext, bool* Success, struct FNewItemStructure* ItemMeta);
	void STATIC_ParseItemsToNames(class UObject* __WorldContext, TArray<struct FinventoryItemStruct>* Items, TArray<struct FName>* OutNames);
	void STATIC_ParseEquipmentToNames(class UObject* __WorldContext, TArray<struct FappartmentEquipment>* EqList, TArray<struct FName>* OutNames);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
