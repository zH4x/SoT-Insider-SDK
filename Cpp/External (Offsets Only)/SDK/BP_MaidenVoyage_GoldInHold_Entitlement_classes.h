﻿#pragma once

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

// BlueprintGeneratedClass BP_MaidenVoyage_GoldInHold_Entitlement.BP_MaidenVoyage_GoldInHold_Entitlement_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UBP_MaidenVoyage_GoldInHold_Entitlement_C : public UTaleRankDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MaidenVoyage_GoldInHold_Entitlement.BP_MaidenVoyage_GoldInHold_Entitlement_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
