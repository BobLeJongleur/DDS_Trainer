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

// BlueprintGeneratedClass TerraceFurnitureModule.TerraceFurnitureModule_C
// 0x0008 (0x04B0 - 0x04A8)
class ATerraceFurnitureModule_C : public AVillaModuleInstance_C
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TerraceFurnitureModule.TerraceFurnitureModule_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
