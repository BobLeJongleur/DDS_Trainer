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

// BlueprintGeneratedClass TwoTowerJumperDialogue.TwoTowerJumperDialogue_C
// 0x001E (0x03B0 - 0x0392)
class ATwoTowerJumperDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    QuestStart;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TwoTowerJumperDialogue.TwoTowerJumperDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void CementQuest();
	void DialogueActivated();
	void GoodsDelivered();
	void ExecuteUbergraph_TwoTowerJumperDialogue(int EntryPoint);
	void QuestStart__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
