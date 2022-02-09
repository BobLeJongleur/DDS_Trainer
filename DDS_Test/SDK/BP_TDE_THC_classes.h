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

// BlueprintGeneratedClass BP_TDE_THC.BP_TDE_THC_C
// 0x001C (0x04CC - 0x04B0)
class ABP_TDE_THC_C : public ATDE_THC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ERROR_XXX*                                   spawnedTree;                                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              rotSpeed;                                                 // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TDE_THC.BP_TDE_THC_C");
		return ptr;
	}


	void UserConstructionScript();
	void EndEffect();
	void EffectTick(float DeltaTime);
	void StartEffect();
	void ExecuteUbergraph_BP_TDE_THC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
