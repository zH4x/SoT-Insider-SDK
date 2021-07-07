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


void ABP_AISmallShip_StandardHull_Art_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(FirePostProcess, UPostProcessComponent);
	READ_PTR_FULL(Fire_PP_Volume, UBoxComponent);
	READ_PTR_FULL(WetDecalStarboard, UDecalComponent);
	READ_PTR_FULL(WetDecalPort, UDecalComponent);
	READ_PTR_FULL(shp_skl_sails_01_a__sail_04_a, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(vfx_magic_torch_01, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(vfx_magic_torch_AIShip_01, UParticleSystemComponent);
	READ_PTR_FULL(shp_small_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_skl_sails_01_a__sail_01_a, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_orb_light_02_b_4, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_orb_light_02_b_3, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_orb_light_02_b, UStaticMeshComponent);
	READ_PTR_FULL(shp_skl_treasure_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(bsp_torch_pole, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_torch_skull, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_orb_light_c, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_seaweed_placement_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_hull_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_shipwreck_capstan_01_release_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_skl_capstan_01__arm_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_skl_capstan_01__arm_a1, UStaticMeshComponent);
	READ_PTR_FULL(bon_fish_skeleton_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bon_skelly_skull_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bon_skelly_ribcage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bon_skelly_arm_L_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeletonposesit_02, UStaticMeshComponent);
	READ_PTR_FULL(bon_skelly_ribcage_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bon_skelly_skull_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bon_skelly_skull_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bon_skelly_leg_L_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_rug_02_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_no_collision_merged_01, UMergedStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_sterncastle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_hull_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_brig_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_lower_deck_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_salvage_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_04_a2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_04_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_skull_barrel_oos_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_salvage_01_d4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_salvage_01_d3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_salvage_01_d2, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_skull_barrel_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_salvage_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_skull_barrel_oos_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_skull_barrel_oos_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_skull_barrel_oos_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_salvage_01_d1, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_figurehead_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_curtain_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_item_shelf_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_mast_crossbeam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_mast_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_skl_crows_nest_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_shipwreck_capstan_01_body_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_skl_map_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bon_kraken_ribs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bon_kraken_ribs_01_e1, UStaticMeshComponent);
	READ_PTR_FULL(bon_kraken_ribs_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bon_kraken_ribs_01_b2, UStaticMeshComponent);
	READ_PTR_FULL(bon_kraken_ribs_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bon_kraken_ribs_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_skl_collision_merged_01, UMergedStaticMeshComponent);
	READ_PTR_FULL(SurfaceWater, USurfaceWaterComponent);
	READ_PTR_FULL(shp_small_rain_occlusion, UStaticMeshComponent);
	READ_PTR_FULL(PostProcess2, UPostProcessComponent);
	READ_PTR_FULL(Below_Deck, UBoxComponent);
	READ_PTR_FULL(PostProcess1, UPostProcessComponent);
	READ_PTR_FULL(Map_Deck_B, UBoxComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Map_Deck, UBoxComponent);
	READ_PTR_FULL(shp_small_lower_deck_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultRoot, USceneComponent);
	READ_PTR_FULL(Below_Front, UShipLightComponent);
	READ_PTR_FULL(below_back, UShipLightComponent);
	READ_PTR_FULL(Top_Back, UShipLightComponent);
	READ_PTR_FULL(Top_Front, UShipLightComponent);
	READ_PTR_FULL(WetDynamicMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(CurrentMaterial, UMaterialInstanceDynamic);
}

void ABP_AISmallShip_StandardHull_Art_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(FirePostProcess);
	DELE_PTR_FULL(Fire_PP_Volume);
	DELE_PTR_FULL(WetDecalStarboard);
	DELE_PTR_FULL(WetDecalPort);
	DELE_PTR_FULL(shp_skl_sails_01_a__sail_04_a);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(vfx_magic_torch_01);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(vfx_magic_torch_AIShip_01);
	DELE_PTR_FULL(shp_small_stairs_01_a);
	DELE_PTR_FULL(shp_skl_sails_01_a__sail_01_a);
	DELE_PTR_FULL(tls_wld_orb_light_02_b_4);
	DELE_PTR_FULL(tls_wld_orb_light_02_b_3);
	DELE_PTR_FULL(tls_wld_orb_light_02_b);
	DELE_PTR_FULL(shp_skl_treasure_hatch_01_a);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(bsp_torch_pole);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(tls_wld_torch_skull);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(tls_wld_orb_light_c);
	DELE_PTR_FULL(shp_small_skl_seaweed_placement_01_a);
	DELE_PTR_FULL(shp_small_skl_hull_rope_01_a);
	DELE_PTR_FULL(shp_shipwreck_capstan_01_release_a);
	DELE_PTR_FULL(shp_skl_capstan_01__arm_a);
	DELE_PTR_FULL(shp_skl_capstan_01__arm_a1);
	DELE_PTR_FULL(bon_fish_skeleton_01_a);
	DELE_PTR_FULL(bon_skelly_skull_01_b);
	DELE_PTR_FULL(bon_skelly_ribcage_01_a);
	DELE_PTR_FULL(bon_skelly_arm_L_01_a);
	DELE_PTR_FULL(cmn_skeletonposesit_02);
	DELE_PTR_FULL(bon_skelly_ribcage_01_a1);
	DELE_PTR_FULL(bon_skelly_skull_01_b1);
	DELE_PTR_FULL(bon_skelly_skull_01_a);
	DELE_PTR_FULL(bon_skelly_leg_L_01_a);
	DELE_PTR_FULL(cap_cabin_rug_02_a1);
	DELE_PTR_FULL(shp_small_hatch_01_a);
	DELE_PTR_FULL(shp_small_skl_no_collision_merged_01);
	DELE_PTR_FULL(shp_small_skl_sterncastle_01_a);
	DELE_PTR_FULL(shp_small_skl_hull_01_a);
	DELE_PTR_FULL(shp_small_brig_01_a);
	DELE_PTR_FULL(shp_small_skl_lower_deck_01_a);
	DELE_PTR_FULL(cmn_barrel_salvage_01_c);
	DELE_PTR_FULL(cmn_barrel_debris_03_a);
	DELE_PTR_FULL(cmn_barrel_debris_04_a2);
	DELE_PTR_FULL(cmn_barrel_debris_04_a);
	DELE_PTR_FULL(cmn_barrel_debris_01_a);
	DELE_PTR_FULL(bld_shop_skull_barrel_oos_01_a4);
	DELE_PTR_FULL(cmn_barrel_salvage_01_d4);
	DELE_PTR_FULL(cmn_barrel_salvage_01_d3);
	DELE_PTR_FULL(cmn_barrel_salvage_01_d2);
	DELE_PTR_FULL(bld_shop_skull_barrel_oos_01_a);
	DELE_PTR_FULL(cmn_barrel_salvage_01_d);
	DELE_PTR_FULL(bld_shop_skull_barrel_oos_01_a1);
	DELE_PTR_FULL(bld_shop_skull_barrel_oos_01_a2);
	DELE_PTR_FULL(bld_shop_skull_barrel_oos_01_a3);
	DELE_PTR_FULL(cmn_barrel_salvage_01_d1);
	DELE_PTR_FULL(shp_small_skl_figurehead_01_a);
	DELE_PTR_FULL(shp_small_curtain_01_a);
	DELE_PTR_FULL(shp_item_shelf_01_a);
	DELE_PTR_FULL(shp_small_mast_crossbeam_01_a);
	DELE_PTR_FULL(shp_small_mast_01_a);
	DELE_PTR_FULL(shp_skl_crows_nest_01_a);
	DELE_PTR_FULL(shp_shipwreck_capstan_01_body_a);
	DELE_PTR_FULL(shp_skl_map_table_01_a);
	DELE_PTR_FULL(bon_kraken_ribs_01_a);
	DELE_PTR_FULL(bon_kraken_ribs_01_e1);
	DELE_PTR_FULL(bon_kraken_ribs_01_d);
	DELE_PTR_FULL(bon_kraken_ribs_01_b2);
	DELE_PTR_FULL(bon_kraken_ribs_01_b);
	DELE_PTR_FULL(bon_kraken_ribs_01_b1);
	DELE_PTR_FULL(shp_small_skl_collision_merged_01);
	DELE_PTR_FULL(SurfaceWater);
	DELE_PTR_FULL(shp_small_rain_occlusion);
	DELE_PTR_FULL(PostProcess2);
	DELE_PTR_FULL(Below_Deck);
	DELE_PTR_FULL(PostProcess1);
	DELE_PTR_FULL(Map_Deck_B);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Map_Deck);
	DELE_PTR_FULL(shp_small_lower_deck_rope_01_a);
	DELE_PTR_FULL(DefaultRoot);
	DELE_PTR_FULL(Below_Front);
	DELE_PTR_FULL(below_back);
	DELE_PTR_FULL(Top_Back);
	DELE_PTR_FULL(Top_Front);
	DELE_PTR_FULL(WetDynamicMaterial);
	DELE_PTR_FULL(CurrentMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
