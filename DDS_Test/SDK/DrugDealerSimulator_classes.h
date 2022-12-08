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

// Class DrugDealerSimulator.AbsorbedSubstance
// 0x0070 (0x0098 - 0x0028)
class UAbsorbedSubstance : public UObject
{
public:
	float                                              takenTime;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takenMass;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              currentConcetration;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeAddictedLevel;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeAddictedFactor;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeToleranceLevel;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeToleranceFactor;                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              calcRateAbsorption;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              calcRateDecomposition;                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              calcRateExcretion;                                        // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              calcPower;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               stillEffective;                                           // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               injectionCalculated;                                      // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	class UEB_BaseFactors*                             takenBase;                                                // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BodyHealth*                              takenHealth;                                              // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  takenSpirit;                                              // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              takenPerception;                                          // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          takenBrainFuncs;                                          // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                takenPhysical;                                            // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActiveSubstance*                            drugPointer;                                              // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                substanceIndex;                                           // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AbsorbedSubstance");
		return ptr;
	}


	void MergeTakenEffects(class UAbsorbedSubstance* otherObject, float curConcentration, float substanceTolerance);
	void MergeSpiritImpact(class UEB_Spirit* Source, float takeFactor);
	void MergePhysicalImpact(class UEB_Physical* Source, float takeFactor);
	void MergePerceptionImpact(class UEB_Perception* Source, float takeFactor);
	void MergeHealthImpact(class UEB_BodyHealth* Source, float takeFactor);
	void MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, float takeFactor);
	void InitFactorHandler();
	float GetQualityFactor();
	float GetPurityFactor();
	float GetFirstPowerMomentTime();
	float GetExcretedAmount(float checkDayTime);
	float GetDecompositedAmunt(float checkDayTime);
	float GetCurrentConcentration(float checkDayTime);
	float GetAbsorbedAmunt(float checkDayTime);
	void DeepCopySpirit(class UEB_Spirit* Source);
	void DeepCopyPhysical(class UEB_Physical* Source);
	void DeepCopyPerception(class UEB_Perception* Source);
	void DeepCopyHealth(class UEB_BodyHealth* Source);
	void DeepCopyBrainFuncs(class UEB_BrainFunctions* Source);
	void DeepCopyBaseF(class UEB_BaseFactors* Source);
	void CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime);
};


// Class DrugDealerSimulator.AbsorbedSubstanceComp
// 0x0080 (0x0170 - 0x00F0)
class UAbsorbedSubstanceComp : public UActorComponent
{
public:
	float                                              takenTime;                                                // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              tempCheckTime;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takenMass;                                                // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeAddictedLevel;                                        // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeAddictedFactor;                                       // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeToleranceLevel;                                       // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeToleranceFactor;                                      // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              calcRateAbsorption;                                       // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              calcRateDecomposition;                                    // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              calcRateExcretion;                                        // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              calcPower;                                                // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassToPowerFactor;                                        // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SAEMajorVersion;                                          // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SAESubVersion;                                            // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               stillEffective;                                           // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               injectionCalculated;                                      // 0x0129(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x012A(0x0006) MISSED OFFSET
	class UEB_BaseFactors*                             takenBase;                                                // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BodyHealth*                              takenHealth;                                              // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  takenSpirit;                                              // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              takenPerception;                                          // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          takenBrainFuncs;                                          // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                takenPhysical;                                            // 0x0158(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActiveSubstance*                            drugPointer;                                              // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                substanceIndex;                                           // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AbsorbedSubstanceComp");
		return ptr;
	}


	bool SubstanceHaveExcreted(float checkDayTime);
	void StoreSelfData(int baseOffset, TArray<float>* targetArray);
	void RestoreFromData(TArray<float> sourceArray, int baseOffset);
	void MergeTakenEffects(class UAbsorbedSubstanceComp* otherObject, class ASubstancesAndEffects* handler, float curConcentration, float substanceTolerance);
	void MergeSpiritImpact(class UEB_Spirit* Source, class ASubstancesAndEffects* handler, float takeFactor);
	void MergePhysicalImpact(class UEB_Physical* Source, class ASubstancesAndEffects* handler, float takeFactor);
	void MergePerceptionImpact(class UEB_Perception* Source, class ASubstancesAndEffects* handler, float takeFactor);
	void MergeHealthImpact(class UEB_BodyHealth* Source, class ASubstancesAndEffects* handler, float takeFactor);
	void MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, class ASubstancesAndEffects* handler, float takeFactor);
	void InitFactorHandler();
	float GetQualityFactor();
	float GetPurityFactor();
	float GetFirstPowerMomentTime();
	float GetExcretedAmount(float checkDayTime);
	float GetDecompositedAmount(float checkDayTime);
	float GetCurrentConcentration(float checkDayTime);
	float GetAbsorbedAmunt(float checkDayTime);
	void DeepCopySpirit(class UEB_Spirit* Source);
	void DeepCopyPhysical(class UEB_Physical* Source);
	void DeepCopyPerception(class UEB_Perception* Source);
	void DeepCopyHealth(class UEB_BodyHealth* Source);
	void DeepCopyBrainFuncs(class UEB_BrainFunctions* Source);
	void DeepCopyBaseF(class UEB_BaseFactors* Source);
	void CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime);
};


// Class DrugDealerSimulator.AbsorbedSubstancesComponent
// 0x0000 (0x00F0 - 0x00F0)
class UAbsorbedSubstancesComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AbsorbedSubstancesComponent");
		return ptr;
	}

};


// Class DrugDealerSimulator.ActionableActor
// 0x0008 (0x0330 - 0x0328)
class AActionableActor : public AActor
{
public:
	int                                                innerIndex;                                               // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                innerSubIndex;                                            // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.ActionableActor");
		return ptr;
	}

};


// Class DrugDealerSimulator.ActiveSubstance
// 0x00C0 (0x03E8 - 0x0328)
class AActiveSubstance : public AActor
{
public:
	class UEB_BaseFactors*                             BaseFactors;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       substanceName;                                            // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                innerIndex;                                               // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class UEB_BodyHealth*                              BodyFastImpact;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BodyHealth*                              BodyAddictionImpact;                                      // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BodyHealth*                              BodyExcretionImpact;                                      // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  SpiritFastImpact;                                         // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  SpiritAddictionImpact;                                    // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  SpiritExcretionImpact;                                    // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              PerceptionFastImpact;                                     // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              PerceptionAddictionImpact;                                // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              PerceptionExcretionImpact;                                // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          BrainFuncsFastImpact;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          BrainFuncsAddictionImpact;                                // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          BrainFuncsExcretionImpact;                                // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                PhysicalFastImpact;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                PhysicalAddictionImpact;                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                PhysicalExcretionImpact;                                  // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              neutralPurityPoint;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              goodPurityPoint;                                          // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              neutralQualityPoint;                                      // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              goodQualityPoint;                                         // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fullToleranceAchiveIn;                                    // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxToleranceFactor;                                       // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fullAddictionAchiveIn;                                    // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              toleranceRecoveryDays;                                    // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              addictionRecoveryDays;                                    // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              pruityDebug;                                              // 0x03DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              qualityDebug;                                             // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.ActiveSubstance");
		return ptr;
	}


	float GetQualityFactorIn(float inputQuality);
	float GetQualityFactor();
	float GetPurityFactorIn(float inputPurity);
	float GetPurityFactor();
};


// Class DrugDealerSimulator.AddictionComp
// 0x0020 (0x0110 - 0x00F0)
class UAddictionComp : public UActorComponent
{
public:
	bool                                               autoCleanup;                                              // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<struct FAddictionMark>                      AddictionData;                                            // 0x00F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AddictionComp");
		return ptr;
	}


	void StoreSaveData(TArray<float>* targetArray);
	void ResetData();
	void LoadSaveData(TArray<float> sourceArray);
	float GetDataLevel(int substanceIndex, float checkTime);
	void AddData(int newSubstanceIndex, float takeTime, float calcPower, float recoveryTime, float recoveryOffset);
};


// Class DrugDealerSimulator.AirComponent
// 0x0018 (0x0108 - 0x00F0)
class UAirComponent : public UActorComponent
{
public:
	float                                              airTemp;                                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMinTemp;                                               // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMaxTemp;                                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainChance;                                               // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainDensity;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              stormChance;                                              // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AirComponent");
		return ptr;
	}

};


