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

// Class Damage.ExtentEstimationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExtentEstimationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Damage.ExtentEstimationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Damage.HitNotificationTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHitNotificationTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Damage.HitNotificationTargetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
