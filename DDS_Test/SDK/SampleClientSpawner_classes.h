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

// BlueprintGeneratedClass SampleClientSpawner.SampleClientSpawner_C
// 0x0070 (0x0398 - 0x0328)
class ASampleClientSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             AreasPopulated;                                           // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AsaleAreaManager_C*                          SaleAreaMan;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AsalesManager_C*                             SalesMan;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AsprayAreaGizmo_C*>                   AllAreaGizmos;                                            // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FString>                             AreasToClean;                                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     testString;                                               // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             CurPlayerAreas;                                           // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SampleClientSpawner.SampleClientSpawner_C");
		return ptr;
	}


	void TrySpawnAreaClient(class AsprayAreaGizmo_C* AreaGizmo, const struct FString& AreaString, bool* Success);
	void HasAreaClient(const struct FString& Area, bool* HasClient);
	void UnregisterClient(const struct FString& Area, bool DirectClear);
	void RegisterClient(const struct FString& OnArea);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CheckSampleClients();
	void BreakAreaLoop();
	void CleanAreas();
	void ExecuteUbergraph_SampleClientSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
