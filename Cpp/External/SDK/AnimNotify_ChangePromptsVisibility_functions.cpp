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

// Function AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FString UAnimNotify_ChangePromptsVisibility_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C.GetNotifyName");

	UAnimNotify_ChangePromptsVisibility_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotify_ChangePromptsVisibility_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C.Received_Notify");

	UAnimNotify_ChangePromptsVisibility_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimNotify_ChangePromptsVisibility_C::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_ChangePromptsVisibility_C::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
