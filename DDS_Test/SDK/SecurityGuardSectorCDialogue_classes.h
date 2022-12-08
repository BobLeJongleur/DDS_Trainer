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

// BlueprintGeneratedClass SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C
// 0x0012 (0x03A4 - 0x0392)
class ASecurityGuardSectorCDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                KeyPrice;                                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void DialogueLoaded();
	void tryHandleKey();
	void ExecuteUbergraph_SecurityGuardSectorCDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
