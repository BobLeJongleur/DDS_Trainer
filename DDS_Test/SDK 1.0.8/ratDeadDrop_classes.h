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

// BlueprintGeneratedClass ratDeadDrop.ratDeadDrop_C
// 0x0057 (0x04D0 - 0x0479)
class AratDeadDrop_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               holdingEnvelope;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class ApsychedelicGangManager_C*                   psychedelicGangManager;                                   // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       MyName;                                                   // 0x04A0(0x0018) (Edit, BlueprintVisible)
	class AratDropSign_C*                              dropDignRef;                                              // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                dropUniqueIndex;                                          // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ratDeadDrop.ratDeadDrop_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void envelopeDropped();
	void closeEventScript();
	void reInitiate();
	void testActivationState();
	void ExecuteUbergraph_ratDeadDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
