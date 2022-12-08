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

// BlueprintGeneratedClass VillaMeshPrefab.VillaMeshPrefab_C
// 0x0010 (0x0338 - 0x0328)
class AVillaMeshPrefab_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaMeshPrefab.VillaMeshPrefab_C");
		return ptr;
	}


	void SetPrefabEnabled(bool Enabled);
	void UserConstructionScript();
	void SubclassActivation(bool active);
	void ExecuteUbergraph_VillaMeshPrefab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
