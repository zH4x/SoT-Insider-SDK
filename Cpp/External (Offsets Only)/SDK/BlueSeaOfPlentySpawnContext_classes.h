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

// BlueprintGeneratedClass BlueSeaOfPlentySpawnContext.BlueSeaOfPlentySpawnContext_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlueSeaOfPlentySpawnContext_C : public UAISpawnContextId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlueSeaOfPlentySpawnContext.BlueSeaOfPlentySpawnContext_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
