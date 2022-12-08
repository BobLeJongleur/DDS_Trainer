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

// BlueprintGeneratedClass villaLightSwitch.villaLightSwitch_C
// 0x0020 (0x0448 - 0x0428)
class AvillaLightSwitch_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AVillaRoomInstance_C*                        RoomRef;                                                  // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass villaLightSwitch.villaLightSwitch_C");
		return ptr;
	}


	void UserConstructionScript();
	void InteractionActivate(class AplayerCharacterBP_C* playerRef);
	void SetActivity(bool State);
	void ExecuteUbergraph_villaLightSwitch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
