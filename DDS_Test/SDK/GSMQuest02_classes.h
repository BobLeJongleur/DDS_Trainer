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

// BlueprintGeneratedClass GSMQuest02.GSMQuest02_C
// 0x0018 (0x03B8 - 0x03A0)
class AGSMQuest02_C : public AGSMAntenna_QuestActivator_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AfuneralHomeOwnerDialogue_C*                 FuneralDialogue;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AnpcFuneralHomeOwner_C*                      FuneralOwner;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GSMQuest02.GSMQuest02_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GraveUnlock();
	void QuestActivation();
	void ExecuteUbergraph_GSMQuest02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
