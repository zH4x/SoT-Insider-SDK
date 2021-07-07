﻿// Name: SoT-Insider, Version: 1.102.2382.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FEventRepairableObjectDestroyed::AfterRead()
{
}

void FEventRepairableObjectDestroyed::BeforeDelete()
{
}

void FEventRepairableObjectRepairEndedEvent::AfterRead()
{
	READ_PTR_FULL(Repairable, UObject);
	READ_PTR_FULL(RepairerActor, AActor);
}

void FEventRepairableObjectRepairEndedEvent::BeforeDelete()
{
	DELE_PTR_FULL(Repairable);
	DELE_PTR_FULL(RepairerActor);
}

void URepairTypeId::AfterRead()
{
	UObject::AfterRead();

}

void URepairTypeId::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function Repair.RepairableInterface.HandleDestroy
// (Native, Public)
void URepairableInterface::HandleDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.HandleDestroy");

	URepairableInterface_HandleDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Repair.RepairableInterface.GetRepairType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* URepairableInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairType");

	URepairableInterface_GetRepairType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float URepairableInterface::GetRepairTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairTime");

	URepairableInterface_GetRepairTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairableState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Repair_ERepairableState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Repair_ERepairableState> URepairableInterface::GetRepairableState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairableState");

	URepairableInterface_GetRepairableState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URepairableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URepairableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Repair.RepairingInterface.GetRepairType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* URepairingInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair.RepairingInterface.GetRepairType");

	URepairingInterface_GetRepairType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URepairingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URepairingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWoodRepairTypeId::AfterRead()
{
	URepairTypeId::AfterRead();

}

void UWoodRepairTypeId::BeforeDelete()
{
	URepairTypeId::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
