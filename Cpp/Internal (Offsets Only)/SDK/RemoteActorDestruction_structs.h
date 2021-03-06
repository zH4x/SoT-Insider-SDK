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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RemoteActorDestruction.DestroyAllExistingActorsByClassData
// 0x0010
struct FDestroyAllExistingActorsByClassData
{
	TArray<struct FString>                             ActorClassNames;                                           // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct RemoteActorDestruction.DestroyActorData
// 0x0004
struct FDestroyActorData
{
	int                                                ActorNetID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
