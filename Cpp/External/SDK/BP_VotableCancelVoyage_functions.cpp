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

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.PlayShowTokenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Token                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableCancelVoyage_C::PlayShowTokenAnimation(class UPrimitiveComponent* Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.PlayShowTokenAnimation");

	ABP_VotableCancelVoyage_C_PlayShowTokenAnimation_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.Is Session Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableCancelVoyage_C::Is_Session_Locked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.Is Session Locked");

	ABP_VotableCancelVoyage_C_Is_Session_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;

}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetObjectDisplayName
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText ABP_VotableCancelVoyage_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetObjectDisplayName");

	ABP_VotableCancelVoyage_C_GetObjectDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_VotableCancelVoyage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.UserConstructionScript");

	ABP_VotableCancelVoyage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_VotableCancelVoyage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ReceiveBeginPlay");

	ABP_VotableCancelVoyage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_VotableCancelVoyage_C::OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteAdded");

	ABP_VotableCancelVoyage_C_OnVoteAdded_Params params;
	params.Voter = Voter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteRemoved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_VotableCancelVoyage_C::OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteRemoved");

	ABP_VotableCancelVoyage_C_OnVoteRemoved_Params params;
	params.Voter = Voter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ExecuteUbergraph_BP_VotableCancelVoyage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableCancelVoyage_C::ExecuteUbergraph_BP_VotableCancelVoyage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ExecuteUbergraph_BP_VotableCancelVoyage");

	ABP_VotableCancelVoyage_C_ExecuteUbergraph_BP_VotableCancelVoyage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_VotableCancelVoyage_C::AfterRead()
{
	AVotableObjectView::AfterRead();

	READ_PTR_FULL(Token_2, UStaticMeshComponent);
	READ_PTR_FULL(Token_4, UStaticMeshComponent);
	READ_PTR_FULL(Token_3, UStaticMeshComponent);
	READ_PTR_FULL(Token_1, UStaticMeshComponent);
	READ_PTR_FULL(Token_Asset, UStaticMesh);
	READ_PTR_FULL(Token_Material, UMaterialInterface);
}

void ABP_VotableCancelVoyage_C::BeforeDelete()
{
	AVotableObjectView::BeforeDelete();

	DELE_PTR_FULL(Token_2);
	DELE_PTR_FULL(Token_4);
	DELE_PTR_FULL(Token_3);
	DELE_PTR_FULL(Token_1);
	DELE_PTR_FULL(Token_Asset);
	DELE_PTR_FULL(Token_Material);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
