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

// WidgetBlueprintGeneratedClass VillaConstructionWidget.VillaConstructionWidget_C
// 0x0060 (0x0268 - 0x0208)
class UVillaConstructionWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     btnCloseShop;                                             // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  txtBankMoney;                                             // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVillaConstructionEntry_C*                   VillaConstructionEntry;                                   // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVillaConstructionEntry_C*                   VillaConstructionEntry_1;                                 // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVillaConstructionEntry_C*                   VillaConstructionEntry_2;                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVillaConstructionEntry_C*                   VillaConstructionEntry_3;                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVillaConstructionEntry_C*                   VillaConstructionEntry_C_1;                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AVillaConstructionTable_C*                   ConTable;                                                 // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AVillaPropertyInstance_C*                    Villa;                                                    // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AplayerCharacterBP_C*                        playerPawn;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AmainComputer_C*                             CompRef;                                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VillaConstructionWidget.VillaConstructionWidget_C");
		return ptr;
	}


	void CloseFrontWidget(bool* CanClose);
	struct FText Get_txtBankMoney_Text_1();
	void UpdateState();
	void Construct();
	void setup(class AVillaPropertyInstance_C* VillaRef, class AVillaConstructionTable_C* ConstructionTable);
	void BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_1_ClickedConstruct__DelegateSignature();
	void BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_2_ClickedConstruct__DelegateSignature();
	void BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_3_ClickedConstruct__DelegateSignature();
	void BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_4_ClickedConstruct__DelegateSignature();
	void killMe();
	void BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_5_ClickedConstruct__DelegateSignature();
	void BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_6_ClickedInstall__DelegateSignature();
	void BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_7_ClickedInstall__DelegateSignature();
	void BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_8_ClickedInstall__DelegateSignature();
	void BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_9_ClickedInstall__DelegateSignature();
	void BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_10_ClickedInstall__DelegateSignature();
	void StageUpdate();
	void BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_VillaConstructionWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
