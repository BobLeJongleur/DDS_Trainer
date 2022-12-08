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

// BlueprintGeneratedClass Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C
// 0x0028 (0x0360 - 0x0338)
class AVilla_BlowupPool_SectorA_C : public AVillaMeshPrefab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        waterArea;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent01;                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Villa_BlowupPool_SectorA.Villa_BlowupPool_SectorA_C");
		return ptr;
	}


	void UserConstructionScript();
	void SubclassActivation(bool active);
	void ExecuteUbergraph_Villa_BlowupPool_SectorA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
