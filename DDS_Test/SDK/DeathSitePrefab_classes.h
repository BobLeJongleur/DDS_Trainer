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

// BlueprintGeneratedClass DeathSitePrefab.DeathSitePrefab_C
// 0x0020 (0x0348 - 0x0328)
class ADeathSitePrefab_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                SMs;                                                      // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeathSitePrefab.DeathSitePrefab_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetPrefabStage(int Stage);
	void SubclassPrefabStageChange(int Stage);
	void ExecuteUbergraph_DeathSitePrefab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
