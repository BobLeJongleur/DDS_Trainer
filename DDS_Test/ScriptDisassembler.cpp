// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

/*=============================================================================
	ScriptDisassembler.cpp: Disassembler for Kismet bytecode.
=============================================================================*/

#include "pch.h"
#include <cstdarg>
#include "ScriptDisassembler.h"

// Construct a disassembler that will output to the specified archive.
FKismetBytecodeDisassembler::FKismetBytecodeDisassembler()
{
	InitTables();
}

// Disassemble all of the script code in a single structure.
std::string FKismetBytecodeDisassembler::DisassembleStructure(SDK::TArray<uint8_t> Source)
{
	Buffer = std::string();

	Script = Source;

	int32_t ScriptIndex = 0;
	MaxScriptLen = Script.Num();
	while (ScriptIndex < MaxScriptLen)
	{
		printToBuffer("\nLabel_0x%X:", ScriptIndex);

		AddIndent();
		SerializeExpr(ScriptIndex);
		DropIndent();
	}

	return Buffer;
}

EExprToken FKismetBytecodeDisassembler::SerializeExpr(int32_t& ScriptIndex)
{
	//if (ScriptIndex > MaxScriptLen)
	//	return EExprToken::EX_EndFunctionParms;

	AddIndent();

	EExprToken Opcode = (EExprToken)Script[ScriptIndex];
	ScriptIndex++;

	ProcessCommon(ScriptIndex, Opcode);

	DropIndent();

	return Opcode;
}

void FKismetBytecodeDisassembler::printToBuffer(const char* format, ...)
{
	char tempBuffer[512];
	va_list args;
	va_start(args, format);
	vsnprintf(tempBuffer, 512, format, args);
	va_end(args);

	Buffer += tempBuffer;
}

int32_t FKismetBytecodeDisassembler::ReadINT(int32_t& ScriptIndex)
{
	int32_t Value = Script[ScriptIndex]; ++ScriptIndex;
	Value = Value | ((int32_t)Script[ScriptIndex] << 8); ++ScriptIndex;
	Value = Value | ((int32_t)Script[ScriptIndex] << 16); ++ScriptIndex;
	Value = Value | ((int32_t)Script[ScriptIndex] << 24); ++ScriptIndex;

	return Value;
}

uint64_t FKismetBytecodeDisassembler::ReadQWORD(int32_t& ScriptIndex)
{
	uint64_t Value = Script[ScriptIndex]; ++ScriptIndex;
	Value = Value | ((uint64_t)Script[ScriptIndex] << 8); ++ScriptIndex;
	Value = Value | ((uint64_t)Script[ScriptIndex] << 16); ++ScriptIndex;
	Value = Value | ((uint64_t)Script[ScriptIndex] << 24); ++ScriptIndex;
	Value = Value | ((uint64_t)Script[ScriptIndex] << 32); ++ScriptIndex;
	Value = Value | ((uint64_t)Script[ScriptIndex] << 40); ++ScriptIndex;
	Value = Value | ((uint64_t)Script[ScriptIndex] << 48); ++ScriptIndex;
	Value = Value | ((uint64_t)Script[ScriptIndex] << 56); ++ScriptIndex;

	return Value;
}

uint8_t FKismetBytecodeDisassembler::ReadBYTE(int32_t& ScriptIndex)
{
	uint8_t Value = Script[ScriptIndex]; ++ScriptIndex;

	return Value;
}

SDK::FString8 FKismetBytecodeDisassembler::ReadName(int32_t& ScriptIndex)
{
	const SDK::FScriptName ConstValue = *(SDK::FScriptName*)(Script.GetData() + ScriptIndex);
	ScriptIndex += sizeof(SDK::FScriptName);
	SDK::FString8 scriptName = SDK::FName(ConstValue.ComparisonIndex, ConstValue.Number).GetName();

	return scriptName; //SDK::FString(L"BOB WAS HERE");
}

uint16_t FKismetBytecodeDisassembler::ReadWORD(int32_t& ScriptIndex)
{
	uint16_t Value = Script[ScriptIndex]; ++ScriptIndex;
	Value = Value | ((uint16_t)Script[ScriptIndex] << 8); ++ScriptIndex;
	return Value;
}

float FKismetBytecodeDisassembler::ReadFLOAT(int32_t& ScriptIndex)
{
	union { float f; int32_t i; } Result;
	Result.i = ReadINT(ScriptIndex);
	return Result.f;
}

