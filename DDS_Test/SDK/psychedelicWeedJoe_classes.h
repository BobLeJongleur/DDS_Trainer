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

// BlueprintGeneratedClass psychedelicWeedJoe.psychedelicWeedJoe_C
// 0x0014 (0x0AE8 - 0x0AD4)
class ApsychedelicWeedJoe_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AweedMoneySafe_C*                            moneySafeRef;                                             // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicWeedJoe.psychedelicWeedJoe_C");
		return ptr;
	}


	void getReturnLine(bool Trade_canceled, TArray<struct FinventoryItemStruct>* Items, TArray<struct FMixProportionsStruct>* ItemMixes, TArray<int>* Quantities, TArray<int>* Amounts, struct FdialogueData* ReturnData, TArray<int>* ReturnIndexes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void retryInitiate();
	void ExecuteUbergraph_psychedelicWeedJoe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
