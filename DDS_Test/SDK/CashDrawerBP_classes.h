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

// BlueprintGeneratedClass CashDrawerBP.CashDrawerBP_C
// 0x0031 (0x0522 - 0x04F1)
class ACashDrawerBP_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        cashDrawer;                                               // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        cashDrawerBase;                                           // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DrawerOpening_OpenProgress_67C1793C4523A0CCF4129C8F7D42BCC6;// 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DrawerOpening__Direction_67C1793C4523A0CCF4129C8F7D42BCC6;// 0x0514(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DrawerOpening;                                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Extended;                                                 // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InRadius;                                                 // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CashDrawerBP.CashDrawerBP_C");
		return ptr;
	}


	void ProcessValuables();
	void CanAccessContainer(bool* CanAccess, struct FText* DeclineReason);
	void UserConstructionScript();
	void DrawerOpening__FinishedFunc();
	void DrawerOpening__UpdateFunc();
	void LongRadiusChanged(bool InRadius);
	void OpenDrawer();
	void CloseDrawer();
	void closeEventScript();
	void ShortRadiusChanged(bool InRadius);
	void MoneyDeposited(int Quantity);
	void ExecuteUbergraph_CashDrawerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
