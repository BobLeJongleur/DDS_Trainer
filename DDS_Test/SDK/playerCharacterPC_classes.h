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

// BlueprintGeneratedClass playerCharacterPC.playerCharacterPC_C
// 0x0018 (0x0690 - 0x0678)
class AplayerCharacterPC_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UUserWidget*>                         FrontWidgets;                                             // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass playerCharacterPC.playerCharacterPC_C");
		return ptr;
	}


	void FrontWidgetDestroyed(class UUserWidget* WidgetRef);
	void HasFrontWidgets(bool* HasWidgets);
	void CloseFrontWidget();
	void RegisterFrontWidget(class UUserWidget* NewItem);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_playerCharacterPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
