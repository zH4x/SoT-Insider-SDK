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

// Function BP_AIShipWheel.BP_AIShipWheel_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_AIShipWheel_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIShipWheel.BP_AIShipWheel_C.GetDockableInfo");

	ABP_AIShipWheel_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AIShipWheel.BP_AIShipWheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AIShipWheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIShipWheel.BP_AIShipWheel_C.UserConstructionScript");

	ABP_AIShipWheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AIShipWheel_C::AfterRead()
{
	AAIDockableWheel::AfterRead();

	READ_PTR_FULL(PlayerNameplateLocationOverride, UPlayerNameplateLocationOverrideComponent);
	READ_PTR_FULL(DockLocation, USceneComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
}

void ABP_AIShipWheel_C::BeforeDelete()
{
	AAIDockableWheel::BeforeDelete();

	DELE_PTR_FULL(PlayerNameplateLocationOverride);
	DELE_PTR_FULL(DockLocation);
	DELE_PTR_FULL(StaticMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
