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

// BlueprintGeneratedClass psychedelicWeedDialogue.psychedelicWeedDialogue_C
// 0x0016 (0x03A8 - 0x0392)
class ApsychedelicWeedDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AweedMoneySafe_C*                            moneySafeRef;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicWeedDialogue.psychedelicWeedDialogue_C");
		return ptr;
	}


	void parseInventory(int* quantityFound);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void firstDialogueDone();
	void resetDialogueLines();
	void ExecuteUbergraph_psychedelicWeedDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
