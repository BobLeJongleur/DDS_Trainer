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

// BlueprintGeneratedClass sewageExit.sewageExit_C
// 0x0028 (0x0450 - 0x0428)
class AsewageExit_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tunelExitLadder;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AsewageTeleportPoint_C*                      sewageTeleport;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AplayerCharacterBP_C*                        tempPlayerRef;                                            // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sewageExit.sewageExit_C");
		return ptr;
	}


	void UserConstructionScript();
	void activateExit();
	void ExecuteUbergraph_sewageExit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
