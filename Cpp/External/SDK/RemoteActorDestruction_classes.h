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

// Class RemoteActorDestruction.RemoteActorDestructionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URemoteActorDestructionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RemoteActorDestruction.RemoteActorDestructionInterface");
		return ptr;
	}



	void DestroyExistingActors(TArray<class UClass*> ClassesToDestroy);
	void DestroyActor(const struct FDestroyActorData& DestroyActorData);
	void AfterRead();
	void BeforeDelete();

};

// Class RemoteActorDestruction.RemoteActorDestructionService
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class ARemoteActorDestructionService : public AActor
{
public:
	unsigned char                                      UnknownData_A5LP[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RemoteActorDestruction.RemoteActorDestructionService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