// Class DrugDealerSimulator.AirProfile
// 0x0018 (0x0340 - 0x0328)
class AAirProfile : public AActor
{
public:
	float                                              airTemp;                                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMinTemp;                                               // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMaxTemp;                                               // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainChance;                                               // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainDensity;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              stromChance;                                              // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AirProfile");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Alkaloid
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Alkaloid : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Alkaloid");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Amfetamina
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Amfetamina : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Amfetamina");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Diamorfina
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Diamorfina : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Diamorfina");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Ergolina
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Ergolina : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Ergolina");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_MDMA
// 0x0000 (0x03E8 - 0x03E8)
class AAS_MDMA : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_MDMA");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Metaamfetamina
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Metaamfetamina : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Metaamfetamina");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Piperydyna
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Piperydyna : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Piperydyna");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Psylocybina
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Psylocybina : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Psylocybina");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_THC
// 0x0000 (0x03E8 - 0x03E8)
class AAS_THC : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_THC");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_THCSativa
// 0x0000 (0x03E8 - 0x03E8)
class AAS_THCSativa : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_THCSativa");
		return ptr;
	}

};


// Class DrugDealerSimulator.AS_Tryptamina
// 0x0000 (0x03E8 - 0x03E8)
class AAS_Tryptamina : public AActiveSubstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Tryptamina");
		return ptr;
	}

};


// Class DrugDealerSimulator.AstralProfile
// 0x0018 (0x0340 - 0x0328)
class AAstralProfile : public AActor
{
public:
	float                                              ligthPower;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isEmmitingEnergy;                                         // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	float                                              emmitPower;                                               // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              heatEmmitingPerc;                                         // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              orbitToSurfaceAngle;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseDistance;                                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AstralProfile");
		return ptr;
	}


	float powerOnSurface();
	float heatPower();
};


// Class DrugDealerSimulator.BU_ManagerActor
// 0x00E8 (0x0410 - 0x0328)
class ABU_ManagerActor : public AActor
{
public:
	class AActor*                                      MainBuildingTargetPtr;                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABU_UpgradeLineActor*>                UpgradeLines;                                             // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, int>                          SeenUpgrades;                                             // 0x0340(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      SaveSpace;                                                // 0x0390(0x0010) (ZeroConstructor)
	bool                                               HasMainLine;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FString                                     MainLineName;                                             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ReadyToUse;                                               // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TMap<struct FString, class ABU_UpgradeLineActor*>  LineNameIndex;                                            // 0x03C0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.BU_ManagerActor");
		return ptr;
	}


	void UserSawUpgrades();
	bool UpgradeBought(int NewLevel, const struct FString& UpgradeLineName);
	void RefreshBuildingObjects();
	void PrepareDataForUse();
	void LogUnseenDetails(struct FBU_UnseenDetailsSets* LogUnseenDetails);
	void LogUnseenData(const struct FBU_UnseenUL& LogUnseenUL);
	void LogMeOut();
	int GetUnseenData(TArray<struct FBU_UnseenUL>* OutUnseenData);
	int GetMainLineUpgradeLevel();
	void GetAllUpgradeLines(TArray<class ABU_UpgradeLineActor*>* OutReferenceList);
};


// Class DrugDealerSimulator.BU_UpgradeDetails
// 0x0010 (0x0338 - 0x0328)
class ABU_UpgradeDetails : public AActor
{
public:
	TArray<struct FBU_UpgradeDetailsStruct>            ChangesSet;                                               // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.BU_UpgradeDetails");
		return ptr;
	}


	int GetMaxUpgradeLevel();
};


// Class DrugDealerSimulator.BU_UpgradeLineActor
// 0x0040 (0x0368 - 0x0328)
class ABU_UpgradeLineActor : public AActor
{
public:
	int                                                CurrentLevel;                                             // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                seenMaxLevel;                                             // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SaveSpace;                                                // 0x0330(0x0010) (ZeroConstructor)
	int                                                MaxLevel;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaxLevelAutoAdaptAfterLoad;                               // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMainUpgradeLine;                                        // 0x0345(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	class ABU_ManagerActor*                            BuildingUpgradeManagerPtr;                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MainLineLevelRequirement;                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	TArray<struct FBU_ObjectsToDetailsBridge>          UpgradesSettings;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.BU_UpgradeLineActor");
		return ptr;
	}


	bool UpgradeToLevel(int NewLevel);
	void RefreshDetailsAfterLoad();
	void RefreshDetails();
	void ProcessForLevel(int procLevel);
	float NextUpgradePrice();
	int NextUpgradeLevel();
	bool IsAvailableForUpgrade();
	bool IsAvailable();
	bool HasAllUpgrades();
	float GetUpgradeCost(int procLevel);
	int GetMaxUpgradeLevel();
	float GetLevelPrice(int procLevel);
	void AdaptMaxLevel();
};


// Class DrugDealerSimulator.CepSaveTester
// 0x0008 (0x0330 - 0x0328)
class ACepSaveTester : public AActor
{
public:
	int                                                someInt;                                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.CepSaveTester");
		return ptr;
	}


	void noticeAction();
	int getCount();
};


// Class DrugDealerSimulator.CepWeatherComponent
// 0x02E0 (0x03D0 - 0x00F0)
class UCepWeatherComponent : public UActorComponent
{
public:
	int                                                yearDaysLen;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class USeasonAstralComponent*                      baseAstralSettings;                                       // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      moonSettings;                                             // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                moonDayHoursLength;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                moonOrbitDegRot;                                          // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ASeasonProfile*>                      Seasons;                                                  // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWorldTimeAndConditions*                     rootHandler;                                              // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              enablingSunTimeMarginOnToggle;                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunCeremonyDegMargin;                                     // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               inited;                                                   // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class ATimeProfile*                                currentTimeInstance;                                      // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                seasonsDefined;                                           // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	TArray<float>                                      sunDataSunrises;                                          // 0x0148(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataSunsets;                                           // 0x0158(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataNoons;                                             // 0x0168(0x0010) (ZeroConstructor)
	TArray<float>                                      sunOrbitData;                                             // 0x0178(0x0010) (ZeroConstructor)
	TArray<float>                                      sunOrbitDistanceData;                                     // 0x0188(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonScheme;                                             // 0x0198(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonBasicTemperature;                                   // 0x01A8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMinTemperature;                                     // 0x01B8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMaxTemperature;                                     // 0x01C8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainChance;                                         // 0x01D8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonCalcRainChance;                                     // 0x01E8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainDensity;                                        // 0x01F8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonCloudsDayLogs;                                      // 0x0208(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonStormChance;                                        // 0x0218(0x0010) (ZeroConstructor)
	TArray<bool>                                       seasonRainSet;                                            // 0x0228(0x0010) (ZeroConstructor)
	TArray<bool>                                       seasonFogSet;                                             // 0x0238(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainStartHour;                                      // 0x0248(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainEndHour;                                        // 0x0258(0x0010) (ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonClouds;                                             // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonRainDetails;                                        // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonHeatProfile;                                        // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonFogLevels;                                          // 0x0298(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      seasonFogDensity;                                         // 0x02A8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainDensityA;                                       // 0x02B8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainDensityB;                                       // 0x02C8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonStormLength;                                        // 0x02D8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonStormOffset;                                        // 0x02E8(0x0010) (ZeroConstructor)
	class UObject*                                     tempObject;                                               // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              totalSeasonWage;                                          // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TArray<int>                                        seasonA;                                                  // 0x0308(0x0010) (ZeroConstructor)
	TArray<int>                                        seasonB;                                                  // 0x0318(0x0010) (ZeroConstructor)
	TArray<float>                                      impactA;                                                  // 0x0328(0x0010) (ZeroConstructor)
	TArray<float>                                      impactB;                                                  // 0x0338(0x0010) (ZeroConstructor)
	TArray<float>                                      instabilityFactors;                                       // 0x0348(0x0010) (ZeroConstructor)
	int                                                daysCounter;                                              // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               tempTest;                                                 // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAirComponent*                               tempAirProfileA;                                          // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAirComponent*                               tempAirProfileB;                                          // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralA;                                        // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralB;                                        // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x0390(0x0024) MISSED OFFSET
	float                                              tempDebProgress;                                          // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t1;                                                       // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t2;                                                       // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t3;                                                       // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t4;                                                       // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t5;                                                       // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.CepWeatherComponent");
		return ptr;
	}


	float YearPassed();
	int YearDay();
	bool SetupRain(int datNum, float rainLength, float rainDensity);
	void SaveDataSnapshot();
	void RecoverDataSnapshot();
	int NextYearDay(int curDay, int Op);
	void Init();
};


