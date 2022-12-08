
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

// Function DrugDealerSimulator.AbsorbedSubstance.MergeTakenEffects
// (Final, Native, Public)
// Parameters:
// class UAbsorbedSubstance*      otherObject                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          curConcentration               (Parm, ZeroConstructor, IsPlainOldData)
// float                          substanceTolerance             (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstance::MergeTakenEffects(class UAbsorbedSubstance* otherObject, float curConcentration, float substanceTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeTakenEffects");

	UAbsorbedSubstance_MergeTakenEffects_Params params;
	params.otherObject = otherObject;
	params.curConcentration = curConcentration;
	params.substanceTolerance = substanceTolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.MergeSpiritImpact
// (Final, Native, Public)
// Parameters:
// class UEB_Spirit*              Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstance::MergeSpiritImpact(class UEB_Spirit* Source, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeSpiritImpact");

	UAbsorbedSubstance_MergeSpiritImpact_Params params;
	params.Source = Source;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.MergePhysicalImpact
// (Final, Native, Public)
// Parameters:
// class UEB_Physical*            Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstance::MergePhysicalImpact(class UEB_Physical* Source, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergePhysicalImpact");

	UAbsorbedSubstance_MergePhysicalImpact_Params params;
	params.Source = Source;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.MergePerceptionImpact
// (Final, Native, Public)
// Parameters:
// class UEB_Perception*          Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstance::MergePerceptionImpact(class UEB_Perception* Source, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergePerceptionImpact");

	UAbsorbedSubstance_MergePerceptionImpact_Params params;
	params.Source = Source;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.MergeHealthImpact
// (Final, Native, Public)
// Parameters:
// class UEB_BodyHealth*          Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstance::MergeHealthImpact(class UEB_BodyHealth* Source, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeHealthImpact");

	UAbsorbedSubstance_MergeHealthImpact_Params params;
	params.Source = Source;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.MergeBrainFuncsImpact
// (Final, Native, Public)
// Parameters:
// class UEB_BrainFunctions*      Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstance::MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeBrainFuncsImpact");

	UAbsorbedSubstance_MergeBrainFuncsImpact_Params params;
	params.Source = Source;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.InitFactorHandler
// (Final, Native, Public)

void UAbsorbedSubstance::InitFactorHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.InitFactorHandler");

	UAbsorbedSubstance_InitFactorHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.GetQualityFactor
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstance::GetQualityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetQualityFactor");

	UAbsorbedSubstance_GetQualityFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstance.GetPurityFactor
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstance::GetPurityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetPurityFactor");

	UAbsorbedSubstance_GetPurityFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstance.GetFirstPowerMomentTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstance::GetFirstPowerMomentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetFirstPowerMomentTime");

	UAbsorbedSubstance_GetFirstPowerMomentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstance.GetExcretedAmount
// (Final, Native, Public)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstance::GetExcretedAmount(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetExcretedAmount");

	UAbsorbedSubstance_GetExcretedAmount_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstance.GetDecompositedAmunt
// (Final, Native, Public)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstance::GetDecompositedAmunt(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetDecompositedAmunt");

	UAbsorbedSubstance_GetDecompositedAmunt_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstance.GetCurrentConcentration
// (Final, Native, Public)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstance::GetCurrentConcentration(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetCurrentConcentration");

	UAbsorbedSubstance_GetCurrentConcentration_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstance.GetAbsorbedAmunt
// (Final, Native, Public)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstance::GetAbsorbedAmunt(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetAbsorbedAmunt");

	UAbsorbedSubstance_GetAbsorbedAmunt_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopySpirit
// (Final, Native, Public)
// Parameters:
// class UEB_Spirit*              Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstance::DeepCopySpirit(class UEB_Spirit* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopySpirit");

	UAbsorbedSubstance_DeepCopySpirit_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPhysical
// (Final, Native, Public)
// Parameters:
// class UEB_Physical*            Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstance::DeepCopyPhysical(class UEB_Physical* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPhysical");

	UAbsorbedSubstance_DeepCopyPhysical_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPerception
// (Final, Native, Public)
// Parameters:
// class UEB_Perception*          Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstance::DeepCopyPerception(class UEB_Perception* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPerception");

	UAbsorbedSubstance_DeepCopyPerception_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyHealth
// (Final, Native, Public)
// Parameters:
// class UEB_BodyHealth*          Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstance::DeepCopyHealth(class UEB_BodyHealth* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyHealth");

	UAbsorbedSubstance_DeepCopyHealth_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBrainFuncs
// (Final, Native, Public)
// Parameters:
// class UEB_BrainFunctions*      Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstance::DeepCopyBrainFuncs(class UEB_BrainFunctions* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBrainFuncs");

	UAbsorbedSubstance_DeepCopyBrainFuncs_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBaseF
// (Final, Native, Public)
// Parameters:
// class UEB_BaseFactors*         Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstance::DeepCopyBaseF(class UEB_BaseFactors* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBaseF");

	UAbsorbedSubstance_DeepCopyBaseF_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstance.CalcInjection
// (Final, Native, Public)
// Parameters:
// class AHumanoidActor*          injectedObject                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstance::CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.CalcInjection");

	UAbsorbedSubstance_CalcInjection_Params params;
	params.injectedObject = injectedObject;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.SubstanceHaveExcreted
