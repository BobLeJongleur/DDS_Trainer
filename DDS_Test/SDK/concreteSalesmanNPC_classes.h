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

// BlueprintGeneratedClass concreteSalesmanNPC.concreteSalesmanNPC_C
// 0x001C (0x0AF0 - 0x0AD4)
class AconcreteSalesmanNPC_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    ConcreteObtained;                                         // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass concreteSalesmanNPC.concreteSalesmanNPC_C");
		return ptr;
	}


	void SetNonTalker();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnableConcreteQuest();
	void GotConcrete();
	void BoughtConcrete();
	void RamaLoadedEvent();
	void ExecuteUbergraph_concreteSalesmanNPC(int EntryPoint);
	void ConcreteObtained__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
