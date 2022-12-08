
#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function shadyCommInterface.shadyCommInterface_C.Get_Button_0_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UshadyCommInterface_C::Get_Button_0_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_Button_0_bIsEnabled_1");

	UshadyCommInterface_C_Get_Button_0_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_btnSellPtcOpen_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UshadyCommInterface_C::Get_btnSellPtcOpen_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_btnSellPtcOpen_bIsEnabled_1");

	UshadyCommInterface_C_Get_btnSellPtcOpen_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.CheckFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Filter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 AssignedArea                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           OK                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::CheckFilter(const struct FString& Filter, const struct FString& AssignedArea, bool* OK)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.CheckFilter");

	UshadyCommInterface_C_CheckFilter_Params params;
	params.Filter = Filter;
	params.AssignedArea = AssignedArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OK != nullptr)
		*OK = params.OK;
}


// Function shadyCommInterface.shadyCommInterface_C.RenderAreaListDropdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::RenderAreaListDropdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.RenderAreaListDropdown");

	UshadyCommInterface_C_RenderAreaListDropdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_btnEditNickname_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UshadyCommInterface_C::Get_btnEditNickname_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_btnEditNickname_Visibility_1");

	UshadyCommInterface_C_Get_btnEditNickname_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_Button_15_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UshadyCommInterface_C::Get_Button_15_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_Button_15_bIsEnabled_1");

	UshadyCommInterface_C_Get_Button_15_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_btnAddToOrder_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UshadyCommInterface_C::Get_btnAddToOrder_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_btnAddToOrder_bIsEnabled_1");

	UshadyCommInterface_C_Get_btnAddToOrder_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UshadyCommInterface_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetText_1");

	UshadyCommInterface_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.PopulatePTCCombo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::PopulatePTCCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.PopulatePTCCombo");

	UshadyCommInterface_C_PopulatePTCCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.CloseArrestList
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::CloseArrestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.CloseArrestList");

	UshadyCommInterface_C_CloseArrestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.OpenArrestList
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::OpenArrestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.OpenArrestList");

	UshadyCommInterface_C_OpenArrestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_TextBlock_28_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UshadyCommInterface_C::Get_TextBlock_28_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_TextBlock_28_Text_1");

	UshadyCommInterface_C_Get_TextBlock_28_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.determineSector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 AreaNam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SectorNum                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::determineSector(const struct FString& AreaNam, int* SectorNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.determineSector");

	UshadyCommInterface_C_determineSector_Params params;
	params.AreaNam = AreaNam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectorNum != nullptr)
		*SectorNum = params.SectorNum;
}


// Function shadyCommInterface.shadyCommInterface_C.toggleAreaDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AreaString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           unlocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::toggleAreaDetails(bool Show, const struct FString& AreaString, bool unlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.toggleAreaDetails");

	UshadyCommInterface_C_toggleAreaDetails_Params params;
	params.Show = Show;
	params.AreaString = AreaString;
	params.unlocked = unlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.spawnSeedGuy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::spawnSeedGuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnSeedGuy");

	UshadyCommInterface_C_spawnSeedGuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.checkUserResetReadMessages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            userID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::checkUserResetReadMessages(int userID)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.checkUserResetReadMessages");

	UshadyCommInterface_C_checkUserResetReadMessages_Params params;
	params.userID = userID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusClientSatisfaction_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::Get_txtStatusClientSatisfaction_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusClientSatisfaction_ToolTipWidget_1");

	UshadyCommInterface_C_Get_txtStatusClientSatisfaction_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusDeliveryTime_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::Get_txtStatusDeliveryTime_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusDeliveryTime_ToolTipWidget_1");

	UshadyCommInterface_C_Get_txtStatusDeliveryTime_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.countAverageSatisfaction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   clientsLost                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  ClientSatisfaction             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    ClientNumSales                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UshadyCommInterface_C::countAverageSatisfaction(TArray<bool>* clientsLost, TArray<float>* ClientSatisfaction, TArray<int>* ClientNumSales)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.countAverageSatisfaction");

	UshadyCommInterface_C_countAverageSatisfaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (clientsLost != nullptr)
		*clientsLost = params.clientsLost;
	if (ClientSatisfaction != nullptr)
		*ClientSatisfaction = params.ClientSatisfaction;
	if (ClientNumSales != nullptr)
		*ClientNumSales = params.ClientNumSales;
}


// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::GetToolTipWidget_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_4");

	UshadyCommInterface_C_GetToolTipWidget_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::GetToolTipWidget_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_3");

	UshadyCommInterface_C_GetToolTipWidget_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::GetToolTipWidget_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_2");

	UshadyCommInterface_C_GetToolTipWidget_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.renderAreas
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::renderAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderAreas");

	UshadyCommInterface_C_renderAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.countAverageDeliveryTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   OrdersClosed                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  DeliveryTimes                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UshadyCommInterface_C::countAverageDeliveryTime(TArray<bool>* OrdersClosed, TArray<float>* DeliveryTimes)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.countAverageDeliveryTime");

	UshadyCommInterface_C_countAverageDeliveryTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrdersClosed != nullptr)
		*OrdersClosed = params.OrdersClosed;
	if (DeliveryTimes != nullptr)
		*DeliveryTimes = params.DeliveryTimes;
}


// Function shadyCommInterface.shadyCommInterface_C.renderWarnings
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::renderWarnings()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderWarnings");

	UshadyCommInterface_C_renderWarnings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_1");

	UshadyCommInterface_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.spawnEquipmentGuy
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::spawnEquipmentGuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnEquipmentGuy");

	UshadyCommInterface_C_spawnEquipmentGuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.spawnLaunderingGuy
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::spawnLaunderingGuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnLaunderingGuy");

	UshadyCommInterface_C_spawnLaunderingGuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.generateMeetingPhrase
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Response                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Decline                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   QuestionText                   (Parm, OutParm)

void UshadyCommInterface_C::generateMeetingPhrase(bool Response, bool Decline, struct FText* QuestionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.generateMeetingPhrase");

	UshadyCommInterface_C_generateMeetingPhrase_Params params;
	params.Response = Response;
	params.Decline = Decline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestionText != nullptr)
		*QuestionText = params.QuestionText;
}


// Function shadyCommInterface.shadyCommInterface_C.renderGroupContacts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AcontactsManager_C*      contactsManager                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    idsGroup                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UshadyCommInterface_C::renderGroupContacts(class AcontactsManager_C* contactsManager, TArray<int>* idsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderGroupContacts");

	UshadyCommInterface_C_renderGroupContacts_Params params;
	params.contactsManager = contactsManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (idsGroup != nullptr)
		*idsGroup = params.idsGroup;
}


