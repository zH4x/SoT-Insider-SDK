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

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryActivated NewParam                       (Parm)
void UBP_Prompt_EmissaryActivated_C::OnEmissaryActivatedFunc(const struct FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc");

	UBP_Prompt_EmissaryActivated_C_OnEmissaryActivatedFunc_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryActivated NewParam                       (Parm)
void UBP_Prompt_EmissaryActivated_C::EmissaryActivated(const struct FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated");

	UBP_Prompt_EmissaryActivated_C_EmissaryActivated_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryActivated_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate");

	UBP_Prompt_EmissaryActivated_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryActivated_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryActivated_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryActivated_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryActivated_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryActivated_C::ExecuteUbergraph_BP_Prompt_EmissaryActivated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated");

	UBP_Prompt_EmissaryActivated_C_ExecuteUbergraph_BP_Prompt_EmissaryActivated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
