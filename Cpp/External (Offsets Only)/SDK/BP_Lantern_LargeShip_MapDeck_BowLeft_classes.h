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

// BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_BowLeft.BP_Lantern_LargeShip_MapDeck_BowLeft_C
// 0x0000 (FullSize[0x074D] - InheritedSize[0x074D])
class ABP_Lantern_LargeShip_MapDeck_BowLeft_C : public ABP_InteractableShipLantern_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_BowLeft.BP_Lantern_LargeShip_MapDeck_BowLeft_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
