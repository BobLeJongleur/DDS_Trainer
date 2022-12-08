#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass psychedelicDoorNPC.psychedelicDoorNPC_C
// 0x0014 (0x0AE8 - 0x0AD4)
class ApsychedelicDoorNPC_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AdoorsExtWoodPsychedelicHideout_C*           psychDoorRef;                                             // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicDoorNPC.psychedelicDoorNPC_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void checkDoorOpen();
	void ExecuteUbergraph_psychedelicDoorNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
