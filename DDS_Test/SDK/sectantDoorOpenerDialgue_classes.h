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

// BlueprintGeneratedClass sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C
// 0x0016 (0x03A8 - 0x0392)
class AsectantDoorOpenerDialgue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AnpcFuneralHomeOwner_C*                      FuneralOwner;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C");
		return ptr;
	}


	void UserConstructionScript();
	void PasswordSaid();
	void ExecuteUbergraph_sectantDoorOpenerDialgue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
