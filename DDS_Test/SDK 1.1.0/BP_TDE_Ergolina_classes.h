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

// BlueprintGeneratedClass BP_TDE_Ergolina.BP_TDE_Ergolina_C
// 0x0058 (0x0508 - 0x04B0)
class ABP_TDE_Ergolina_C : public ATDE_Ergolina
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       lsdPostProcess;                                           // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Out;                                                      // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             mindBlown_v6;                                             // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             shepherd;                                                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              fadeOut_NewTrack_0_167BFF254E4B7A37A514E9AA3632C212;      // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    fadeOut__Direction_167BFF254E4B7A37A514E9AA3632C212;      // 0x04E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeOut;                                                  // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               lsdActive;                                                // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               peak;                                                     // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04F2(0x0006) MISSED OFFSET
	class AplayerCharacterBP_C*                        PlayerRef;                                                // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    distortionMat;                                            // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TDE_Ergolina.BP_TDE_Ergolina_C");
		return ptr;
	}


	void UserConstructionScript();
	void fadeOut__FinishedFunc();
	void fadeOut__UpdateFunc();
	void StartEffect();
	void EffectTick(float DeltaTime);
	void EndEffect();
	void retryResetEffect();
	void ExecuteUbergraph_BP_TDE_Ergolina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
