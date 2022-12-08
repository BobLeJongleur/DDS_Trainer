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

// BlueprintGeneratedClass ContainerSafeLarge.ContainerSafeLarge_C
// 0x000F (0x0500 - 0x04F1)
class AContainerSafeLarge_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ContainerSafeLarge.ContainerSafeLarge_C");
		return ptr;
	}


	void DropCash(const struct FGuid& Guid, int CashAmount, bool* DropConfirmed);
	void UserConstructionScript();
	void InvalidateOldSafe(const struct FGuid& SafeGuid);
	void ReceiveDestroyed();
	void RamaLoaded();
	void ExecuteUbergraph_ContainerSafeLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
