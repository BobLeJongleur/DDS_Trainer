// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

/*=============================================================================
	ScriptDisassembler.h: Disassembler for Kismet bytecode.
=============================================================================*/

#pragma once

//#include "CoreMinimal.h"
//#include "UObject/Script.h"
#include "pch.h"
#include "Script.h"

//static SDK::UClass stubUClass;
//static SDK::UProperty stubUProperty;
//static SDK::UObject stubUObject;

/**
 * Kismet bytecode disassembler; Can be used to create a human readable version
 * of Kismet bytecode for a specified structure or class.
 */
class FKismetBytecodeDisassembler
{
private:
	SDK::TArray<uint8_t> Script;
	SDK::FString Indents;
	int MaxScriptLen;
	int noOfTab = 0;
	std::string Buffer;
public:
	/**
	 * Construct a disassembler that will output to the specified archive.
	 *
	 * @param	InAr	The archive to emit disassembled bytecode to.
	 */
	FKismetBytecodeDisassembler();

	/**
	 * Disassemble all of the script code in a single structure.
	 *
	 * @param [in,out]	Source	The structure to disassemble.
	 */
	std::string DisassembleStructure(SDK::TArray<uint8_t> Source);

	/**
	 * Disassemble all functions in any classes that have matching names.
	 *
	 * @param	InAr	The archive to emit disassembled bytecode to.
	 * @param	ClassnameSubstring	A class must contain this substring to be disassembled.
	 */
	 //static void DisassembleAllFunctionsInClasses(FOutputDevice& Ar, const SDK::FString& ClassnameSubstring);
private:
	void printToBuffer(const char* format, ...);

	// Reading functions
	int32_t ReadINT(int32_t& ScriptIndex);
	uint64_t ReadQWORD(int32_t& ScriptIndex);
	uint8_t ReadBYTE(int32_t& ScriptIndex);
	SDK::FString8 ReadName(int32_t& ScriptIndex);
	uint16_t ReadWORD(int32_t& ScriptIndex);
	float ReadFLOAT(int32_t& ScriptIndex);
	CodeSkipSizeType ReadSkipCount(int32_t& ScriptIndex);
	SDK::FString ReadString(int32_t& ScriptIndex);
	SDK::FString8 ReadString8(int32_t& ScriptIndex);
	SDK::FString ReadString16(int32_t& ScriptIndex);
	void logf(const wchar_t* format, ...);

	EExprToken SerializeExpr(int32_t& ScriptIndex);
	void ProcessCastByte(int32_t CastType, int32_t& ScriptIndex);
	void ProcessCommon(int32_t& ScriptIndex, EExprToken Opcode);

	void InitTables();

	template<typename T>
	void Skip(int32_t& ScriptIndex)
	{
		ScriptIndex += sizeof(T);
	}

	void AddIndent()
	{
		//Indents = Indents + TEXT("  ");
		printToBuffer("\n");
		noOfTab++;
		for (int i = 0; i < noOfTab; i++)
			printToBuffer("  ");
	}

	void DropIndent()
	{
		if (noOfTab > 0)
			noOfTab--;

		printToBuffer("\n");
		for (int i = 0; i < noOfTab; i++)
			printToBuffer("  ");
	}

	template <typename T>
	T* ReadPointer(int32_t& ScriptIndex)
	{
		// Mock
		//if (typeid(T) == typeid(SDK::UClass))
		//	return reinterpret_cast<T*>(&stubSDK::UClass);
		//
		//if (typeid(T) == typeid(SDK::UProperty))
		//	return reinterpret_cast<T*>(&stubUProperty);

		//if (typeid(T) == typeid(UObject))
		//	return reinterpret_cast<T*>(&stubUObject);

		//return (T*)nullptr;

		return (T*)ReadQWORD(ScriptIndex);
	}

	inline std::string GetNameSafe(const SDK::UObject* object)
	{
		if (object == nullptr)
			return "[NULLPTR]";

		return object->GetName();
	}
};
