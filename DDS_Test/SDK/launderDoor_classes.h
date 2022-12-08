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

// BlueprintGeneratedClass launderDoor.launderDoor_C
// 0x0068 (0x0490 - 0x0428)
class AlaunderDoor_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Door02Wing;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Door02Frame;                                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenTimer;                                                // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIncreaser;                                            // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NooneHome;                                                // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class ACashDrawerBP_C*                             Drawer;                                                   // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FirstInteracted;                                          // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstOpened;                                              // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	int                                                AvailableLevel;                                           // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AvailableArea;                                            // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AstatisticsManager_C*                        StatMan;                                                  // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AsaleAreaManager_C*                          SaleAreaMan;                                              // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AmainComputer_C*                             mainComputer;                                             // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass launderDoor.launderDoor_C");
		return ptr;
	}


	void CheckAvailable(bool* IsAvailable);
	void GetChanceNooneHome(bool* NooneHome);
	void GetOpenReactionTime(float* Time);
	void UserConstructionScript();
	void LongRadiusChanged(bool InRadius);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InteractionActivate(class AplayerCharacterBP_C* playerRef);
	void OpenKnock();
	void ShortRadiusChanged(bool InRadius);
	void OpenKnock2();
	void VerifyAvailability();
	void ExecuteUbergraph_launderDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