// Class DrugDealerSimulator.CepWeatherProfile
// 0x0138 (0x0460 - 0x0328)
class ACepWeatherProfile : public AActor
{
public:
	int                                                yearDaysLen;                                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class USeasonAstralComponent*                      baseAstralSettings;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ASeasonProfile*>                      Seasons;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWorldTimeAndConditions*                     rootHandler;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               inited;                                                   // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class ATimeProfile*                                currentTimeInstance;                                      // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                seasonsDefined;                                           // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<float>                                      sunDataSunrises;                                          // 0x0368(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataSunsets;                                           // 0x0378(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonScheme;                                             // 0x0388(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonBasicTemperature;                                   // 0x0398(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMinTemperature;                                     // 0x03A8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMaxTemperature;                                     // 0x03B8(0x0010) (ZeroConstructor)
	float                                              totalSeasonWage;                                          // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	TArray<int>                                        seasonA;                                                  // 0x03D0(0x0010) (ZeroConstructor)
	TArray<int>                                        seasonB;                                                  // 0x03E0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactA;                                                  // 0x03F0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactB;                                                  // 0x0400(0x0010) (ZeroConstructor)
	TArray<float>                                      instabilityFactors;                                       // 0x0410(0x0010) (ZeroConstructor)
	int                                                daysCounter;                                              // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               tempTest;                                                 // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAirComponent*                               tempAirProfileA;                                          // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAirComponent*                               tempAirProfileB;                                          // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralA;                                        // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralB;                                        // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.CepWeatherProfile");
		return ptr;
	}


	float YearPassed();
	int YearDay();
	void Init();
};


// Class DrugDealerSimulator.DayConditionsLogger_UE
// 0x0060 (0x0088 - 0x0028)
class UDayConditionsLogger_UE : public UObject
{
public:
	int                                                hoursCount;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                markupsPerHour;                                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                commitJumps;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              markupMinuteStep;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              markupHourStep;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<float>                                      vals;                                                     // 0x0040(0x0010) (ZeroConstructor)
	TArray<float>                                      calcProgresses;                                           // 0x0050(0x0010) (ZeroConstructor)
	bool                                               commitingMode;                                            // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                lastWriteIndex;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                firstCommitIndex;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              startCommitVal;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              endCommitVal;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                curWriteIndex;                                            // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              tempDebProgress;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ttIndex;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ttIndex1;                                                 // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ttIndex2;                                                 // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.DayConditionsLogger_UE");
		return ptr;
	}


	void StartCommitSession(float newStartVal);
	void SetValueByIndex(int Index, float NewValue);
	void SetValueByHour(float setHour, float NewValue);
	int SeekIndex(float seekHour);
	bool IsInCommitMode();
	int GetValuesLength();
	float GetValueByIndex(int SeekIndex);
	float GetValueByHour(float seekHour, bool extrapolateValue);
	float GetSum(int maxIndex);
	int GetNextIndex(int curIndex, int Op);
	void EndCommitSession(float newEndVal, bool followToEnd);
	void ClassInit();
};


// Class DrugDealerSimulator.DayConditionsLoggerComponent
// 0x0018 (0x0108 - 0x00F0)
class UDayConditionsLoggerComponent : public UActorComponent
{
public:
	TArray<float>                                      Values;                                                   // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.DayConditionsLoggerComponent");
		return ptr;
	}


	void SetValueByIndex(int Index, float NewValue);
	void Init();
};


// Class DrugDealerSimulator.DrugsEffectsBase
// 0x0010 (0x0100 - 0x00F0)
class UDrugsEffectsBase : public UActorComponent
{
public:
	int                                                innerType;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                saveInnerPropertiesCount;                                 // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               blockCancelEffect;                                        // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.DrugsEffectsBase");
		return ptr;
	}

};


// Class DrugDealerSimulator.EB_BaseFactors
// 0x0028 (0x0128 - 0x0100)
class UEB_BaseFactors : public UDrugsEffectsBase
{
public:
	float                                              Strength;                                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              purity;                                                   // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Quality;                                                  // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              addictiveness;                                            // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              toleranceFactor;                                          // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              effectsEffectivnessFactor;                                // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rateAbsorption;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rateDecomposition;                                        // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rateExcretion;                                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              junkieHunger;                                             // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.EB_BaseFactors");
		return ptr;
	}


	void StoreSelfData(int baseOffset, TArray<float>* targetArray);
	void SetClassBasics();
	void RestoreFromData(TArray<float> sourceArray, int baseOffset);
	float GetAddictivnessFactor();
};


// Class DrugDealerSimulator.EB_BodyHealth
// 0x0020 (0x0120 - 0x0100)
class UEB_BodyHealth : public UDrugsEffectsBase
{
public:
	float                                              nervousSystem;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              digestiveSystem;                                          // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              urinaryTract;                                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              liver;                                                    // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              kidneys;                                                  // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              circulatory;                                              // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              respiratory;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              heart;                                                    // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.EB_BodyHealth");
		return ptr;
	}


	void StoreSelfData(int baseOffset, TArray<float>* targetArray);
	void SetClassBasics();
	void RestoreFromData(TArray<float> sourceArray, int baseOffset);
	void InitAsValuesStorage();
	void InitAsMinClamp();
	void InitAsMaxClamp();
	void InitAsFactor();
};


// Class DrugDealerSimulator.EB_BrainFunctions
// 0x0010 (0x0110 - 0x0100)
class UEB_BrainFunctions : public UDrugsEffectsBase
{
public:
	float                                              Mathematics;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Navigation;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Observation;                                              // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Communication;                                            // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.EB_BrainFunctions");
		return ptr;
	}


	void StoreSelfData(int baseOffset, TArray<float>* targetArray);
	void SetClassBasics();
	void RestoreFromData(TArray<float> sourceArray, int baseOffset);
	void InitAsValuesStorage();
	void InitAsMinClamp();
	void InitAsMaxClamp();
	void InitAsFactor();
};


// Class DrugDealerSimulator.EB_Perception
// 0x0058 (0x0158 - 0x0100)
class UEB_Perception : public UDrugsEffectsBase
{
public:
	float                                              soundHal;                                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceHal;                                                 // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scotomas;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorTrans;                                               // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeTrans;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Contours;                                                 // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImgCreation;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelfHearthHear;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMultiplier;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOVMultiplier;                                            // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              THC;                                                      // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              THCSativa;                                                // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amfetamina;                                               // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Metaamfetamina;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MDMA;                                                     // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ergolina;                                                 // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tryptamina;                                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Psylocybina;                                              // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alkaloid;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diamorfina;                                               // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Piperydyna;                                               // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.EB_Perception");
		return ptr;
	}


	void StoreSelfData(int baseOffset, TArray<float>* targetArray);
	void SetClassBasics();
	void RestoreFromData(TArray<float> sourceArray, int baseOffset);
	void InitAsValuesStorage();
	void InitAsMinClamp();
	void InitAsMaxClamp();
	void InitAsFactor();
};


// Class DrugDealerSimulator.EB_Physical
// 0x0018 (0x0118 - 0x0100)
class UEB_Physical : public UDrugsEffectsBase
{
public:
	float                                              MovementSpeed;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaMultiplier;                                        // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementCoordination;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IrisDisfunction;                                          // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Seizures;                                                 // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.EB_Physical");
		return ptr;
	}


	void StoreSelfData(int baseOffset, TArray<float>* targetArray);
	void SetClassBasics();
	void RestoreFromData(TArray<float> sourceArray, int baseOffset);
	void InitAsValuesStorage();
	void InitAsMinClamp();
	void InitAsMaxClamp();
	void InitAsFactor();
};


// Class DrugDealerSimulator.EB_Spirit
// 0x0018 (0x0118 - 0x0100)
class UEB_Spirit : public UDrugsEffectsBase
{
public:
	float                                              Afraid;                                                   // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Agrresive;                                                // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sad;                                                      // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Happy;                                                    // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Calm;                                                     // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Enraged;                                                  // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.EB_Spirit");
		return ptr;
	}


	void StoreSelfData(int baseOffset, TArray<float>* targetArray);
	void SetClassBasics();
	void RestoreFromData(TArray<float> sourceArray, int baseOffset);
	void InitAsValuesStorage();
	void InitAsMinClamp();
	void InitAsMaxClamp();
	void InitAsFactor();
};


// Class DrugDealerSimulator.HealthTestActor
// 0x0008 (0x0330 - 0x0328)
class AHealthTestActor : public AActor
{
public:
	class UHumanoidComponent*                          humanization;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.HealthTestActor");
		return ptr;
	}

};


