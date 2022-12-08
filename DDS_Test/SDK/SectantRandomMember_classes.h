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

// BlueprintGeneratedClass SectantRandomMember.SectantRandomMember_C
// 0x001C (0x0AF0 - 0x0AD4)
class ASectantRandomMember_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    SectantKnocked;                                           // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SectantRandomMember.SectantRandomMember_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RamaLoadedEvent();
	void ExecuteUbergraph_SectantRandomMember(int EntryPoint);
	void SectantKnocked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
