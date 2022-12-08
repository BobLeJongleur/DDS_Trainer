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

// BlueprintGeneratedClass ratDropSign.ratDropSign_C
// 0x005C (0x0384 - 0x0328)
class AratDropSign_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tlightFireSm;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tLightSm;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AnimLoop_Scale_9E45E4F84390A1D6A523708C73E1C901;          // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimLoop_Intensity_9E45E4F84390A1D6A523708C73E1C901;      // 0x0354(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimLoop__Direction_9E45E4F84390A1D6A523708C73E1C901;     // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UTimelineComponent*                          AnimLoop;                                                 // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0368(0x0018) (Edit, BlueprintVisible)
	float                                              baseIntensity;                                            // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ratDropSign.ratDropSign_C");
		return ptr;
	}


	void UserConstructionScript();
	void AnimLoop__FinishedFunc();
	void AnimLoop__UpdateFunc();
	void ReceiveBeginPlay();
	void SetActivationState(bool active, bool Delay);
	void startPlayAnim();
	void endPlayAnim();
	void ExecuteUbergraph_ratDropSign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