// Class DrugDealerSimulator.HumanoidActor
// 0x0178 (0x04A0 - 0x0328)
class AHumanoidActor : public AActor
{
public:
	int                                                testInt;                                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class UEB_BodyHealth*                              bodyHealth;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BodyHealth*                              bodyHealthRecovery;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  spiritAttitude;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              Perception;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          brainFuncs;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                physcials;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0360(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.HumanoidActor.inBodySubstances
	class UAddictionComp*                              AddictionData;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAddictionComp*                              ToleranceData;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<float>                                      SaveSpace0;                                               // 0x03C0(0x0010) (ZeroConstructor)
	TArray<float>                                      SaveSpace1;                                               // 0x03D0(0x0010) (ZeroConstructor)
	TArray<float>                                      SaveSpace2;                                               // 0x03E0(0x0010) (ZeroConstructor)
	TArray<float>                                      SaveSpace3;                                               // 0x03F0(0x0010) (ZeroConstructor)
	TArray<float>                                      SaveSpace4;                                               // 0x0400(0x0010) (ZeroConstructor)
	int                                                InBodySubsCount;                                          // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                checkValue;                                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, float>                                   curConcetrations;                                         // 0x0418(0x0050) (ZeroConstructor)
	class UAbsorbedSubstanceComp*                      tempCalcFactors;                                          // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASubstancesAndEffects*                       SAEptr;                                                   // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0478(0x0014) MISSED OFFSET
	int                                                NonCalcMinFrames;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonCalcMinTime;                                           // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SomeDebugInteger;                                         // 0x0494(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.HumanoidActor");
		return ptr;
	}


	void SetTestInt(int newInt);
	void SaveDataSnapshot();
	void RestoreDataSnapshot();
	void NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass);
	bool IsSubstanceEffective(int substanceIndex);
	bool IsSubstanceBeingAbsorbed(int substanceIndex, float checkDayTime);
	float GetToleranceDataLevel(int substanceIndex, float curDayTime);
	float GetToleranceDataInFactor(int substanceIndex, float InValue, float curDayTime);
	float GetToleranceDataFactor(int substanceIndex, float curDayTime);
	int GetTestInt();
	float GetCurrentConcentration(int substanceIndex);
	float GetAddictionDataLevel(int substanceIndex, float curDayTime);
	float GetAddictionDataInFactor(int substanceIndex, float InValue, float curDayTime);
	float GetAddictionDataFactor(int substanceIndex, float curDayTime);
	void ApplySubstance(float Tolerance, float curConcentration, float* currentValue);
};


// Class DrugDealerSimulator.HumanoidComponent
// 0x0148 (0x0238 - 0x00F0)
class UHumanoidComponent : public UActorComponent
{
public:
	class UEB_BodyHealth*                              bodyHealth;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BodyHealth*                              bodyHealthRecovery;                                       // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  spiritAttitude;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              Perception;                                               // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          brainFuncs;                                               // 0x0110(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                physcials;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0120(0x0060) MISSED OFFSET
	TMap<class AActiveSubstance*, float>               addictionList;                                            // 0x0180(0x0050) (ZeroConstructor)
	TMap<class AActiveSubstance*, float>               toleranceList;                                            // 0x01D0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0220(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.HumanoidComponent");
		return ptr;
	}


	void SetToleranceLevel(class AActiveSubstance* substanceActor, float Value);
	void SetAddictionLevel(class AActiveSubstance* substanceActor, float Value);
	void NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass);
	float GetToleranceLevel(class AActiveSubstance* substanceActor);
	float GetToleranceFactorIn(class AActiveSubstance* substanceActor, float InValue);
	float GetToleranceFactor(class AActiveSubstance* substanceActor);
	float GetAddictionLevel(class AActiveSubstance* substanceActor);
	float GetAddictionFactor(class AActiveSubstance* substanceActor);
	void ApplySubstance(float Tolerance, float curConcentration, float* currentValue);
};


// Class DrugDealerSimulator.LockpickPuzzle
// 0x0170 (0x0498 - 0x0328)
class ALockpickPuzzle : public AActor
{
public:
	int                                                difficultyLevel;                                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BobbyPinStartAngle;                                       // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScrewDriverStartAngle;                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseScrewDriverSpeed;                                     // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseShakeDamageFactor;                                    // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x033C(0x0008) MISSED OFFSET
	float                                              targetedBobbyPinAngle;                                    // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              targetedScrewDriverAngle;                                 // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x034C(0x001F) MISSED OFFSET
	bool                                               printLogToOutput;                                         // 0x036B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<float>                                      dfcRangeMin;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      dfcRangeMax;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0390(0x0020) MISSED OFFSET
	TArray<float>                                      difficultyAngleMargins;                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyRotationMarginBefore;                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyRotationMarginAfter;                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyTimeMargins;                                    // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x20];                                      // 0x03F0(0x0020) MISSED OFFSET
	TArray<float>                                      difficultyUnlockingTimes;                                 // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyHealthDrops;                                    // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData05[0x68];                                      // 0x0430(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.LockpickPuzzle");
		return ptr;
	}


	void UnlockedDone();
	void StartTakingDamage();
	void ResetPuzzle(bool ResetUnlockPosition);
	void PushMouseInput(float X, float Y);
	bool IsUnlocked();
	bool IsScrewDriverInUnlockZone();
	bool IsBobbyPinInUnlockZone();
	bool HasBoobyPinBroke();
	float GetScrewDriverAngle();
	float GetDifficultyMeta(int optNum);
	float GetCurrentResistance();
	float GetBobbyPinHealth();
	float GetBobbyPinAngle();
	void EndTakingDamage();
	void BrokenEvent();
	void ActionButtonReleased();
	void ActionButtonPressed();
};


// Class DrugDealerSimulator.NextSingleton
// 0x0120 (0x0148 - 0x0028)
class UNextSingleton : public UObject
{
public:
	bool                                               nativeTimeRecover;                                        // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class ASubstancesAndEffects*                       SAE;                                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SAEOperational;                                           // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8F];                                      // 0x0039(0x008F) MISSED OFFSET
	class AWorldTimeAndConditions*                     WTAC;                                                     // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATS_Manager*                                 TSManager;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                callCount;                                                // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x00DC(0x000C) MISSED OFFSET
	TArray<bool>                                       HelpersList;                                              // 0x00E8(0x0010) (ZeroConstructor)
	TArray<bool>                                       MasterHelpers;                                            // 0x00F8(0x0010) (ZeroConstructor)
	TArray<int>                                        WTACCounts;                                               // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	int                                                debVal;                                                   // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x012C(0x0014) MISSED OFFSET
	bool                                               requireWTAC;                                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0141(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingleton");
		return ptr;
	}


	void WTACStoreInSaveSpace();
	void WTACRecover();
	bool ValidateWorld();
	void TestCallFunction();
	void ResearchWorld();
	void ReInitWTAC();
	void ReassignWorld();
	void ReasearchForStaticMeshes();
	void PrepareInstancesForSaveEvent();
	bool OptSystemOperational();
	bool NPCSystemOperational();
	void NoticeLoadRequest();
	void LoadDone(bool retryLoad);
	bool IsGridOperational();
	bool InnerLoadPerformed();
	void InitSystemsActors();
	class ATS_Manager* GetTSManager();
	struct FVector GetPlayerLocation();
	bool CanSaveDependedInstancesInit();
};


// Class DrugDealerSimulator.NextSingletonLibrary
// 0x0000 (0x0028 - 0x0028)
class UNextSingletonLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingletonLibrary");
		return ptr;
	}


	class UNextSingleton* STATIC_GetNextSingletonData(bool* IsValid);
};


// Class DrugDealerSimulator.NextSingletonWorldHelper
// 0x0018 (0x0340 - 0x0328)
class ANextSingletonWorldHelper : public AActor
{
public:
	bool                                               MasterWorld;                                              // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               validSingleton;                                           // 0x0329(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	class UWorld*                                      tempWorld;                                                // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                debVal;                                                   // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingletonWorldHelper");
		return ptr;
	}


	void SetMasterState(bool newState);
};


// Class DrugDealerSimulator.SDB_BodyHealth
// 0x0028 (0x0050 - 0x0028)
class USDB_BodyHealth : public UObject
{
public:
	class UEB_BodyHealth*                              MainBodyHealth;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  Spirit;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              Perception;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          brainFuncs;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                Physical;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SDB_BodyHealth");
		return ptr;
	}


	void InitBucketAsMinClamp();
	void InitBucketAsMaxClamp();
	void InitBucketAsFactors();
	void InitBucketAsDataStorage();
};


// Class DrugDealerSimulator.SDB_BodyHealthComp
// 0x0028 (0x0118 - 0x00F0)
class USDB_BodyHealthComp : public UActorComponent
{
public:
	class UEB_BodyHealth*                              MainBodyHealth;                                           // 0x00F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Spirit*                                  Spirit;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Perception*                              Perception;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_BrainFunctions*                          brainFuncs;                                               // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEB_Physical*                                Physical;                                                 // 0x0110(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SDB_BodyHealthComp");
		return ptr;
	}


	void InitBucketAsMinClamp();
	void InitBucketAsMaxClamp();
	void InitBucketAsFactors();
	void InitBucketAsDataStorage();
};


