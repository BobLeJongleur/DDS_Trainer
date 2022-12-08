#pragma once

#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function shadyCommInterface.shadyCommInterface_C.Get_Button_0_bIsEnabled_1
struct UshadyCommInterface_C_Get_Button_0_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_btnSellPtcOpen_bIsEnabled_1
struct UshadyCommInterface_C_Get_btnSellPtcOpen_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.CheckFilter
struct UshadyCommInterface_C_CheckFilter_Params
{
	struct FString                                     Filter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     AssignedArea;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               OK;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.RenderAreaListDropdown
struct UshadyCommInterface_C_RenderAreaListDropdown_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.Get_btnEditNickname_Visibility_1
struct UshadyCommInterface_C_Get_btnEditNickname_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_Button_15_bIsEnabled_1
struct UshadyCommInterface_C_Get_Button_15_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_btnAddToOrder_bIsEnabled_1
struct UshadyCommInterface_C_Get_btnAddToOrder_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.GetText_1
struct UshadyCommInterface_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function shadyCommInterface.shadyCommInterface_C.PopulatePTCCombo
struct UshadyCommInterface_C_PopulatePTCCombo_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.CloseArrestList
struct UshadyCommInterface_C_CloseArrestList_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.OpenArrestList
struct UshadyCommInterface_C_OpenArrestList_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.Get_TextBlock_28_Text_1
struct UshadyCommInterface_C_Get_TextBlock_28_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function shadyCommInterface.shadyCommInterface_C.determineSector
struct UshadyCommInterface_C_determineSector_Params
{
	struct FString                                     AreaNam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SectorNum;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.toggleAreaDetails
struct UshadyCommInterface_C_toggleAreaDetails_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               unlocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.spawnSeedGuy
struct UshadyCommInterface_C_spawnSeedGuy_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.checkUserResetReadMessages
struct UshadyCommInterface_C_checkUserResetReadMessages_Params
{
	int                                                userID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusClientSatisfaction_ToolTipWidget_1
struct UshadyCommInterface_C_Get_txtStatusClientSatisfaction_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusDeliveryTime_ToolTipWidget_1
struct UshadyCommInterface_C_Get_txtStatusDeliveryTime_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.countAverageSatisfaction
struct UshadyCommInterface_C_countAverageSatisfaction_Params
{
	TArray<bool>                                       clientsLost;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      ClientSatisfaction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        ClientNumSales;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_4
struct UshadyCommInterface_C_GetToolTipWidget_4_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_3
struct UshadyCommInterface_C_GetToolTipWidget_3_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_2
struct UshadyCommInterface_C_GetToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.renderAreas
struct UshadyCommInterface_C_renderAreas_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.countAverageDeliveryTime
struct UshadyCommInterface_C_countAverageDeliveryTime_Params
{
	TArray<bool>                                       OrdersClosed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      DeliveryTimes;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function shadyCommInterface.shadyCommInterface_C.renderWarnings
struct UshadyCommInterface_C_renderWarnings_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_1
struct UshadyCommInterface_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.spawnEquipmentGuy
struct UshadyCommInterface_C_spawnEquipmentGuy_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.spawnLaunderingGuy
struct UshadyCommInterface_C_spawnLaunderingGuy_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.generateMeetingPhrase
struct UshadyCommInterface_C_generateMeetingPhrase_Params
{
	bool                                               Response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Decline;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       QuestionText;                                             // (Parm, OutParm)
};

// Function shadyCommInterface.shadyCommInterface_C.renderGroupContacts
struct UshadyCommInterface_C_renderGroupContacts_Params
{
	class AcontactsManager_C*                          contactsManager;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        idsGroup;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function shadyCommInterface.shadyCommInterface_C.putContactListSection
struct UshadyCommInterface_C_putContactListSection_Params
{
	struct FText                                       Nam;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function shadyCommInterface.shadyCommInterface_C.clearNewMessages
struct UshadyCommInterface_C_clearNewMessages_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.findSalePointByAreaID
struct UshadyCommInterface_C_findSalePointByAreaID_Params
{
	struct FString                                     stringID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ADrugSalePoint_C*                            SalePoint;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.spawnClientOnMap
struct UshadyCommInterface_C_spawnClientOnMap_Params
{
	class AsalesManager_C*                             SaleManager;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                orderID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.checkOptionAvailability
struct UshadyCommInterface_C_checkOptionAvailability_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.switchContact
struct UshadyCommInterface_C_switchContact_Params
{
	int                                                newContactID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_btnBankAccount_ToolTipWidget_1
struct UshadyCommInterface_C_Get_btnBankAccount_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCryptoPrice_ToolTipWidget_1
struct UshadyCommInterface_C_Get_txtWalletCryptoPrice_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCrypto_ToolTipWidget_1
struct UshadyCommInterface_C_Get_txtWalletCrypto_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.updateWallet
struct UshadyCommInterface_C_updateWallet_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.renderPriceList
struct UshadyCommInterface_C_renderPriceList_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.renderMessages
struct UshadyCommInterface_C_renderMessages_Params
{
	int                                                userID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.renderDrugs
struct UshadyCommInterface_C_renderDrugs_Params
{
	class AmainComputer_C*                             Computer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.renderContacts
struct UshadyCommInterface_C_renderContacts_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.UserClickedCancel
struct UshadyCommInterface_C_UserClickedCancel_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function shadyCommInterface.shadyCommInterface_C.PreConstruct
struct UshadyCommInterface_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.Construct
struct UshadyCommInterface_C_Construct_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.Tick
struct UshadyCommInterface_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.setup
struct UshadyCommInterface_C_setup_Params
{
	class AmainComputer_C*                             parentRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.closeOptions
struct UshadyCommInterface_C_closeOptions_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.showPriceEdit
struct UshadyCommInterface_C_showPriceEdit_Params
{
	int                                                DrugIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.hideUserOptions
struct UshadyCommInterface_C_hideUserOptions_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.openUserOptionsDialogue
struct UshadyCommInterface_C_openUserOptionsDialogue_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.UpdateDesktop
struct UshadyCommInterface_C_UpdateDesktop_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.meetingResponse
struct UshadyCommInterface_C_meetingResponse_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.SendDealerMsg
struct UshadyCommInterface_C_SendDealerMsg_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.QueueDealerResponse
struct UshadyCommInterface_C_QueueDealerResponse_Params
{
	bool                                               Positive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DealerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.randomWobble
struct UshadyCommInterface_C_randomWobble_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.OpenBuyPTC
struct UshadyCommInterface_C_OpenBuyPTC_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature
struct UshadyCommInterface_C_BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.Destruct
struct UshadyCommInterface_C_Destruct_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEditNickname_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnEditNickname_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__NicknameEdit_K2Node_ComponentBoundEvent_30_OnEditableTextChangedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__NicknameEdit_K2Node_ComponentBoundEvent_30_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__closeNickname_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__closeNickname_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.UserClickedConfirm
struct UshadyCommInterface_C_UserClickedConfirm_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__ContactListFilter_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__ContactListFilter_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSellPtcOpen_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__btnSellPtcOpen_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function shadyCommInterface.shadyCommInterface_C.ExecuteUbergraph_shadyCommInterface
struct UshadyCommInterface_C_ExecuteUbergraph_shadyCommInterface_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
