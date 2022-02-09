#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass equipmentShopFurniture.equipmentShopFurniture_C
// 0x000F (0x03E8 - 0x03D9)
class AequipmentShopFurniture_C : public AequipmentShop_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass equipmentShopFurniture.equipmentShopFurniture_C");
		return ptr;
	}


	void UserConstructionScript();
	void subclassInitiate();
	void setWeedEquipment();
	void ReceiveBeginPlay();
	void unlockWeedContent();
	void ExecuteUbergraph_equipmentShopFurniture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
