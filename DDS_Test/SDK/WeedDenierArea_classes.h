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

// BlueprintGeneratedClass WeedDenierArea.WeedDenierArea_C
// 0x002C (0x0354 - 0x0328)
class AWeedDenierArea_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeedDenierArea.WeedDenierArea_C");
		return ptr;
	}


	void UserConstructionScript();
	void ShowWeedDeniers();
	void ExecuteUbergraph_WeedDenierArea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
