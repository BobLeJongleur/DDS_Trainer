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

// BlueprintGeneratedClass GSMQuest03.GSMQuest03_C
// 0x0020 (0x03C0 - 0x03A0)
class AGSMQuest03_C : public AGSMAntenna_QuestActivator_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AvillaSalesman_C*                            VillaSaleseman;                                           // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APontonOfDeath_C*                            PontonOfDeath;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATwoTowerJumperNPC_C*                        Jumper;                                                   // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GSMQuest03.GSMQuest03_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void QuestActivation();
	void PontonDropped();
	void DropPonton();
	void ExecuteUbergraph_GSMQuest03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
