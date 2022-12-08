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

// BlueprintGeneratedClass TwoTowerJumperNPC.TwoTowerJumperNPC_C
// 0x003D (0x0B11 - 0x0AD4)
class ATwoTowerJumperNPC_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AconcreteSalesmanNPC_C*                      ConcreteGuy;                                              // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ObtainedConcrete;                                         // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllDone;                                                  // 0x0AE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0AEA(0x0006) MISSED OFFSET
	class APontonSignal_C*                             PontonSignal;                                             // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APontonOfDeath_C*                            Ponton;                                                   // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    UpdateTeleportState;                                      // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               QuestStarted;                                             // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TwoTowerJumperNPC.TwoTowerJumperNPC_C");
		return ptr;
	}


	void RamaExtend();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void QuestStart();
	void ConcreteObtained();
	void GotAllGoods();
	void Signal();
	void RamaLoadedEvent();
	void ExecuteUbergraph_TwoTowerJumperNPC(int EntryPoint);
	void UpdateTeleportState__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
