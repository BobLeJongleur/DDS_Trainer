
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

// Function mainComputer.mainComputer_C.LabConstructed
// (Public, BlueprintCallable, BlueprintEvent)

void AmainComputer_C::LabConstructed()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.LabConstructed");

	AmainComputer_C_LabConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.SetBossName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   BossName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AmainComputer_C::SetBossName(const struct FText& BossName)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.SetBossName");

	AmainComputer_C_SetBossName_Params params;
	params.BossName = BossName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.GetPlayerDebt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          OutDebt                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::GetPlayerDebt(float* OutDebt)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.GetPlayerDebt");

	AmainComputer_C_GetPlayerDebt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDebt != nullptr)
		*OutDebt = params.OutDebt;
}


// Function mainComputer.mainComputer_C.GetPlayerOrderLimit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Limit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::GetPlayerOrderLimit(float* Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.GetPlayerOrderLimit");

	AmainComputer_C_GetPlayerOrderLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Limit != nullptr)
		*Limit = params.Limit;
}


// Function mainComputer.mainComputer_C.SendLaunderPayment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::SendLaunderPayment(float Amount, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.SendLaunderPayment");

	AmainComputer_C_SendLaunderPayment_Params params;
	params.Amount = Amount;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.AddMoneyToLaunder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::AddMoneyToLaunder(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.AddMoneyToLaunder");

	AmainComputer_C_AddMoneyToLaunder_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.ExpandRama
// (Public, BlueprintCallable, BlueprintEvent)

void AmainComputer_C::ExpandRama()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ExpandRama");

	AmainComputer_C_ExpandRama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.reconstructDrugOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AmainComputer_C::reconstructDrugOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.reconstructDrugOffer");

	AmainComputer_C_reconstructDrugOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.getDrugSizeWeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            packageGrams                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PackageSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PackageWeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::getDrugSizeWeight(int packageGrams, float* PackageSize, float* PackageWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.getDrugSizeWeight");

	AmainComputer_C_getDrugSizeWeight_Params params;
	params.packageGrams = packageGrams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PackageSize != nullptr)
		*PackageSize = params.PackageSize;
	if (PackageWeight != nullptr)
		*PackageWeight = params.PackageWeight;
}


// Function mainComputer.mainComputer_C.changePrices
// (Public, BlueprintCallable, BlueprintEvent)

void AmainComputer_C::changePrices()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.changePrices");

	AmainComputer_C_changePrices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.generateInitialBankHistory
// (Public, BlueprintCallable, BlueprintEvent)

void AmainComputer_C::generateInitialBankHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.generateInitialBankHistory");

	AmainComputer_C_generateInitialBankHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.newBankOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Income                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SourceName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Notify                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Legal                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::newBankOperation(bool Income, float Amount, const struct FText& Title, const struct FText& SourceName, bool Notify, bool Legal)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.newBankOperation");

	AmainComputer_C_newBankOperation_Params params;
	params.Income = Income;
	params.Amount = Amount;
	params.Title = Title;
	params.SourceName = SourceName;
	params.Notify = Notify;
	params.Legal = Legal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.checkNewDrugAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AmainComputer_C::checkNewDrugAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.checkNewDrugAvailability");

	AmainComputer_C_checkNewDrugAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.addUserMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            userID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PlayerMessage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::addUserMessage(int userID, const struct FText& Text, bool PlayerMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.addUserMessage");

	AmainComputer_C_addUserMessage_Params params;
	params.userID = userID;
	params.Text = Text;
	params.PlayerMessage = PlayerMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.getOrderRefByID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AorderInstance_C*        orderInstance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::getOrderRefByID(int ID, class AorderInstance_C** orderInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.getOrderRefByID");

	AmainComputer_C_getOrderRefByID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (orderInstance != nullptr)
		*orderInstance = params.orderInstance;
}


// Function mainComputer.mainComputer_C.constructMessageSentence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LastIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BeforeLastIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isSingle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::constructMessageSentence(bool LastIndex, bool BeforeLastIndex, int Quantity, const struct FdrugData& drugData, bool isSingle)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.constructMessageSentence");

	AmainComputer_C_constructMessageSentence_Params params;
	params.LastIndex = LastIndex;
	params.BeforeLastIndex = BeforeLastIndex;
	params.Quantity = Quantity;
	params.drugData = drugData;
	params.isSingle = isSingle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.sendNewOrder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FdrugData>       drugData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           DrugIDs                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    DrugQuantities                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AmainComputer_C::sendNewOrder(TArray<struct FdrugData>* drugData, TArray<struct FName>* DrugIDs, TArray<int>* DrugQuantities)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.sendNewOrder");

	AmainComputer_C_sendNewOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (drugData != nullptr)
		*drugData = params.drugData;
	if (DrugIDs != nullptr)
		*DrugIDs = params.DrugIDs;
	if (DrugQuantities != nullptr)
		*DrugQuantities = params.DrugQuantities;
}


// Function mainComputer.mainComputer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmainComputer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.UserConstructionScript");

	AmainComputer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmainComputer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ReceiveBeginPlay");

	AmainComputer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ReceiveTick");

	AmainComputer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.openComputer
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::openComputer()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.openComputer");

	AmainComputer_C_openComputer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.prepareOrderResponse
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::prepareOrderResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.prepareOrderResponse");

	AmainComputer_C_prepareOrderResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.ActivateComputer
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::ActivateComputer()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ActivateComputer");

	AmainComputer_C_ActivateComputer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.checkBenefitPayment
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::checkBenefitPayment()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.checkBenefitPayment");

	AmainComputer_C_checkBenefitPayment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.checkIllegalIncome
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::checkIllegalIncome()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.checkIllegalIncome");

	AmainComputer_C_checkIllegalIncome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.addPsychedelicsOffer
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::addPsychedelicsOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.addPsychedelicsOffer");

	AmainComputer_C_addPsychedelicsOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AmainComputer_C::BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");

	AmainComputer_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.RetryIllegalReminder
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::RetryIllegalReminder()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.RetryIllegalReminder");

	AmainComputer_C_RetryIllegalReminder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.ChooseBossNickname
// (BlueprintCallable, BlueprintEvent)

void AmainComputer_C::ChooseBossNickname()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ChooseBossNickname");

	AmainComputer_C_ChooseBossNickname_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainComputer_C::ExecuteUbergraph_mainComputer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer");

	AmainComputer_C_ExecuteUbergraph_mainComputer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
