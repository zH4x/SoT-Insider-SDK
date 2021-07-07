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


void ABP_AISmallShipTemplate_C::AfterRead()
{
	AShip::AfterRead();

	READ_PTR_FULL(TridentRewards, UAIShipItemSpawnComponent);
	READ_PTR_FULL(StorageCrateRewards, UAIShipItemSpawnComponent);
	READ_PTR_FULL(GemRewards, UAIShipItemSpawnComponent);
	READ_PTR_FULL(ChanceRewards_Campaign020, UAIShipItemSpawnComponent);
	READ_PTR_FULL(shp_small_proxy_lights_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ExplosiveBarrelSpawner, UAIShipItemSpawnComponent);
	READ_PTR_FULL(HoldRewardsEmergent, UAIShipItemSpawnComponent);
	READ_PTR_FULL(audio_skeletonship_emerge_submerge, UWwiseEmitterComponent);
	READ_PTR_FULL(Wheel, UChildActorComponent);
	READ_PTR_FULL(MerchantRewards, UAIShipItemSpawnComponent);
	READ_PTR_FULL(ChestRewards, UAIShipItemSpawnComponent);
	READ_PTR_FULL(MessageInABottleSpawner, UAIShipItemSpawnComponent);
	READ_PTR_FULL(SkullRewards, UAIShipItemSpawnComponent);
	READ_PTR_FULL(AIShipTelemetry, UAIShipTelemetryComponent);
	READ_PTR_FULL(AIRegion, UAIRegionComponent);
	READ_PTR_FULL(BP_SmallShipLadder_02, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Food, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball2, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Cannonball1, UChildActorComponent);
	READ_PTR_FULL(ShipStorageBarrel_Wood, UChildActorComponent);
	READ_PTR_FULL(RammingSpurZone, UBoxComponent);
	READ_PTR_FULL(shp_shark_hits_01_a, UStaticMeshComponent);
	READ_PTR_FULL(CannonRight1, UChildActorComponent);
	READ_PTR_FULL(CannonLeft1, UChildActorComponent);
	READ_PTR_FULL(LadderStbd, UChildActorComponent);
	READ_PTR_FULL(Hull, UChildActorComponent);
	READ_PTR_FULL(AudioBoat, UChildActorComponent);
	READ_PTR_FULL(ShipSkeleton, ABP_AISmallShip_StandardHull_Art_C);
}

void ABP_AISmallShipTemplate_C::BeforeDelete()
{
	AShip::BeforeDelete();

	DELE_PTR_FULL(TridentRewards);
	DELE_PTR_FULL(StorageCrateRewards);
	DELE_PTR_FULL(GemRewards);
	DELE_PTR_FULL(ChanceRewards_Campaign020);
	DELE_PTR_FULL(shp_small_proxy_lights_01_a);
	DELE_PTR_FULL(ExplosiveBarrelSpawner);
	DELE_PTR_FULL(HoldRewardsEmergent);
	DELE_PTR_FULL(audio_skeletonship_emerge_submerge);
	DELE_PTR_FULL(Wheel);
	DELE_PTR_FULL(MerchantRewards);
	DELE_PTR_FULL(ChestRewards);
	DELE_PTR_FULL(MessageInABottleSpawner);
	DELE_PTR_FULL(SkullRewards);
	DELE_PTR_FULL(AIShipTelemetry);
	DELE_PTR_FULL(AIRegion);
	DELE_PTR_FULL(BP_SmallShipLadder_02);
	DELE_PTR_FULL(ShipStorageBarrel_Food);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball2);
	DELE_PTR_FULL(ShipStorageBarrel_Cannonball1);
	DELE_PTR_FULL(ShipStorageBarrel_Wood);
	DELE_PTR_FULL(RammingSpurZone);
	DELE_PTR_FULL(shp_shark_hits_01_a);
	DELE_PTR_FULL(CannonRight1);
	DELE_PTR_FULL(CannonLeft1);
	DELE_PTR_FULL(LadderStbd);
	DELE_PTR_FULL(Hull);
	DELE_PTR_FULL(AudioBoat);
	DELE_PTR_FULL(ShipSkeleton);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
