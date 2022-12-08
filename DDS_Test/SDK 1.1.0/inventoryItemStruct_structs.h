#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct inventoryItemStruct.inventoryItemStruct
// 0x0108
struct FinventoryItemStruct
{
	struct FText                                       Name;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Desc;                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  icon_12_A68CA86446F5D56467E879BBDDF79CD6;                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wieght;                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass_19_92D5E7B44B81759034AE35B07C0EC14A;           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EitemCategories>                       Category;             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canStack_25_6E7A78DA43FCB6665D916FA42A34E301;             // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                quantity;             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gramsPerItem;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FdrugData                                   drugData;             // 0x0058(0x00B0) (Edit, BlueprintVisible)

	bool operator==(const FinventoryItemStruct& other) const
	{
		auto wstringA = Name.Get() == nullptr ? L"[NULL]" : Name.Get();
		auto wstringB = other.Name.Get() == nullptr ? L"[NULL]" : other.Name.Get();
		return wcscmp(wstringA, wstringB) == 0;
	}

	size_t operator()(const FinventoryItemStruct& itemToHash) const noexcept
	{
		auto wstring = std::wstring(itemToHash.Name.Get() == nullptr ? L"[NULL]" : itemToHash.Name.Get());
		auto hash = std::hash<std::wstring>();
		return hash(wstring);
	}
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
