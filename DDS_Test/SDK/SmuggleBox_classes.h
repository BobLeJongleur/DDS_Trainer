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

// BlueprintGeneratedClass SmuggleBox.SmuggleBox_C
// 0x0020 (0x0511 - 0x04F1)
class ASmuggleBox_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Cardboard_box_01;                                      // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASmuggleBox_C*                               OtherBox;                                                 // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Sent;                                                     // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmuggleBox.SmuggleBox_C");
		return ptr;
	}


	void CanAccessContainer(bool* CanAccess, struct FText* DeclineReason);
	void UserConstructionScript();
	void SmuggleContents();
	void openEventScript();
	void closeEventScript();
	void RamaLoaded();
	void ExecuteUbergraph_SmuggleBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
