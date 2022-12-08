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

// BlueprintGeneratedClass randomSampleDialogueInstance.randomSampleDialogueInstance_C
// 0x0027 (0x03B9 - 0x0392)
class ArandomSampleDialogueInstance_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               clientIsMale;                                             // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	TArray<struct FText>                               randomDialogueLines;                                      // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               firstSetup;                                               // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass randomSampleDialogueInstance.randomSampleDialogueInstance_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ConfigDialogue(bool male);
	void ExecuteUbergraph_randomSampleDialogueInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