// Class DrugDealerSimulator.SeasonAstralComponent
// 0x0018 (0x0108 - 0x00F0)
class USeasonAstralComponent : public UActorComponent
{
public:
	class AAstralProfile*                              manipulationAstralObject;                                 // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              orbitToSurfaceAngle;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseDistance;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHours;                                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHourCenter;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonAstralComponent");
		return ptr;
	}


	float GetSunsetTime();
	float GetSunriseTime();
	float GetOrbitTarget();
	float GetOrbitDistanceTarget();
	float GetMaxHeigthTime();
	float GetHeatPower();
};


// Class DrugDealerSimulator.SeasonAstralProfile
// 0x0018 (0x0340 - 0x0328)
class ASeasonAstralProfile : public AActor
{
public:
	class AAstralProfile*                              manipulationAstralObject;                                 // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              orbitToSurfaceAngle;                                      // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseDistance;                                             // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHours;                                                 // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHourCenter;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonAstralProfile");
		return ptr;
	}


	float GetSunsetTime();
	float GetSunriseTime();
	float GetHeatPower();
};


// Class DrugDealerSimulator.SeasonProfile
// 0x0350 (0x0678 - 0x0328)
class ASeasonProfile : public AActor
{
public:
	float                                              lengthWage;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class UAirComponent*                               airComp;                                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      astralSettingsComp;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              seasonConditionsImpactance;                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainChance;                                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                worldIndex;                                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              seasonMargin;                                             // 0x034C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x328];                                     // 0x0350(0x0328) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonProfile");
		return ptr;
	}


	class UAirComponent* getAirProfile();
};


// Class DrugDealerSimulator.ShiroActor
// 0x0018 (0x0340 - 0x0328)
class AShiroActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.ShiroActor");
		return ptr;
	}


	struct FString retName();
};


// Class DrugDealerSimulator.ShiroBlueprint
// 0x0000 (0x0028 - 0x0028)
class UShiroBlueprint : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.ShiroBlueprint");
		return ptr;
	}


	int STATIC_WeightedArrayRand(TArray<float> WeightArr);
	void STATIC_testReferences(float* t1, float* t2, float* t3, float* t4);
	void STATIC_SimpleGrid(float intervalX, float intervalY, int columnCount, int objectIndex, float* positionX, float* positionY);
	int STATIC_shiroFunc2(int A);
	int STATIC_shiroFunc(int A);
	class AWorldTimeAndConditions* STATIC_GetWTAC();
	class UNextSingleton* STATIC_GetSingleton();
	class ASubstancesAndEffects* STATIC_GetSAE();
	float STATIC_FastProportions(float minTargetRange, float maxTargetRange, float workValue, bool unboundBounds, float minBaseRange, float maxBaseRange);
	float STATIC_extrapolateTest(float Min, float Max, float perc);
	void STATIC_CheckPrice(float drugCurrentPrice, float drugResonablePrice, float reputationFactor, bool AddictedCustomer, float baseMaxSellingFactor, float reputationInfluence, float AddictedInfluence, bool* priceHighOutput, bool* priceTooHighOutput);
	bool STATIC_CanSaveDependedInstancesInit();
	void STATIC_calculateSky(int dayNum, int curHour, int curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump);
};


// Class DrugDealerSimulator.SubstancesAndEffects
// 0x0510 (0x0838 - 0x0328)
class ASubstancesAndEffects : public AActor
{
public:
	class UClass*                                      BPT_HealthObject;                                         // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AHumanoidActor*                              HealthObject;                                             // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0338(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.StdEffectsList
	bool                                               AutoSubstancesSearch;                                     // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x0389(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.ActiveEffects
	bool                                               AutoTriggeredEffectsSearch;                               // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UClass*                                      BPT_THC;                                                  // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_THC;                                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x03F8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_THC
	class UClass*                                      BPT_THCSativa;                                            // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_THCSativa;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0458(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_THCSativa
	class UClass*                                      BPT_Amfetamina;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Amfetamina;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x50];                                      // 0x04B8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Amfetamina
	class UClass*                                      BPT_Metaamfetamina;                                       // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Metaamfetamina;                                        // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x50];                                      // 0x0518(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Metaamfetamina
	class UClass*                                      BPT_MDMA;                                                 // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_MDMA;                                                  // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x50];                                      // 0x0578(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_MDMA
	class UClass*                                      BPT_Ergolina;                                             // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Ergolina;                                              // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x50];                                      // 0x05D8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Ergolina
	class UClass*                                      BPT_Tryptamina;                                           // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Tryptamina;                                            // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x50];                                      // 0x0638(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Tryptamina
	class UClass*                                      BPT_Psylocybina;                                          // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Psylocybina;                                           // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x50];                                      // 0x0698(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Psylocybina
	class UClass*                                      BPT_Alkaloid;                                             // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Alkaloid;                                              // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x50];                                      // 0x06F8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Alkaloid
	class UClass*                                      BPT_Diamorfina;                                           // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Diamorfina;                                            // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x50];                                      // 0x0758(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Diamorfina
	class UClass*                                      BPT_Piperydyna;                                           // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            BD_Piperydyna;                                            // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x50];                                      // 0x07B8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Piperydyna
	class USDB_BodyHealthComp*                         FactorDefaults;                                           // 0x0808(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USDB_BodyHealthComp*                         MinValues;                                                // 0x0810(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USDB_BodyHealthComp*                         MaxValues;                                                // 0x0818(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MajorVersion;                                             // 0x0820(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubVersion;                                               // 0x0824(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxSubstances;                                            // 0x0828(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              selfTimer;                                                // 0x082C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               tempSubsBeingAbs;                                         // 0x0830(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0831(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SubstancesAndEffects");
		return ptr;
	}


	void ProcessTriggers(int substanceIndexTriggering);
	void NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass);
	void MergeWithWorld(class UWorld** W);
	void ManageLaunchList(float currentDayTime);
	float GetSubstanceGenericData(int substanceIndex, int subprop, float retEmpty);
	void GetSubstanceEffectsByIndex(int activeSubIndex);
	void GetSubstanceEffects(class AActiveSubstance* activeSub);
	class AActiveSubstance* GetSubstanceByIndex(int substanceIndex);
	class AHumanoidActor* GetHealthObject();
	void DoBasicEffectTick(float DeltaTime, class ATriggeredDrugEffect** Eff);
	void ClassInit();
	bool CheckForSubstanceEffects(int substanceIndex);
};


