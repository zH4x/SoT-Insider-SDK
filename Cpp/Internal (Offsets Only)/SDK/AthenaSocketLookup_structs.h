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

// ScriptStruct AthenaSocketLookup.SocketPathNode
// 0x0008
struct FSocketPathNode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaSocketLookup.SocketPath
// 0x0018
struct FSocketPath
{
	TArray<struct FSocketPathNode>                     Nodes;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_STXC[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaSocketLookup.SocketId
// 0x0020
struct FSocketId
{
	struct FSocketPath                                 path;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       Name;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaSocketLookup.SocketLookupCache
// 0x0050
struct FSocketLookupCache
{
	unsigned char                                      UnknownData_HS2K[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
