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

// Function BP_Projectile_CannonBall_Cursed_ComplexWaterHits.BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_CannonBall_Cursed_ComplexWaterHits.BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C.UserConstructionScript");

	ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C::AfterRead()
{
	ABP_Projectile_CannonBall_Cursed_C::AfterRead();

	READ_PTR_FULL(MeshRotator, UMeshRotatorComponent);
	READ_PTR_FULL(OverlapsWaterInteractionVolumes, UBoxComponent);
	READ_PTR_FULL(WaterInteraction, UWaterInteractionComponent);
	READ_PTR_FULL(ShipTracker, UShipTrackerComponent);
	READ_PTR_FULL(SimpleOverlap, USimpleOverlapComponent);
}

void ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C::BeforeDelete()
{
	ABP_Projectile_CannonBall_Cursed_C::BeforeDelete();

	DELE_PTR_FULL(MeshRotator);
	DELE_PTR_FULL(OverlapsWaterInteractionVolumes);
	DELE_PTR_FULL(WaterInteraction);
	DELE_PTR_FULL(ShipTracker);
	DELE_PTR_FULL(SimpleOverlap);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
