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

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterDamageEventFromCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_RepairShip_C::UnregisterDamageEventFromCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterDamageEventFromCurrentShip");

	UBP_Prompt_RepairShip_C_UnregisterDamageEventFromCurrentShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterDamageEventWithCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_RepairShip_C::RegisterDamageEventWithCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterDamageEventWithCurrentShip");

	UBP_Prompt_RepairShip_C_RegisterDamageEventWithCurrentShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_RepairShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.Evaluate");

	UBP_Prompt_RepairShip_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_RepairShip_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_RepairShip_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnCurrentShipChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCurrentShipChanged Event                          (Parm)
void UBP_Prompt_RepairShip_C::OnCurrentShipChanged(const struct FEventCurrentShipChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnCurrentShipChanged");

	UBP_Prompt_RepairShip_C_OnCurrentShipChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnShipDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageZoneDamageLevelChanged Event                          (Parm)
void UBP_Prompt_RepairShip_C::OnShipDamaged(const struct FDamageZoneDamageLevelChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnShipDamaged");

	UBP_Prompt_RepairShip_C_OnShipDamaged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Prompt_RepairShip_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_RepairShip_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.ExecuteUbergraph_BP_Prompt_RepairShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_RepairShip_C::ExecuteUbergraph_BP_Prompt_RepairShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.ExecuteUbergraph_BP_Prompt_RepairShip");

	UBP_Prompt_RepairShip_C_ExecuteUbergraph_BP_Prompt_RepairShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
