// Name: SoT-Insider, Version: 1.102.2382.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FShaderQualityOverridesListItem::AfterRead()
{
	READ_PTR_FULL(QualityProperty, UBoolProperty);
	READ_PTR_FULL(SettingContainer, UShaderPlatformQualitySettings);
}

void FShaderQualityOverridesListItem::BeforeDelete()
{
	DELE_PTR_FULL(QualityProperty);
	DELE_PTR_FULL(SettingContainer);
}

void FMaterialQualityOverrides::AfterRead()
{
}

void FMaterialQualityOverrides::BeforeDelete()
{
}

void UMaterialShaderQualitySettings::AfterRead()
{
	UObject::AfterRead();

}

void UMaterialShaderQualitySettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UShaderPlatformQualitySettings::AfterRead()
{
	UObject::AfterRead();

}

void UShaderPlatformQualitySettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
