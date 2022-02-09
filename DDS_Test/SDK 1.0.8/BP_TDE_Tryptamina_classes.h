#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TDE_Tryptamina.BP_TDE_Tryptamina_C
// 0x001C (0x04CC - 0x04B0)
class ABP_TDE_Tryptamina_C : public ATDE_Tryptamina
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             DMT;                                                      // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              maxVol;                                                   // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TDE_Tryptamina.BP_TDE_Tryptamina_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartEffect();
	void EffectTick(float DeltaTime);
	void EndEffect();
	void ExecuteUbergraph_BP_TDE_Tryptamina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