// Class DrugDealerSimulator.TriggeredDrugEffect
// 0x0188 (0x04B0 - 0x0328)
class ATriggeredDrugEffect : public AActor
{
public:
	bool                                               hasTriggered;                                             // 0x0328(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ListAssociated;                                           // 0x0329(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x032A(0x0002) MISSED OFFSET
	int                                                substanceIndex;                                           // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wutDeb;                                                   // 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               TakeTriggered;                                            // 0x0334(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AddictionTriggered;                                       // 0x0335(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ToleranceTriggered;                                       // 0x0336(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0337(0x0001) MISSED OFFSET
	int                                                substanceIndexTriggering;                                 // 0x0338(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               liveEffect;                                               // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	float                                              TimeToLive;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               continousEffect;                                          // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	float                                              cooldownTime;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isNPCEffect;                                              // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                bp_InnerIndex;                                            // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData06[0x50];                                      // 0x0354(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.TriggeredDrugEffect.StartBlockList
	int                                                StartCount;                                               // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastTriggeredTime;                                        // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastTriggeredEndTime;                                     // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               isWorking;                                                // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class ASubstancesAndEffects*                       rootHandler;                                              // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x28];                                      // 0x03C0(0x0028) MISSED OFFSET
	bool                                               ETA_IsTriggering;                                         // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ETA_CanTriggerAlone;                                      // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ETA_CheckAsEqualAndLess;                                  // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x03EB(0x0001) MISSED OFFSET
	float                                              ETA_ActivateValue;                                        // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ETT_IsTriggering;                                         // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ETT_CanTriggerAlone;                                      // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ETT_CheckAsEqualAndLess;                                  // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x03F3(0x0001) MISSED OFFSET
	float                                              ETT_ActivateValue;                                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HB_IsTriggering;                                          // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HB_CanTriggerAlone;                                       // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HB_ActivateWhenAll;                                       // 0x03FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HB_CheckAsEqualAndLess;                                   // 0x03FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_nervousSystem;                                        // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_digestiveSystem;                                      // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_urinaryTract;                                         // 0x03FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_liver;                                                // 0x03FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_kidneys;                                              // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_circulatory;                                          // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_respiratory;                                          // 0x0402(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HBC_heart;                                                // 0x0403(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class UEB_BodyHealth*                              BodyHealthTriggerValues;                                  // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Spirit_IsTriggering;                                      // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Spirit_CanTriggerAlone;                                   // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Spirit_ActivateWhenAll;                                   // 0x0412(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Spirit_CheckAsEqualAndLess;                               // 0x0413(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SC_Afraid;                                                // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SC_Agrresive;                                             // 0x0415(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SC_Sad;                                                   // 0x0416(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SC_Happy;                                                 // 0x0417(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SC_Calm;                                                  // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SC_Enraged;                                               // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x041A(0x0006) MISSED OFFSET
	class UEB_Spirit*                                  SpiritTriggerValues;                                      // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Per_IsTriggering;                                         // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Per_CanTriggerAlone;                                      // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Per_ActivateWhenAll;                                      // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Per_CheckAsEqualAndLess;                                  // 0x042B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_SoundHal;                                             // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_VoiceHal;                                             // 0x042D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Scotomas;                                             // 0x042E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_ColorTrans;                                           // 0x042F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_SizeTrans;                                            // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Contours;                                             // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_ImgCreation;                                          // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_SelfHearthHear;                                       // 0x0433(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_TimeMultiplier;                                       // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_FOVMultiplier;                                        // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_THC;                                                  // 0x0436(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_THCSativa;                                            // 0x0437(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Amfetamina;                                           // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Metaamfetamina;                                       // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_MDMA;                                                 // 0x043A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Ergolina;                                             // 0x043B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Tryptamina;                                           // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Psylocybina;                                          // 0x043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Alkaloid;                                             // 0x043E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Diamorfina;                                           // 0x043F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PRC_Piperydyna;                                           // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UEB_Perception*                              PerceptionTriggerValues;                                  // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BFuncs_IsTriggering;                                      // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BFuncs_CanTriggerAlone;                                   // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BFuncs_ActivateWhenAll;                                   // 0x0452(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BFuncs_CheckAsEqualAndLess;                               // 0x0453(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BFC_Mathematics;                                          // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BFC_Navigation;                                           // 0x0455(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BFC_Observation;                                          // 0x0456(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BFC_Communication;                                        // 0x0457(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEB_BrainFunctions*                          BrainFuncsTriggerValues;                                  // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Phys_IsTriggering;                                        // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Phys_CanTriggerAlone;                                     // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Phys_ActivateWhenAll;                                     // 0x0462(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Phys_CheckAsEqualAndLess;                                 // 0x0463(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PHC_MovementSpeed;                                        // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PHC_StaminaMultiplier;                                    // 0x0465(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PHC_MovementCoordination;                                 // 0x0466(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PHC_IrisDisfunction;                                      // 0x0467(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PHC_Seizures;                                             // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UEB_Physical*                                PhysicalTriggerValues;                                    // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              tickTime;                                                 // 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                framesPassed;                                             // 0x047C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                nonCalcFramesCount;                                       // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                framesOffset;                                             // 0x0484(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                minCalcFramesSkip;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minTimeSkip;                                              // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectStartInnerTime;                                     // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectEndInnerTime;                                       // 0x0494(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InnerEffectTimer;                                         // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectStartRootTime;                                      // 0x049C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectEndRootTime;                                        // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               DrugSessionRun;                                           // 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class AHumanoidActor*                              HealthObject;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TriggeredDrugEffect");
		return ptr;
	}


	void ValidatePTRS();
	void StartEffect();
	void PureEffectInit();
	void PureEffectEnd();
	void NoticeEffectEnd(float currentDayTime);
	void InitInnerClass();
	float GetCurrentDayTime();
	void EndEffect();
	void EffectTick(float DeltaTime);
	bool CheckTrigger(class AHumanoidActor* checkObject, float currentDayTime);
};


// Class DrugDealerSimulator.TDE_Alkaloid
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Alkaloid : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Alkaloid");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_Amfetamina
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Amfetamina : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Amfetamina");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_Diamorfina
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Diamorfina : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Diamorfina");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_Ergolina
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Ergolina : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Ergolina");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_MDMA
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_MDMA : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_MDMA");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_Metaamfetamina
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Metaamfetamina : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Metaamfetamina");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_Piperydyna
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Piperydyna : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Piperydyna");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_Psylocybina
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Psylocybina : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Psylocybina");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_THC
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_THC : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_THC");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_THCSativa
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_THCSativa : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_THCSativa");
		return ptr;
	}

};


// Class DrugDealerSimulator.TDE_Tryptamina
// 0x0000 (0x04B0 - 0x04B0)
class ATDE_Tryptamina : public ATriggeredDrugEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Tryptamina");
		return ptr;
	}

};


// Class DrugDealerSimulator.TimeProfile
// 0x0030 (0x0358 - 0x0328)
class ATimeProfile : public AActor
{
public:
	float                                              instanceTime;                                             // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                iDay;                                                     // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                iHour;                                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                iMinute;                                                  // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              iSec;                                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              iTimeMultiplier;                                          // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TimeProfile");
		return ptr;
	}


	void setTimeMultiplier(float Val, float propagationTime);
	void setDayHourMinuteTime(int day, int hour, int minute);
	int getIntTimeData(int optNum);
	float GetCurrentTimeMultiplier();
	float dayFloatResult();
	void addSeconds(float addSeconds);
	void addMinutes(int addMinutes);
};


// Class DrugDealerSimulator.TrainControllerCode
// 0x5048 (0x5370 - 0x0328)
class ATrainControllerCode : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0328(0x0058) MISSED OFFSET
	class AActor*                                      actorPath;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      leaderBPLeader;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                innerSegmentsSpawn;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UClass*                                      segmentBPClass;                                           // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              forcePropagation;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              frictionForcePropagation;                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              constPMRmultiplier;                                       // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              stopLength;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeltaTime;                                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minInterval;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxInterval;                                              // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              loadSimulate;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segmentsInit;                                             // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRunning;                                                // 0x03C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4FA7];                                    // 0x03C9(0x4FA7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainControllerCode");
		return ptr;
	}


	float initOnWorld();
	void initInstance(int followingSegmentsCount);
	void calcTotalWeigthAndPower();
	float calcTotalFrictionForce();
	void calcSingleSegment(class ATrainRealSegment* calcSegment);
	float calcSegmentDistanceToLeader(int SegmentIndex);
};


// Class DrugDealerSimulator.TrainRealSegment
// 0x0030 (0x0358 - 0x0328)
class ATrainRealSegment : public AActor
{
public:
	float                                              weigth;                                                   // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              loadWeigth;                                               // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isCargo;                                                  // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasEngine;                                                // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0332(0x0002) MISSED OFFSET
	float                                              enginePower;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               backwardDirectionEngine;                                  // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              axleLength;                                               // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              axleWide;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              modelLength;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              modelWidth;                                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lastAngle;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TrainSegmentMesh;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainRealSegment");
		return ptr;
	}

};


// Class DrugDealerSimulator.TrainSegmentCode
// 0x0008 (0x0330 - 0x0328)
class ATrainSegmentCode : public AActor
{
public:
	bool                                               leadSegment;                                              // 0x0328(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainSegmentCode");
		return ptr;
	}

};


// Class DrugDealerSimulator.TrainSegmentSubClass
// 0x0000 (0x0330 - 0x0330)
class ATrainSegmentSubClass : public ATrainSegmentCode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainSegmentSubClass");
		return ptr;
	}

};


