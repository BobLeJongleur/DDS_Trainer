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

// BlueprintGeneratedClass weedDeskBlocker.weedDeskBlocker_C
// 0x0020 (0x0348 - 0x0328)
class AweedDeskBlocker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ApsychedelicGangManager_C*                   gangManRef;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weedDeskBlocker.weedDeskBlocker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void testGangUnlocked();
	void ExecuteUbergraph_weedDeskBlocker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
