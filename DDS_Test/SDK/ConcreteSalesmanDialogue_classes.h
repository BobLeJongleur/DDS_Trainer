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

// BlueprintGeneratedClass ConcreteSalesmanDialogue.ConcreteSalesmanDialogue_C
// 0x0036 (0x03C8 - 0x0392)
class AConcreteSalesmanDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    GotConcrete;                                              // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EnabledConcrete;                                          // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ConreteBought;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConcreteSalesmanDialogue.ConcreteSalesmanDialogue_C");
		return ptr;
	}


	void RamaExtend();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ConcreteFound();
	void ConcreteEnabled();
	void BoughtConcrete();
	void SubclassLoaded();
	void ExecuteUbergraph_ConcreteSalesmanDialogue(int EntryPoint);
	void ConreteBought__DelegateSignature();
	void GotConcrete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
