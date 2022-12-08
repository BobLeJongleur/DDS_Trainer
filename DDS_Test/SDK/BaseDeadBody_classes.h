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

// BlueprintGeneratedClass BaseDeadBody.BaseDeadBody_C
// 0x0038 (0x0778 - 0x0740)
class ABaseDeadBody_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      C;                                                        // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      G;                                                        // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      W;                                                        // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Okulary;                                                  // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Rece;                                                     // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Czapka;                                                   // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseDeadBody.BaseDeadBody_C");
		return ptr;
	}


	void UpdateMorphTargets();
	void GetMorphTargetValue();
	void SetMasterPoseComponentForParts();
	bool IsDefaultMeshInheritungItsAnimationAsset();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BaseDeadBody(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
