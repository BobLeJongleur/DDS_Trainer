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

// BlueprintGeneratedClass GSMQuest04.GSMQuest04_C
// 0x0010 (0x03B0 - 0x03A0)
class AGSMQuest04_C : public AGSMAntenna_QuestActivator_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AEndgameAppartmentManager_C*                 SicarioManager;                                           // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GSMQuest04.GSMQuest04_C");
		return ptr;
	}


	void UserConstructionScript();
	void QuestActivation();
	void ExecuteUbergraph_GSMQuest04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
