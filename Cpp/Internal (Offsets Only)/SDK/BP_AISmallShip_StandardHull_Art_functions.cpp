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

// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AISmallShip_StandardHull_Art_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.UserConstructionScript");

	ABP_AISmallShip_StandardHull_Art_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.StartWetEffect
// (BlueprintCallable, BlueprintEvent)
void ABP_AISmallShip_StandardHull_Art_C::StartWetEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.StartWetEffect");

	ABP_AISmallShip_StandardHull_Art_C_StartWetEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.HideWetDecals
// (BlueprintCallable, BlueprintEvent)
void ABP_AISmallShip_StandardHull_Art_C::HideWetDecals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.HideWetDecals");

	ABP_AISmallShip_StandardHull_Art_C_HideWetDecals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.SetSailColour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailParams                     (Parm)
void ABP_AISmallShip_StandardHull_Art_C::SetSailColour(const struct FAIShipSailData& SailParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.SetSailColour");

	ABP_AISmallShip_StandardHull_Art_C_SetSailColour_Params params;
	params.SailParams = SailParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.ExecuteUbergraph_BP_AISmallShip_StandardHull_Art
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AISmallShip_StandardHull_Art_C::ExecuteUbergraph_BP_AISmallShip_StandardHull_Art(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.ExecuteUbergraph_BP_AISmallShip_StandardHull_Art");

	ABP_AISmallShip_StandardHull_Art_C_ExecuteUbergraph_BP_AISmallShip_StandardHull_Art_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
