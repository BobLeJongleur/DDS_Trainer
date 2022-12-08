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

// BlueprintGeneratedClass TwoTowerLadderTeleport.TwoTowerLadderTeleport_C
// 0x0038 (0x0460 - 0x0428)
class ATwoTowerLadderTeleport_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        deco_fire_escape_ladder;                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATwoTowerTeleportTarget_C*                   TeleportTarget;                                           // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               GoingUp;                                                  // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class ATwoTowerJumperNPC_C*                        TwoTowerGuy;                                              // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TwoTowerLadderTeleport.TwoTowerLadderTeleport_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InteractionActivate(class AplayerCharacterBP_C* playerRef);
	void updateActivity();
	void ExecuteUbergraph_TwoTowerLadderTeleport(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
