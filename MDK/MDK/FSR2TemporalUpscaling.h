
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/FSR2TemporalUpscaling.FSR2Settings
/// Size: 0x0050 (0x000040 - 0x000090)
class UFSR2Settings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      AutoExposure                                                OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      EnabledInEditorViewport                                     OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      UseSSRExperimentalDenoiser                                  OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      UseNativeDX12                                               OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      UseNativeVulkan                                             OFFSET(get<bool>, {0x45, 1, 0, 0})
	CMember(EFSR2QualityMode)                          QualityMode                                                 OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(EFSR2HistoryFormat)                        HistoryFormat                                               OFFSET(get<T>, {0x4C, 4, 0, 0})
	CMember(EFSR2DeDitherMode)                         DeDither                                                    OFFSET(get<T>, {0x50, 4, 0, 0})
	DMember(float)                                     Sharpness                                                   OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      AdjustMipBias                                               OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      ReactiveMask                                                OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      ForceVertexDeformationOutputsVelocity                       OFFSET(get<bool>, {0x5A, 1, 0, 0})
	CMember(EFSR2LandscapeHISMMode)                    ForceLandscapeHISMMobility                                  OFFSET(get<T>, {0x5C, 4, 0, 0})
	DMember(float)                                     ReflectionScale                                             OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     ReflectionLuminanceBias                                     OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     RoughnessScale                                              OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     RoughnessBias                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RoughnessMaxDistance                                        OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      ReactiveMaskRoughnessForceMaxDistance                       OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(float)                                     TranslucencyBias                                            OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TranslucencyLuminanceBias                                   OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     TranslucencyMaxDistance                                     OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     PreDOFTranslucencyScale                                     OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      PreDOFTranslucencyMax                                       OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(TEnumAsByte<EMaterialShadingModel>)        ReactiveShadingModelID                                      OFFSET(get<T>, {0x89, 1, 0, 0})
	DMember(float)                                     ForceReactiveMaterialValue                                  OFFSET(get<float>, {0x8C, 4, 0, 0})
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
/// Size: 0x03
enum class EFSR2LandscapeHISMMode : uint32_t
{
	EFSR2LandscapeHISMMode__Off                                                      = 0,
	EFSR2LandscapeHISMMode__AllStatic                                                = 1,
	EFSR2LandscapeHISMMode__StaticWPO                                                = 2
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2DeDitherMode
/// Size: 0x03
enum class EFSR2DeDitherMode : uint32_t
{
	EFSR2DeDitherMode__Off                                                           = 0,
	EFSR2DeDitherMode__Full                                                          = 1,
	EFSR2DeDitherMode__HairOnly                                                      = 2
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2HistoryFormat
/// Size: 0x02
enum class EFSR2HistoryFormat : uint32_t
{
	EFSR2HistoryFormat__FloatRGBA                                                    = 0,
	EFSR2HistoryFormat__FloatR11G11B10                                               = 1
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2QualityMode
/// Size: 0x05
enum class EFSR2QualityMode : uint32_t
{
	EFSR2QualityMode__Unused                                                         = 0,
	EFSR2QualityMode__Quality                                                        = 1,
	EFSR2QualityMode__Balanced                                                       = 2,
	EFSR2QualityMode__Performance                                                    = 3,
	EFSR2QualityMode__UltraPerformance                                               = 4
};

