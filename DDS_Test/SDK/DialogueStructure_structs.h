#pragma once

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DialogueStructure.DialogueStructure
// 0x0031
struct FDialogueStructure
{
	struct FString                                     Notatka_19_CCEAD5BF474DDCEBFEF96391B3E2E084;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FirstDialogueID_2_261964124D8104B14697A8B35698C812;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartDialogueID_5_8B98C51C4238AF262D423094A7B3367E;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TradeReturnID_6_1AFFF475480B64086B37C1AF92B9B31A;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FdialogueData>                       DialogueLines_10_37BA5A7C4A205C5EBF4C61A26AAC8DF6;        // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BlockEscapeExit_17_8A01B2DF428343376613048FD546FC51;      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
