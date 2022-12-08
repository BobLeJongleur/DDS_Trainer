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

// BlueprintGeneratedClass BP_AS_Ergolina.BP_AS_Ergolina_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_AS_Ergolina_C : public AAS_Ergolina
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AS_Ergolina.BP_AS_Ergolina_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
