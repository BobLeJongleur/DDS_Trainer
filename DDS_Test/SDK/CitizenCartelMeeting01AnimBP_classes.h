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

// AnimBlueprintGeneratedClass CitizenCartelMeeting01AnimBP.CitizenCartelMeeting01AnimBP_C
// 0x058D (0x08ED - 0x0360)
class UCitizenCartelMeeting01AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F720A8BE4F63C387968D0D8DB0C0F619;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EFCC182F4814069B01D0C2A204DCCC0E;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6CF4FACB45C6F6D21FB8BBBF18DA66B7;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E557EE3849F01AD152AC7886DF2A2966;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C18B0AA444FB0AC3D61F96BD503144A4;// 0x0480(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA1E8B0A4620E64AD58688AAD5D243DB;// 0x04C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_76FF21884722657B323787BE49D221DC;// 0x0568(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84536C4C46D7F73E4D34E4A64C9E2661;// 0x05A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B9D6F4534087441DB24DE5A1EB3AC530;// 0x0648(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6AB04567452DB85D4A6F9B958201F9E2;// 0x0688(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F840B3C049D8FE7D97F1BBA224F01C90;// 0x07B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C2766EF44630B1A39A770BB0E67E1803;// 0x07F0(0x00E0)
	float                                              RotRate;                                                  // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity;                                                 // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class APawn*                                       Owner;                                                    // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                TalkAnim;                                                 // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isTalking;                                                // 0x08EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CitizenCartelMeeting01AnimBP.CitizenCartelMeeting01AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenCartelMeeting01AnimBP_AnimGraphNode_TransitionResult_C18B0AA444FB0AC3D61F96BD503144A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenCartelMeeting01AnimBP_AnimGraphNode_TransitionResult_E557EE3849F01AD152AC7886DF2A2966();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_CitizenCartelMeeting01AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
