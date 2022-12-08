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

// BlueprintGeneratedClass smugglerShopDialogueInstance.smugglerShopDialogueInstance_C
// 0x001A (0x03AC - 0x0392)
class AsmugglerShopDialogueInstance_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASmuggleBox_C*                               SmugglingBox;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                SmuggleCost;                                              // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass smugglerShopDialogueInstance.smugglerShopDialogueInstance_C");
		return ptr;
	}


	void UserConstructionScript();
	void DialogueLoaded();
	void DialogueActivated();
	void EngageSmuggle();
	void SmugglersTask();
	void ExecuteUbergraph_smugglerShopDialogueInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
