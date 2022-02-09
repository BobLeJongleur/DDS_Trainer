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

// BlueprintGeneratedClass ContainerMoneyDeposit.ContainerMoneyDeposit_C
// 0x001B (0x050C - 0x04F1)
class AContainerMoneyDeposit_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        moneyDeposit;                                             // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                RetrieveCashTaskID;                                       // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ContainerMoneyDeposit.ContainerMoneyDeposit_C");
		return ptr;
	}


	void CanAccessContainer(bool* CanAccess, struct FText* DeclineReason);
	void UserConstructionScript();
	void NewPickupQuest(int TaskID);
	void closeEventScript();
	void DepositCash(int Quantity);
	void ExecuteUbergraph_ContainerMoneyDeposit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
