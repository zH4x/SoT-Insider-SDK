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

// Function bp_fire_bin_a.bp_fire_bin_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Abp_fire_bin_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fire_bin_a.bp_fire_bin_a_C.UserConstructionScript");

	Abp_fire_bin_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bp_fire_bin_a.bp_fire_bin_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Abp_fire_bin_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fire_bin_a.bp_fire_bin_a_C.ReceiveBeginPlay");

	Abp_fire_bin_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bp_fire_bin_a.bp_fire_bin_a_C.ExecuteUbergraph_bp_fire_bin_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Abp_fire_bin_a_C::ExecuteUbergraph_bp_fire_bin_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fire_bin_a.bp_fire_bin_a_C.ExecuteUbergraph_bp_fire_bin_a");

	Abp_fire_bin_a_C_ExecuteUbergraph_bp_fire_bin_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
