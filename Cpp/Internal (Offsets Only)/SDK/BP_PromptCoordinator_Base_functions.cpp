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

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_Base_C::IsCharacterInsideRadius(const struct FVector& Center, float Radius, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius");

	UBP_PromptCoordinator_Base_C_IsCharacterInsideRadius_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::UninitializeImplementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable");

	UBP_PromptCoordinator_Base_C_UninitializeImplementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FObjectMessagingDispatcherHandle HUD_Dispatcher                 (Parm, OutParm)
void UBP_PromptCoordinator_Base_C::GetHUDObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* HUD_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher");

	UBP_PromptCoordinator_Base_C_GetHUDObjectMessageDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HUD_Dispatcher != nullptr)
		*HUD_Dispatcher = params.HUD_Dispatcher;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete");

	UBP_PromptCoordinator_Base_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::UnregisterHandles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles");

	UBP_PromptCoordinator_Base_C_UnregisterHandles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize");

	UBP_PromptCoordinator_Base_C_PostInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_Base_C::InitializeAndStart(class AAthenaPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart");

	UBP_PromptCoordinator_Base_C_InitializeAndStart_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FObjectMessagingDispatcherHandle Player_Dispatcher              (Parm, OutParm)
void UBP_PromptCoordinator_Base_C::GetCharacterObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher");

	UBP_PromptCoordinator_Base_C_GetCharacterObjectMessageDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate");

	UBP_PromptCoordinator_Base_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FObjectMessagingDispatcherHandle Player_Dispatcher              (Parm, OutParm)
void UBP_PromptCoordinator_Base_C::GetControllerObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher");

	UBP_PromptCoordinator_Base_C_GetControllerObjectMessageDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start");

	UBP_PromptCoordinator_Base_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_Base_C::ExecuteUbergraph_BP_PromptCoordinator_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base");

	UBP_PromptCoordinator_Base_C_ExecuteUbergraph_BP_PromptCoordinator_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::OnComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature");

	UBP_PromptCoordinator_Base_C_OnComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
