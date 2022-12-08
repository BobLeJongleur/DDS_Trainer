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

// BlueprintGeneratedClass SewerSectorTeleport.SewerSectorTeleport_C
// 0x0028 (0x0450 - 0x0428)
class ASewerSectorTeleport_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Wood_Door;                                             // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Tunnel_Small_Frame_01;                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASewerSectorTeleportTarget_C*                Target;                                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AsewerMetalGate_C*                           GateRef;                                                  // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SewerSectorTeleport.SewerSectorTeleport_C");
		return ptr;
	}


	void UserConstructionScript();
	void InteractionActivate(class AplayerCharacterBP_C* playerRef);
	void ExecuteUbergraph_SewerSectorTeleport(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
