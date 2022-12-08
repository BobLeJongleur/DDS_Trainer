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

// BlueprintGeneratedClass EndgamePhoneBP.EndgamePhoneBP_C
// 0x0050 (0x0478 - 0x0428)
class AEndgamePhoneBP_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             stationaryPhoneRing;                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerCalled;                                             // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Ringing;                                                  // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EddieFinished;                                            // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x044A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    EddieEnd;                                                 // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EddieStart;                                               // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UAudioComponent*                             OutroMusicSound;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndgamePhoneBP.EndgamePhoneBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ActivatePhone();
	void InteractionActivate(class AplayerCharacterBP_C* playerRef);
	void StartRinging();
	void ringTone();
	void FinalCallEnded();
	void OverridePhone();
	void ForceEnding();
	void ExecuteUbergraph_EndgamePhoneBP(int EntryPoint);
	void EddieStart__DelegateSignature();
	void EddieEnd__DelegateSignature();
	void PlayerCalled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
