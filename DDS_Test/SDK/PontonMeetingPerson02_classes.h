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

// BlueprintGeneratedClass PontonMeetingPerson02.PontonMeetingPerson02_C
// 0x001C (0x0AF0 - 0x0AD4)
class APontonMeetingPerson02_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Talking;                                                  // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AE1(0x0003) MISSED OFFSET
	struct FVector                                     LookAt;                                                   // 0x0AE4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PontonMeetingPerson02.PontonMeetingPerson02_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetTalking(const struct FVector& LookAtLocation, bool Talking);
	void TeleportMe();
	void RamaLoadedEvent();
	void ExecuteUbergraph_PontonMeetingPerson02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