CodeSkipSizeType FKismetBytecodeDisassembler::ReadSkipCount(int32_t& ScriptIndex)
{
#if SCRIPT_LIMIT_BYTECODE_TO_64KB
	return ReadWORD(ScriptIndex);
#else
	static_assert(sizeof(CodeSkipSizeType) == 4, "Update this code as size changed.");
	return ReadINT(ScriptIndex);
#endif
}

SDK::FString FKismetBytecodeDisassembler::ReadString(int32_t& ScriptIndex)
{
	const EExprToken Opcode = (EExprToken)Script[ScriptIndex++];

	switch (Opcode)
	{
	case EX_StringConst:
		return ReadString8(ScriptIndex).ToFString();

	case EX_UnicodeStringConst:
		return ReadString16(ScriptIndex);

	default:
		//checkf(false, TEXT("FKismetBytecodeDisassembler::ReadString - Unexpected opcode. Expected %d or %d, got %d"), (int)EX_StringConst, (int)EX_UnicodeStringConst, (int)Opcode);
		break;
	}

	return SDK::FString();
}

SDK::FString8 FKismetBytecodeDisassembler::ReadString8(int32_t& ScriptIndex)
{
	std::string str;

	do
	{
		str += (char)ReadBYTE(ScriptIndex);
	} while (Script[ScriptIndex - 1] != 0);

	return SDK::FString8(str.c_str());
}

SDK::FString FKismetBytecodeDisassembler::ReadString16(int32_t& ScriptIndex)
{
	std::wstring wstr;

	do
	{
		wstr += (wchar_t)ReadWORD(ScriptIndex);
	} while ((Script[ScriptIndex - 1] != 0) || (Script[ScriptIndex - 2] != 0));

	return SDK::FString(wstr.c_str());
}

void FKismetBytecodeDisassembler::ProcessCastByte(int32_t CastType, int32_t& ScriptIndex)
{
	// Expression of cast
	SerializeExpr(ScriptIndex);
}

