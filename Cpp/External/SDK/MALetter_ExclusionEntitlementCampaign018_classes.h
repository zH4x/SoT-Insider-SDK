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

// BlueprintGeneratedClass MALetter_ExclusionEntitlementCampaign018.MALetter_ExclusionEntitlementCampaign018_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UMALetter_ExclusionEntitlementCampaign018_C : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MALetter_ExclusionEntitlementCampaign018.MALetter_ExclusionEntitlementCampaign018_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
