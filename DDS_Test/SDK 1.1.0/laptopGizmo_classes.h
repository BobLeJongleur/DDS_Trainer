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

// BlueprintGeneratedClass laptopGizmo.laptopGizmo_C
// 0x0008 (0x07D8 - 0x07D0)
class AlaptopGizmo_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass laptopGizmo.laptopGizmo_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Transform();
	void ExecuteUbergraph_laptopGizmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
