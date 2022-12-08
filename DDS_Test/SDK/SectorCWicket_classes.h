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

// BlueprintGeneratedClass SectorCWicket.SectorCWicket_C
// 0x0018 (0x0550 - 0x0538)
class ASectorCWicket_C : public AmetalWicket02_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASectorC_GateGuard_C*                        GuardRef;                                                 // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SectorCWicket.SectorCWicket_C");
		return ptr;
	}


	void UserConstructionScript();
	void LongRadiusChanged(bool InRadius);
	void eventDoorActivated();
	void ShortRadiusChanged(bool InRadius);
	void ExecuteUbergraph_SectorCWicket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
