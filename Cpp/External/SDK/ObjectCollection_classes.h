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

// Class ObjectCollection.TestCollector
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UTestCollector : public UObject
{
public:
	unsigned char                                      UnknownData_NDH3[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectCollection.TestCollector");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ObjectCollection.TestObjectForCollection
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UTestObjectForCollection : public UObject
{
public:
	unsigned char                                      UnknownData_PDYP[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectCollection.TestObjectForCollection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ObjectCollection.ObjectCollectorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UObjectCollectorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectCollection.ObjectCollectorInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