// (Final, Native, Public)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbsorbedSubstanceComp::SubstanceHaveExcreted(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.SubstanceHaveExcreted");

	UAbsorbedSubstanceComp_SubstanceHaveExcreted_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.StoreSelfData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::StoreSelfData(int baseOffset, TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.StoreSelfData");

	UAbsorbedSubstanceComp_StoreSelfData_Params params;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.RestoreFromData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::RestoreFromData(TArray<float> sourceArray, int baseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.RestoreFromData");

	UAbsorbedSubstanceComp_RestoreFromData_Params params;
	params.sourceArray = sourceArray;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeTakenEffects
// (Final, Native, Public)
// Parameters:
// class UAbsorbedSubstanceComp*  otherObject                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASubstancesAndEffects*   handler                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          curConcentration               (Parm, ZeroConstructor, IsPlainOldData)
// float                          substanceTolerance             (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::MergeTakenEffects(class UAbsorbedSubstanceComp* otherObject, class ASubstancesAndEffects* handler, float curConcentration, float substanceTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeTakenEffects");

	UAbsorbedSubstanceComp_MergeTakenEffects_Params params;
	params.otherObject = otherObject;
	params.handler = handler;
	params.curConcentration = curConcentration;
	params.substanceTolerance = substanceTolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeSpiritImpact
// (Final, Native, Public)
// Parameters:
// class UEB_Spirit*              Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASubstancesAndEffects*   handler                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::MergeSpiritImpact(class UEB_Spirit* Source, class ASubstancesAndEffects* handler, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeSpiritImpact");

	UAbsorbedSubstanceComp_MergeSpiritImpact_Params params;
	params.Source = Source;
	params.handler = handler;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePhysicalImpact
// (Final, Native, Public)
// Parameters:
// class UEB_Physical*            Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASubstancesAndEffects*   handler                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::MergePhysicalImpact(class UEB_Physical* Source, class ASubstancesAndEffects* handler, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePhysicalImpact");

	UAbsorbedSubstanceComp_MergePhysicalImpact_Params params;
	params.Source = Source;
	params.handler = handler;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePerceptionImpact
// (Final, Native, Public)
// Parameters:
// class UEB_Perception*          Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASubstancesAndEffects*   handler                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::MergePerceptionImpact(class UEB_Perception* Source, class ASubstancesAndEffects* handler, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePerceptionImpact");

	UAbsorbedSubstanceComp_MergePerceptionImpact_Params params;
	params.Source = Source;
	params.handler = handler;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeHealthImpact
// (Final, Native, Public)
// Parameters:
// class UEB_BodyHealth*          Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASubstancesAndEffects*   handler                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::MergeHealthImpact(class UEB_BodyHealth* Source, class ASubstancesAndEffects* handler, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeHealthImpact");

	UAbsorbedSubstanceComp_MergeHealthImpact_Params params;
	params.Source = Source;
	params.handler = handler;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeBrainFuncsImpact
// (Final, Native, Public)
// Parameters:
// class UEB_BrainFunctions*      Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASubstancesAndEffects*   handler                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          takeFactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, class ASubstancesAndEffects* handler, float takeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeBrainFuncsImpact");

	UAbsorbedSubstanceComp_MergeBrainFuncsImpact_Params params;
	params.Source = Source;
	params.handler = handler;
	params.takeFactor = takeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.InitFactorHandler
// (Final, Native, Public)

void UAbsorbedSubstanceComp::InitFactorHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.InitFactorHandler");

	UAbsorbedSubstanceComp_InitFactorHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetQualityFactor
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstanceComp::GetQualityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetQualityFactor");

	UAbsorbedSubstanceComp_GetQualityFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetPurityFactor
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstanceComp::GetPurityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetPurityFactor");

	UAbsorbedSubstanceComp_GetPurityFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetFirstPowerMomentTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstanceComp::GetFirstPowerMomentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetFirstPowerMomentTime");

	UAbsorbedSubstanceComp_GetFirstPowerMomentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetExcretedAmount
// (Final, Native, Public, Const)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstanceComp::GetExcretedAmount(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetExcretedAmount");

	UAbsorbedSubstanceComp_GetExcretedAmount_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetDecompositedAmount
// (Final, Native, Public, Const)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstanceComp::GetDecompositedAmount(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetDecompositedAmount");

	UAbsorbedSubstanceComp_GetDecompositedAmount_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetCurrentConcentration
// (Final, Native, Public)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstanceComp::GetCurrentConcentration(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetCurrentConcentration");

	UAbsorbedSubstanceComp_GetCurrentConcentration_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetAbsorbedAmunt
// (Final, Native, Public, Const)
// Parameters:
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbsorbedSubstanceComp::GetAbsorbedAmunt(float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetAbsorbedAmunt");

	UAbsorbedSubstanceComp_GetAbsorbedAmunt_Params params;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopySpirit
// (Final, Native, Public)
// Parameters:
// class UEB_Spirit*              Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstanceComp::DeepCopySpirit(class UEB_Spirit* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopySpirit");

	UAbsorbedSubstanceComp_DeepCopySpirit_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPhysical
// (Final, Native, Public)
// Parameters:
// class UEB_Physical*            Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstanceComp::DeepCopyPhysical(class UEB_Physical* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPhysical");

	UAbsorbedSubstanceComp_DeepCopyPhysical_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPerception
// (Final, Native, Public)
// Parameters:
// class UEB_Perception*          Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstanceComp::DeepCopyPerception(class UEB_Perception* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPerception");

	UAbsorbedSubstanceComp_DeepCopyPerception_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyHealth
// (Final, Native, Public)
// Parameters:
// class UEB_BodyHealth*          Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstanceComp::DeepCopyHealth(class UEB_BodyHealth* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyHealth");

	UAbsorbedSubstanceComp_DeepCopyHealth_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBrainFuncs
// (Final, Native, Public)
// Parameters:
// class UEB_BrainFunctions*      Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstanceComp::DeepCopyBrainFuncs(class UEB_BrainFunctions* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBrainFuncs");

	UAbsorbedSubstanceComp_DeepCopyBrainFuncs_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBaseF
// (Final, Native, Public)
// Parameters:
// class UEB_BaseFactors*         Source                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbsorbedSubstanceComp::DeepCopyBaseF(class UEB_BaseFactors* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBaseF");

	UAbsorbedSubstanceComp_DeepCopyBaseF_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AbsorbedSubstanceComp.CalcInjection
// (Final, Native, Public)
// Parameters:
// class AHumanoidActor*          injectedObject                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbsorbedSubstanceComp::CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.CalcInjection");

	UAbsorbedSubstanceComp_CalcInjection_Params params;
	params.injectedObject = injectedObject;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.ActiveSubstance.GetQualityFactorIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          inputQuality                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AActiveSubstance::GetQualityFactorIn(float inputQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetQualityFactorIn");

	AActiveSubstance_GetQualityFactorIn_Params params;
	params.inputQuality = inputQuality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ActiveSubstance.GetQualityFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AActiveSubstance::GetQualityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetQualityFactor");

	AActiveSubstance_GetQualityFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ActiveSubstance.GetPurityFactorIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          inputPurity                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AActiveSubstance::GetPurityFactorIn(float inputPurity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetPurityFactorIn");

	AActiveSubstance_GetPurityFactorIn_Params params;
	params.inputPurity = inputPurity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ActiveSubstance.GetPurityFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AActiveSubstance::GetPurityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetPurityFactor");

	AActiveSubstance_GetPurityFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AddictionComp.StoreSaveData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)

void UAddictionComp::StoreSaveData(TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.StoreSaveData");

	UAddictionComp_StoreSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.AddictionComp.ResetData
// (Final, Native, Public, BlueprintCallable)

void UAddictionComp::ResetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.ResetData");

	UAddictionComp_ResetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AddictionComp.LoadSaveData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)

void UAddictionComp::LoadSaveData(TArray<float> sourceArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.LoadSaveData");

	UAddictionComp_LoadSaveData_Params params;
	params.sourceArray = sourceArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AddictionComp.GetDataLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          checkTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAddictionComp::GetDataLevel(int substanceIndex, float checkTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.GetDataLevel");

	UAddictionComp_GetDataLevel_Params params;
	params.substanceIndex = substanceIndex;
	params.checkTime = checkTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AddictionComp.AddData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            newSubstanceIndex              (Parm, ZeroConstructor, IsPlainOldData)
// float                          takeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          calcPower                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          recoveryTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          recoveryOffset                 (Parm, ZeroConstructor, IsPlainOldData)

void UAddictionComp::AddData(int newSubstanceIndex, float takeTime, float calcPower, float recoveryTime, float recoveryOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.AddData");

	UAddictionComp_AddData_Params params;
	params.newSubstanceIndex = newSubstanceIndex;
	params.takeTime = takeTime;
	params.calcPower = calcPower;
	params.recoveryTime = recoveryTime;
	params.recoveryOffset = recoveryOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.AstralProfile.powerOnSurface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAstralProfile::powerOnSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AstralProfile.powerOnSurface");

	AAstralProfile_powerOnSurface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AstralProfile.heatPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAstralProfile::heatPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AstralProfile.heatPower");

	AAstralProfile_heatPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_ManagerActor.UserSawUpgrades
// (Final, Native, Public, BlueprintCallable)

void ABU_ManagerActor::UserSawUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.UserSawUpgrades");

	ABU_ManagerActor_UserSawUpgrades_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_ManagerActor.UpgradeBought
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UpgradeLineName                (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABU_ManagerActor::UpgradeBought(int NewLevel, const struct FString& UpgradeLineName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.UpgradeBought");

	ABU_ManagerActor_UpgradeBought_Params params;
	params.NewLevel = NewLevel;
	params.UpgradeLineName = UpgradeLineName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_ManagerActor.RefreshBuildingObjects
// (Final, Native, Public)

void ABU_ManagerActor::RefreshBuildingObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.RefreshBuildingObjects");

	ABU_ManagerActor_RefreshBuildingObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_ManagerActor.PrepareDataForUse
// (Final, Native, Public)

void ABU_ManagerActor::PrepareDataForUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.PrepareDataForUse");

	ABU_ManagerActor_PrepareDataForUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_ManagerActor.LogUnseenDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBU_UnseenDetailsSets   LogUnseenDetails               (Parm, OutParm)

void ABU_ManagerActor::LogUnseenDetails(struct FBU_UnseenDetailsSets* LogUnseenDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.LogUnseenDetails");

	ABU_ManagerActor_LogUnseenDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LogUnseenDetails != nullptr)
		*LogUnseenDetails = params.LogUnseenDetails;
}


// Function DrugDealerSimulator.BU_ManagerActor.LogUnseenData
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FBU_UnseenUL            LogUnseenUL                    (ConstParm, Parm)

void ABU_ManagerActor::LogUnseenData(const struct FBU_UnseenUL& LogUnseenUL)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.LogUnseenData");

	ABU_ManagerActor_LogUnseenData_Params params;
	params.LogUnseenUL = LogUnseenUL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_ManagerActor.LogMeOut
// (Final, Native, Public, BlueprintCallable, Const)

void ABU_ManagerActor::LogMeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.LogMeOut");

	ABU_ManagerActor_LogMeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_ManagerActor.GetUnseenData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FBU_UnseenUL>    OutUnseenData                  (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABU_ManagerActor::GetUnseenData(TArray<struct FBU_UnseenUL>* OutUnseenData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.GetUnseenData");

	ABU_ManagerActor_GetUnseenData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUnseenData != nullptr)
		*OutUnseenData = params.OutUnseenData;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_ManagerActor.GetMainLineUpgradeLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABU_ManagerActor::GetMainLineUpgradeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.GetMainLineUpgradeLevel");

	ABU_ManagerActor_GetMainLineUpgradeLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_ManagerActor.GetAllUpgradeLines
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ABU_UpgradeLineActor*> OutReferenceList               (Parm, OutParm, ZeroConstructor)

void ABU_ManagerActor::GetAllUpgradeLines(TArray<class ABU_UpgradeLineActor*>* OutReferenceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.GetAllUpgradeLines");

	ABU_ManagerActor_GetAllUpgradeLines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReferenceList != nullptr)
		*OutReferenceList = params.OutReferenceList;
}


// Function DrugDealerSimulator.BU_UpgradeDetails.GetMaxUpgradeLevel
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABU_UpgradeDetails::GetMaxUpgradeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeDetails.GetMaxUpgradeLevel");

	ABU_UpgradeDetails_GetMaxUpgradeLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.UpgradeToLevel
// (Final, Native, Public)
// Parameters:
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABU_UpgradeLineActor::UpgradeToLevel(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.UpgradeToLevel");

	ABU_UpgradeLineActor_UpgradeToLevel_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetailsAfterLoad
// (Final, Native, Public)

void ABU_UpgradeLineActor::RefreshDetailsAfterLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetailsAfterLoad");

	ABU_UpgradeLineActor_RefreshDetailsAfterLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetails
// (Final, Native, Public)

void ABU_UpgradeLineActor::RefreshDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetails");

	ABU_UpgradeLineActor_RefreshDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.ProcessForLevel
// (Final, Native, Public)
// Parameters:
// int                            procLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void ABU_UpgradeLineActor::ProcessForLevel(int procLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.ProcessForLevel");

	ABU_UpgradeLineActor_ProcessForLevel_Params params;
	params.procLevel = procLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradePrice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABU_UpgradeLineActor::NextUpgradePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradePrice");

	ABU_UpgradeLineActor_NextUpgradePrice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradeLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABU_UpgradeLineActor::NextUpgradeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradeLevel");

	ABU_UpgradeLineActor_NextUpgradeLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailableForUpgrade
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABU_UpgradeLineActor::IsAvailableForUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailableForUpgrade");

	ABU_UpgradeLineActor_IsAvailableForUpgrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABU_UpgradeLineActor::IsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailable");

	ABU_UpgradeLineActor_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.HasAllUpgrades
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABU_UpgradeLineActor::HasAllUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.HasAllUpgrades");

	ABU_UpgradeLineActor_HasAllUpgrades_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.GetUpgradeCost
// (Final, Native, Public)
// Parameters:
// int                            procLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABU_UpgradeLineActor::GetUpgradeCost(int procLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.GetUpgradeCost");

	ABU_UpgradeLineActor_GetUpgradeCost_Params params;
	params.procLevel = procLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.GetMaxUpgradeLevel
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABU_UpgradeLineActor::GetMaxUpgradeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.GetMaxUpgradeLevel");

	ABU_UpgradeLineActor_GetMaxUpgradeLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.GetLevelPrice
// (Final, Native, Public, Const)
// Parameters:
// int                            procLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABU_UpgradeLineActor::GetLevelPrice(int procLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.GetLevelPrice");

	ABU_UpgradeLineActor_GetLevelPrice_Params params;
	params.procLevel = procLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.BU_UpgradeLineActor.AdaptMaxLevel
// (Final, Native, Public)

void ABU_UpgradeLineActor::AdaptMaxLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.AdaptMaxLevel");

	ABU_UpgradeLineActor_AdaptMaxLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepSaveTester.noticeAction
// (Final, Native, Public)

void ACepSaveTester::noticeAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepSaveTester.noticeAction");

	ACepSaveTester_noticeAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepSaveTester.getCount
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACepSaveTester::getCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepSaveTester.getCount");

	ACepSaveTester_getCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.YearPassed
// (Final, Native, Protected)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCepWeatherComponent::YearPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.YearPassed");

	UCepWeatherComponent_YearPassed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.YearDay
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCepWeatherComponent::YearDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.YearDay");

	UCepWeatherComponent_YearDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.SetupRain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            datNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          rainLength                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          rainDensity                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCepWeatherComponent::SetupRain(int datNum, float rainLength, float rainDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.SetupRain");

	UCepWeatherComponent_SetupRain_Params params;
	params.datNum = datNum;
	params.rainLength = rainLength;
	params.rainDensity = rainDensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot
// (Final, Native, Public)

void UCepWeatherComponent::SaveDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot");

	UCepWeatherComponent_SaveDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot
// (Final, Native, Public)

void UCepWeatherComponent::RecoverDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot");

	UCepWeatherComponent_RecoverDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepWeatherComponent.NextYearDay
// (Final, Native, Public)
// Parameters:
// int                            curDay                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Op                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCepWeatherComponent::NextYearDay(int curDay, int Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.NextYearDay");

	UCepWeatherComponent_NextYearDay_Params params;
	params.curDay = curDay;
	params.Op = Op;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.Init
// (Final, Native, Public)

void UCepWeatherComponent::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.Init");

	UCepWeatherComponent_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepWeatherProfile.YearPassed
// (Final, Native, Protected)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACepWeatherProfile::YearPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.YearPassed");

	ACepWeatherProfile_YearPassed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherProfile.YearDay
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACepWeatherProfile::YearDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.YearDay");

	ACepWeatherProfile_YearDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherProfile.Init
// (Final, Native, Public)

void ACepWeatherProfile::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.Init");

	ACepWeatherProfile_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newStartVal                    (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::StartCommitSession(float newStartVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession");

	UDayConditionsLogger_UE_StartCommitSession_Params params;
	params.newStartVal = newStartVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::SetValueByIndex(int Index, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex");

	UDayConditionsLogger_UE_SetValueByIndex_Params params;
	params.Index = Index;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          setHour                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::SetValueByHour(float setHour, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour");

	UDayConditionsLogger_UE_SetValueByHour_Params params;
	params.setHour = setHour;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          seekHour                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDayConditionsLogger_UE::SeekIndex(float seekHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex");

	UDayConditionsLogger_UE_SeekIndex_Params params;
	params.seekHour = seekHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDayConditionsLogger_UE::IsInCommitMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode");

	UDayConditionsLogger_UE_IsInCommitMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDayConditionsLogger_UE::GetValuesLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength");

	UDayConditionsLogger_UE_GetValuesLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SeekIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDayConditionsLogger_UE::GetValueByIndex(int SeekIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex");

	UDayConditionsLogger_UE_GetValueByIndex_Params params;
	params.SeekIndex = SeekIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          seekHour                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           extrapolateValue               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDayConditionsLogger_UE::GetValueByHour(float seekHour, bool extrapolateValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour");

	UDayConditionsLogger_UE_GetValueByHour_Params params;
	params.seekHour = seekHour;
	params.extrapolateValue = extrapolateValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            maxIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDayConditionsLogger_UE::GetSum(int maxIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum");

	UDayConditionsLogger_UE_GetSum_Params params;
	params.maxIndex = maxIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            curIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Op                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDayConditionsLogger_UE::GetNextIndex(int curIndex, int Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex");

	UDayConditionsLogger_UE_GetNextIndex_Params params;
	params.curIndex = curIndex;
	params.Op = Op;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newEndVal                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           followToEnd                    (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::EndCommitSession(float newEndVal, bool followToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession");

	UDayConditionsLogger_UE_EndCommitSession_Params params;
	params.newEndVal = newEndVal;
	params.followToEnd = followToEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit
// (Final, Native, Public, BlueprintCallable)

void UDayConditionsLogger_UE::ClassInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit");

	UDayConditionsLogger_UE_ClassInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLoggerComponent::SetValueByIndex(int Index, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex");

	UDayConditionsLoggerComponent_SetValueByIndex_Params params;
	params.Index = Index;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLoggerComponent.Init
// (Final, Native, Protected)

void UDayConditionsLoggerComponent::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLoggerComponent.Init");

	UDayConditionsLoggerComponent_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BaseFactors.StoreSelfData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_BaseFactors::StoreSelfData(int baseOffset, TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.StoreSelfData");

	UEB_BaseFactors_StoreSelfData_Params params;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.EB_BaseFactors.SetClassBasics
// (Final, Native, Public)

void UEB_BaseFactors::SetClassBasics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.SetClassBasics");

	UEB_BaseFactors_SetClassBasics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BaseFactors.RestoreFromData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_BaseFactors::RestoreFromData(TArray<float> sourceArray, int baseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.RestoreFromData");

	UEB_BaseFactors_RestoreFromData_Params params;
	params.sourceArray = sourceArray;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BaseFactors.GetAddictivnessFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEB_BaseFactors::GetAddictivnessFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.GetAddictivnessFactor");

	UEB_BaseFactors_GetAddictivnessFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.EB_BodyHealth.StoreSelfData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_BodyHealth::StoreSelfData(int baseOffset, TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.StoreSelfData");

	UEB_BodyHealth_StoreSelfData_Params params;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.EB_BodyHealth.SetClassBasics
// (Final, Native, Public)

void UEB_BodyHealth::SetClassBasics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.SetClassBasics");

	UEB_BodyHealth_SetClassBasics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BodyHealth.RestoreFromData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_BodyHealth::RestoreFromData(TArray<float> sourceArray, int baseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.RestoreFromData");

	UEB_BodyHealth_RestoreFromData_Params params;
	params.sourceArray = sourceArray;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BodyHealth.InitAsValuesStorage
// (Final, Native, Public, BlueprintCallable)

void UEB_BodyHealth::InitAsValuesStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsValuesStorage");

	UEB_BodyHealth_InitAsValuesStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BodyHealth.InitAsMinClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_BodyHealth::InitAsMinClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsMinClamp");

	UEB_BodyHealth_InitAsMinClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BodyHealth.InitAsMaxClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_BodyHealth::InitAsMaxClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsMaxClamp");

	UEB_BodyHealth_InitAsMaxClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BodyHealth.InitAsFactor
// (Final, Native, Public, BlueprintCallable)

void UEB_BodyHealth::InitAsFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsFactor");

	UEB_BodyHealth_InitAsFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BrainFunctions.StoreSelfData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_BrainFunctions::StoreSelfData(int baseOffset, TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.StoreSelfData");

	UEB_BrainFunctions_StoreSelfData_Params params;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.EB_BrainFunctions.SetClassBasics
// (Final, Native, Public)

void UEB_BrainFunctions::SetClassBasics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.SetClassBasics");

	UEB_BrainFunctions_SetClassBasics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BrainFunctions.RestoreFromData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_BrainFunctions::RestoreFromData(TArray<float> sourceArray, int baseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.RestoreFromData");

	UEB_BrainFunctions_RestoreFromData_Params params;
	params.sourceArray = sourceArray;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BrainFunctions.InitAsValuesStorage
// (Final, Native, Public, BlueprintCallable)

void UEB_BrainFunctions::InitAsValuesStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsValuesStorage");

	UEB_BrainFunctions_InitAsValuesStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BrainFunctions.InitAsMinClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_BrainFunctions::InitAsMinClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsMinClamp");

	UEB_BrainFunctions_InitAsMinClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BrainFunctions.InitAsMaxClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_BrainFunctions::InitAsMaxClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsMaxClamp");

	UEB_BrainFunctions_InitAsMaxClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_BrainFunctions.InitAsFactor
// (Final, Native, Public, BlueprintCallable)

void UEB_BrainFunctions::InitAsFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsFactor");

	UEB_BrainFunctions_InitAsFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Perception.StoreSelfData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_Perception::StoreSelfData(int baseOffset, TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.StoreSelfData");

	UEB_Perception_StoreSelfData_Params params;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.EB_Perception.SetClassBasics
// (Final, Native, Public)

void UEB_Perception::SetClassBasics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.SetClassBasics");

	UEB_Perception_SetClassBasics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Perception.RestoreFromData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_Perception::RestoreFromData(TArray<float> sourceArray, int baseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.RestoreFromData");

	UEB_Perception_RestoreFromData_Params params;
	params.sourceArray = sourceArray;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Perception.InitAsValuesStorage
// (Final, Native, Public, BlueprintCallable)

void UEB_Perception::InitAsValuesStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsValuesStorage");

	UEB_Perception_InitAsValuesStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Perception.InitAsMinClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_Perception::InitAsMinClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsMinClamp");

	UEB_Perception_InitAsMinClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Perception.InitAsMaxClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_Perception::InitAsMaxClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsMaxClamp");

	UEB_Perception_InitAsMaxClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Perception.InitAsFactor
// (Final, Native, Public, BlueprintCallable)

void UEB_Perception::InitAsFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsFactor");

	UEB_Perception_InitAsFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Physical.StoreSelfData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_Physical::StoreSelfData(int baseOffset, TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.StoreSelfData");

	UEB_Physical_StoreSelfData_Params params;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.EB_Physical.SetClassBasics
// (Final, Native, Public)

void UEB_Physical::SetClassBasics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.SetClassBasics");

	UEB_Physical_SetClassBasics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Physical.RestoreFromData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_Physical::RestoreFromData(TArray<float> sourceArray, int baseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.RestoreFromData");

	UEB_Physical_RestoreFromData_Params params;
	params.sourceArray = sourceArray;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Physical.InitAsValuesStorage
// (Final, Native, Public, BlueprintCallable)

void UEB_Physical::InitAsValuesStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsValuesStorage");

	UEB_Physical_InitAsValuesStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Physical.InitAsMinClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_Physical::InitAsMinClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsMinClamp");

	UEB_Physical_InitAsMinClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Physical.InitAsMaxClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_Physical::InitAsMaxClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsMaxClamp");

	UEB_Physical_InitAsMaxClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Physical.InitAsFactor
// (Final, Native, Public, BlueprintCallable)

void UEB_Physical::InitAsFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsFactor");

	UEB_Physical_InitAsFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Spirit.StoreSelfData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<float>                  targetArray                    (Parm, OutParm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_Spirit::StoreSelfData(int baseOffset, TArray<float>* targetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.StoreSelfData");

	UEB_Spirit_StoreSelfData_Params params;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetArray != nullptr)
		*targetArray = params.targetArray;
}


// Function DrugDealerSimulator.EB_Spirit.SetClassBasics
// (Final, Native, Public)

void UEB_Spirit::SetClassBasics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.SetClassBasics");

	UEB_Spirit_SetClassBasics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Spirit.RestoreFromData
// (Final, Native, Public)
// Parameters:
// TArray<float>                  sourceArray                    (ConstParm, Parm, ZeroConstructor)
// int                            baseOffset                     (Parm, ZeroConstructor, IsPlainOldData)

void UEB_Spirit::RestoreFromData(TArray<float> sourceArray, int baseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.RestoreFromData");

	UEB_Spirit_RestoreFromData_Params params;
	params.sourceArray = sourceArray;
	params.baseOffset = baseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Spirit.InitAsValuesStorage
// (Final, Native, Public, BlueprintCallable)

void UEB_Spirit::InitAsValuesStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsValuesStorage");

	UEB_Spirit_InitAsValuesStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Spirit.InitAsMinClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_Spirit::InitAsMinClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsMinClamp");

	UEB_Spirit_InitAsMinClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Spirit.InitAsMaxClamp
// (Final, Native, Public, BlueprintCallable)

void UEB_Spirit::InitAsMaxClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsMaxClamp");

	UEB_Spirit_InitAsMaxClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.EB_Spirit.InitAsFactor
// (Final, Native, Public, BlueprintCallable)

void UEB_Spirit::InitAsFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsFactor");

	UEB_Spirit_InitAsFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidActor.SetTestInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            newInt                         (Parm, ZeroConstructor, IsPlainOldData)

void AHumanoidActor::SetTestInt(int newInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.SetTestInt");

	AHumanoidActor_SetTestInt_Params params;
	params.newInt = newInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidActor.SaveDataSnapshot
// (Final, Native, Public, BlueprintCallable)

void AHumanoidActor::SaveDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.SaveDataSnapshot");

	AHumanoidActor_SaveDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidActor.RestoreDataSnapshot
// (Final, Native, Public, BlueprintCallable)

void AHumanoidActor::RestoreDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.RestoreDataSnapshot");

	AHumanoidActor_RestoreDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidActor.NoticeDrugTook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActiveSubstance*        valuesProvider                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          takenMass                      (Parm, ZeroConstructor, IsPlainOldData)

void AHumanoidActor::NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.NoticeDrugTook");

	AHumanoidActor_NoticeDrugTook_Params params;
	params.substanceActor = substanceActor;
	params.valuesProvider = valuesProvider;
	params.takenMass = takenMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidActor.IsSubstanceEffective
// (Final, Native, Public)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHumanoidActor::IsSubstanceEffective(int substanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.IsSubstanceEffective");

	AHumanoidActor_IsSubstanceEffective_Params params;
	params.substanceIndex = substanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.IsSubstanceBeingAbsorbed
// (Final, Native, Public)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          checkDayTime                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHumanoidActor::IsSubstanceBeingAbsorbed(int substanceIndex, float checkDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.IsSubstanceBeingAbsorbed");

	AHumanoidActor_IsSubstanceBeingAbsorbed_Params params;
	params.substanceIndex = substanceIndex;
	params.checkDayTime = checkDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetToleranceDataLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          curDayTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanoidActor::GetToleranceDataLevel(int substanceIndex, float curDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetToleranceDataLevel");

	AHumanoidActor_GetToleranceDataLevel_Params params;
	params.substanceIndex = substanceIndex;
	params.curDayTime = curDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetToleranceDataInFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          curDayTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanoidActor::GetToleranceDataInFactor(int substanceIndex, float InValue, float curDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetToleranceDataInFactor");

	AHumanoidActor_GetToleranceDataInFactor_Params params;
	params.substanceIndex = substanceIndex;
	params.InValue = InValue;
	params.curDayTime = curDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetToleranceDataFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          curDayTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanoidActor::GetToleranceDataFactor(int substanceIndex, float curDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetToleranceDataFactor");

	AHumanoidActor_GetToleranceDataFactor_Params params;
	params.substanceIndex = substanceIndex;
	params.curDayTime = curDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetTestInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AHumanoidActor::GetTestInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetTestInt");

	AHumanoidActor_GetTestInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetCurrentConcentration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanoidActor::GetCurrentConcentration(int substanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetCurrentConcentration");

	AHumanoidActor_GetCurrentConcentration_Params params;
	params.substanceIndex = substanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetAddictionDataLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          curDayTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanoidActor::GetAddictionDataLevel(int substanceIndex, float curDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetAddictionDataLevel");

	AHumanoidActor_GetAddictionDataLevel_Params params;
	params.substanceIndex = substanceIndex;
	params.curDayTime = curDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetAddictionDataInFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          curDayTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanoidActor::GetAddictionDataInFactor(int substanceIndex, float InValue, float curDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetAddictionDataInFactor");

	AHumanoidActor_GetAddictionDataInFactor_Params params;
	params.substanceIndex = substanceIndex;
	params.InValue = InValue;
	params.curDayTime = curDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.GetAddictionDataFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          curDayTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHumanoidActor::GetAddictionDataFactor(int substanceIndex, float curDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetAddictionDataFactor");

	AHumanoidActor_GetAddictionDataFactor_Params params;
	params.substanceIndex = substanceIndex;
	params.curDayTime = curDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidActor.ApplySubstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          currentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          curConcentration               (Parm, ZeroConstructor, IsPlainOldData)

void AHumanoidActor::ApplySubstance(float Tolerance, float curConcentration, float* currentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.ApplySubstance");

	AHumanoidActor_ApplySubstance_Params params;
	params.Tolerance = Tolerance;
	params.curConcentration = curConcentration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentValue != nullptr)
		*currentValue = params.currentValue;
}


// Function DrugDealerSimulator.HumanoidComponent.SetToleranceLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UHumanoidComponent::SetToleranceLevel(class AActiveSubstance* substanceActor, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.SetToleranceLevel");

	UHumanoidComponent_SetToleranceLevel_Params params;
	params.substanceActor = substanceActor;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidComponent.SetAddictionLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UHumanoidComponent::SetAddictionLevel(class AActiveSubstance* substanceActor, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.SetAddictionLevel");

	UHumanoidComponent_SetAddictionLevel_Params params;
	params.substanceActor = substanceActor;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidComponent.NoticeDrugTook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActiveSubstance*        valuesProvider                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          takenMass                      (Parm, ZeroConstructor, IsPlainOldData)

void UHumanoidComponent::NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.NoticeDrugTook");

	UHumanoidComponent_NoticeDrugTook_Params params;
	params.substanceActor = substanceActor;
	params.valuesProvider = valuesProvider;
	params.takenMass = takenMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.HumanoidComponent.GetToleranceLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHumanoidComponent::GetToleranceLevel(class AActiveSubstance* substanceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetToleranceLevel");

	UHumanoidComponent_GetToleranceLevel_Params params;
	params.substanceActor = substanceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactorIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHumanoidComponent::GetToleranceFactorIn(class AActiveSubstance* substanceActor, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactorIn");

	UHumanoidComponent_GetToleranceFactorIn_Params params;
	params.substanceActor = substanceActor;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHumanoidComponent::GetToleranceFactor(class AActiveSubstance* substanceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactor");

	UHumanoidComponent_GetToleranceFactor_Params params;
	params.substanceActor = substanceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidComponent.GetAddictionLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHumanoidComponent::GetAddictionLevel(class AActiveSubstance* substanceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetAddictionLevel");

	UHumanoidComponent_GetAddictionLevel_Params params;
	params.substanceActor = substanceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidComponent.GetAddictionFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHumanoidComponent::GetAddictionFactor(class AActiveSubstance* substanceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetAddictionFactor");

	UHumanoidComponent_GetAddictionFactor_Params params;
	params.substanceActor = substanceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.HumanoidComponent.ApplySubstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          currentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          curConcentration               (Parm, ZeroConstructor, IsPlainOldData)

void UHumanoidComponent::ApplySubstance(float Tolerance, float curConcentration, float* currentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.ApplySubstance");

	UHumanoidComponent_ApplySubstance_Params params;
	params.Tolerance = Tolerance;
	params.curConcentration = curConcentration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentValue != nullptr)
		*currentValue = params.currentValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::UnlockedDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone");

	ALockpickPuzzle_UnlockedDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::StartTakingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage");

	ALockpickPuzzle_StartTakingDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ResetUnlockPosition            (Parm, ZeroConstructor, IsPlainOldData)

void ALockpickPuzzle::ResetPuzzle(bool ResetUnlockPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle");

	ALockpickPuzzle_ResetPuzzle_Params params;
	params.ResetUnlockPosition = ResetUnlockPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void ALockpickPuzzle::PushMouseInput(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput");

	ALockpickPuzzle_PushMouseInput_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::IsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked");

	ALockpickPuzzle_IsUnlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::IsScrewDriverInUnlockZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone");

	ALockpickPuzzle_IsScrewDriverInUnlockZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::IsBobbyPinInUnlockZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone");

	ALockpickPuzzle_IsBobbyPinInUnlockZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::HasBoobyPinBroke()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke");

	ALockpickPuzzle_HasBoobyPinBroke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetScrewDriverAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle");

	ALockpickPuzzle_GetScrewDriverAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta
// (Final, Native, Protected)
// Parameters:
// int                            optNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetDifficultyMeta(int optNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta");

	ALockpickPuzzle_GetDifficultyMeta_Params params;
	params.optNum = optNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetCurrentResistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance");

	ALockpickPuzzle_GetCurrentResistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetBobbyPinHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth");

	ALockpickPuzzle_GetBobbyPinHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetBobbyPinAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle");

	ALockpickPuzzle_GetBobbyPinAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::EndTakingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage");

	ALockpickPuzzle_EndTakingDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::BrokenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent");

	ALockpickPuzzle_BrokenEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased
// (Final, Native, Public, BlueprintCallable)

void ALockpickPuzzle::ActionButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased");

	ALockpickPuzzle_ActionButtonReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed
// (Final, Native, Public, BlueprintCallable)

void ALockpickPuzzle::ActionButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed");

	ALockpickPuzzle_ActionButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace
// (Final, Native, Protected)

void UNextSingleton::WTACStoreInSaveSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace");

	UNextSingleton_WTACStoreInSaveSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.WTACRecover
// (Final, Native, Protected)

void UNextSingleton::WTACRecover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.WTACRecover");

	UNextSingleton_WTACRecover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ValidateWorld
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::ValidateWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ValidateWorld");

	UNextSingleton_ValidateWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.TestCallFunction
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::TestCallFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.TestCallFunction");

	UNextSingleton_TestCallFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ResearchWorld
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::ResearchWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ResearchWorld");

	UNextSingleton_ResearchWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ReInitWTAC
// (Final, Native, Protected)

void UNextSingleton::ReInitWTAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReInitWTAC");

	UNextSingleton_ReInitWTAC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ReassignWorld
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::ReassignWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReassignWorld");

	UNextSingleton_ReassignWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ReasearchForStaticMeshes
// (Final, Native, Public)

void UNextSingleton::ReasearchForStaticMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReasearchForStaticMeshes");

	UNextSingleton_ReasearchForStaticMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::PrepareInstancesForSaveEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent");

	UNextSingleton_PrepareInstancesForSaveEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.OptSystemOperational
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::OptSystemOperational()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.OptSystemOperational");

	UNextSingleton_OptSystemOperational_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.NPCSystemOperational
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::NPCSystemOperational()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.NPCSystemOperational");

	UNextSingleton_NPCSystemOperational_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::NoticeLoadRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest");

	UNextSingleton_NoticeLoadRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.LoadDone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           retryLoad                      (Parm, ZeroConstructor, IsPlainOldData)

void UNextSingleton::LoadDone(bool retryLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.LoadDone");

	UNextSingleton_LoadDone_Params params;
	params.retryLoad = retryLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.IsGridOperational
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::IsGridOperational()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.IsGridOperational");

	UNextSingleton_IsGridOperational_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::InnerLoadPerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed");

	UNextSingleton_InnerLoadPerformed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.InitSystemsActors
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::InitSystemsActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.InitSystemsActors");

	UNextSingleton_InitSystemsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.GetTSManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATS_Manager*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ATS_Manager* UNextSingleton::GetTSManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.GetTSManager");

	UNextSingleton_GetTSManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.GetPlayerLocation
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNextSingleton::GetPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.GetPlayerLocation");

	UNextSingleton_GetPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::CanSaveDependedInstancesInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit");

	UNextSingleton_CanSaveDependedInstancesInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UNextSingleton*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNextSingleton* UNextSingletonLibrary::STATIC_GetNextSingletonData(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData");

	UNextSingletonLibrary_GetNextSingletonData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           newState                       (Parm, ZeroConstructor, IsPlainOldData)

void ANextSingletonWorldHelper::SetMasterState(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState");

	ANextSingletonWorldHelper_SetMasterState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMinClamp
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealth::InitBucketAsMinClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMinClamp");

	USDB_BodyHealth_InitBucketAsMinClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMaxClamp
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealth::InitBucketAsMaxClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMaxClamp");

	USDB_BodyHealth_InitBucketAsMaxClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsFactors
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealth::InitBucketAsFactors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsFactors");

	USDB_BodyHealth_InitBucketAsFactors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsDataStorage
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealth::InitBucketAsDataStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsDataStorage");

	USDB_BodyHealth_InitBucketAsDataStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMinClamp
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealthComp::InitBucketAsMinClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMinClamp");

	USDB_BodyHealthComp_InitBucketAsMinClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMaxClamp
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealthComp::InitBucketAsMaxClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMaxClamp");

	USDB_BodyHealthComp_InitBucketAsMaxClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsFactors
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealthComp::InitBucketAsFactors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsFactors");

	USDB_BodyHealthComp_InitBucketAsFactors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsDataStorage
// (Final, Native, Public, BlueprintCallable)

void USDB_BodyHealthComp::InitBucketAsDataStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsDataStorage");

	USDB_BodyHealthComp_InitBucketAsDataStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetSunsetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime");

	USeasonAstralComponent_GetSunsetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetSunriseTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime");

	USeasonAstralComponent_GetSunriseTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetOrbitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget");

	USeasonAstralComponent_GetOrbitTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetOrbitDistanceTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget");

	USeasonAstralComponent_GetOrbitDistanceTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetMaxHeigthTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime");

	USeasonAstralComponent_GetMaxHeigthTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetHeatPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower");

	USeasonAstralComponent_GetHeatPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASeasonAstralProfile::GetSunsetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime");

	ASeasonAstralProfile_GetSunsetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASeasonAstralProfile::GetSunriseTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime");

	ASeasonAstralProfile_GetSunriseTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASeasonAstralProfile::GetHeatPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower");

	ASeasonAstralProfile_GetHeatPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonProfile.getAirProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAirComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAirComponent* ASeasonProfile::getAirProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonProfile.getAirProfile");

	ASeasonProfile_getAirProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroActor.retName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShiroActor::retName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroActor.retName");

	AShiroActor_retName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  WeightArr                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_WeightedArrayRand(TArray<float> WeightArr)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand");

	UShiroBlueprint_WeightedArrayRand_Params params;
	params.WeightArr = WeightArr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.testReferences
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          t1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t2                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t3                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t4                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_testReferences(float* t1, float* t2, float* t3, float* t4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.testReferences");

	UShiroBlueprint_testReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (t1 != nullptr)
		*t1 = params.t1;
	if (t2 != nullptr)
		*t2 = params.t2;
	if (t3 != nullptr)
		*t3 = params.t3;
	if (t4 != nullptr)
		*t4 = params.t4;
}


// Function DrugDealerSimulator.ShiroBlueprint.SimpleGrid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          intervalX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          intervalY                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            columnCount                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            objectIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          positionX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          positionY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_SimpleGrid(float intervalX, float intervalY, int columnCount, int objectIndex, float* positionX, float* positionY)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.SimpleGrid");

	UShiroBlueprint_SimpleGrid_Params params;
	params.intervalX = intervalX;
	params.intervalY = intervalY;
	params.columnCount = columnCount;
	params.objectIndex = objectIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (positionX != nullptr)
		*positionX = params.positionX;
	if (positionY != nullptr)
		*positionY = params.positionY;
}


// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_shiroFunc2(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2");

	UShiroBlueprint_shiroFunc2_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_shiroFunc(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc");

	UShiroBlueprint_shiroFunc_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.GetWTAC
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWorldTimeAndConditions* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWorldTimeAndConditions* UShiroBlueprint::STATIC_GetWTAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetWTAC");

	UShiroBlueprint_GetWTAC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.GetSingleton
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNextSingleton*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNextSingleton* UShiroBlueprint::STATIC_GetSingleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetSingleton");

	UShiroBlueprint_GetSingleton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.GetSAE
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ASubstancesAndEffects*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASubstancesAndEffects* UShiroBlueprint::STATIC_GetSAE()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetSAE");

	UShiroBlueprint_GetSAE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.FastProportions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          minTargetRange                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxTargetRange                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          workValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           unboundBounds                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          minBaseRange                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxBaseRange                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShiroBlueprint::STATIC_FastProportions(float minTargetRange, float maxTargetRange, float workValue, bool unboundBounds, float minBaseRange, float maxBaseRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.FastProportions");

	UShiroBlueprint_FastProportions_Params params;
	params.minTargetRange = minTargetRange;
	params.maxTargetRange = maxTargetRange;
	params.workValue = workValue;
	params.unboundBounds = unboundBounds;
	params.minBaseRange = minBaseRange;
	params.maxBaseRange = maxBaseRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          perc                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShiroBlueprint::STATIC_extrapolateTest(float Min, float Max, float perc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest");

	UShiroBlueprint_extrapolateTest_Params params;
	params.Min = Min;
	params.Max = Max;
	params.perc = perc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.CheckPrice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          drugCurrentPrice               (Parm, ZeroConstructor, IsPlainOldData)
// float                          drugResonablePrice             (Parm, ZeroConstructor, IsPlainOldData)
// float                          reputationFactor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddictedCustomer               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           priceHighOutput                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           priceTooHighOutput             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          baseMaxSellingFactor           (Parm, ZeroConstructor, IsPlainOldData)
// float                          reputationInfluence            (Parm, ZeroConstructor, IsPlainOldData)
// float                          AddictedInfluence              (Parm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_CheckPrice(float drugCurrentPrice, float drugResonablePrice, float reputationFactor, bool AddictedCustomer, float baseMaxSellingFactor, float reputationInfluence, float AddictedInfluence, bool* priceHighOutput, bool* priceTooHighOutput)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.CheckPrice");

	UShiroBlueprint_CheckPrice_Params params;
	params.drugCurrentPrice = drugCurrentPrice;
	params.drugResonablePrice = drugResonablePrice;
	params.reputationFactor = reputationFactor;
	params.AddictedCustomer = AddictedCustomer;
	params.baseMaxSellingFactor = baseMaxSellingFactor;
	params.reputationInfluence = reputationInfluence;
	params.AddictedInfluence = AddictedInfluence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (priceHighOutput != nullptr)
		*priceHighOutput = params.priceHighOutput;
	if (priceTooHighOutput != nullptr)
		*priceTooHighOutput = params.priceTooHighOutput;
}


// Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShiroBlueprint::STATIC_CanSaveDependedInstancesInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit");

	UShiroBlueprint_CanSaveDependedInstancesInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.calculateSky
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curHour                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            curMinute                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           sunVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunPlainAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunBrightness                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           moonVisible                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          varDump                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_calculateSky(int dayNum, int curHour, int curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.calculateSky");

	UShiroBlueprint_calculateSky_Params params;
	params.dayNum = dayNum;
	params.curHour = curHour;
	params.curMinute = curMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sunVisible != nullptr)
		*sunVisible = params.sunVisible;
	if (sunHeight != nullptr)
		*sunHeight = params.sunHeight;
	if (sunPlainAngle != nullptr)
		*sunPlainAngle = params.sunPlainAngle;
	if (sunBrightness != nullptr)
		*sunBrightness = params.sunBrightness;
	if (moonVisible != nullptr)
		*moonVisible = params.moonVisible;
	if (varDump != nullptr)
		*varDump = params.varDump;
}


// Function DrugDealerSimulator.SubstancesAndEffects.ProcessTriggers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            substanceIndexTriggering       (Parm, ZeroConstructor, IsPlainOldData)

void ASubstancesAndEffects::ProcessTriggers(int substanceIndexTriggering)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.ProcessTriggers");

	ASubstancesAndEffects_ProcessTriggers_Params params;
	params.substanceIndexTriggering = substanceIndexTriggering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SubstancesAndEffects.NoticeDrugTook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        substanceActor                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActiveSubstance*        valuesProvider                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          takenMass                      (Parm, ZeroConstructor, IsPlainOldData)

void ASubstancesAndEffects::NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.NoticeDrugTook");

	ASubstancesAndEffects_NoticeDrugTook_Params params;
	params.substanceActor = substanceActor;
	params.valuesProvider = valuesProvider;
	params.takenMass = takenMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SubstancesAndEffects.MergeWithWorld
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWorld*                  W                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASubstancesAndEffects::MergeWithWorld(class UWorld** W)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.MergeWithWorld");

	ASubstancesAndEffects_MergeWithWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (W != nullptr)
		*W = params.W;
}


// Function DrugDealerSimulator.SubstancesAndEffects.ManageLaunchList
// (Final, Native, Public)
// Parameters:
// float                          currentDayTime                 (Parm, ZeroConstructor, IsPlainOldData)

void ASubstancesAndEffects::ManageLaunchList(float currentDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.ManageLaunchList");

	ASubstancesAndEffects_ManageLaunchList_Params params;
	params.currentDayTime = currentDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceGenericData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            subprop                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          retEmpty                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASubstancesAndEffects::GetSubstanceGenericData(int substanceIndex, int subprop, float retEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceGenericData");

	ASubstancesAndEffects_GetSubstanceGenericData_Params params;
	params.substanceIndex = substanceIndex;
	params.subprop = subprop;
	params.retEmpty = retEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffectsByIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            activeSubIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ASubstancesAndEffects::GetSubstanceEffectsByIndex(int activeSubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffectsByIndex");

	ASubstancesAndEffects_GetSubstanceEffectsByIndex_Params params;
	params.activeSubIndex = activeSubIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffects
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActiveSubstance*        activeSub                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ASubstancesAndEffects::GetSubstanceEffects(class AActiveSubstance* activeSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffects");

	ASubstancesAndEffects_GetSubstanceEffects_Params params;
	params.activeSub = activeSub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActiveSubstance*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActiveSubstance* ASubstancesAndEffects::GetSubstanceByIndex(int substanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceByIndex");

	ASubstancesAndEffects_GetSubstanceByIndex_Params params;
	params.substanceIndex = substanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SubstancesAndEffects.GetHealthObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AHumanoidActor*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AHumanoidActor* ASubstancesAndEffects::GetHealthObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetHealthObject");

	ASubstancesAndEffects_GetHealthObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SubstancesAndEffects.DoBasicEffectTick
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ATriggeredDrugEffect*    Eff                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ASubstancesAndEffects::DoBasicEffectTick(float DeltaTime, class ATriggeredDrugEffect** Eff)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.DoBasicEffectTick");

	ASubstancesAndEffects_DoBasicEffectTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Eff != nullptr)
		*Eff = params.Eff;
}


// Function DrugDealerSimulator.SubstancesAndEffects.ClassInit
// (Final, Native, Public, BlueprintCallable)

void ASubstancesAndEffects::ClassInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.ClassInit");

	ASubstancesAndEffects_ClassInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SubstancesAndEffects.CheckForSubstanceEffects
// (Final, Native, Public)
// Parameters:
// int                            substanceIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASubstancesAndEffects::CheckForSubstanceEffects(int substanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.CheckForSubstanceEffects");

	ASubstancesAndEffects_CheckForSubstanceEffects_Params params;
	params.substanceIndex = substanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.ValidatePTRS
// (Final, Native, Public, BlueprintCallable)

void ATriggeredDrugEffect::ValidatePTRS()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.ValidatePTRS");

	ATriggeredDrugEffect_ValidatePTRS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.StartEffect
// (Event, Public, BlueprintEvent)

void ATriggeredDrugEffect::StartEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.StartEffect");

	ATriggeredDrugEffect_StartEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectInit
// (Final, Native, Public, BlueprintCallable)

void ATriggeredDrugEffect::PureEffectInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectInit");

	ATriggeredDrugEffect_PureEffectInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectEnd
// (Final, Native, Public, BlueprintCallable)

void ATriggeredDrugEffect::PureEffectEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectEnd");

	ATriggeredDrugEffect_PureEffectEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.NoticeEffectEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          currentDayTime                 (Parm, ZeroConstructor, IsPlainOldData)

void ATriggeredDrugEffect::NoticeEffectEnd(float currentDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.NoticeEffectEnd");

	ATriggeredDrugEffect_NoticeEffectEnd_Params params;
	params.currentDayTime = currentDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.InitInnerClass
// (Final, Native, Public, BlueprintCallable)

void ATriggeredDrugEffect::InitInnerClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.InitInnerClass");

	ATriggeredDrugEffect_InitInnerClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.GetCurrentDayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATriggeredDrugEffect::GetCurrentDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.GetCurrentDayTime");

	ATriggeredDrugEffect_GetCurrentDayTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.EndEffect
// (Event, Public, BlueprintEvent)

void ATriggeredDrugEffect::EndEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.EndEffect");

	ATriggeredDrugEffect_EndEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.EffectTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ATriggeredDrugEffect::EffectTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.EffectTick");

	ATriggeredDrugEffect_EffectTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TriggeredDrugEffect.CheckTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AHumanoidActor*          checkObject                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentDayTime                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATriggeredDrugEffect::CheckTrigger(class AHumanoidActor* checkObject, float currentDayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.CheckTrigger");

	ATriggeredDrugEffect_CheckTrigger_Params params;
	params.checkObject = checkObject;
	params.currentDayTime = currentDayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TimeProfile.setTimeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          propagationTime                (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::setTimeMultiplier(float Val, float propagationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.setTimeMultiplier");

	ATimeProfile_setTimeMultiplier_Params params;
	params.Val = Val;
	params.propagationTime = propagationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            day                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            hour                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            minute                         (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::setDayHourMinuteTime(int day, int hour, int minute)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime");

	ATimeProfile_setDayHourMinuteTime_Params params;
	params.day = day;
	params.hour = hour;
	params.minute = minute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TimeProfile.getIntTimeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            optNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeProfile::getIntTimeData(int optNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.getIntTimeData");

	ATimeProfile_getIntTimeData_Params params;
	params.optNum = optNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeProfile::GetCurrentTimeMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier");

	ATimeProfile_GetCurrentTimeMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TimeProfile.dayFloatResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeProfile::dayFloatResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.dayFloatResult");

	ATimeProfile_dayFloatResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TimeProfile.addSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          addSeconds                     (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::addSeconds(float addSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.addSeconds");

	ATimeProfile_addSeconds_Params params;
	params.addSeconds = addSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TimeProfile.addMinutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            addMinutes                     (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::addMinutes(int addMinutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.addMinutes");

	ATimeProfile_addMinutes_Params params;
	params.addMinutes = addMinutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.initOnWorld
// (Final, Native, Private)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrainControllerCode::initOnWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.initOnWorld");

	ATrainControllerCode_initOnWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TrainControllerCode.initInstance
// (Final, Native, Private)
// Parameters:
// int                            followingSegmentsCount         (Parm, ZeroConstructor, IsPlainOldData)

void ATrainControllerCode::initInstance(int followingSegmentsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.initInstance");

	ATrainControllerCode_initInstance_Params params;
	params.followingSegmentsCount = followingSegmentsCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower
// (Final, Native, Private)

void ATrainControllerCode::calcTotalWeigthAndPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower");

	ATrainControllerCode_calcTotalWeigthAndPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce
// (Final, Native, Private)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrainControllerCode::calcTotalFrictionForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce");

	ATrainControllerCode_calcTotalFrictionForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment
// (Final, Native, Private)
// Parameters:
// class ATrainRealSegment*       calcSegment                    (Parm, ZeroConstructor, IsPlainOldData)

void ATrainControllerCode::calcSingleSegment(class ATrainRealSegment* calcSegment)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment");

	ATrainControllerCode_calcSingleSegment_Params params;
	params.calcSegment = calcSegment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader
// (Final, Native, Private)
// Parameters:
// int                            SegmentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrainControllerCode::calcSegmentDistanceToLeader(int SegmentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader");

	ATrainControllerCode_calcSegmentDistanceToLeader_Params params;
	params.SegmentIndex = SegmentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.ValidateIndex
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::ValidateIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ValidateIndex");

	ATS_Manager_ValidateIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.ValidateActorIndex
// (Final, Native, Public, Const)
// Parameters:
// int                            ValidationIndex                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::ValidateActorIndex(int ValidationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ValidateActorIndex");

	ATS_Manager_ValidateActorIndex_Params params;
	params.ValidationIndex = ValidationIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.TranslateActorToDataIndex
// (Final, Native, Public, Const)
// Parameters:
// int                            SeekActorIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::TranslateActorToDataIndex(int SeekActorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.TranslateActorToDataIndex");

	ATS_Manager_TranslateActorToDataIndex_Params params;
	params.SeekActorIndex = SeekActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.StartDEARaid
// (Final, Native, Public)
// Parameters:
// int                            EntranceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeepSeek                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::StartDEARaid(int EntranceIndex, int DeepSeek, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.StartDEARaid");

	ATS_Manager_StartDEARaid_Params params;
	params.EntranceIndex = EntranceIndex;
	params.DeepSeek = DeepSeek;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.SpawnEntranceAndRegister
// (Final, Native, Public, BlueprintCallable)

void ATS_Manager::SpawnEntranceAndRegister()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.SpawnEntranceAndRegister");

	ATS_Manager_SpawnEntranceAndRegister_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.SetRaidedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           newState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::SetRaidedState(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.SetRaidedState");

	ATS_Manager_SetRaidedState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.SetDebDigFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::SetDebDigFactor(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.SetDebDigFactor");

	ATS_Manager_SetDebDigFactor_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.ReserveAndGetNextActorIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::ReserveAndGetNextActorIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReserveAndGetNextActorIndex");

	ATS_Manager_ReserveAndGetNextActorIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.ReportConnRaidProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::ReportConnRaidProgress(int ConnectionIndex, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReportConnRaidProgress");

	ATS_Manager_ReportConnRaidProgress_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.ReportConnectionDigProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::ReportConnectionDigProgress(int ConnectionIndex, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReportConnectionDigProgress");

	ATS_Manager_ReportConnectionDigProgress_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.ReopenEntrance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            EntranceActorIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::ReopenEntrance(int EntranceActorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReopenEntrance");

	ATS_Manager_ReopenEntrance_Params params;
	params.EntranceActorIndex = EntranceActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.RemoveConnection
// (Final, Native, Public)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::RemoveConnection(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RemoveConnection");

	ATS_Manager_RemoveConnection_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.RegisterOnLoadTunnel
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ATS_TunnelEntrence*      ThisEntrence                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::RegisterOnLoadTunnel(class ATS_TunnelEntrence** ThisEntrence)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RegisterOnLoadTunnel");

	ATS_Manager_RegisterOnLoadTunnel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThisEntrence != nullptr)
		*ThisEntrence = params.ThisEntrence;
}


// Function DrugDealerSimulator.TS_Manager.RegisterNewEntrance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ATS_TunnelEntrence*      NewBuildedEntrance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::RegisterNewEntrance(class ATS_TunnelEntrence* NewBuildedEntrance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RegisterNewEntrance");

	ATS_Manager_RegisterNewEntrance_Params params;
	params.NewBuildedEntrance = NewBuildedEntrance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.RecoverData
// (Final, Native, Public, BlueprintCallable)

void ATS_Manager::RecoverData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecoverData");

	ATS_Manager_RecoverData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.RecalcTunnelsRates
// (Final, Native, Public)

void ATS_Manager::RecalcTunnelsRates()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecalcTunnelsRates");

	ATS_Manager_RecalcTunnelsRates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.RecalcProgressReportsForConn
// (Final, Native, Public)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::RecalcProgressReportsForConn(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecalcProgressReportsForConn");

	ATS_Manager_RecalcProgressReportsForConn_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.RecalcProgressReports
// (Final, Native, Public)

void ATS_Manager::RecalcProgressReports()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecalcProgressReports");

	ATS_Manager_RecalcProgressReports_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.PrintUpgDataForConn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConnIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::PrintUpgDataForConn(int ConnIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintUpgDataForConn");

	ATS_Manager_PrintUpgDataForConn_Params params;
	params.ConnIndex = ConnIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.PrintUpgData
// (Final, Native, Public, BlueprintCallable)

void ATS_Manager::PrintUpgData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintUpgData");

	ATS_Manager_PrintUpgData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.PrintRaidMessage
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ActionType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubactionType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ObjectA                        (Parm, ZeroConstructor)
// struct FString                 ObjectB                        (Parm, ZeroConstructor)

void ATS_Manager::PrintRaidMessage(int ActionType, int SubactionType, const struct FString& ObjectA, const struct FString& ObjectB)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintRaidMessage");

	ATS_Manager_PrintRaidMessage_Params params;
	params.ActionType = ActionType;
	params.SubactionType = SubactionType;
	params.ObjectA = ObjectA;
	params.ObjectB = ObjectB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.PrintEntData
// (Final, Native, Public, BlueprintCallable)

void ATS_Manager::PrintEntData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintEntData");

	ATS_Manager_PrintEntData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.PrintDestinationData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTS_AvailableDestinations InputData                      (Parm)

void ATS_Manager::PrintDestinationData(const struct FTS_AvailableDestinations& InputData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintDestinationData");

	ATS_Manager_PrintDestinationData_Params params;
	params.InputData = InputData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.PrintConnData
// (Final, Native, Public, BlueprintCallable)

void ATS_Manager::PrintConnData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintConnData");

	ATS_Manager_PrintConnData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.PrepareDataForSave
// (Final, Native, Public, BlueprintCallable)

void ATS_Manager::PrepareDataForSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrepareDataForSave");

	ATS_Manager_PrepareDataForSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.LogRaidAction
// (Final, Native, Public)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            objA                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            objB                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          adtValue                       (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::LogRaidAction(float Time, int Type, int objA, int objB, float adtValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.LogRaidAction");

	ATS_Manager_LogRaidAction_Params params;
	params.Time = Time;
	params.Type = Type;
	params.objA = objA;
	params.objB = objB;
	params.adtValue = adtValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.IsUpgradeVisibleInConn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            UpgradeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::IsUpgradeVisibleInConn(int ConnectionIndex, int UpgradeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsUpgradeVisibleInConn");

	ATS_Manager_IsUpgradeVisibleInConn_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.UpgradeIndex = UpgradeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.IsUpgradeBoughtInConn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            UpgradeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::IsUpgradeBoughtInConn(int ConnectionIndex, int UpgradeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsUpgradeBoughtInConn");

	ATS_Manager_IsUpgradeBoughtInConn_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.UpgradeIndex = UpgradeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.IsUpgradeAvailableForConn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            UpgradeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::IsUpgradeAvailableForConn(int ConnectionIndex, int UpgradeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsUpgradeAvailableForConn");

	ATS_Manager_IsUpgradeAvailableForConn_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.UpgradeIndex = UpgradeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.IsTunnelSystemBeeingRaided
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::IsTunnelSystemBeeingRaided()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsTunnelSystemBeeingRaided");

	ATS_Manager_IsTunnelSystemBeeingRaided_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.HasUpgradeByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            checkIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::HasUpgradeByIndex(int checkIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.HasUpgradeByIndex");

	ATS_Manager_HasUpgradeByIndex_Params params;
	params.checkIndex = checkIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.HasEntrenceRegisteredByActor
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATS_TunnelEntrence*      EntrenceActor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::HasEntrenceRegisteredByActor(class ATS_TunnelEntrence** EntrenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.HasEntrenceRegisteredByActor");

	ATS_Manager_HasEntrenceRegisteredByActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EntrenceActor != nullptr)
		*EntrenceActor = params.EntrenceActor;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.HasEntrenceRegistered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SeekName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::HasEntrenceRegistered(const struct FString& SeekName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.HasEntrenceRegistered");

	ATS_Manager_HasEntrenceRegistered_Params params;
	params.SeekName = SeekName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GlobalRaidStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            EntranceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameDifficulty                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::GlobalRaidStart(int EntranceIndex, int GameDifficulty, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GlobalRaidStart");

	ATS_Manager_GlobalRaidStart_Params params;
	params.EntranceIndex = EntranceIndex;
	params.GameDifficulty = GameDifficulty;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.GetUpgradeDataReferenced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            UpgradeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTS_ConnectionWorkUpgrade ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTS_ConnectionWorkUpgrade ATS_Manager::GetUpgradeDataReferenced(int UpgradeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetUpgradeDataReferenced");

	ATS_Manager_GetUpgradeDataReferenced_Params params;
	params.UpgradeIndex = UpgradeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetUpgradeData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            UpgradeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTS_ConnectionWorkUpgrade ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTS_ConnectionWorkUpgrade ATS_Manager::GetUpgradeData(int UpgradeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetUpgradeData");

	ATS_Manager_GetUpgradeData_Params params;
	params.UpgradeIndex = UpgradeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetRaidSpeedSeek
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            GameDifficultyLevel            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATS_Manager::GetRaidSpeedSeek(int GameDifficultyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetRaidSpeedSeek");

	ATS_Manager_GetRaidSpeedSeek_Params params;
	params.GameDifficultyLevel = GameDifficultyLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetRaidDeepSeek
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            GameDifficultyLevel            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::GetRaidDeepSeek(int GameDifficultyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetRaidDeepSeek");

	ATS_Manager_GetRaidDeepSeek_Params params;
	params.GameDifficultyLevel = GameDifficultyLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetNotPayedDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATS_Manager::GetNotPayedDistance(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetNotPayedDistance");

	ATS_Manager_GetNotPayedDistance_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetEntrencesData
// (Final, Native, Public, Const)
// Parameters:
// TMap<struct FString, int>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, int> ATS_Manager::GetEntrencesData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntrencesData");

	ATS_Manager_GetEntrencesData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndexByActor
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATS_TunnelEntrence*      EntrenceActor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::GetEntrenceInnerIndexByActor(class ATS_TunnelEntrence** EntrenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndexByActor");

	ATS_Manager_GetEntrenceInnerIndexByActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EntrenceActor != nullptr)
		*EntrenceActor = params.EntrenceActor;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SeekName                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::GetEntrenceInnerIndex(const struct FString& SeekName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndex");

	ATS_Manager_GetEntrenceInnerIndex_Params params;
	params.SeekName = SeekName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetEntranceName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            seekEntranceIndex              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ATS_Manager::GetEntranceName(int seekEntranceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntranceName");

	ATS_Manager_GetEntranceName_Params params;
	params.seekEntranceIndex = seekEntranceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetCurrentGameTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATS_Manager::GetCurrentGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetCurrentGameTime");

	ATS_Manager_GetCurrentGameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetConnectionStatesConst
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FTS_ConnState           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTS_ConnState ATS_Manager::GetConnectionStatesConst(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetConnectionStatesConst");

	ATS_Manager_GetConnectionStatesConst_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetConnectionStates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FTS_ConnState           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTS_ConnState ATS_Manager::GetConnectionStates(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetConnectionStates");

	ATS_Manager_GetConnectionStates_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetConnectionMeterRate
// (Final, Native, Public, Const)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATS_Manager::GetConnectionMeterRate(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetConnectionMeterRate");

	ATS_Manager_GetConnectionMeterRate_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetAvailableTeleportDestinations
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InputEntranceActorIndex        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTS_AvailableDestinations> OutDestination                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::GetAvailableTeleportDestinations(int InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetAvailableTeleportDestinations");

	ATS_Manager_GetAvailableTeleportDestinations_Params params;
	params.InputEntranceActorIndex = InputEntranceActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDestination != nullptr)
		*OutDestination = params.OutDestination;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.GetAvailableDigDestinations
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InputEntranceActorIndex        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTS_AvailableDestinations> OutDestination                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::GetAvailableDigDestinations(int InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetAvailableDigDestinations");

	ATS_Manager_GetAvailableDigDestinations_Params params;
	params.InputEntranceActorIndex = InputEntranceActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDestination != nullptr)
		*OutDestination = params.OutDestination;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.FindConnectionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FirstEntrenceIndex             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondEntrenceIndex            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::FindConnectionIndex(int FirstEntrenceIndex, int SecondEntrenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.FindConnectionIndex");

	ATS_Manager_FindConnectionIndex_Params params;
	params.FirstEntrenceIndex = FirstEntrenceIndex;
	params.SecondEntrenceIndex = SecondEntrenceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.DEARaidEnd
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ConnectionsLost                (Parm, ZeroConstructor, IsPlainOldData)
// int                            EntrancesLost                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ArrestedDepositedCount         (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::DEARaidEnd(int ConnectionsLost, int EntrancesLost, int ArrestedDepositedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.DEARaidEnd");

	ATS_Manager_DEARaidEnd_Params params;
	params.ConnectionsLost = ConnectionsLost;
	params.EntrancesLost = EntrancesLost;
	params.ArrestedDepositedCount = ArrestedDepositedCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.CreateUpgradesIndex
// (Final, Native, Public)

void ATS_Manager::CreateUpgradesIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.CreateUpgradesIndex");

	ATS_Manager_CreateUpgradesIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.CreateNewConnection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FirstEntrenceIndex             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondEntrenceIndex            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::CreateNewConnection(int FirstEntrenceIndex, int SecondEntrenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.CreateNewConnection");

	ATS_Manager_CreateNewConnection_Params params;
	params.FirstEntrenceIndex = FirstEntrenceIndex;
	params.SecondEntrenceIndex = SecondEntrenceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.ConnectionStartRaidEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            EntranceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::ConnectionStartRaidEvent(int EntranceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionStartRaidEvent");

	ATS_Manager_ConnectionStartRaidEvent_Params params;
	params.EntranceIndex = EntranceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.ConnectionRequiresMoney
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::ConnectionRequiresMoney(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionRequiresMoney");

	ATS_Manager_ConnectionRequiresMoney_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.ConnectionRaidedEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::ConnectionRaidedEvent(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionRaidedEvent");

	ATS_Manager_ConnectionRaidedEvent_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.ConnectionRaided
// (Final, Native, Public)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRaidTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRaidTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            parentChain                    (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::ConnectionRaided(int ConnectionIndex, float StartRaidTime, float EndRaidTime, int parentChain)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionRaided");

	ATS_Manager_ConnectionRaided_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.StartRaidTime = StartRaidTime;
	params.EndRaidTime = EndRaidTime;
	params.parentChain = parentChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.ConnectionDone
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ATS_Manager::ConnectionDone(int ConnectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionDone");

	ATS_Manager_ConnectionDone_Params params;
	params.ConnectionIndex = ConnectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.CalcNextIndexBasedOnIndex
// (Final, Native, Public)

void ATS_Manager::CalcNextIndexBasedOnIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.CalcNextIndexBasedOnIndex");

	ATS_Manager_CalcNextIndexBasedOnIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.BuyUpgradeForConn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            UpgradeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_Manager::BuyUpgradeForConn(int ConnectionIndex, int UpgradeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.BuyUpgradeForConn");

	ATS_Manager_BuyUpgradeForConn_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.UpgradeIndex = UpgradeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.AfterRaidRelease
// (Final, Native, Public)

void ATS_Manager::AfterRaidRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.AfterRaidRelease");

	ATS_Manager_AfterRaidRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_Manager.AddNewEntrence
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ATS_TunnelEntrence*      EntrenceActor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::AddNewEntrence(class ATS_TunnelEntrence** EntrenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.AddNewEntrence");

	ATS_Manager_AddNewEntrence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EntrenceActor != nullptr)
		*EntrenceActor = params.EntrenceActor;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_Manager.AddMoneyToConnection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConnectionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          moneyAmount                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_Manager::AddMoneyToConnection(int ConnectionIndex, float moneyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.AddMoneyToConnection");

	ATS_Manager_AddMoneyToConnection_Params params;
	params.ConnectionIndex = ConnectionIndex;
	params.moneyAmount = moneyAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_TunnelEntrence.SetManagerIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void ATS_TunnelEntrence::SetManagerIndex(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.SetManagerIndex");

	ATS_TunnelEntrence_SetManagerIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TS_TunnelEntrence.NeedStartManage
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATS_TunnelEntrence::NeedStartManage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.NeedStartManage");

	ATS_TunnelEntrence_NeedStartManage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_TunnelEntrence.GetDataIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_TunnelEntrence::GetDataIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.GetDataIndex");

	ATS_TunnelEntrence_GetDataIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_TunnelEntrence.GetAvailableDestinations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ATS_TunnelEntrence*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ATS_TunnelEntrence*> ATS_TunnelEntrence::GetAvailableDestinations()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.GetAvailableDestinations");

	ATS_TunnelEntrence_GetAvailableDestinations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TS_TunnelEntrence.GetActorIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATS_TunnelEntrence::GetActorIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.GetActorIndex");

	ATS_TunnelEntrence_GetActorIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WeatherProfile.YearPassed
// (Final, Native, Protected)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeatherProfile::YearPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WeatherProfile.YearPassed");

	AWeatherProfile_YearPassed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WeatherProfile.Init
// (Final, Native, Public)

void AWeatherProfile::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WeatherProfile.Init");

	AWeatherProfile_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ATimeProfile*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ATimeProfile* AWorldTimeAndConditions::TimeProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile");

	AWorldTimeAndConditions_TimeProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::StoreInSaveSpace(int Index, float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace");

	AWorldTimeAndConditions_StoreInSaveSpace_Params params;
	params.Index = Index;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.StartRain
// (Final, Native, Public)

void AWorldTimeAndConditions::StartRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StartRain");

	AWorldTimeAndConditions_StartRain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.StartFog
// (Final, Native, Public)

void AWorldTimeAndConditions::StartFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StartFog");

	AWorldTimeAndConditions_StartFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged
// (Native, Event, Public, BlueprintEvent)

void AWorldTimeAndConditions::ShadowsSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged");

	AWorldTimeAndConditions_ShadowsSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::SetUltraSkyInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit");

	AWorldTimeAndConditions_SetUltraSkyInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newFactor                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          propagationTime                (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::SetTimeMulptiplier(float newFactor, float propagationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier");

	AWorldTimeAndConditions_SetTimeMulptiplier_Params params;
	params.newFactor = newFactor;
	params.propagationTime = propagationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            hourValue                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            minuteValue                    (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::SetTime(int dayValue, int hourValue, int minuteValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetTime");

	AWorldTimeAndConditions_SetTime_Params params;
	params.dayValue = dayValue;
	params.hourValue = hourValue;
	params.minuteValue = minuteValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot
// (Final, Native, Public)

void AWorldTimeAndConditions::SaveDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot");

	AWorldTimeAndConditions_SaveDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::ReInitLoggers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers");

	AWorldTimeAndConditions_ReInitLoggers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot
// (Final, Native, Public)
// Parameters:
// bool                           recoverTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::RecoverDataSnapshot(bool recoverTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot");

	AWorldTimeAndConditions_RecoverDataSnapshot_Params params;
	params.recoverTime = recoverTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.PureInit
// (Final, Native, Public)

void AWorldTimeAndConditions::PureInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.PureInit");

	AWorldTimeAndConditions_PureInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::PoliceArrestTimeShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift");

	AWorldTimeAndConditions_PoliceArrestTimeShift_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone
// (Final, Native, Public)

void AWorldTimeAndConditions::NoticeCalcPhaseDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone");

	AWorldTimeAndConditions_NoticeCalcPhaseDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::MarkNewLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad");

	AWorldTimeAndConditions_MarkNewLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::IsUltraSkyInited()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited");

	AWorldTimeAndConditions_IsUltraSkyInited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::IsCurrentlyRaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining");

	AWorldTimeAndConditions_IsCurrentlyRaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::IsAfterNoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon");

	AWorldTimeAndConditions_IsAfterNoon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated
// (Native, Event, Public, BlueprintEvent)

void AWorldTimeAndConditions::InWorldInitiated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated");

	AWorldTimeAndConditions_InWorldInitiated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::InnerDisableWeatherSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem");

	AWorldTimeAndConditions_InnerDisableWeatherSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.Init
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.Init");

	AWorldTimeAndConditions_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.HasFog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::HasFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.HasFog");

	AWorldTimeAndConditions_HasFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced
// (Final, Native, Protected)
// Parameters:
// float                          cAngle                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetSunPowerAfterBounced(float cAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced");

	AWorldTimeAndConditions_GetSunPowerAfterBounced_Params params;
	params.cAngle = cAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetSunPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower");

	AWorldTimeAndConditions_GetSunPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetSunLigthPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower");

	AWorldTimeAndConditions_GetSunLigthPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetRainValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue");

	AWorldTimeAndConditions_GetRainValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetRainLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger");

	AWorldTimeAndConditions_GetRainLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetMoonOrbitProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress");

	AWorldTimeAndConditions_GetMoonOrbitProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetMoonOrbitAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle");

	AWorldTimeAndConditions_GetMoonOrbitAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::GetInitiationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState");

	AWorldTimeAndConditions_GetInitiationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetHeatLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger");

	AWorldTimeAndConditions_GetHeatLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetFromSaveSpace(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace");

	AWorldTimeAndConditions_GetFromSaveSpace_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetFogLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger");

	AWorldTimeAndConditions_GetFogLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentTimeForUltraSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky");

	AWorldTimeAndConditions_GetCurrentTimeForUltraSky_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::GetCurrentSunShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows");

	AWorldTimeAndConditions_GetCurrentSunShadows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower");

	AWorldTimeAndConditions_GetCurrentSunPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunOrbit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit");

	AWorldTimeAndConditions_GetCurrentSunOrbit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance");

	AWorldTimeAndConditions_GetCurrentSunDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle");

	AWorldTimeAndConditions_GetCurrentSunAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentStarsIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity");

	AWorldTimeAndConditions_GetCurrentStarsIntensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           sunShadows                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           moonShadows                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::GetCurrentShadowSettings(bool* sunShadows, bool* moonShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings");

	AWorldTimeAndConditions_GetCurrentShadowSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sunShadows != nullptr)
		*sunShadows = params.sunShadows;
	if (moonShadows != nullptr)
		*moonShadows = params.moonShadows;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentNigthBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness");

	AWorldTimeAndConditions_GetCurrentNigthBrightness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::GetCurrentMoonShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows");

	AWorldTimeAndConditions_GetCurrentMoonShadows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase");

	AWorldTimeAndConditions_GetCurrentMoonPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentMoonBrigthness()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness");

	AWorldTimeAndConditions_GetCurrentMoonBrigthness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds");

	AWorldTimeAndConditions_GetCurrentIntSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntMinute()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute");

	AWorldTimeAndConditions_GetCurrentIntMinute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntHour()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour");

	AWorldTimeAndConditions_GetCurrentIntHour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay");

	AWorldTimeAndConditions_GetCurrentIntDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFogLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel");

	AWorldTimeAndConditions_GetCurrentFogLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFloatMinute()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute");

	AWorldTimeAndConditions_GetCurrentFloatMinute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFloatHour()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour");

	AWorldTimeAndConditions_GetCurrentFloatHour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFloatDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay");

	AWorldTimeAndConditions_GetCurrentFloatDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentCloudsSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed");

	AWorldTimeAndConditions_GetCurrentCloudsSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentCloudsLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel");

	AWorldTimeAndConditions_GetCurrentCloudsLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness");

	AWorldTimeAndConditions_GetCurrentBrightness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetCloudLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger");

	AWorldTimeAndConditions_GetCloudLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor
// (Final, Native, Public)
// Parameters:
// float                          baseVal                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCalcSunDistFactor(float baseVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor");

	AWorldTimeAndConditions_GetCalcSunDistFactor_Params params;
	params.baseVal = baseVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCalcSunDistanceFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor");

	AWorldTimeAndConditions_GetCalcSunDistanceFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAirComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAirComponent* AWorldTimeAndConditions::getBasicAirProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile");

	AWorldTimeAndConditions_getBasicAirProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          hourMark                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetAnyTimeSunPower(int dayNum, float hourMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower");

	AWorldTimeAndConditions_GetAnyTimeSunPower_Params params;
	params.dayNum = dayNum;
	params.hourMark = hourMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor
// (Final, Native, Public)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          hourMark                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetAnyTimeCloudsSunFactor(int dayNum, float hourMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor");

	AWorldTimeAndConditions_GetAnyTimeCloudsSunFactor_Params params;
	params.dayNum = dayNum;
	params.hourMark = hourMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel
// (Final, Native, Public)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          hourMark                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetAnyTimeCloudsLevel(int dayNum, float hourMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel");

	AWorldTimeAndConditions_GetAnyTimeCloudsLevel_Params params;
	params.dayNum = dayNum;
	params.hourMark = hourMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.EndRain
// (Final, Native, Public)

void AWorldTimeAndConditions::EndRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EndRain");

	AWorldTimeAndConditions_EndRain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.EndFog
// (Final, Native, Public)

void AWorldTimeAndConditions::EndFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EndFog");

	AWorldTimeAndConditions_EndFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::EnableWeatherSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem");

	AWorldTimeAndConditions_EnableWeatherSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle
// (Final, Native, Public)

void AWorldTimeAndConditions::CalcSunRaysAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle");

	AWorldTimeAndConditions_CalcSunRaysAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics
// (Final, Native, Public)

void AWorldTimeAndConditions::CalcSunPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics");

	AWorldTimeAndConditions_CalcSunPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction
// (Final, Native, Public)

void AWorldTimeAndConditions::CalcInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction");

	AWorldTimeAndConditions_CalcInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.Calc
// (Final, Native, Private)

void AWorldTimeAndConditions::Calc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.Calc");

	AWorldTimeAndConditions_Calc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.AddTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          hoursValue                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          minuteValue                    (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::AddTime(float hoursValue, float minuteValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.AddTime");

	AWorldTimeAndConditions_AddTime_Params params;
	params.hoursValue = hoursValue;
	params.minuteValue = minuteValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentRainChance              (Parm, ZeroConstructor, IsPlainOldData)
// float                          sunPower                       (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditionsCurFactors::noticeFactors(float DeltaTime, float currentRainChance, float sunPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors");

	AWorldTimeAndConditionsCurFactors_noticeFactors_Params params;
	params.DeltaTime = DeltaTime;
	params.currentRainChance = currentRainChance;
	params.sunPower = sunPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility
// (Final, Native, Public)
// Parameters:
// bool                           newVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunVisibility(bool newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility");

	UWTACFactorsComponent_SetSunVisibility_Params params;
	params.newVisibility = newVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle
// (Final, Native, Public)
// Parameters:
// float                          newSunRays                     (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunRaysAngle(float newSunRays)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle");

	UWTACFactorsComponent_SetSunRaysAngle_Params params;
	params.newSunRays = newSunRays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower
// (Final, Native, Public)
// Parameters:
// float                          newPower                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunPower(float newPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower");

	UWTACFactorsComponent_SetSunPower_Params params;
	params.newPower = newPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress
// (Final, Native, Public)
// Parameters:
// float                          deg                            (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunOrbitProgress(float deg)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress");

	UWTACFactorsComponent_SetSunOrbitProgress_Params params;
	params.deg = deg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance
// (Final, Native, Public)
// Parameters:
// float                          newDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunOrbitDistance(float newDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance");

	UWTACFactorsComponent_SetSunOrbitDistance_Params params;
	params.newDistance = newDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle
// (Final, Native, Public)
// Parameters:
// float                          newOrbitAngle                  (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunOrbitAngle(float newOrbitAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle");

	UWTACFactorsComponent_SetSunOrbitAngle_Params params;
	params.newOrbitAngle = newOrbitAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens
// (Final, Native, Public)
// Parameters:
// float                          newLumensValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunLumens(float newLumensValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens");

	UWTACFactorsComponent_SetSunLumens_Params params;
	params.newLumensValue = newLumensValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity
// (Final, Native, Public)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetStarsIntensity(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity");

	UWTACFactorsComponent_SetStarsIntensity_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue
// (Final, Native, Public)
// Parameters:
// float                          newRainValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetRainValue(float newRainValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue");

	UWTACFactorsComponent_SetRainValue_Params params;
	params.newRainValue = newRainValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetRainState
// (Final, Native, Public)
// Parameters:
// bool                           newState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetRainState(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetRainState");

	UWTACFactorsComponent_SetRainState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase
// (Final, Native, Public)
// Parameters:
// float                          shPassed                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetOrbitPhase(float shPassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase");

	UWTACFactorsComponent_SetOrbitPhase_Params params;
	params.shPassed = shPassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit
// (Final, Native, Public)
// Parameters:
// float                          newProgress                    (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetMoonOrbit(float newProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit");

	UWTACFactorsComponent_SetMoonOrbit_Params params;
	params.newProgress = newProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetFogState
// (Final, Native, Public)
// Parameters:
// bool                           newState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetFogState(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFogState");

	UWTACFactorsComponent_SetFogState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel
// (Final, Native, Public)
// Parameters:
// float                          NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetFogLevel(float NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel");

	UWTACFactorsComponent_SetFogLevel_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          fVal                           (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetFactorFloatData(int Index, float fVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData");

	UWTACFactorsComponent_SetFactorFloatData_Params params;
	params.Index = Index;
	params.fVal = fVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel
// (Final, Native, Public)
// Parameters:
// float                          NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetCloudsLevel(float NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel");

	UWTACFactorsComponent_SetCloudsLevel_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel
// (Final, Native, Public)
// Parameters:
// float                          newBrigthnessLevel             (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetBrigthnesslevel(float newBrigthnessLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel");

	UWTACFactorsComponent_SetBrigthnesslevel_Params params;
	params.newBrigthnessLevel = newBrigthnessLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections
// (Final, Native, Public)
// Parameters:
// float                          newAtmosphereReflections       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetAtmosphereSunReflections(float newAtmosphereReflections)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections");

	UWTACFactorsComponent_SetAtmosphereSunReflections_Params params;
	params.newAtmosphereReflections = newAtmosphereReflections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize
// (Final, Native, Public, BlueprintCallable)

void UWTACFactorsComponent::Reinitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize");

	UWTACFactorsComponent_Reinitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentRainChance              (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentRainDensityTarget       (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentStormChance             (Parm, ZeroConstructor, IsPlainOldData)
// float                          sunPower                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::noticeFactors(float DeltaTime, float currentRainChance, float currentRainDensityTarget, float currentStormChance, float sunPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors");

	UWTACFactorsComponent_noticeFactors_Params params;
	params.DeltaTime = DeltaTime;
	params.currentRainChance = currentRainChance;
	params.currentRainDensityTarget = currentRainDensityTarget;
	params.currentStormChance = currentStormChance;
	params.sunPower = sunPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWTACFactorsComponent::NeedsReinitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization");

	UWTACFactorsComponent_NeedsReinitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWTACFactorsComponent::GetSunOrbitAbsoluteDeg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg");

	UWTACFactorsComponent_GetSunOrbitAbsoluteDeg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWTACFactorsComponent::GetFactorFloatData(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData");

	UWTACFactorsComponent_GetFactorFloatData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WTACFactorsComponent.CanRecover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWTACFactorsComponent::CanRecover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.CanRecover");

	UWTACFactorsComponent_CanRecover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