void FKismetBytecodeDisassembler::ProcessCommon(int32_t& ScriptIndex, EExprToken Opcode)
{
	switch (Opcode)
	{
	case EX_PrimitiveCast:
	{
		// A type conversion.
		uint8_t ConversionType = ReadBYTE(ScriptIndex);
		printToBuffer("$%X: PrimitiveCast of type %d", (int32_t)Opcode, ConversionType);
		AddIndent();

		printToBuffer("Argument:");
		ProcessCastByte(ConversionType, ScriptIndex);

		//@TODO:
		//printToBuffer("Expression:", *Indents);
		//SerializeExpr( ScriptIndex );
		break;
	}
	case EX_SetSet:
	{
		printToBuffer("$%X: set set", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		ReadINT(ScriptIndex);
		while (SerializeExpr(ScriptIndex) != EX_EndSet)
		{
			// Set contents
		}
		break;
	}
	case EX_EndSet:
	{
		printToBuffer("$%X: EX_EndSet", (int32_t)Opcode);
		break;
	}
	case EX_SetConst:
	{
		SDK::UProperty* InnerProp = ReadPointer<SDK::UProperty>(ScriptIndex);
		int32_t Num = ReadINT(ScriptIndex);
		printToBuffer("$%X: set set const - elements number: %d, inner property: %s", (int32_t)Opcode, Num, GetNameSafe(InnerProp).c_str());
		while (SerializeExpr(ScriptIndex) != EX_EndSetConst)
		{
			// Set contents
		}
		break;
	}
	case EX_EndSetConst:
	{
		printToBuffer("$%X: EX_EndSetConst", (int32_t)Opcode);
		break;
	}
	case EX_SetMap:
	{
		printToBuffer("$%X: set map", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		ReadINT(ScriptIndex);
		while (SerializeExpr(ScriptIndex) != EX_EndMap)
		{
			// Map contents
		}
		break;
	}
	case EX_EndMap:
	{
		printToBuffer("$%X: EX_EndMap", (int32_t)Opcode);
		break;
	}
	case EX_MapConst:
	{
		SDK::UProperty* KeyProp = ReadPointer<SDK::UProperty>(ScriptIndex);
		SDK::UProperty* ValProp = ReadPointer<SDK::UProperty>(ScriptIndex);
		int32_t Num = ReadINT(ScriptIndex);
		printToBuffer("$%X: set map const - elements number: %d, key property: %s, val property: %s", (int32_t)Opcode, Num, GetNameSafe(KeyProp).c_str(), GetNameSafe(ValProp).c_str());
		while (SerializeExpr(ScriptIndex) != EX_EndMapConst)
		{
			// Map contents
		}
		break;
	}
	case EX_EndMapConst:
	{
		printToBuffer("$%X: EX_EndMapConst", (int32_t)Opcode);
		break;
	}
	case EX_ObjToInterfaceCast:
	{
		// A conversion from an object variable to a native interface variable.
		// We use a different bytecode to avoid the branching each time we process a cast token

		// the interface class to convert to
		SDK::UClass* InterfaceClass = ReadPointer<SDK::UClass>(ScriptIndex);
		printToBuffer("$%X: ObjToInterfaceCast to %s", (int32_t)Opcode, InterfaceClass->GetName().c_str());

		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_CrossInterfaceCast:
	{
		// A conversion from one interface variable to a different interface variable.
		// We use a different bytecode to avoid the branching each time we process a cast token

		// the interface class to convert to
		SDK::UClass* InterfaceClass = ReadPointer<SDK::UClass>(ScriptIndex);
		printToBuffer("$%X: InterfaceToInterfaceCast to %s", (int32_t)Opcode, InterfaceClass->GetName().c_str());

		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_InterfaceToObjCast:
	{
		// A conversion from an interface variable to a object variable.
		// We use a different bytecode to avoid the branching each time we process a cast token

		// the interface class to convert to
		SDK::UClass* ObjectClass = ReadPointer<SDK::UClass>(ScriptIndex);
		printToBuffer("$%X: InterfaceToObjCast to %s", (int32_t)Opcode, ObjectClass->GetName().c_str());

		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_Let:
	{
		printToBuffer("$%X: Let (Variable = Expression)", (int32_t)Opcode);
		AddIndent();

		ReadPointer<SDK::UProperty>(ScriptIndex);

		// Variable expr.
		printToBuffer("Variable:");
		SerializeExpr(ScriptIndex);

		// Assignment expr.
		printToBuffer("Expression:");
		SerializeExpr(ScriptIndex);

		DropIndent();
		break;
	}
	case EX_LetObj:
	case EX_LetWeakObjPtr:
	{
		if (Opcode == EX_LetObj)
		{
			printToBuffer("$%X: Let Obj (Variable = Expression)", (int32_t)Opcode);
		}
		else
		{
			printToBuffer("$%X: Let WeakObjPtr (Variable = Expression)", (int32_t)Opcode);
		}
		AddIndent();

		// Variable expr.
		printToBuffer("Variable:");
		SerializeExpr(ScriptIndex);

		// Assignment expr.
		printToBuffer("Expression:");
		SerializeExpr(ScriptIndex);

		DropIndent();
		break;
	}
	case EX_LetBool:
	{
		printToBuffer("$%X: LetBool (Variable = Expression)", (int32_t)Opcode);
		AddIndent();

		// Variable expr.
		printToBuffer("Variable:");
		SerializeExpr(ScriptIndex);

		// Assignment expr.
		printToBuffer("Expression:");
		SerializeExpr(ScriptIndex);

		DropIndent();
		break;
	}
	case EX_LetValueOnPersistentFrame:
	{
		printToBuffer("$%X: LetValueOnPersistentFrame", (int32_t)Opcode);
		AddIndent();

		auto Prop = ReadPointer<SDK::UProperty>(ScriptIndex);
		printToBuffer("Destination variable: ");
		AddIndent();
		printToBuffer("%s, offset: %d", GetNameSafe(Prop).c_str(), Prop ? Prop->Offset_Internal : 0);
		DropIndent();

		printToBuffer("Expression:");
		SerializeExpr(ScriptIndex);

		DropIndent();

		break;
	}
	case EX_StructMemberContext:
	{
		printToBuffer("$%X: Struct member context ", (int32_t)Opcode);
		AddIndent();

		SDK::UProperty* Prop = ReadPointer<SDK::UProperty>(ScriptIndex);

		printToBuffer("Expression within struct: ");
		AddIndent();
		printToBuffer("%s, offset %d", (Prop->GetName().c_str()), Prop->Offset_Internal);
		DropIndent();


		printToBuffer("Expression to struct:");
		SerializeExpr(ScriptIndex);

		DropIndent();

		break;
	}
	case EX_LetDelegate:
	{
		printToBuffer("$%X: LetDelegate (Variable = Expression)", (int32_t)Opcode);
		AddIndent();

		// Variable expr.
		printToBuffer("Variable:");
		SerializeExpr(ScriptIndex);

		// Assignment expr.
		printToBuffer("Expression:");
		SerializeExpr(ScriptIndex);

		DropIndent();
		break;
	}
	case EX_LocalVirtualFunction:
	{
		SDK::FString8 FunctionName = ReadName(ScriptIndex);
		printToBuffer("$%X: Local Virtual Script Function named %s", (int32_t)Opcode, FunctionName.c_str());

		while (SerializeExpr(ScriptIndex) != EX_EndFunctionParms)
		{
		}
		break;
	}
	case EX_LocalFinalFunction:
	{
		SDK::UStruct* StackNode = ReadPointer<SDK::UStruct>(ScriptIndex);
		printToBuffer("$%X: Local Final Script Function (stack node %s::%s)", (int32_t)Opcode, StackNode ? StackNode->GetOuter()->GetName().c_str() : TEXT("(null)"), StackNode ? StackNode->GetName().c_str() : TEXT("(null)"));

		while (SerializeExpr(ScriptIndex) != EX_EndFunctionParms)
		{
			// Params
		}
		break;
	}
	case EX_LetMulticastDelegate:
	{
		printToBuffer("$%X: LetMulticastDelegate (Variable = Expression)", (int32_t)Opcode);
		AddIndent();

		// Variable expr.
		printToBuffer("Variable:");
		SerializeExpr(ScriptIndex);

		// Assignment expr.
		printToBuffer("Expression:");
		SerializeExpr(ScriptIndex);

		DropIndent();
		break;
	}

	case EX_ComputedJump:
	{
		printToBuffer("$%X: Computed Jump, offset specified by expression:", (int32_t)Opcode);

		AddIndent();
		SerializeExpr(ScriptIndex);
		DropIndent();

		break;
	}

	case EX_Jump:
	{
		CodeSkipSizeType SkipCount = ReadSkipCount(ScriptIndex);
		printToBuffer("$%X: Jump to offset 0x%X", (int32_t)Opcode, SkipCount);
		break;
	}
	case EX_LocalVariable:
	{
		SDK::UProperty* PropertyPtr = ReadPointer<SDK::UProperty>(ScriptIndex);
		printToBuffer("$%X: Local variable named %s", (int32_t)Opcode, PropertyPtr ? PropertyPtr->GetName().c_str() : TEXT("(null)"));
		break;
	}
	case EX_DefaultVariable:
	{
		SDK::UProperty* PropertyPtr = ReadPointer<SDK::UProperty>(ScriptIndex);
		printToBuffer("$%X: Default variable named %s", (int32_t)Opcode, PropertyPtr ? PropertyPtr->GetName().c_str() : TEXT("(null)"));
		break;
	}
	case EX_InstanceVariable:
	{
		SDK::UProperty* PropertyPtr = ReadPointer<SDK::UProperty>(ScriptIndex);
		printToBuffer("$%X: Instance variable named %s", (int32_t)Opcode, PropertyPtr ? PropertyPtr->GetName().c_str() : TEXT("(null)"));
		break;
	}
	case EX_LocalOutVariable:
	{
		SDK::UProperty* PropertyPtr = ReadPointer<SDK::UProperty>(ScriptIndex);
		printToBuffer("$%X: Local out variable named %s", (int32_t)Opcode, PropertyPtr ? PropertyPtr->GetName().c_str() : TEXT("(null)"));
		break;
	}
	case EX_InterfaceContext:
	{
		printToBuffer("$%X: EX_InterfaceContext:", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_DeprecatedOp4A:
	{
		printToBuffer("$%X: This opcode has been removed and does nothing.", (int32_t)Opcode);
		break;
	}
	case EX_Nothing:
	{
		printToBuffer("$%X: EX_Nothing", (int32_t)Opcode);
		break;
	}
	case EX_EndOfScript:
	{
		printToBuffer("$%X: EX_EndOfScript", (int32_t)Opcode);
		break;
	}
	case EX_EndFunctionParms:
	{
		printToBuffer("$%X: EX_EndFunctionParms", (int32_t)Opcode);
		break;
	}
	case EX_EndStructConst:
	{
		printToBuffer("$%X: EX_EndStructConst", (int32_t)Opcode);
		break;
	}
	case EX_EndArray:
	{
		printToBuffer("$%X: EX_EndArray", (int32_t)Opcode);
		break;
	}
	case EX_EndArrayConst:
	{
		printToBuffer("$%X: EX_EndArrayConst", (int32_t)Opcode);
		break;
	}
	case EX_IntZero:
	{
		printToBuffer("$%X: EX_IntZero", (int32_t)Opcode);
		break;
	}
	case EX_IntOne:
	{
		printToBuffer("$%X: EX_IntOne", (int32_t)Opcode);
		break;
	}
	case EX_True:
	{
		printToBuffer("$%X: EX_True", (int32_t)Opcode);
		break;
	}
	case EX_False:
	{
		printToBuffer("$%X: EX_False", (int32_t)Opcode);
		break;
	}
	case EX_NoObject:
	{
		printToBuffer("$%X: EX_NoObject", (int32_t)Opcode);
		break;
	}
	case EX_NoInterface:
	{
		printToBuffer("$%X: EX_NoObject", (int32_t)Opcode);
		break;
	}
	case EX_Self:
	{
		printToBuffer("$%X: EX_Self", (int32_t)Opcode);
		break;
	}
	case EX_EndParmValue:
	{
		printToBuffer("$%X: EX_EndParmValue", (int32_t)Opcode);
		break;
	}
	case EX_Return:
	{
		printToBuffer("$%X: Return expression", (int32_t)Opcode);

		SerializeExpr(ScriptIndex); // Return expression.
		break;
	}
	case EX_CallMath:
	{
		SDK::UStruct* StackNode = ReadPointer<SDK::UStruct>(ScriptIndex);
		printToBuffer("$%X: Call Math (stack node %s::%s)", (int32_t)Opcode, GetNameSafe(StackNode ? StackNode->GetOuter() : nullptr).c_str(), GetNameSafe(StackNode).c_str());

		while (SerializeExpr(ScriptIndex) != EX_EndFunctionParms)
		{
			// Params
		}
		break;
	}
	case EX_FinalFunction:
	{
		SDK::UStruct* StackNode = ReadPointer<SDK::UStruct>(ScriptIndex);
		printToBuffer("$%X: Final Function (stack node %s::%s)", (int32_t)Opcode, StackNode ? StackNode->GetOuter()->GetName().c_str() : TEXT("(null)"), StackNode ? StackNode->GetName().c_str() : TEXT("(null)"));

		while (SerializeExpr(ScriptIndex) != EX_EndFunctionParms)
		{
			// Params
		}
		break;
	}
	case EX_CallMulticastDelegate:
	{
		SDK::UStruct* StackNode = ReadPointer<SDK::UStruct>(ScriptIndex);
		printToBuffer("$%X: CallMulticastDelegate (signature %s::%s) delegate:", (int32_t)Opcode, StackNode ? StackNode->GetOuter()->GetName().c_str() : TEXT("(null)"), StackNode ? StackNode->GetName().c_str() : TEXT("(null)"));
		SerializeExpr(ScriptIndex);
		printToBuffer("Params:");
		while (SerializeExpr(ScriptIndex) != EX_EndFunctionParms)
		{
			// Params
		}
		break;
	}
	case EX_VirtualFunction:
	{
		SDK::FString8 FunctionName = ReadName(ScriptIndex);
		printToBuffer("$%X: Virtual Function named %s", (int32_t)Opcode, FunctionName.c_str());

		while (SerializeExpr(ScriptIndex) != EX_EndFunctionParms)
		{
		}
		break;
	}
	case EX_ClassContext:
	case EX_Context:
	case EX_Context_FailSilent:
	{
		printToBuffer("$%X: %s", (int32_t)Opcode, Opcode == EX_ClassContext ? TEXT("Class Context") : TEXT("Context"));
		AddIndent();

		// Object expression.
		printToBuffer("ObjectExpression:");
		SerializeExpr(ScriptIndex);

		if (Opcode == EX_Context_FailSilent)
		{
			printToBuffer(" Can fail silently on access none ");
		}

		// Code offset for NULL expressions.
		CodeSkipSizeType SkipCount = ReadSkipCount(ScriptIndex);
		printToBuffer("Skip Bytes:");
		AddIndent();
		printToBuffer("0x%X", SkipCount);
		DropIndent();

		// Property corresponding to the r-value data, in case the l-value needs to be mem-zero'd
		SDK::UField* Field = ReadPointer<SDK::UField>(ScriptIndex);
		printToBuffer("R-Value Property");
		AddIndent();
		printToBuffer("%s", Field ? Field->GetName().c_str() : TEXT("(null)"));
		DropIndent();

		// Context expression.
		printToBuffer("ContextExpression:");
		SerializeExpr(ScriptIndex);

		DropIndent();
		break;
	}
	case EX_IntConst:
	{
		int32_t ConstValue = ReadINT(ScriptIndex);
		printToBuffer("$%X: literal int32_t %d", (int32_t)Opcode, ConstValue);
		break;
	}
	case EX_SkipOffsetConst:
	{
		CodeSkipSizeType ConstValue = ReadSkipCount(ScriptIndex);
		printToBuffer("$%X: literal CodeSkipSizeType 0x%X", (int32_t)Opcode, ConstValue);
		break;
	}
	case EX_FloatConst:
	{
		float ConstValue = ReadFLOAT(ScriptIndex);
		printToBuffer("$%X: literal float %f", (int32_t)Opcode, ConstValue);
		break;
	}
	case EX_StringConst:
	{
		SDK::FString ConstValue = ReadString8(ScriptIndex).ToFString();
		printToBuffer("$%X: literal ansi string \"%s\"", (int32_t)Opcode, ConstValue.ToString().c_str());
		break;
	}
	case EX_UnicodeStringConst:
	{
		SDK::FString ConstValue = ReadString16(ScriptIndex);
		printToBuffer("$%X: literal unicode string \"%s\"", (int32_t)Opcode, ConstValue.ToString().c_str());
		break;
	}
	case EX_TextConst:
	{
		// What kind of text are we dealing with?
		const EBlueprintTextLiteralType TextLiteralType = (EBlueprintTextLiteralType)Script[ScriptIndex++];

		switch (TextLiteralType)
		{
		case EBlueprintTextLiteralType::Empty:
		{
			printToBuffer("$%X: literal text - empty", (int32_t)Opcode);
		}
		break;

		case EBlueprintTextLiteralType::LocalizedText:
		{
			const SDK::FString SourceString = ReadString(ScriptIndex);
			const SDK::FString KeyString = ReadString(ScriptIndex);
			const SDK::FString Namespace = ReadString(ScriptIndex);
			printToBuffer("$%X: literal text - localized text { namespace: \"%s\", key: \"%s\", source: \"%s\" }", (int32_t)Opcode, Namespace.ToString().c_str(), KeyString.ToString().c_str(), SourceString.ToString().c_str());
		}
		break;

		case EBlueprintTextLiteralType::InvariantText:
		{
			const SDK::FString SourceString = ReadString(ScriptIndex);
			printToBuffer("$%X: literal text - invariant text: \"%s\"", (int32_t)Opcode, SourceString.ToString().c_str());
		}
		break;

		case EBlueprintTextLiteralType::LiteralString:
		{
			const SDK::FString SourceString = ReadString(ScriptIndex);
			printToBuffer("$%X: literal text - literal string: \"%s\"", (int32_t)Opcode, SourceString.ToString().c_str());
		}
		break;

		case EBlueprintTextLiteralType::StringTableEntry:
		{
			ReadPointer<SDK::UObject>(ScriptIndex); // String Table asset (if any)
			const SDK::FString TableIdString = ReadString(ScriptIndex);
			const SDK::FString KeyString = ReadString(ScriptIndex);
			printToBuffer("$%X: literal text - string table entry { tableid: \"%s\", key: \"%s\" }", (int32_t)Opcode, TableIdString.ToString().c_str(), KeyString.ToString().c_str());
		}
		break;

		default:
			//checkf(false, TEXT("Unknown EBlueprintTextLiteralType! Please update FKismetBytecodeDisassembler::ProcessCommon to handle this type of text."));
			break;
		}
		break;
	}
	case EX_ObjectConst:
	{
		SDK::UObject* Pointer = ReadPointer<SDK::UObject>(ScriptIndex);
		printToBuffer("$%X: EX_ObjectConst (%p:%s)", (int32_t)Opcode, Pointer, Pointer->GetFullName().c_str());
		break;
	}
	case EX_SoftObjectConst:
	{
		printToBuffer("$%X: EX_SoftObjectConst", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_NameConst:
	{
		SDK::FString8 ConstValue = ReadName(ScriptIndex);
		printToBuffer("$%X: literal name %s", (int32_t)Opcode, ConstValue.c_str());
		break;
	}
	case EX_RotationConst:
	{
		float Pitch = ReadFLOAT(ScriptIndex);
		float Yaw = ReadFLOAT(ScriptIndex);
		float Roll = ReadFLOAT(ScriptIndex);

		printToBuffer("$%X: literal rotation (%f,%f,%f)", (int32_t)Opcode, Pitch, Yaw, Roll);
		break;
	}
	case EX_VectorConst:
	{
		float X = ReadFLOAT(ScriptIndex);
		float Y = ReadFLOAT(ScriptIndex);
		float Z = ReadFLOAT(ScriptIndex);

		printToBuffer("$%X: literal vector (%f,%f,%f)", (int32_t)Opcode, X, Y, Z);
		break;
	}
	case EX_TransformConst:
	{

		float RotX = ReadFLOAT(ScriptIndex);
		float RotY = ReadFLOAT(ScriptIndex);
		float RotZ = ReadFLOAT(ScriptIndex);
		float RotW = ReadFLOAT(ScriptIndex);

		float TransX = ReadFLOAT(ScriptIndex);
		float TransY = ReadFLOAT(ScriptIndex);
		float TransZ = ReadFLOAT(ScriptIndex);

		float ScaleX = ReadFLOAT(ScriptIndex);
		float ScaleY = ReadFLOAT(ScriptIndex);
		float ScaleZ = ReadFLOAT(ScriptIndex);

		printToBuffer("$%X: literal transform R(%f,%f,%f,%f) T(%f,%f,%f) S(%f,%f,%f)", (int32_t)Opcode, TransX, TransY, TransZ, RotX, RotY, RotZ, RotW, ScaleX, ScaleY, ScaleZ);
		break;
	}
	case EX_StructConst:
	{
		SDK::UScriptStruct* Struct = ReadPointer<SDK::UScriptStruct>(ScriptIndex);
		int32_t SerializedSize = ReadINT(ScriptIndex);
		printToBuffer("$%X: literal struct %s (serialized size: %d)", (int32_t)Opcode, Struct->GetName().c_str(), SerializedSize);
		while (SerializeExpr(ScriptIndex) != EX_EndStructConst)
		{
			// struct contents
		}
		break;
	}
	case EX_SetArray:
	{
		printToBuffer("$%X: set array", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		while (SerializeExpr(ScriptIndex) != EX_EndArray)
		{
			// Array contents
		}
		break;
	}
	case EX_ArrayConst:
	{
		SDK::UProperty* InnerProp = ReadPointer<SDK::UProperty>(ScriptIndex);
		int32_t Num = ReadINT(ScriptIndex);
		printToBuffer("$%X: set array const - elements number: %d, inner property: %s", (int32_t)Opcode, Num, GetNameSafe(InnerProp).c_str());
		while (SerializeExpr(ScriptIndex) != EX_EndArrayConst)
		{
			// Array contents
		}
		break;
	}
	case EX_ByteConst:
	{
		uint8_t ConstValue = ReadBYTE(ScriptIndex);
		printToBuffer("$%X: literal byte %d", (int32_t)Opcode, ConstValue);
		break;
	}
	case EX_IntConstByte:
	{
		int32_t ConstValue = ReadBYTE(ScriptIndex);
		printToBuffer("$%X: literal int %d", (int32_t)Opcode, ConstValue);
		break;
	}
	case EX_MetaCast:
	{
		SDK::UClass* Class = ReadPointer<SDK::UClass>(ScriptIndex);
		printToBuffer("$%X: MetaCast to %s of expr:", (int32_t)Opcode, Class->GetName().c_str());
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_DynamicCast:
	{
		SDK::UClass* Class = ReadPointer<SDK::UClass>(ScriptIndex);
		printToBuffer("$%X: DynamicCast to %s of expr:", (int32_t)Opcode, Class->GetName().c_str());
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_JumpIfNot:
	{
		// Code offset.
		CodeSkipSizeType SkipCount = ReadSkipCount(ScriptIndex);

		printToBuffer("$%X: Jump to offset 0x%X if not expr:", (int32_t)Opcode, SkipCount);

		// Boolean expr.
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_Assert:
	{
		uint16_t LineNumber = ReadWORD(ScriptIndex);
		uint8_t InDebugMode = ReadBYTE(ScriptIndex);

		printToBuffer("$%X: assert at line %d, in debug mode = %d with expr:", (int32_t)Opcode, LineNumber, InDebugMode);
		SerializeExpr(ScriptIndex); // Assert expr.
		break;
	}
	case EX_Skip:
	{
		CodeSkipSizeType W = ReadSkipCount(ScriptIndex);
		printToBuffer("$%X: possibly skip 0x%X bytes of expr:", (int32_t)Opcode, W);

		// Expression to possibly skip.
		SerializeExpr(ScriptIndex);

		break;
	}
	case EX_InstanceDelegate:
	{
		// the name of the function assigned to the delegate.
		SDK::FString8 FuncName = ReadName(ScriptIndex);

		printToBuffer("$%X: instance delegate function named %s", (int32_t)Opcode, FuncName.c_str());
		break;
	}
	case EX_AddMulticastDelegate:
	{
		printToBuffer("$%X: Add MC delegate", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_RemoveMulticastDelegate:
	{
		printToBuffer("$%X: Remove MC delegate", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_ClearMulticastDelegate:
	{
		printToBuffer("$%X: Clear MC delegate", (int32_t)Opcode);
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_BindDelegate:
	{
		// the name of the function assigned to the delegate.
		SDK::FString8 FuncName = ReadName(ScriptIndex);

		printToBuffer("$%X: BindDelegate '%s' ", (int32_t)Opcode, FuncName.c_str());

		printToBuffer("Delegate:");
		SerializeExpr(ScriptIndex);

		printToBuffer("Object:");
		SerializeExpr(ScriptIndex);

		break;
	}
	case EX_PushExecutionFlow:
	{
		CodeSkipSizeType SkipCount = ReadSkipCount(ScriptIndex);
		printToBuffer("$%X: FlowStack.Push(0x%X);", (int32_t)Opcode, SkipCount);
		break;
	}
	case EX_PopExecutionFlow:
	{
		printToBuffer("$%X: if (FlowStack.Num()) { jump to statement at FlowStack.Pop(); } else { ERROR!!! }", (int32_t)Opcode);
		break;
	}
	case EX_PopExecutionFlowIfNot:
	{
		printToBuffer("$%X: if (!condition) { if (FlowStack.Num()) { jump to statement at FlowStack.Pop(); } else { ERROR!!! } }", (int32_t)Opcode);
		// Boolean expr.
		SerializeExpr(ScriptIndex);
		break;
	}
	case EX_Breakpoint:
	{
		printToBuffer("$%X: <<< BREAKPOINT >>>", (int32_t)Opcode);
		break;
	}
	case EX_WireTracepoint:
	{
		printToBuffer("$%X: .. wire debug site ..", (int32_t)Opcode);
		break;
	}
	case EX_InstrumentationEvent:
	{
		const uint8_t EventType = ReadBYTE(ScriptIndex);
		switch (EventType)
		{
		case EScriptInstrumentation::InlineEvent:
			printToBuffer("$%X: .. instrumented inline event ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::Stop:
			printToBuffer("$%X: .. instrumented event stop ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::PureNodeEntry:
			printToBuffer("$%X: .. instrumented pure node entry site ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::NodeDebugSite:
			printToBuffer("$%X: .. instrumented debug site ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::NodeEntry:
			printToBuffer("$%X: .. instrumented wire entry site ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::NodeExit:
			printToBuffer("$%X: .. instrumented wire exit site ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::PushState:
			printToBuffer("$%X: .. push execution state ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::RestoreState:
			printToBuffer("$%X: .. restore execution state ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::ResetState:
			printToBuffer("$%X: .. reset execution state ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::SuspendState:
			printToBuffer("$%X: .. suspend execution state ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::PopState:
			printToBuffer("$%X: .. pop execution state ..", (int32_t)Opcode);
			break;
		case EScriptInstrumentation::TunnelEndOfThread:
			printToBuffer("$%X: .. tunnel end of thread ..", (int32_t)Opcode);
			break;
		}
		break;
	}
	case EX_Tracepoint:
	{
		printToBuffer("$%X: .. debug site ..", (int32_t)Opcode);
		break;
	}
	case EX_SwitchValue:
	{
		const auto NumCases = ReadWORD(ScriptIndex);
		const auto AfterSkip = ReadSkipCount(ScriptIndex);

		printToBuffer("$%X: Switch Value %d cases, end in 0x%X", (int32_t)Opcode, NumCases, AfterSkip);
		AddIndent();
		printToBuffer("Index:");
		SerializeExpr(ScriptIndex);

		for (uint16_t CaseIndex = 0; CaseIndex < NumCases; ++CaseIndex)
		{
			printToBuffer("[%d] Case Index (label: 0x%X):", CaseIndex, ScriptIndex);
			SerializeExpr(ScriptIndex);	// case index value term
			const auto OffsetToNextCase = ReadSkipCount(ScriptIndex);
			printToBuffer("[%d] Offset to the next case: 0x%X", CaseIndex, OffsetToNextCase);
			printToBuffer("[%d] Case Result:", CaseIndex);
			SerializeExpr(ScriptIndex);	// case term
		}

		printToBuffer("Default result (label: 0x%X):", ScriptIndex);
		SerializeExpr(ScriptIndex);
		printToBuffer("(label: 0x%X)", ScriptIndex);
		DropIndent();
		break;
	}
	case EX_ArrayGetByRef:
	{
		printToBuffer("$%X: Array Get-by-Ref Index", (int32_t)Opcode);
		AddIndent();
		SerializeExpr(ScriptIndex);
		SerializeExpr(ScriptIndex);
		DropIndent();
		break;
	}
	default:
	{
		// This should never occur.
		//UE_LOG(LogScriptDisassembler, Warning, TEXT("Unknown bytecode 0x%02X; ignoring it"), (uint8_t)Opcode);
		break;
	}
	}
}

void FKismetBytecodeDisassembler::InitTables()
{
}

