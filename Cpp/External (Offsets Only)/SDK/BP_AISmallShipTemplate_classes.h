#pragma once

// Name: SoT-Insider, Version: 1.102.2382.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AISmallShipTemplate.BP_AISmallShipTemplate_C
// 0x0100 (FullSize[0x1498] - InheritedSize[0x1398])
class ABP_AISmallShipTemplate_C : public AShip
{
public:
	unsigned char                                      UnknownData_TPC2[0x8];                                     // 0x1398(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x13A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIShipItemSpawnComponent*                   TridentRewards;                                            // 0x13A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   StorageCrateRewards;                                       // 0x13B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   GemRewards;                                                // 0x13B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   ChanceRewards_Campaign020;                                 // 0x13C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_small_proxy_lights_01_a;                               // 0x13C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   ExplosiveBarrelSpawner;                                    // 0x13D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   HoldRewardsEmergent;                                       // 0x13D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWwiseEmitterComponent*                      audio_skeletonship_emerge_submerge;                        // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        Wheel;                                                     // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   MerchantRewards;                                           // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   ChestRewards;                                              // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   MessageInABottleSpawner;                                   // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   SkullRewards;                                              // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipTelemetryComponent*                   AIShipTelemetry;                                           // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIRegionComponent*                          AIRegion;                                                  // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        BP_SmallShipLadder_02;                                     // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                    // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                             // 0x1430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                             // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                    // 0x1440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               RammingSpurZone;                                           // 0x1448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                       // 0x1450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonRight1;                                              // 0x1458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonLeft1;                                               // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        LadderStbd;                                                // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        Hull;                                                      // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        AudioBoat;                                                 // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ABP_AISmallShip_StandardHull_Art_C*          ShipSkeleton;                                              // 0x1480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FAIShipSailData                             SailData;                                                  // 0x1488(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AISmallShipTemplate.BP_AISmallShipTemplate_C");
		return ptr;
	}



	void SetShipSkeleton();
	void OnRep_SailData();
	void UserConstructionScript();
	void OnShipSurface_Client();
	void OnShipSurface();
	void OnShipDive_Client();
	void OnShipDive();
	void ReceiveBeginPlay();
	void SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData);
	void ExecuteUbergraph_BP_AISmallShipTemplate(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
