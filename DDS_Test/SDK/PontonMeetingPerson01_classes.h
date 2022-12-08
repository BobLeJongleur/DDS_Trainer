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

// BlueprintGeneratedClass PontonMeetingPerson01.PontonMeetingPerson01_C
// 0x0019 (0x0AED - 0x0AD4)
class APontonMeetingPerson01_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     LookAt;                                                   // 0x0AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Talking;                                                  // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PontonMeetingPerson01.PontonMeetingPerson01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetTalking(const struct FVector& LookAtLocation, bool Talking);
	void TeleportMe();
	void RamaLoadedEvent();
	void ExecuteUbergraph_PontonMeetingPerson01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