// Class DrugDealerSimulator.TS_Manager
// 0x0330 (0x0658 - 0x0328)
class ATS_Manager : public AActor
{
public:
	TMap<struct FString, int>                          EntrancesIndex;                                           // 0x0328(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          EntDataIndex;                                             // 0x0378(0x0050) (ZeroConstructor)
	bool                                               TempDebA;                                                 // 0x03C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               TempDebB;                                                 // 0x03C9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               TempDebC;                                                 // 0x03CA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03CB(0x0005) MISSED OFFSET
	TMap<int, struct FString>                          EntrencesReverseIndex;                                    // 0x03D0(0x0050) (ZeroConstructor)
	TArray<struct FTS_EntrenceData>                    EntrencesData;                                            // 0x0420(0x0010) (ZeroConstructor)
	int                                                NextIndexGen;                                             // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                raidDifficultyLevel;                                      // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        RaidedEntrances;                                          // 0x0438(0x0010) (ZeroConstructor)
	bool                                               InstanceReady;                                            // 0x0448(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	TArray<float>                                      SaveSpace0;                                               // 0x0450(0x0010) (ZeroConstructor)
	TArray<float>                                      SaveSpace1;                                               // 0x0460(0x0010) (ZeroConstructor)
	TArray<float>                                      SaveSpace2;                                               // 0x0470(0x0010) (ZeroConstructor)
	TArray<float>                                      SaveSpace3;                                               // 0x0480(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0490(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.TS_Manager.MapUserEntrences
	TArray<struct FTS_ConnectionData>                  EntConnections;                                           // 0x04E0(0x0010) (ZeroConstructor)
	TArray<struct FTS_ConnectionWorkUpgrade>           AvailableConnectionUpgrades;                              // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, int>                                     UpgradesIndex;                                            // 0x0500(0x0050) (ZeroConstructor)
	int                                                BaseStartWorkers;                                         // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseWorkersEffieciency;                                   // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PricePerHour;                                             // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeterDigBasePrice;                                        // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeterDigSpeedPerWorkerPerGameHour;                        // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DigTimeHours;                                             // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDigTimeHoursAbsClamp;                                  // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorkersWalkBaseSpeedMetersPerGameHour;                    // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWorkersWalkSpeedAbsClamp;                              // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DugReportStepProgress;                                    // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NewEntrencePrice;                                         // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EntranceRaidRecoveryPrice;                                // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RespectWorkingHours;                                      // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              StartWorkingHour;                                         // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndWorkingHour;                                           // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UClass*                                      EntranceClass;                                            // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DEARaidSeekSpeedMetersPerGameHour;                        // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDEASeekSpeedAbsClamp;                                  // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AfterRaidCoolDownHours;                                   // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DEARaidSeekBaseDeep;                                      // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        DEARaidSeekDeep;                                          // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DEARaidSeekSpeed;                                         // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DEARaidReportStepProgress;                                // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	TArray<struct FTS_RaidLog>                         RaidLog;                                                  // 0x05D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x18];                                      // 0x05E0(0x0018) MISSED OFFSET
	float                                              fRDT;                                                     // 0x05F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TempDigDistancePerc;                                      // 0x05FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastMoneyTake;                                            // 0x0600(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastDugDistance;                                          // 0x0604(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastMoneyAmount;                                          // 0x0608(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastEndRaidTime;                                          // 0x060C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x0610(0x0020) MISSED OFFSET
	int                                                LastRaidConnectionLoss;                                   // 0x0630(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastRaidEntrancesLoss;                                    // 0x0634(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastRaidUpgradeLoss;                                      // 0x0638(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugDigSpeedFactor;                                      // 0x063C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StateRecalcMinTime;                                       // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StateRecalcMinFrames;                                     // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NonCalcFrames;                                            // 0x0648(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NonCalcTime;                                              // 0x064C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               TunnelsBeeingRaided;                                      // 0x0650(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasCooldownLock;                                          // 0x0651(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RaidReported;                                             // 0x0652(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0653(0x0001) MISSED OFFSET
	int                                                ParallelMethodExecutionTest;                              // 0x0654(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TS_Manager");
		return ptr;
	}


	bool ValidateIndex();
	bool ValidateActorIndex(int ValidationIndex);
	int TranslateActorToDataIndex(int SeekActorIndex);
	void StartDEARaid(int EntranceIndex, int DeepSeek, float CurrentTime);
	void SpawnEntranceAndRegister();
	void SetRaidedState(bool newState);
	void SetDebDigFactor(float NewValue);
	int ReserveAndGetNextActorIndex();
	void ReportConnRaidProgress(int ConnectionIndex, float Progress);
	void ReportConnectionDigProgress(int ConnectionIndex, float Progress);
	bool ReopenEntrance(int EntranceActorIndex);
	void RemoveConnection(int ConnectionIndex);
	void RegisterOnLoadTunnel(class ATS_TunnelEntrence** ThisEntrence);
	bool RegisterNewEntrance(class ATS_TunnelEntrence* NewBuildedEntrance);
	void RecoverData();
	void RecalcTunnelsRates();
	void RecalcProgressReportsForConn(int ConnectionIndex);
	void RecalcProgressReports();
	void PrintUpgDataForConn(int ConnIndex);
	void PrintUpgData();
	void PrintRaidMessage(int ActionType, int SubactionType, const struct FString& ObjectA, const struct FString& ObjectB);
	void PrintEntData();
	void PrintDestinationData(const struct FTS_AvailableDestinations& InputData);
	void PrintConnData();
	void PrepareDataForSave();
	void LogRaidAction(float Time, int Type, int objA, int objB, float adtValue);
	bool IsUpgradeVisibleInConn(int ConnectionIndex, int UpgradeIndex);
	bool IsUpgradeBoughtInConn(int ConnectionIndex, int UpgradeIndex);
	bool IsUpgradeAvailableForConn(int ConnectionIndex, int UpgradeIndex);
	bool IsTunnelSystemBeeingRaided();
	bool HasUpgradeByIndex(int checkIndex);
	bool HasEntrenceRegisteredByActor(class ATS_TunnelEntrence** EntrenceActor);
	bool HasEntrenceRegistered(const struct FString& SeekName);
	void GlobalRaidStart(int EntranceIndex, int GameDifficulty, float CurrentTime);
	struct FTS_ConnectionWorkUpgrade GetUpgradeDataReferenced(int UpgradeIndex);
	struct FTS_ConnectionWorkUpgrade GetUpgradeData(int UpgradeIndex);
	float GetRaidSpeedSeek(int GameDifficultyLevel);
	int GetRaidDeepSeek(int GameDifficultyLevel);
	float GetNotPayedDistance(int ConnectionIndex);
	TMap<struct FString, int> GetEntrencesData();
	int GetEntrenceInnerIndexByActor(class ATS_TunnelEntrence** EntrenceActor);
	int GetEntrenceInnerIndex(const struct FString& SeekName);
	struct FString GetEntranceName(int seekEntranceIndex);
	float GetCurrentGameTime();
	struct FTS_ConnState GetConnectionStatesConst(int ConnectionIndex);
	struct FTS_ConnState GetConnectionStates(int ConnectionIndex);
	float GetConnectionMeterRate(int ConnectionIndex);
	bool GetAvailableTeleportDestinations(int InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination);
	bool GetAvailableDigDestinations(int InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination);
	int FindConnectionIndex(int FirstEntrenceIndex, int SecondEntrenceIndex);
	void DEARaidEnd(int ConnectionsLost, int EntrancesLost, int ArrestedDepositedCount);
	void CreateUpgradesIndex();
	int CreateNewConnection(int FirstEntrenceIndex, int SecondEntrenceIndex);
	void ConnectionStartRaidEvent(int EntranceIndex);
	void ConnectionRequiresMoney(int ConnectionIndex);
	void ConnectionRaidedEvent(int ConnectionIndex);
	void ConnectionRaided(int ConnectionIndex, float StartRaidTime, float EndRaidTime, int parentChain);
	void ConnectionDone(int ConnectionIndex);
	void CalcNextIndexBasedOnIndex();
	bool BuyUpgradeForConn(int ConnectionIndex, int UpgradeIndex);
	void AfterRaidRelease();
	int AddNewEntrence(class ATS_TunnelEntrence** EntrenceActor);
	int AddMoneyToConnection(int ConnectionIndex, float moneyAmount);
};


// Class DrugDealerSimulator.TS_TunnelEntrence
// 0x0018 (0x0340 - 0x0328)
class ATS_TunnelEntrence : public AActor
{
public:
	int                                                ManagerIndex;                                             // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ManagerDataIndex;                                         // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData)
	class ATS_Manager*                                 ManagerPtr;                                               // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               UserTunnel;                                               // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartGameManaged;                                         // 0x0339(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x033A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TS_TunnelEntrence");
		return ptr;
	}


	void SetManagerIndex(int NewIndex);
	bool NeedStartManage();
	int GetDataIndex();
	TArray<class ATS_TunnelEntrence*> GetAvailableDestinations();
	int GetActorIndex();
};


// Class DrugDealerSimulator.WeatherHumanFactors
// 0x0000 (0x00F0 - 0x00F0)
class UWeatherHumanFactors : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherHumanFactors");
		return ptr;
	}

};


// Class DrugDealerSimulator.WeatherHumanSense
// 0x0000 (0x00F0 - 0x00F0)
class UWeatherHumanSense : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherHumanSense");
		return ptr;
	}

};


