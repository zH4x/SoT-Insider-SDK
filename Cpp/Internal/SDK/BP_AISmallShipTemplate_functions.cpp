// Name: SoT-Insider, Version: 1.102.2382.0

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

// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetShipSkeleton
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AISmallShipTemplate_C::SetShipSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetShipSkeleton");

	ABP_AISmallShipTemplate_C_SetShipSkeleton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnRep_SailData
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AISmallShipTemplate_C::OnRep_SailData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnRep_SailData");

	ABP_AISmallShipTemplate_C_OnRep_SailData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AISmallShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.UserConstructionScript");

	ABP_AISmallShipTemplate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AISmallShipTemplate_C::OnShipSurface_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface_Client");

	ABP_AISmallShipTemplate_C_OnShipSurface_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface
// (Event, Public, BlueprintEvent)
void ABP_AISmallShipTemplate_C::OnShipSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface");

	ABP_AISmallShipTemplate_C_OnShipSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AISmallShipTemplate_C::OnShipDive_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive_Client");

	ABP_AISmallShipTemplate_C_OnShipDive_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive
// (Event, Public, BlueprintEvent)
void ABP_AISmallShipTemplate_C::OnShipDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive");

	ABP_AISmallShipTemplate_C_OnShipDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_AISmallShipTemplate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ReceiveBeginPlay");

	ABP_AISmallShipTemplate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetCursedCrewCustomisationProperties
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailData                       (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_AISmallShipTemplate_C::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetCursedCrewCustomisationProperties");

	ABP_AISmallShipTemplate_C_SetCursedCrewCustomisationProperties_Params params;
	params.SailData = SailData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ExecuteUbergraph_BP_AISmallShipTemplate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AISmallShipTemplate_C::ExecuteUbergraph_BP_AISmallShipTemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ExecuteUbergraph_BP_AISmallShipTemplate");

	ABP_AISmallShipTemplate_C_ExecuteUbergraph_BP_AISmallShipTemplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
