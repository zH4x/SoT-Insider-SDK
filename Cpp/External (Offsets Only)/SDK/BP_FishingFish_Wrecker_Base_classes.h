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

// BlueprintGeneratedClass BP_FishingFish_Wrecker_Base.BP_FishingFish_Wrecker_Base_C
// 0x0000 (FullSize[0x0910] - InheritedSize[0x0910])
class ABP_FishingFish_Wrecker_Base_C : public ABP_FishingFish_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FishingFish_Wrecker_Base.BP_FishingFish_Wrecker_Base_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
