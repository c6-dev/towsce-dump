
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AkAudio
/// dependency: Art
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Indiana
/// dependency: Niagara

/// Class /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C
/// Size: 0x26B8 (0x000EE8 - 0x0035A0)
class ABP_DynamicTOD_C : public ADynamicTOD
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 13728;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE8, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PostProcessGlobal                                           OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NS_lightning_Strike                                         OFFSET(get<T>, {0xEF8, 8, 0, 0})
	CMember(class UChildActorComponent*)               BP_CurveProfileTo_RT                                        OFFSET(get<T>, {0xF00, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NS_DustDevil                                                OFFSET(get<T>, {0xF08, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  PS_Weather                                                  OFFSET(get<T>, {0xF10, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PostProcessWeatherStorm                                     OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(class UExponentialHeightFogComponent*)     NextGenFog                                                  OFFSET(get<T>, {0xF20, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           PS_Rain_Player                                              OFFSET(get<T>, {0xF28, 8, 0, 0})
	CMember(class UVolumetricCloudComponent*)          VolumetricCloud                                             OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PostProcessSunset                                           OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(class USkyAtmosphereComponent*)            SkyAtmosphere                                               OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PostProcessSunrise                                          OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StarFieldHemisphereSection3                                 OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StarFieldHemisphereSection2                                 OFFSET(get<T>, {0xF58, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StarFieldHemisphereSection1                                 OFFSET(get<T>, {0xF60, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PostProcessNight                                            OFFSET(get<T>, {0xF68, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PostProcessDay                                              OFFSET(get<T>, {0xF70, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SunFlare                                                    OFFSET(get<T>, {0xF78, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SunSprite                                                   OFFSET(get<T>, {0xF80, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PPV_LensEffects                                             OFFSET(get<T>, {0xF88, 8, 0, 0})
	CMember(class UPostProcessComponent*)              PPV_Grading                                                 OFFSET(get<T>, {0xF90, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           PS_Sundog                                                   OFFSET(get<T>, {0xF98, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           PS_Weather_Test                                             OFFSET(get<T>, {0xFA0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StarField_Mesh                                              OFFSET(get<T>, {0xFA8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               MoonSprite                                                  OFFSET(get<T>, {0xFB0, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         MoonLight                                                   OFFSET(get<T>, {0xFB8, 8, 0, 0})
	CMember(class UExponentialHeightFogComponent*)     ExponentialHeightFog                                        OFFSET(get<T>, {0xFC0, 8, 0, 0})
	CMember(class USkyLightComponent*)                 SkyLight                                                    OFFSET(get<T>, {0xFC8, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         SunLight                                                    OFFSET(get<T>, {0xFD0, 8, 0, 0})
	DMember(float)                                     LocalizedSandSTormDuration_CloudForming_FD313B3C46CD087B330837B51867D59B OFFSET(get<float>, {0xFD8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           LocalizedSandSTormDuration__Direction_FD313B3C46CD087B330837B51867D59B OFFSET(get<T>, {0xFDC, 1, 0, 0})
	CMember(class UTimelineComponent*)                 LocalizedSandSTormDuration                                  OFFSET(get<T>, {0xFE0, 8, 0, 0})
	DMember(float)                                     SandStormLocalizedEndTimeline_CloudForming_48EC10844B3946BED1AF91943BCFCE5F OFFSET(get<float>, {0xFE8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           SandStormLocalizedEndTimeline__Direction_48EC10844B3946BED1AF91943BCFCE5F OFFSET(get<T>, {0xFEC, 1, 0, 0})
	CMember(class UTimelineComponent*)                 SandStormLocalizedEndTimeline                               OFFSET(get<T>, {0xFF0, 8, 0, 0})
	DMember(float)                                     SandStormLocalizedStartTimeline_CloudForming_FC0302A54393F4E652B93DA70E6D86BD OFFSET(get<float>, {0xFF8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           SandStormLocalizedStartTimeline__Direction_FC0302A54393F4E652B93DA70E6D86BD OFFSET(get<T>, {0xFFC, 1, 0, 0})
	CMember(class UTimelineComponent*)                 SandStormLocalizedStartTimeline                             OFFSET(get<T>, {0x1000, 8, 0, 0})
	DMember(float)                                     DustDevilStart_CloudForming_4936C8E444CA8F75521A06A340DEE1D6 OFFSET(get<float>, {0x1008, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           DustDevilStart__Direction_4936C8E444CA8F75521A06A340DEE1D6  OFFSET(get<T>, {0x100C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 DustDevilStart                                              OFFSET(get<T>, {0x1010, 8, 0, 0})
	DMember(float)                                     Sandstorm_Duration_CloudForming_98814F9B46670C5DBF5E65AF5B782971 OFFSET(get<float>, {0x1018, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Sandstorm_Duration__Direction_98814F9B46670C5DBF5E65AF5B782971 OFFSET(get<T>, {0x101C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Sandstorm_Duration                                          OFFSET(get<T>, {0x1020, 8, 0, 0})
	DMember(float)                                     SandStorm_Ending_CloudForming_993E6221403E7EA5E41239BB84985DA2 OFFSET(get<float>, {0x1028, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           SandStorm_Ending__Direction_993E6221403E7EA5E41239BB84985DA2 OFFSET(get<T>, {0x102C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 SandStorm_Ending                                            OFFSET(get<T>, {0x1030, 8, 0, 0})
	DMember(float)                                     Sandstorm_Start_CloudForming_50FB6BE241A032992929E39CD2EFA446 OFFSET(get<float>, {0x1038, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Sandstorm_Start__Direction_50FB6BE241A032992929E39CD2EFA446 OFFSET(get<T>, {0x103C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Sandstorm_Start                                             OFFSET(get<T>, {0x1040, 8, 0, 0})
	DMember(float)                                     DryingTImeline_Drying_88849F99452F247D2C51FCBCD06F9C8E      OFFSET(get<float>, {0x1048, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           DryingTImeline__Direction_88849F99452F247D2C51FCBCD06F9C8E  OFFSET(get<T>, {0x104C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 DryingTImeline                                              OFFSET(get<T>, {0x1050, 8, 0, 0})
	DMember(float)                                     Clouds_Forming_CloudForming_C1BC676946AD6660E80AC4916ADB2A79 OFFSET(get<float>, {0x1058, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Clouds_Forming__Direction_C1BC676946AD6660E80AC4916ADB2A79  OFFSET(get<T>, {0x105C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Clouds_Forming                                              OFFSET(get<T>, {0x1060, 8, 0, 0})
	DMember(float)                                     Timeline_1_CloudForming_12E1DFAF483288166190A1A2D5A908D0    OFFSET(get<float>, {0x1068, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_1__Direction_12E1DFAF483288166190A1A2D5A908D0      OFFSET(get<T>, {0x106C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline                                                    OFFSET(get<T>, {0x1070, 8, 0, 0})
	DMember(float)                                     RainEnd_RainEnd_1385B0EA432B7975987A9D9C9DA3BF03            OFFSET(get<float>, {0x1078, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           RainEnd__Direction_1385B0EA432B7975987A9D9C9DA3BF03         OFFSET(get<T>, {0x107C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 RainEnd                                                     OFFSET(get<T>, {0x1080, 8, 0, 0})
	DMember(float)                                     RainStart_Rain_743FC35B46D68C348439008F88EAA504             OFFSET(get<float>, {0x1088, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           RainStart__Direction_743FC35B46D68C348439008F88EAA504       OFFSET(get<T>, {0x108C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 RainStart                                                   OFFSET(get<T>, {0x1090, 8, 0, 0})
	DMember(bool)                                      UseDebugTime                                                OFFSET(get<bool>, {0x1098, 1, 0, 0})
	DMember(float)                                     DebugTime                                                   OFFSET(get<float>, {0x109C, 4, 0, 0})
	DMember(float)                                     SunRiseAngle                                                OFFSET(get<float>, {0x10A0, 4, 0, 0})
	DMember(float)                                     MoonScale                                                   OFFSET(get<float>, {0x10A4, 4, 0, 0})
	DMember(float)                                     MoonRiseAngle                                               OFFSET(get<float>, {0x10A8, 4, 0, 0})
	DMember(float)                                     MoonOrbitalTilt                                             OFFSET(get<float>, {0x10AC, 4, 0, 0})
	DMember(float)                                     SunMoonSwitchAM                                             OFFSET(get<float>, {0x10B0, 4, 0, 0})
	DMember(float)                                     SunMoonSwitchPM                                             OFFSET(get<float>, {0x10B4, 4, 0, 0})
	DMember(float)                                     SunMoonSwitchFadeRange                                      OFFSET(get<float>, {0x10B8, 4, 0, 0})
	DMember(float)                                     SunFade                                                     OFFSET(get<float>, {0x10BC, 4, 0, 0})
	DMember(float)                                     MoonFade                                                    OFFSET(get<float>, {0x10C0, 4, 0, 0})
	DMember(float)                                     MoonOcclusionAngle                                          OFFSET(get<float>, {0x10C4, 4, 0, 0})
	CMember(TArray<class ATriggerVolume*>)             Container_Volumes                                           OFFSET(get<T>, {0x10C8, 16, 0, 0})
	CMember(TArray<class APatrolNode*>)                Detached_Placement                                          OFFSET(get<T>, {0x10D8, 16, 0, 0})
	DMember(bool)                                      Detachment                                                  OFFSET(get<bool>, {0x10E8, 1, 0, 0})
	CMember(TArray<class AActor*>)                     Weather_Actors                                              OFFSET(get<T>, {0x10F0, 16, 0, 0})
	DMember(bool)                                      BP_Attached_Debug                                           OFFSET(get<bool>, {0x1100, 1, 0, 0})
	SMember(FRotator)                                  Wind_Rotation                                               OFFSET(getStruct<T>, {0x1104, 12, 0, 0})
	DMember(float)                                     Wind_Intensity                                              OFFSET(get<float>, {0x1110, 4, 0, 0})
	DMember(bool)                                      Line_Trace_Events                                           OFFSET(get<bool>, {0x1114, 1, 0, 0})
	CMember(class UAtmosphericFogComponent*)           AtmosphericFogComponent                                     OFFSET(get<T>, {0x1118, 8, 0, 0})
	DMember(float)                                     SunOrbitalPlaneOffsetAngle                                  OFFSET(get<float>, {0x1120, 4, 0, 0})
	DMember(float)                                     SunOrbitalTilt                                              OFFSET(get<float>, {0x1124, 4, 0, 0})
	DMember(float)                                     MoonOrbitalPlaneOffsetAngle                                 OFFSET(get<float>, {0x1128, 4, 0, 0})
	DMember(bool)                                      EnableLogging                                               OFFSET(get<bool>, {0x112C, 1, 0, 0})
	DMember(bool)                                      AutoUpdateDebugTime                                         OFFSET(get<bool>, {0x112D, 1, 0, 0})
	DMember(float)                                     MoonDistance                                                OFFSET(get<float>, {0x1130, 4, 0, 0})
	DMember(float)                                     Sun_BloomScale                                              OFFSET(get<float>, {0x1134, 4, 0, 0})
	DMember(float)                                     Skylight_Contribution                                       OFFSET(get<float>, {0x1138, 4, 0, 0})
	DMember(float)                                     Moon_Bloom_Scale                                            OFFSET(get<float>, {0x113C, 4, 0, 0})
	DMember(float)                                     Moon_Atmosphere_Strength                                    OFFSET(get<float>, {0x1140, 4, 0, 0})
	DMember(float)                                     Sun_Atmosphere_Strength                                     OFFSET(get<float>, {0x1144, 4, 0, 0})
	CMember(TArray<class AStaticMeshActor*>)           Static_Meshes                                               OFFSET(get<T>, {0x1148, 16, 0, 0})
	CMember(TArray<class AStaticMeshActor*>)           Static_Meshes_Masked                                        OFFSET(get<T>, {0x1158, 16, 0, 0})
	SMember(FName)                                     Mat_Param_Name                                              OFFSET(getStruct<T>, {0x1168, 8, 0, 0})
	CMember(TArray<FName>)                             Mat_Slot_Names                                              OFFSET(get<T>, {0x1170, 16, 0, 0})
	CMember(class UCurveFloat*)                        Emissive_Strength                                           OFFSET(get<T>, {0x1180, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   Emissive_MIDs_Mask                                          OFFSET(get<T>, {0x1188, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   Emissive_MIDs                                               OFFSET(get<T>, {0x1198, 16, 0, 0})
	DMember(float)                                     Wind_Intensity_Start                                        OFFSET(get<float>, {0x11A8, 4, 0, 0})
	DMember(bool)                                      Wind_Intensity_Ramp_Up                                      OFFSET(get<bool>, {0x11AC, 1, 0, 0})
	DMember(bool)                                      Random_Weather_Start                                        OFFSET(get<bool>, {0x11AD, 1, 0, 0})
	DMember(float)                                     WeatherCheckDelayDrying                                     OFFSET(get<float>, {0x11B0, 4, 0, 0})
	DMember(float)                                     WeatherDuration                                             OFFSET(get<float>, {0x11B4, 4, 0, 0})
	DMember(float)                                     Weather_Start_Chance                                        OFFSET(get<float>, {0x11B8, 4, 0, 0})
	CMember(class ABP_VF_C*)                           Vector_Field                                                OFFSET(get<T>, {0x11C0, 8, 0, 0})
	DMember(bool)                                      Attached                                                    OFFSET(get<bool>, {0x11C8, 1, 0, 0})
	CMember(class UParticleSystemComponent*)           Spawned_Weather_PS                                          OFFSET(get<T>, {0x11D0, 8, 0, 0})
	DMember(float)                                     Node_Check_Distance                                         OFFSET(get<float>, {0x11D8, 4, 0, 0})
	CMember(TArray<FParticleSysParam>)                 Exterior_Weather_Params                                     OFFSET(get<T>, {0x11E0, 16, 0, 0})
	DMember(bool)                                      Enable_Color_Grading                                        OFFSET(get<bool>, {0x11F0, 1, 0, 0})
	DMember(float)                                     Sun_Volumetric_Contribution                                 OFFSET(get<float>, {0x11F4, 4, 0, 0})
	DMember(float)                                     Moon_Volumetric_Contribution                                OFFSET(get<float>, {0x11F8, 4, 0, 0})
	DMember(float)                                     MoonDynamicShadowDistance                                   OFFSET(get<float>, {0x11FC, 4, 0, 0})
	DMember(float)                                     Sun_Distance                                                OFFSET(get<float>, {0x1200, 4, 0, 0})
	DMember(float)                                     SunNoonScale                                                OFFSET(get<float>, {0x1204, 4, 0, 0})
	DMember(float)                                     SunSunsetScale                                              OFFSET(get<float>, {0x1208, 4, 0, 0})
	CMember(class UParticleSystemComponent*)           Exterior_Rain                                               OFFSET(get<T>, {0x1210, 8, 0, 0})
	DMember(float)                                     SunDynamicShadowDistance                                    OFFSET(get<float>, {0x1218, 4, 0, 0})
	CMember(class UMaterialInterface*)                 SunDiscMaterial                                             OFFSET(get<T>, {0x1220, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      Weather_Start_Event                                         OFFSET(get<T>, {0x1228, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      Weather_End_Event                                           OFFSET(get<T>, {0x1230, 8, 0, 0})
	SMember(FName)                                     Weather_State_Group                                         OFFSET(getStruct<T>, {0x1238, 8, 0, 0})
	DMember(float)                                     NormalizedTimeValue                                         OFFSET(get<float>, {0x1240, 4, 0, 0})
	DMember(bool)                                      UseStepShadow                                               OFFSET(get<bool>, {0x1244, 1, 0, 0})
	DMember(float)                                     StepShadowTimeBetweenUpdates                                OFFSET(get<float>, {0x1248, 4, 0, 0})
	DMember(float)                                     StepShadowUpdateLength                                      OFFSET(get<float>, {0x124C, 4, 0, 0})
	DMember(float)                                     CalendarRawHour                                             OFFSET(get<float>, {0x1250, 4, 0, 0})
	DMember(bool)                                      UseBellCurveForBloomAndExposure                             OFFSET(get<bool>, {0x1254, 1, 0, 0})
	CMember(class UCurveFloat*)                        SunElevation                                                OFFSET(get<T>, {0x1258, 8, 0, 0})
	CMember(class UCurveFloat*)                        MoonElevation                                               OFFSET(get<T>, {0x1260, 8, 0, 0})
	CMember(class UCurveVector*)                       RainAndLightMask                                            OFFSET(get<T>, {0x1268, 8, 0, 0})
	DMember(float)                                     DebugWeather                                                OFFSET(get<float>, {0x1270, 4, 0, 0})
	DMember(float)                                     Wetness                                                     OFFSET(get<float>, {0x1274, 4, 0, 0})
	CMember(class UCurveVector*)                       MaterialWetness                                             OFFSET(get<T>, {0x1278, 8, 0, 0})
	CMember(class UCurveVector*)                       RainParticles                                               OFFSET(get<T>, {0x1280, 8, 0, 0})
	CMember(class UCurveVector*)                       MaterialSpecularNearFar                                     OFFSET(get<T>, {0x1288, 8, 0, 0})
	CMember(class UCurveVector*)                       WetMaterialSpecularNearFar                                  OFFSET(get<T>, {0x1290, 8, 0, 0})
	DMember(bool)                                      AudioIsRaining                                              OFFSET(get<bool>, {0x1298, 1, 0, 0})
	DMember(bool)                                      EnableWeather                                               OFFSET(get<bool>, {0x1299, 1, 0, 0})
	CMember(class UCurveVector*)                       WetSkyProbeMipBrightness                                    OFFSET(get<T>, {0x12A0, 8, 0, 0})
	CMember(class UCurveVector*)                       DrySkyProbeMipBrightness                                    OFFSET(get<T>, {0x12A8, 8, 0, 0})
	DMember(float)                                     RandomWindGenerator                                         OFFSET(get<float>, {0x12B0, 4, 0, 0})
	DMember(float)                                     RandomWeather                                               OFFSET(get<float>, {0x12B4, 4, 0, 0})
	CMember(class UParticleSystem*)                    Rain                                                        OFFSET(get<T>, {0x12B8, 8, 0, 0})
	DMember(bool)                                      CloudDebug                                                  OFFSET(get<bool>, {0x12C0, 1, 0, 0})
	DMember(bool)                                      LightSwitchCondition                                        OFFSET(get<bool>, {0x12C1, 1, 0, 0})
	DMember(float)                                     FogWeatherDens                                              OFFSET(get<float>, {0x12C4, 4, 0, 0})
	DMember(float)                                     FogWeatherDensity                                           OFFSET(get<float>, {0x12C8, 4, 0, 0})
	DMember(float)                                     WeatherTransition                                           OFFSET(get<float>, {0x12CC, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        FogDensityCurve_Runtime                                     OFFSET(getStruct<T>, {0x12D0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        FogHeightFalloffCurve_Runtime                               OFFSET(getStruct<T>, {0x1358, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        FogExtinctionScaleCurve_Runtime                             OFFSET(getStruct<T>, {0x13E0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        TimeOfDayCurve_Runtime                                      OFFSET(getStruct<T>, {0x1468, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        SunriseSunsetCurve_Runtime                                  OFFSET(getStruct<T>, {0x14F0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        WeatherStartCurve_Runtime                                   OFFSET(getStruct<T>, {0x1578, 136, 0, 0})
	DMember(float)                                     WetnessEnd                                                  OFFSET(get<float>, {0x1600, 4, 0, 0})
	DMember(float)                                     WindIntensityEnd                                            OFFSET(get<float>, {0x1604, 4, 0, 0})
	DMember(float)                                     WeatherEnding                                               OFFSET(get<float>, {0x1608, 4, 0, 0})
	DMember(float)                                     CloudsForming                                               OFFSET(get<float>, {0x160C, 4, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  SkyLuminanceFactor                                          OFFSET(getStruct<T>, {0x1610, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  SkylightColorCurveRuntime                                   OFFSET(getStruct<T>, {0x1818, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  VolumetricFogInscatteringColorRuntime                       OFFSET(getStruct<T>, {0x1A20, 520, 0, 0})
	DMember(bool)                                      RainAtatch                                                  OFFSET(get<bool>, {0x1C28, 1, 0, 0})
	CMember(TArray<class ABP_CloudMask_Object_C*>)     Cloud_Storm                                                 OFFSET(get<T>, {0x1C30, 16, 0, 0})
	CMember(class AActor*)                             OverlappedVolume                                            OFFSET(get<T>, {0x1C40, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        Sun_Light_Intensity_Storm                                   OFFSET(getStruct<T>, {0x1C48, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Sun_Light_Intensity_Storm_Start                             OFFSET(getStruct<T>, {0x1CD0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Moon_Light_Intensity_Storm                                  OFFSET(getStruct<T>, {0x1D58, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Moon_Light_Intensity_Storm_Start                            OFFSET(getStruct<T>, {0x1DE0, 136, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  Sun_Light_Color_Storm_Start                                 OFFSET(getStruct<T>, {0x1E68, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  Moon_Light_Color_Storm_start                                OFFSET(getStruct<T>, {0x2070, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  Sun_Light_Color_Storm                                       OFFSET(getStruct<T>, {0x2278, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  Moon_Light_Color_Storm                                      OFFSET(getStruct<T>, {0x2480, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  SkyLuminanceFactor_Storm                                    OFFSET(getStruct<T>, {0x2688, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  SkylightColorCurveRuntime_Storm                             OFFSET(getStruct<T>, {0x2890, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  VolumetricFogInscatteringColorRuntime_Storm                 OFFSET(getStruct<T>, {0x2A98, 520, 0, 0})
	DMember(bool)                                      UseStorm                                                    OFFSET(get<bool>, {0x2CA0, 1, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  SkyLuminanceFactor_Storm_Start                              OFFSET(getStruct<T>, {0x2CA8, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  SkylightColorCurveRuntime_Storm_Start                       OFFSET(getStruct<T>, {0x2EB0, 520, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  VolumetricFogInscatteringColorRuntime_Storm_Start           OFFSET(getStruct<T>, {0x30B8, 520, 0, 0})
	DMember(float)                                     CloudPosition                                               OFFSET(get<float>, {0x32C0, 4, 0, 0})
	DMember(float)                                     Cloud_Direction_X                                           OFFSET(get<float>, {0x32C4, 4, 0, 0})
	DMember(float)                                     Cloud_Direction_Y                                           OFFSET(get<float>, {0x32C8, 4, 0, 0})
	DMember(float)                                     RainDirectionStrength                                       OFFSET(get<float>, {0x32CC, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x32D0, 4, 0, 0})
	DMember(float)                                     SandStormDensity                                            OFFSET(get<float>, {0x32D4, 4, 0, 0})
	DMember(int32_t)                                   TotalDustDevils                                             OFFSET(get<int32_t>, {0x32D8, 4, 0, 0})
	DMember(int32_t)                                   DustDevilsInMap                                             OFFSET(get<int32_t>, {0x32DC, 4, 0, 0})
	DMember(int32_t)                                   DustDevilsLeft                                              OFFSET(get<int32_t>, {0x32E0, 4, 0, 0})
	CMember(TArray<class ANiagaraActor*>)              Dust_Actors                                                 OFFSET(get<T>, {0x32E8, 16, 0, 0})
	DMember(bool)                                      CloudFormingEnded                                           OFFSET(get<bool>, {0x32F8, 1, 0, 0})
	DMember(bool)                                      WeatherStarted                                              OFFSET(get<bool>, {0x32F9, 1, 0, 0})
	DMember(bool)                                      RainStarted_Ended                                           OFFSET(get<bool>, {0x32FA, 1, 0, 0})
	DMember(bool)                                      WeatherEnd_Ended                                            OFFSET(get<bool>, {0x32FB, 1, 0, 0})
	DMember(float)                                     DustDevil_Distance                                          OFFSET(get<float>, {0x32FC, 4, 0, 0})
	DMember(float)                                     DustDevilWaitMin                                            OFFSET(get<float>, {0x3300, 4, 0, 0})
	DMember(bool)                                      Dust_Devil_Start_                                           OFFSET(get<bool>, {0x3304, 1, 0, 0})
	DMember(float)                                     DustDevilWaitMax                                            OFFSET(get<float>, {0x3308, 4, 0, 0})
	DMember(float)                                     DustDevilWait                                               OFFSET(get<float>, {0x330C, 4, 0, 0})
	DMember(float)                                     DustDevilDuration                                           OFFSET(get<float>, {0x3310, 4, 0, 0})
	DMember(float)                                     CloudsTime                                                  OFFSET(get<float>, {0x3314, 4, 0, 0})
	DMember(bool)                                      SandstormLocalizedStart                                     OFFSET(get<bool>, {0x3318, 1, 0, 0})
	DMember(float)                                     SandStormLocStartEndWait                                    OFFSET(get<float>, {0x331C, 4, 0, 0})
	DMember(float)                                     SandStormlocalizedMax                                       OFFSET(get<float>, {0x3320, 4, 0, 0})
	DMember(float)                                     SandStormlocalizedMin                                       OFFSET(get<float>, {0x3324, 4, 0, 0})
	DMember(float)                                     SandStorLocalizedDurationWait                               OFFSET(get<float>, {0x3328, 4, 0, 0})
	DMember(float)                                     SandStormStartDurationWait                                  OFFSET(get<float>, {0x332C, 4, 0, 0})
	DMember(float)                                     SandStormlocalizedStartWait                                 OFFSET(get<float>, {0x3330, 4, 0, 0})
	DMember(float)                                     SandStormLocalized_Distance                                 OFFSET(get<float>, {0x3334, 4, 0, 0})
	CMember(class ANiagaraActor*)                      SandStormNearest                                            OFFSET(get<T>, {0x3338, 8, 0, 0})
	CMember(class ANiagaraActor*)                      LocalizedStormNearest                                       OFFSET(get<T>, {0x3340, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  Niagara_Component                                           OFFSET(get<T>, {0x3348, 8, 0, 0})
	CMember(class ANiagaraActor*)                      Array_Element                                               OFFSET(get<T>, {0x3350, 8, 0, 0})
	CMember(TArray<class AActor*>)                     Lightning_Actors                                            OFFSET(get<T>, {0x3358, 16, 0, 0})
	CMember(TArray<class APostProcessVolume*>)         SandStormPostProcess                                        OFFSET(get<T>, {0x3368, 16, 0, 0})
	CMember(class APostProcessVolume*)                 PP_Array_Element                                            OFFSET(get<T>, {0x3378, 8, 0, 0})
	DMember(float)                                     StormFogStrenght                                            OFFSET(get<float>, {0x3380, 4, 0, 0})
	DMember(bool)                                      SandStormFormingStarted                                     OFFSET(get<bool>, {0x3384, 1, 0, 0})
	DMember(bool)                                      SandStormFormingEnd                                         OFFSET(get<bool>, {0x3385, 1, 0, 0})
	DMember(bool)                                      SandStormDurationEnd                                        OFFSET(get<bool>, {0x3386, 1, 0, 0})
	DMember(float)                                     SandStormEndDurationWait                                    OFFSET(get<float>, {0x3388, 4, 0, 0})
	DMember(float)                                     WeatherDrying                                               OFFSET(get<float>, {0x338C, 4, 0, 0})
	SMember(FRuntimeCurveLinearColor)                  SunColor                                                    OFFSET(getStruct<T>, {0x3390, 520, 0, 0})
	DMember(bool)                                      SanstormFog                                                 OFFSET(get<bool>, {0x3598, 1, 0, 0})
	DMember(float)                                     Fog_Density                                                 OFFSET(get<float>, {0x359C, 4, 0, 0})


	/// Functions
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormFog
	// void SandStormFog(float Value);                                                                                          // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sand Storm Postprocess Actors
	// void Sand Storm Postprocess Actors();                                                                                    // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Lightning
	// void Lightning();                                                                                                        // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Reset Weather
	// void Reset Weather();                                                                                                    // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SaveWeatherValues_BP
	// void SaveWeatherValues_BP(class UWeatherStateContainer*& Output);                                                        // [0x1c5deb0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Set Weather Values
	// void Set Weather Values(class UWeatherStateContainer* NewParam);                                                         // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormObjectStored
	// void SandStormObjectStored();                                                                                            // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormProperties
	// void SandStormProperties();                                                                                              // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DustDevil
	// void DustDevil();                                                                                                        // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormEnd
	// void SandStormEnd(float Timeline, float WindIntensityEnd);                                                               // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormTime
	// void SandStormTime();                                                                                                    // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.UseCustomLight
	// void UseCustomLight();                                                                                                   // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormStart
	// void SandStormStart(float RandomWindGenerator, float Timeline);                                                          // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.RainStormTime
	// void RainStormTime();                                                                                                    // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.RainSetup
	// void RainSetup(float Timeline, float RandomWindGenerator);                                                               // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Weather Lighting End
	// void Weather Lighting End(float Timeline);                                                                               // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.LightingCurvesDefinition
	// void LightingCurvesDefinition();                                                                                         // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Weather Lighting Start
	// void Weather Lighting Start(float Timeline);                                                                             // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DynamicPostProcessesAndCloud
	// void DynamicPostProcessesAndCloud();                                                                                     // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.WeatherEnd
	// void WeatherEnd(float WeatherCondition);                                                                                 // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.WeatherStart
	// void WeatherStart(float WeatherCondition, float Wetness);                                                                // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SetWetnessDependentMPC
	// void SetWetnessDependentMPC(float Wetness);                                                                              // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherWwiseStateName
	// FName GetWeatherWwiseStateName();                                                                                        // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherParticleSystem
	// class UParticleSystem* GetWeatherParticleSystem();                                                                       // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_SetShadowMovementMode
	// void FOR_REFERENCE_ONLY_SetShadowMovementMode();                                                                         // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep
	// void FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep(float NormalizedTime, float OrbitalPlaneOffsetAngle, float OrbitalTilt, float RiseAngle, class UCurveFloat* ElevationCurve, FRotator& FinalRotation, FVector& FinalVector); // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.VFX_Material_Update
	// void VFX_Material_Update();                                                                                              // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialBody
	// void FOR_REFERENCE_ONLY_RotateCelestialBody(float NormalizedTime, float OrbitalPlaneOffsetAngle, float OrbitalTilt, float RiseAngle, class UCurveFloat* ElevationCurve, FRotator& FinalRotation, FVector& FinalVector); // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_LightAngle
	// void FOR_REFERENCE_ONLY_LightAngle(class UDirectionalLightComponent* DirectionalLight, float& Angle);                    // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1c5deb0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.RainStart__FinishedFunc
	// void RainStart__FinishedFunc();                                                                                          // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.RainStart__UpdateFunc
	// void RainStart__UpdateFunc();                                                                                            // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.RainEnd__FinishedFunc
	// void RainEnd__FinishedFunc();                                                                                            // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.RainEnd__UpdateFunc
	// void RainEnd__UpdateFunc();                                                                                              // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DryingTImeline__FinishedFunc
	// void DryingTImeline__FinishedFunc();                                                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DryingTImeline__UpdateFunc
	// void DryingTImeline__UpdateFunc();                                                                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Clouds Forming__FinishedFunc
	// void Clouds Forming__FinishedFunc();                                                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Clouds Forming__UpdateFunc
	// void Clouds Forming__UpdateFunc();                                                                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Start__FinishedFunc
	// void Sandstorm Start__FinishedFunc();                                                                                    // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Start__UpdateFunc
	// void Sandstorm Start__UpdateFunc();                                                                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Duration__FinishedFunc
	// void Sandstorm Duration__FinishedFunc();                                                                                 // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Duration__UpdateFunc
	// void Sandstorm Duration__UpdateFunc();                                                                                   // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStorm Ending__FinishedFunc
	// void SandStorm Ending__FinishedFunc();                                                                                   // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStorm Ending__UpdateFunc
	// void SandStorm Ending__UpdateFunc();                                                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DustDevilStart__FinishedFunc
	// void DustDevilStart__FinishedFunc();                                                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DustDevilStart__UpdateFunc
	// void DustDevilStart__UpdateFunc();                                                                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormLocalizedStartTimeline__FinishedFunc
	// void SandStormLocalizedStartTimeline__FinishedFunc();                                                                    // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormLocalizedStartTimeline__UpdateFunc
	// void SandStormLocalizedStartTimeline__UpdateFunc();                                                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormLocalizedEndTimeline__FinishedFunc
	// void SandStormLocalizedEndTimeline__FinishedFunc();                                                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormLocalizedEndTimeline__UpdateFunc
	// void SandStormLocalizedEndTimeline__UpdateFunc();                                                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.LocalizedSandSTormDuration__FinishedFunc
	// void LocalizedSandSTormDuration__FinishedFunc();                                                                         // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.LocalizedSandSTormDuration__UpdateFunc
	// void LocalizedSandSTormDuration__UpdateFunc();                                                                           // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Refresh Settings
	// void Refresh Settings();                                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_PP_BlendEvent
	// void DEPRECATED_PP_BlendEvent();                                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.ToggleStepShadow
	// void ToggleStepShadow();                                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SetStepShadow
	// void SetStepShadow(float TimeBetweenUpdates, float UpdateLength);                                                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SetWetness
	// void SetWetness(float Wetness);                                                                                          // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_End_Overlap_Container
	// void DEPRECATED_End_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor);                          // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateForward
	// void WeatherTimelineUpdateForward(float CurrentWeatherAmount, float CurrentMaterialWetness);                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateReverse
	// void WeatherTimelineUpdateReverse(float CurrentWeatherAmount, float CurrentMaterialWetness);                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Begin_Overlap_Container
	// void DEPRECATED_Begin_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor);                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Rain_Start
	// void Rain_Start(float TimeIn);                                                                                           // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Weather_End
	// void Weather_End(float TimeIn);                                                                                          // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Drying
	// void Drying(float TimeIn);                                                                                               // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.CloudForming
	// void CloudForming(float TimeIn);                                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.BreakLoop
	// void BreakLoop();                                                                                                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormForming
	// void SandStormForming(float Time);                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormDuration
	// void SandStormDuration(float Time);                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.BreakLoopSandstorm
	// void BreakLoopSandstorm();                                                                                               // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormEnding
	// void SandStormEnding(float Time);                                                                                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Dust Devil System
	// void Dust Devil System();                                                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Transition
	// void Transition();                                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Dust Devil Duration
	// void Dust Devil Duration();                                                                                              // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Localized Sandstorm Start
	// void Localized Sandstorm Start(float Time);                                                                              // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Localized Sandstorm End
	// void Localized Sandstorm End(float Time);                                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormLocalizedDuration
	// void SandStormLocalizedDuration(float Time);                                                                             // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.StartSaveWeather
	// void StartSaveWeather();                                                                                                 // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.ExecuteUbergraph_BP_DynamicTOD
	// void ExecuteUbergraph_BP_DynamicTOD(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final|HasDefaults    
};

