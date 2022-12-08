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

// BlueprintGeneratedClass decorativeFurniture.decorativeFurniture_C
// 0x001E (0x0446 - 0x0428)
class AdecorativeFurniture_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                timeBoostVal;                                             // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               respawned;                                                // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToggledOn;                                                // 0x0445(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass decorativeFurniture.decorativeFurniture_C");
		return ptr;
	}


	void respawnFurniture();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InteractionActivate(class AplayerCharacterBP_C* PlayerRef);
	void InputToggleOn();
	void InputToggleOff();
	void ExecuteUbergraph_decorativeFurniture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
