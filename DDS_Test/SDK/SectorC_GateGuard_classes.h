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

// BlueprintGeneratedClass SectorC_GateGuard.SectorC_GateGuard_C
// 0x000C (0x0AE0 - 0x0AD4)
class ASectorC_GateGuard_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SectorC_GateGuard.SectorC_GateGuard_C");
		return ptr;
	}


	void UserConstructionScript();
	void RamaLoadedEvent();
	void ExecuteUbergraph_SectorC_GateGuard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