// Class DrugDealerSimulator.WeatherProfile
// 0x0108 (0x0430 - 0x0328)
class AWeatherProfile : public AActor
{
public:
	int                                                yearDaysLen;                                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              defaultSunrise;                                           // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              defaultSunset;                                            // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<class ASeasonProfile*>                      Seasons;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWorldTimeAndConditions*                     rootHandler;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               inited;                                                   // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class ATimeProfile*                                currentTimeInstance;                                      // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                seasonsDefined;                                           // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<float>                                      sunDataSunrises;                                          // 0x0368(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataSunsets;                                           // 0x0378(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonScheme;                                             // 0x0388(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonBasicTemperature;                                   // 0x0398(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonNightTemperature;                                   // 0x03A8(0x0010) (ZeroConstructor)
	float                                              totalSeasonWage;                                          // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<int>                                        seasonA;                                                  // 0x03C0(0x0010) (ZeroConstructor)
	TArray<int>                                        seasonB;                                                  // 0x03D0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactA;                                                  // 0x03E0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactB;                                                  // 0x03F0(0x0010) (ZeroConstructor)
	int                                                daysCounter;                                              // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               tempTest;                                                 // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAirProfile*                                 tempAirProfileA;                                          // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAirProfile*                                 tempAirProfileB;                                          // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherProfile");
		return ptr;
	}


	float YearPassed();
	void Init();
};


// Class DrugDealerSimulator.WorldPhysicsComponent
// 0x0000 (0x00F0 - 0x00F0)
class UWorldPhysicsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldPhysicsComponent");
		return ptr;
	}

};


// Class DrugDealerSimulator.WorldPhysicsConsts
// 0x0000 (0x0328 - 0x0328)
class AWorldPhysicsConsts : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldPhysicsConsts");
		return ptr;
	}

};


// Class DrugDealerSimulator.WorldTimeAndConditions
// 0x01F0 (0x0518 - 0x0328)
class AWorldTimeAndConditions : public AActor
{
public:
	class UClass*                                      myTimeProfile;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATimeProfile*                                timeProfileInstance;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               disableWeatherSystem;                                     // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class UAirComponent*                               myBaseAirProfile;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              earlyWSCeremonyHoursLength;                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              earlyWSCloudsLevel;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              earlyWSRainLevel;                                         // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              earlyWSFogLevel;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCepWeatherComponent*                        weatherProfileInstance;                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               disableSkyCalculations;                                   // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              standardGametimeMultiplier;                               // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              standardCloudSpeed;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UClass*                                      sunAstralProfile;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAstralProfile*                              sunBaseInstance;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      sunRotator;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      moonAstralProfile;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAstralProfile*                              moonInstance;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      moonRotator;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              calculationInterval;                                      // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                minNonCalcFrames;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                innerCalcFrameSkip;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UWTACFactorsComponent*                       currentFactors;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWorldPhysicsComponent*                      planetPhysicsData;                                        // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               weatherSpectrateMode;                                     // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                                      // 0x03C1(0x0013) MISSED OFFSET
	bool                                               loadStarted;                                              // 0x03D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              absmin_UltraSKyTime;                                      // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunrise_UltraSkyTime;                                     // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              noon_UltraSkyTime;                                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunset_UltraSkyTime;                                      // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              absmax_UltraSKyTime;                                      // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              moonPhaseLength;                                          // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               moonReportedShadows;                                      // 0x03F0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               sunReportedShadows;                                       // 0x03F1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               earlyNiceWeatherEnabled;                                  // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               earlyWSCeremonyEnd;                                       // 0x03F3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                earlyWSEnabledDay;                                        // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              earlyWSEnabledHour;                                       // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              debSaveMinute;                                            // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                yearDaysLen;                                              // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<class UDayConditionsLogger_UE*>             seasonClouds;                                             // 0x0408(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonRainDetails;                                        // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonHeatProfile;                                        // 0x0428(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonFogLevels;                                          // 0x0438(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               debugMode;                                                // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                debHour;                                                  // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                debDay;                                                   // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                debMinute;                                                // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              debTimeSpeed;                                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     actorLocation;                                            // 0x045C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    actorRotation;                                            // 0x0468(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x24];                                      // 0x0474(0x0024) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAirComponent*                               tempAirProfileA;                                          // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAirComponent*                               tempAirProfileB;                                          // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralA;                                        // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralB;                                        // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData09[0x50];                                      // 0x04C8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldTimeAndConditions");
		return ptr;
	}


	class ATimeProfile* TimeProfile();
	void StoreInSaveSpace(int Index, float Val);
	void StartRain();
	void StartFog();
	void ShadowsSettingsChanged();
	void SetUltraSkyInit();
	void SetTimeMulptiplier(float newFactor, float propagationTime);
	void SetTime(int dayValue, int hourValue, int minuteValue);
	void SaveDataSnapshot();
	void ReInitLoggers();
	void RecoverDataSnapshot(bool recoverTime);
	void PureInit();
	void PoliceArrestTimeShift();
	void NoticeCalcPhaseDone();
	void MarkNewLoad();
	bool IsUltraSkyInited();
	bool IsCurrentlyRaining();
	bool IsAfterNoon();
	void InWorldInitiated();
	void InnerDisableWeatherSystem();
	void Init();
	bool HasFog();
	float GetSunPowerAfterBounced(float cAngle);
	float GetSunPower();
	float GetSunLigthPower();
	float GetRainValue();
	class UDayConditionsLogger_UE* GetRainLogger(int dayNum);
	float GetMoonOrbitProgress();
	float GetMoonOrbitAngle();
	bool GetInitiationState();
	class UDayConditionsLogger_UE* GetHeatLogger(int dayNum);
	float GetFromSaveSpace(int Index);
	class UDayConditionsLogger_UE* GetFogLogger(int dayNum);
	float GetCurrentTimeForUltraSky();
	bool GetCurrentSunShadows();
	float GetCurrentSunPower();
	float GetCurrentSunOrbit();
	float GetCurrentSunDistance();
	float GetCurrentSunAngle();
	float GetCurrentStarsIntensity();
	void GetCurrentShadowSettings(bool* sunShadows, bool* moonShadows);
	float GetCurrentNigthBrightness();
	bool GetCurrentMoonShadows();
	float GetCurrentMoonPhase();
	float GetCurrentMoonBrigthness();
	int GetCurrentIntSeconds();
	int GetCurrentIntMinute();
	int GetCurrentIntHour();
	int GetCurrentIntDay();
	float GetCurrentFogLevel();
	float GetCurrentFloatMinute();
	float GetCurrentFloatHour();
	float GetCurrentFloatDay();
	float GetCurrentCloudsSpeed();
	float GetCurrentCloudsLevel();
	float GetCurrentBrightness();
	class UDayConditionsLogger_UE* GetCloudLogger(int dayNum);
	float GetCalcSunDistFactor(float baseVal);
	float GetCalcSunDistanceFactor();
	class UAirComponent* getBasicAirProfile();
	float GetAnyTimeSunPower(int dayNum, float hourMark);
	float GetAnyTimeCloudsSunFactor(int dayNum, float hourMark);
	float GetAnyTimeCloudsLevel(int dayNum, float hourMark);
	void EndRain();
	void EndFog();
	void EnableWeatherSystem();
	void CalcSunRaysAngle();
	void CalcSunPhysics();
	void CalcInteraction();
	void Calc();
	void AddTime(float hoursValue, float minuteValue);
};


// Class DrugDealerSimulator.WorldTimeAndConditionsCurFactors
// 0x0028 (0x0350 - 0x0328)
class AWorldTimeAndConditionsCurFactors : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldTimeAndConditionsCurFactors");
		return ptr;
	}


	void noticeFactors(float DeltaTime, float currentRainChance, float sunPower);
};


// Class DrugDealerSimulator.WTACFactorsComponent
// 0x0080 (0x0170 - 0x00F0)
class UWTACFactorsComponent : public UActorComponent
{
public:
	TArray<float>                                      factorFloats;                                             // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                saveT1;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                serializedFloatsObjects;                                  // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET
	uint32_t                                           allocated;                                                // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x012C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WTACFactorsComponent");
		return ptr;
	}


	void SetSunVisibility(bool newVisibility);
	void SetSunRaysAngle(float newSunRays);
	void SetSunPower(float newPower);
	void SetSunOrbitProgress(float deg);
	void SetSunOrbitDistance(float newDistance);
	void SetSunOrbitAngle(float newOrbitAngle);
	void SetSunLumens(float newLumensValue);
	void SetStarsIntensity(float NewValue);
	void SetRainValue(float newRainValue);
	void SetRainState(bool newState);
	void SetOrbitPhase(float shPassed);
	void SetMoonOrbit(float newProgress);
	void SetFogState(bool newState);
	void SetFogLevel(float NewLevel);
	void SetFactorFloatData(int Index, float fVal);
	void SetCloudsLevel(float NewLevel);
	void SetBrigthnesslevel(float newBrigthnessLevel);
	void SetAtmosphereSunReflections(float newAtmosphereReflections);
	void Reinitialize();
	void noticeFactors(float DeltaTime, float currentRainChance, float currentRainDensityTarget, float currentStormChance, float sunPower);
	bool NeedsReinitialization();
	float GetSunOrbitAbsoluteDeg();
	float GetFactorFloatData(int Index);
	bool CanRecover();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
