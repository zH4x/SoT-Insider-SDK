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

// BlueprintGeneratedClass BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C
// 0x0018 (FullSize[0x04D8] - InheritedSize[0x04C0])
class ABP_SmallShipStorageBarrel_Wood_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipTelemetrySubjectComponent*              ShipTelemetrySubject;                                      // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStorageContainerComponent*                  StorageContainer;                                          // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C");
		return ptr;
	}



	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
