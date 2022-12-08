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

// BlueprintGeneratedClass dd_trashBinConcrete.dd_trashBinConcrete_C
// 0x0008 (0x0520 - 0x0518)
class Add_trashBinConcrete_C : public AdeadDropBase_C
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dd_trashBinConcrete.dd_trashBinConcrete_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
