
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UMaterialShaderQualitySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, class UShaderPlatformQualitySettings*>) ForwardSettingMap                                  OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0009 (0x000000 - 0x000009)
class FMaterialQualityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	DMember(bool)                                      bDiscardQualityDuringCook                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableOverride                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bForceFullyRough                                            OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bForceNonMetal                                              OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bForceDisableLMDirectionality                               OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bForceLQReflections                                         OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bForceDisablePreintegratedGF                                OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(bool)                                      bDisableMaterialNormalCalculation                           OFFSET(get<bool>, {0x7, 1, 0, 0})
	CMember(EMobileShadowQuality)                      MobileShadowQuality                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0038 (0x000030 - 0x000068)
class UShaderPlatformQualitySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMaterialQualityOverrides)                 QualityOverrides                                            OFFSET(getStruct<T>, {0x30, 36, 0, 0})
};

/// Enum /Script/MaterialShaderQualitySettings.EMobileShadowQuality
/// Size: 0x04
enum class EMobileShadowQuality : uint8_t
{
	EMobileShadowQuality__NoFiltering                                                = 0,
	EMobileShadowQuality__PCF_1x1                                                    = 1,
	EMobileShadowQuality__PCF_2x2                                                    = 2,
	EMobileShadowQuality__PCF_3x3                                                    = 3
};

