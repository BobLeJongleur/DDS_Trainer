#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass psychedelicDoorDialogue.psychedelicDoorDialogue_C
// 0x0017 (0x03A0 - 0x0389)
class ApsychedelicDoorDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ApsychedelicDoorNPC_C*                       doorHandlerRef;                                           // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicDoorDialogue.psychedelicDoorDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void unlockGangDoor();
	void ExecuteUbergraph_psychedelicDoorDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
