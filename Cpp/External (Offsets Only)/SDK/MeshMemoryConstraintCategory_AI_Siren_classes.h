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

// BlueprintGeneratedClass MeshMemoryConstraintCategory_AI_Siren.MeshMemoryConstraintCategory_AI_Siren_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshMemoryConstraintCategory_AI_Siren_C : public UMeshMemoryConstraintCategory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeshMemoryConstraintCategory_AI_Siren.MeshMemoryConstraintCategory_AI_Siren_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
