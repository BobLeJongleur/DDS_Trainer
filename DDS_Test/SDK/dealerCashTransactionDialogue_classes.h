#pragma once

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dealerCashTransactionDialogue.dealerCashTransactionDialogue_C
// 0x002E (0x03C0 - 0x0392)
class AdealerCashTransactionDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FText>                               randomLine01Text;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               randomBossDialogueLines;                                  // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dealerCashTransactionDialogue.dealerCashTransactionDialogue_C");
		return ptr;
	}


	void GetQuote(struct FText* Output);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void giveMoney();
	void ExecuteUbergraph_dealerCashTransactionDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
