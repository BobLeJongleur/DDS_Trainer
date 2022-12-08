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

// BlueprintGeneratedClass sitDownPlace.sitDownPlace_C
// 0x0038 (0x0460 - 0x0428)
class AsitDownPlace_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AplayerCharacterBP_C*                        Player;                                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              camBlendTime;                                             // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class AsitingDownPawn_C*                           sitDownPawn;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PawnClass;                                                // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sitDownPlace.sitDownPlace_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Action_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void SitDown(class AplayerCharacterBP_C* playerRef);
	void Activate();
	void ExecuteUbergraph_sitDownPlace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
