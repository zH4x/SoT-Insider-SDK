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

// BlueprintGeneratedClass flag_blue_01_CustomizationDesc.flag_blue_01_CustomizationDesc_C
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class Uflag_blue_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass flag_blue_01_CustomizationDesc.flag_blue_01_CustomizationDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
