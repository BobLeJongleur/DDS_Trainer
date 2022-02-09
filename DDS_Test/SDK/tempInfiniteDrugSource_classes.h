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

// BlueprintGeneratedClass tempInfiniteDrugSource.tempInfiniteDrugSource_C
// 0x0017 (0x0508 - 0x04F1)
class AtempInfiniteDrugSource_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                                  DataTable;                                                // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tempInfiniteDrugSource.tempInfiniteDrugSource_C");
		return ptr;
	}


	void getPackageIcon(int Quan, TEnumAsByte<EdrugForm> Form, class UTexture2D** IconOut);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void resupplySource();
	void ExecuteUbergraph_tempInfiniteDrugSource(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