// Function shadyCommInterface.shadyCommInterface_C.putContactListSection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Nam                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UshadyCommInterface_C::putContactListSection(const struct FText& Nam)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.putContactListSection");

	UshadyCommInterface_C_putContactListSection_Params params;
	params.Nam = Nam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.clearNewMessages
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::clearNewMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.clearNewMessages");

	UshadyCommInterface_C_clearNewMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.findSalePointByAreaID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 stringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ADrugSalePoint_C*        SalePoint                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::findSalePointByAreaID(const struct FString& stringID, struct FVector* Location, class ADrugSalePoint_C** SalePoint, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.findSalePointByAreaID");

	UshadyCommInterface_C_findSalePointByAreaID_Params params;
	params.stringID = stringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (SalePoint != nullptr)
		*SalePoint = params.SalePoint;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function shadyCommInterface.shadyCommInterface_C.spawnClientOnMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AsalesManager_C*         SaleManager                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            orderID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::spawnClientOnMap(class AsalesManager_C* SaleManager, int orderID)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnClientOnMap");

	UshadyCommInterface_C_spawnClientOnMap_Params params;
	params.SaleManager = SaleManager;
	params.orderID = orderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.checkOptionAvailability
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::checkOptionAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.checkOptionAvailability");

	UshadyCommInterface_C_checkOptionAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.switchContact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newContactID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::switchContact(int newContactID)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.switchContact");

	UshadyCommInterface_C_switchContact_Params params;
	params.newContactID = newContactID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_btnBankAccount_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::Get_btnBankAccount_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_btnBankAccount_ToolTipWidget_1");

	UshadyCommInterface_C_Get_btnBankAccount_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCryptoPrice_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::Get_txtWalletCryptoPrice_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCryptoPrice_ToolTipWidget_1");

	UshadyCommInterface_C_Get_txtWalletCryptoPrice_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCrypto_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommInterface_C::Get_txtWalletCrypto_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCrypto_ToolTipWidget_1");

	UshadyCommInterface_C_Get_txtWalletCrypto_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommInterface.shadyCommInterface_C.updateWallet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::updateWallet()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.updateWallet");

	UshadyCommInterface_C_updateWallet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.renderPriceList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::renderPriceList()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderPriceList");

	UshadyCommInterface_C_renderPriceList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.renderMessages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            userID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::renderMessages(int userID)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderMessages");

	UshadyCommInterface_C_renderMessages_Params params;
	params.userID = userID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.renderDrugs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AmainComputer_C*         Computer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::renderDrugs(class AmainComputer_C* Computer)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderDrugs");

	UshadyCommInterface_C_renderDrugs_Params params;
	params.Computer = Computer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.renderContacts
// (Public, BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::renderContacts()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderContacts");

	UshadyCommInterface_C_renderContacts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.UserClickedCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UshadyCommInterface_C::UserClickedCancel(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.UserClickedCancel");

	UshadyCommInterface_C_UserClickedCancel_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.PreConstruct");

	UshadyCommInterface_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UshadyCommInterface_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Construct");

	UshadyCommInterface_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Tick");

	UshadyCommInterface_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AmainComputer_C*         parentRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::setup(class AmainComputer_C* parentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.setup");

	UshadyCommInterface_C_setup_Params params;
	params.parentRef = parentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.closeOptions
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::closeOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.closeOptions");

	UshadyCommInterface_C_closeOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.showPriceEdit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DrugIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::showPriceEdit(int DrugIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.showPriceEdit");

	UshadyCommInterface_C_showPriceEdit_Params params;
	params.DrugIndex = DrugIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.hideUserOptions
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::hideUserOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.hideUserOptions");

	UshadyCommInterface_C_hideUserOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.openUserOptionsDialogue
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::openUserOptionsDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.openUserOptionsDialogue");

	UshadyCommInterface_C_openUserOptionsDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.UpdateDesktop
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::UpdateDesktop()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.UpdateDesktop");

	UshadyCommInterface_C_UpdateDesktop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.meetingResponse
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::meetingResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.meetingResponse");

	UshadyCommInterface_C_meetingResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.SendDealerMsg
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::SendDealerMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.SendDealerMsg");

	UshadyCommInterface_C_SendDealerMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.QueueDealerResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Positive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DealerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::QueueDealerResponse(bool Positive, int DealerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.QueueDealerResponse");

	UshadyCommInterface_C_QueueDealerResponse_Params params;
	params.Positive = Positive;
	params.DealerID = DealerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.randomWobble
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::randomWobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.randomWobble");

	UshadyCommInterface_C_randomWobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.OpenBuyPTC
// (BlueprintCallable, BlueprintEvent)

void UshadyCommInterface_C::OpenBuyPTC()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.OpenBuyPTC");

	UshadyCommInterface_C_OpenBuyPTC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature");

	UshadyCommInterface_C_BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UshadyCommInterface_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Destruct");

	UshadyCommInterface_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEditNickname_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnEditNickname_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEditNickname_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnEditNickname_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__NicknameEdit_K2Node_ComponentBoundEvent_30_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UshadyCommInterface_C::BndEvt__NicknameEdit_K2Node_ComponentBoundEvent_30_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__NicknameEdit_K2Node_ComponentBoundEvent_30_OnEditableTextChangedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__NicknameEdit_K2Node_ComponentBoundEvent_30_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__closeNickname_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__closeNickname_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__closeNickname_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__closeNickname_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.UserClickedConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UshadyCommInterface_C::UserClickedConfirm(const struct FString& ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.UserClickedConfirm");

	UshadyCommInterface_C_UserClickedConfirm_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_15_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__ContactListFilter_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::BndEvt__ContactListFilter_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__ContactListFilter_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__ContactListFilter_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSellPtcOpen_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__btnSellPtcOpen_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSellPtcOpen_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__btnSellPtcOpen_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UshadyCommInterface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");

	UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommInterface.shadyCommInterface_C.ExecuteUbergraph_shadyCommInterface
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommInterface_C::ExecuteUbergraph_shadyCommInterface(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.ExecuteUbergraph_shadyCommInterface");

	UshadyCommInterface_C_ExecuteUbergraph_shadyCommInterface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
