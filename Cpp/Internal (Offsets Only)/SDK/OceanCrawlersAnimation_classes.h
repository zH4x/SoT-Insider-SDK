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

// Class OceanCrawlersAnimation.OceanCrawlerAnimationData
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UOceanCrawlerAnimationData : public UAnimationData
{
public:
	struct FOceanCrawlerAnimationDataStructure         OceanCrawlerAnimationDataStructure;                        // 0x0028(0x0080) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationData");
		return ptr;
	}



};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
// 0x02D0 (FullSize[0x0710] - InheritedSize[0x0440])
class UOceanCrawlerAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_CHMK[0x18];                                    // 0x0440(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FOceanCrawlerAnimationDataStructure         LoadedAnimations;                                          // 0x0458(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FActorVelocityData                          MovementData;                                              // 0x04D8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrentDirection;                                          // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5W67[0x4];                                     // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAnimationWeapon                      AttackAnims;                                               // 0x04F8(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	bool                                               UseDefaultAnimations;                                      // 0x05B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnimationsLoaded;                                          // 0x05B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SporeBreathActive;                                         // 0x05B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ELCW[0x1];                                     // 0x05B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PropAttachmentSocket;                                      // 0x05B4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3FPU[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         MontagePlayer;                                             // 0x05C0(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                 // 0x0698(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData_1VAS[0x50];                                    // 0x06C0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UOceanCrawlerAnimationServerData : public UAnimationServerData
{
public:
	unsigned char                                      UnknownData_N76K[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSpawnAnimDuration;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpawnOnShipAnimDuration;                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpawnBoardingAnimDuration;                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QXJ4[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
