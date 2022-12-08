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

// BlueprintGeneratedClass InteractiveTrashBin.InteractiveTrashBin_C
// 0x001B (0x050C - 0x04F1)
class AInteractiveTrashBin_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AdayTimeControler_C*                         dayTimeCon;                                               // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StealChance;                                              // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractiveTrashBin.InteractiveTrashBin_C");
		return ptr;
	}


	void PurgeTrashBin();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RamaLoaded();
	void BinPurge(bool TotalPurge);
	void RetryPurge();
	void ExecuteUbergraph_InteractiveTrashBin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
