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

// BlueprintGeneratedClass labWeedPlant.labWeedPlant_C
// 0x0078 (0x03A0 - 0x0328)
class AlabWeedPlant_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        growboxDoniczka;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        weedIndoor005;                                            // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Scale;                                                    // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TMap<float, class UStaticMesh*>                    Models;                                                   // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass labWeedPlant.labWeedPlant_C");
		return ptr;
	}


	void AdaptModel(float Percent);
	void UserConstructionScript();
	void SetGrowingActive(class AlabPrefabMaster_C* Prefab, bool Activity);
	void ProgressChange(float ProgressPercent);
	void ExecuteUbergraph_labWeedPlant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
