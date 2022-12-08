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

// BlueprintGeneratedClass LabCrewNPC_BP.LabCrewNPC_BP_C
// 0x0010 (0x0AE4 - 0x0AD4)
class ALabCrewNPC_BP_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                LabCrewClientID;                                          // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LabCrewNPC_BP.LabCrewNPC_BP_C");
		return ptr;
	}


	void SetupDialogue();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RamaLoadedEvent();
	void SetupLabCrew(int ClientId);
	void ExecuteUbergraph_LabCrewNPC_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
