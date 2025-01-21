
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: Art
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Indiana
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Class /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C
/// Size: 0x35A0 (13728 bytes) (0x000EE8 - 0x0035A0) align 8 MaxSize: 0x35A0
class ABP_DynamicTOD_C : public ADynamicTOD
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0EE8   (0x0008)  
	class UPostProcessComponent*                       PostProcessGlobal;                                          // 0x0EF0   (0x0008)  
	class UNiagaraComponent*                           NS_lightning_Strike;                                        // 0x0EF8   (0x0008)  
	class UChildActorComponent*                        BP_CurveProfileTo_RT;                                       // 0x0F00   (0x0008)  
	class UNiagaraComponent*                           NS_DustDevil;                                               // 0x0F08   (0x0008)  
	class UNiagaraComponent*                           PS_Weather;                                                 // 0x0F10   (0x0008)  
	class UPostProcessComponent*                       PostProcessWeatherStorm;                                    // 0x0F18   (0x0008)  
	class UExponentialHeightFogComponent*              NextGenFog;                                                 // 0x0F20   (0x0008)  
	class UParticleSystemComponent*                    PS_Rain_Player;                                             // 0x0F28   (0x0008)  
	class UVolumetricCloudComponent*                   VolumetricCloud;                                            // 0x0F30   (0x0008)  
	class UPostProcessComponent*                       PostProcessSunset;                                          // 0x0F38   (0x0008)  
	class USkyAtmosphereComponent*                     SkyAtmosphere;                                              // 0x0F40   (0x0008)  
	class UPostProcessComponent*                       PostProcessSunrise;                                         // 0x0F48   (0x0008)  
	class UStaticMeshComponent*                        StarFieldHemisphereSection3;                                // 0x0F50   (0x0008)  
	class UStaticMeshComponent*                        StarFieldHemisphereSection2;                                // 0x0F58   (0x0008)  
	class UStaticMeshComponent*                        StarFieldHemisphereSection1;                                // 0x0F60   (0x0008)  
	class UPostProcessComponent*                       PostProcessNight;                                           // 0x0F68   (0x0008)  
	class UPostProcessComponent*                       PostProcessDay;                                             // 0x0F70   (0x0008)  
	class UStaticMeshComponent*                        SunFlare;                                                   // 0x0F78   (0x0008)  
	class UStaticMeshComponent*                        SunSprite;                                                  // 0x0F80   (0x0008)  
	class UPostProcessComponent*                       PPV_LensEffects;                                            // 0x0F88   (0x0008)  
	class UPostProcessComponent*                       PPV_Grading;                                                // 0x0F90   (0x0008)  
	class UParticleSystemComponent*                    PS_Sundog;                                                  // 0x0F98   (0x0008)  
	class UParticleSystemComponent*                    PS_Weather_Test;                                            // 0x0FA0   (0x0008)  
	class UStaticMeshComponent*                        StarField_Mesh;                                             // 0x0FA8   (0x0008)  
	class UStaticMeshComponent*                        MoonSprite;                                                 // 0x0FB0   (0x0008)  
	class UDirectionalLightComponent*                  MoonLight;                                                  // 0x0FB8   (0x0008)  
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                       // 0x0FC0   (0x0008)  
	class USkyLightComponent*                          SkyLight;                                                   // 0x0FC8   (0x0008)  
	class UDirectionalLightComponent*                  SunLight;                                                   // 0x0FD0   (0x0008)  
	float                                              LocalizedSandSTormDuration_CloudForming_FD313B3C46CD087B330837B51867D59B; // 0x0FD8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    LocalizedSandSTormDuration__Direction_FD313B3C46CD087B330837B51867D59B; // 0x0FDC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0FDD   (0x0003)  MISSED
	class UTimelineComponent*                          LocalizedSandSTormDuration;                                 // 0x0FE0   (0x0008)  
	float                                              SandStormLocalizedEndTimeline_CloudForming_48EC10844B3946BED1AF91943BCFCE5F; // 0x0FE8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    SandStormLocalizedEndTimeline__Direction_48EC10844B3946BED1AF91943BCFCE5F; // 0x0FEC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0FED   (0x0003)  MISSED
	class UTimelineComponent*                          SandStormLocalizedEndTimeline;                              // 0x0FF0   (0x0008)  
	float                                              SandStormLocalizedStartTimeline_CloudForming_FC0302A54393F4E652B93DA70E6D86BD; // 0x0FF8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    SandStormLocalizedStartTimeline__Direction_FC0302A54393F4E652B93DA70E6D86BD; // 0x0FFC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0FFD   (0x0003)  MISSED
	class UTimelineComponent*                          SandStormLocalizedStartTimeline;                            // 0x1000   (0x0008)  
	float                                              DustDevilStart_CloudForming_4936C8E444CA8F75521A06A340DEE1D6; // 0x1008   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DustDevilStart__Direction_4936C8E444CA8F75521A06A340DEE1D6; // 0x100C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x100D   (0x0003)  MISSED
	class UTimelineComponent*                          DustDevilStart;                                             // 0x1010   (0x0008)  
	float                                              Sandstorm_Duration_CloudForming_98814F9B46670C5DBF5E65AF5B782971; // 0x1018   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Sandstorm_Duration__Direction_98814F9B46670C5DBF5E65AF5B782971; // 0x101C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x101D   (0x0003)  MISSED
	class UTimelineComponent*                          Sandstorm_Duration;                                         // 0x1020   (0x0008)  
	float                                              SandStorm_Ending_CloudForming_993E6221403E7EA5E41239BB84985DA2; // 0x1028   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    SandStorm_Ending__Direction_993E6221403E7EA5E41239BB84985DA2; // 0x102C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x102D   (0x0003)  MISSED
	class UTimelineComponent*                          SandStorm_Ending;                                           // 0x1030   (0x0008)  
	float                                              Sandstorm_Start_CloudForming_50FB6BE241A032992929E39CD2EFA446; // 0x1038   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Sandstorm_Start__Direction_50FB6BE241A032992929E39CD2EFA446; // 0x103C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x103D   (0x0003)  MISSED
	class UTimelineComponent*                          Sandstorm_Start;                                            // 0x1040   (0x0008)  
	float                                              DryingTImeline_Drying_88849F99452F247D2C51FCBCD06F9C8E;     // 0x1048   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DryingTImeline__Direction_88849F99452F247D2C51FCBCD06F9C8E; // 0x104C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x104D   (0x0003)  MISSED
	class UTimelineComponent*                          DryingTImeline;                                             // 0x1050   (0x0008)  
	float                                              Clouds_Forming_CloudForming_C1BC676946AD6660E80AC4916ADB2A79; // 0x1058   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Clouds_Forming__Direction_C1BC676946AD6660E80AC4916ADB2A79; // 0x105C   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x105D   (0x0003)  MISSED
	class UTimelineComponent*                          Clouds_Forming;                                             // 0x1060   (0x0008)  
	float                                              Timeline_1_CloudForming_12E1DFAF483288166190A1A2D5A908D0;   // 0x1068   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_12E1DFAF483288166190A1A2D5A908D0;     // 0x106C   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x106D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x1070   (0x0008)  
	float                                              RainEnd_RainEnd_1385B0EA432B7975987A9D9C9DA3BF03;           // 0x1078   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    RainEnd__Direction_1385B0EA432B7975987A9D9C9DA3BF03;        // 0x107C   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x107D   (0x0003)  MISSED
	class UTimelineComponent*                          RainEnd;                                                    // 0x1080   (0x0008)  
	float                                              RainStart_Rain_743FC35B46D68C348439008F88EAA504;            // 0x1088   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    RainStart__Direction_743FC35B46D68C348439008F88EAA504;      // 0x108C   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x108D   (0x0003)  MISSED
	class UTimelineComponent*                          RainStart;                                                  // 0x1090   (0x0008)  
	bool                                               UseDebugTime;                                               // 0x1098   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x1099   (0x0003)  MISSED
	float                                              DebugTime;                                                  // 0x109C   (0x0004)  
	float                                              SunRiseAngle;                                               // 0x10A0   (0x0004)  
	float                                              MoonScale;                                                  // 0x10A4   (0x0004)  
	float                                              MoonRiseAngle;                                              // 0x10A8   (0x0004)  
	float                                              MoonOrbitalTilt;                                            // 0x10AC   (0x0004)  
	float                                              SunMoonSwitchAM;                                            // 0x10B0   (0x0004)  
	float                                              SunMoonSwitchPM;                                            // 0x10B4   (0x0004)  
	float                                              SunMoonSwitchFadeRange;                                     // 0x10B8   (0x0004)  
	float                                              SunFade;                                                    // 0x10BC   (0x0004)  
	float                                              MoonFade;                                                   // 0x10C0   (0x0004)  
	float                                              MoonOcclusionAngle;                                         // 0x10C4   (0x0004)  
	TArray<class ATriggerVolume*>                      Container_Volumes;                                          // 0x10C8   (0x0010)  
	TArray<class APatrolNode*>                         Detached_Placement;                                         // 0x10D8   (0x0010)  
	bool                                               Detachment;                                                 // 0x10E8   (0x0001)  
	unsigned char                                      UnknownData13_6[0x7];                                       // 0x10E9   (0x0007)  MISSED
	TArray<class AActor*>                              Weather_Actors;                                             // 0x10F0   (0x0010)  
	bool                                               BP_Attached_Debug;                                          // 0x1100   (0x0001)  
	unsigned char                                      UnknownData14_6[0x3];                                       // 0x1101   (0x0003)  MISSED
	FRotator                                           Wind_Rotation;                                              // 0x1104   (0x000C)  
	float                                              Wind_Intensity;                                             // 0x1110   (0x0004)  
	bool                                               Line_Trace_Events;                                          // 0x1114   (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x1115   (0x0003)  MISSED
	class UAtmosphericFogComponent*                    AtmosphericFogComponent;                                    // 0x1118   (0x0008)  
	float                                              SunOrbitalPlaneOffsetAngle;                                 // 0x1120   (0x0004)  
	float                                              SunOrbitalTilt;                                             // 0x1124   (0x0004)  
	float                                              MoonOrbitalPlaneOffsetAngle;                                // 0x1128   (0x0004)  
	bool                                               EnableLogging;                                              // 0x112C   (0x0001)  
	bool                                               AutoUpdateDebugTime;                                        // 0x112D   (0x0001)  
	unsigned char                                      UnknownData16_6[0x2];                                       // 0x112E   (0x0002)  MISSED
	float                                              MoonDistance;                                               // 0x1130   (0x0004)  
	float                                              Sun_BloomScale;                                             // 0x1134   (0x0004)  
	float                                              Skylight_Contribution;                                      // 0x1138   (0x0004)  
	float                                              Moon_Bloom_Scale;                                           // 0x113C   (0x0004)  
	float                                              Moon_Atmosphere_Strength;                                   // 0x1140   (0x0004)  
	float                                              Sun_Atmosphere_Strength;                                    // 0x1144   (0x0004)  
	TArray<class AStaticMeshActor*>                    Static_Meshes;                                              // 0x1148   (0x0010)  
	TArray<class AStaticMeshActor*>                    Static_Meshes_Masked;                                       // 0x1158   (0x0010)  
	FName                                              Mat_Param_Name;                                             // 0x1168   (0x0008)  
	TArray<FName>                                      Mat_Slot_Names;                                             // 0x1170   (0x0010)  
	class UCurveFloat*                                 Emissive_Strength;                                          // 0x1180   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            Emissive_MIDs_Mask;                                         // 0x1188   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            Emissive_MIDs;                                              // 0x1198   (0x0010)  
	float                                              Wind_Intensity_Start;                                       // 0x11A8   (0x0004)  
	bool                                               Wind_Intensity_Ramp_Up;                                     // 0x11AC   (0x0001)  
	bool                                               Random_Weather_Start;                                       // 0x11AD   (0x0001)  
	unsigned char                                      UnknownData17_6[0x2];                                       // 0x11AE   (0x0002)  MISSED
	float                                              WeatherCheckDelayDrying;                                    // 0x11B0   (0x0004)  
	float                                              WeatherDuration;                                            // 0x11B4   (0x0004)  
	float                                              Weather_Start_Chance;                                       // 0x11B8   (0x0004)  
	unsigned char                                      UnknownData18_6[0x4];                                       // 0x11BC   (0x0004)  MISSED
	class ABP_VF_C*                                    Vector_Field;                                               // 0x11C0   (0x0008)  
	bool                                               Attached;                                                   // 0x11C8   (0x0001)  
	unsigned char                                      UnknownData19_6[0x7];                                       // 0x11C9   (0x0007)  MISSED
	class UParticleSystemComponent*                    Spawned_Weather_PS;                                         // 0x11D0   (0x0008)  
	float                                              Node_Check_Distance;                                        // 0x11D8   (0x0004)  
	unsigned char                                      UnknownData20_6[0x4];                                       // 0x11DC   (0x0004)  MISSED
	TArray<FParticleSysParam>                          Exterior_Weather_Params;                                    // 0x11E0   (0x0010)  
	bool                                               Enable_Color_Grading;                                       // 0x11F0   (0x0001)  
	unsigned char                                      UnknownData21_6[0x3];                                       // 0x11F1   (0x0003)  MISSED
	float                                              Sun_Volumetric_Contribution;                                // 0x11F4   (0x0004)  
	float                                              Moon_Volumetric_Contribution;                               // 0x11F8   (0x0004)  
	float                                              MoonDynamicShadowDistance;                                  // 0x11FC   (0x0004)  
	float                                              Sun_Distance;                                               // 0x1200   (0x0004)  
	float                                              SunNoonScale;                                               // 0x1204   (0x0004)  
	float                                              SunSunsetScale;                                             // 0x1208   (0x0004)  
	unsigned char                                      UnknownData22_6[0x4];                                       // 0x120C   (0x0004)  MISSED
	class UParticleSystemComponent*                    Exterior_Rain;                                              // 0x1210   (0x0008)  
	float                                              SunDynamicShadowDistance;                                   // 0x1218   (0x0004)  
	unsigned char                                      UnknownData23_6[0x4];                                       // 0x121C   (0x0004)  MISSED
	class UMaterialInterface*                          SunDiscMaterial;                                            // 0x1220   (0x0008)  
	class UAkAudioEvent*                               Weather_Start_Event;                                        // 0x1228   (0x0008)  
	class UAkAudioEvent*                               Weather_End_Event;                                          // 0x1230   (0x0008)  
	FName                                              Weather_State_Group;                                        // 0x1238   (0x0008)  
	float                                              NormalizedTimeValue;                                        // 0x1240   (0x0004)  
	bool                                               UseStepShadow;                                              // 0x1244   (0x0001)  
	unsigned char                                      UnknownData24_6[0x3];                                       // 0x1245   (0x0003)  MISSED
	float                                              StepShadowTimeBetweenUpdates;                               // 0x1248   (0x0004)  
	float                                              StepShadowUpdateLength;                                     // 0x124C   (0x0004)  
	float                                              CalendarRawHour;                                            // 0x1250   (0x0004)  
	bool                                               UseBellCurveForBloomAndExposure;                            // 0x1254   (0x0001)  
	unsigned char                                      UnknownData25_6[0x3];                                       // 0x1255   (0x0003)  MISSED
	class UCurveFloat*                                 SunElevation;                                               // 0x1258   (0x0008)  
	class UCurveFloat*                                 MoonElevation;                                              // 0x1260   (0x0008)  
	class UCurveVector*                                RainAndLightMask;                                           // 0x1268   (0x0008)  
	float                                              DebugWeather;                                               // 0x1270   (0x0004)  
	float                                              Wetness;                                                    // 0x1274   (0x0004)  
	class UCurveVector*                                MaterialWetness;                                            // 0x1278   (0x0008)  
	class UCurveVector*                                RainParticles;                                              // 0x1280   (0x0008)  
	class UCurveVector*                                MaterialSpecularNearFar;                                    // 0x1288   (0x0008)  
	class UCurveVector*                                WetMaterialSpecularNearFar;                                 // 0x1290   (0x0008)  
	bool                                               AudioIsRaining;                                             // 0x1298   (0x0001)  
	bool                                               EnableWeather;                                              // 0x1299   (0x0001)  
	unsigned char                                      UnknownData26_6[0x6];                                       // 0x129A   (0x0006)  MISSED
	class UCurveVector*                                WetSkyProbeMipBrightness;                                   // 0x12A0   (0x0008)  
	class UCurveVector*                                DrySkyProbeMipBrightness;                                   // 0x12A8   (0x0008)  
	float                                              RandomWindGenerator;                                        // 0x12B0   (0x0004)  
	float                                              RandomWeather;                                              // 0x12B4   (0x0004)  
	class UParticleSystem*                             Rain;                                                       // 0x12B8   (0x0008)  
	bool                                               CloudDebug;                                                 // 0x12C0   (0x0001)  
	bool                                               LightSwitchCondition;                                       // 0x12C1   (0x0001)  
	unsigned char                                      UnknownData27_6[0x2];                                       // 0x12C2   (0x0002)  MISSED
	float                                              FogWeatherDens;                                             // 0x12C4   (0x0004)  
	float                                              FogWeatherDensity;                                          // 0x12C8   (0x0004)  
	float                                              WeatherTransition;                                          // 0x12CC   (0x0004)  
	FRuntimeFloatCurve                                 FogDensityCurve_Runtime;                                    // 0x12D0   (0x0088)  
	FRuntimeFloatCurve                                 FogHeightFalloffCurve_Runtime;                              // 0x1358   (0x0088)  
	FRuntimeFloatCurve                                 FogExtinctionScaleCurve_Runtime;                            // 0x13E0   (0x0088)  
	FRuntimeFloatCurve                                 TimeOfDayCurve_Runtime;                                     // 0x1468   (0x0088)  
	FRuntimeFloatCurve                                 SunriseSunsetCurve_Runtime;                                 // 0x14F0   (0x0088)  
	FRuntimeFloatCurve                                 WeatherStartCurve_Runtime;                                  // 0x1578   (0x0088)  
	float                                              WetnessEnd;                                                 // 0x1600   (0x0004)  
	float                                              WindIntensityEnd;                                           // 0x1604   (0x0004)  
	float                                              WeatherEnding;                                              // 0x1608   (0x0004)  
	float                                              CloudsForming;                                              // 0x160C   (0x0004)  
	FRuntimeCurveLinearColor                           SkyLuminanceFactor;                                         // 0x1610   (0x0208)  
	FRuntimeCurveLinearColor                           SkylightColorCurveRuntime;                                  // 0x1818   (0x0208)  
	FRuntimeCurveLinearColor                           VolumetricFogInscatteringColorRuntime;                      // 0x1A20   (0x0208)  
	bool                                               RainAtatch;                                                 // 0x1C28   (0x0001)  
	unsigned char                                      UnknownData28_6[0x7];                                       // 0x1C29   (0x0007)  MISSED
	TArray<class ABP_CloudMask_Object_C*>              Cloud_Storm;                                                // 0x1C30   (0x0010)  
	class AActor*                                      OverlappedVolume;                                           // 0x1C40   (0x0008)  
	FRuntimeFloatCurve                                 Sun_Light_Intensity_Storm;                                  // 0x1C48   (0x0088)  
	FRuntimeFloatCurve                                 Sun_Light_Intensity_Storm_Start;                            // 0x1CD0   (0x0088)  
	FRuntimeFloatCurve                                 Moon_Light_Intensity_Storm;                                 // 0x1D58   (0x0088)  
	FRuntimeFloatCurve                                 Moon_Light_Intensity_Storm_Start;                           // 0x1DE0   (0x0088)  
	FRuntimeCurveLinearColor                           Sun_Light_Color_Storm_Start;                                // 0x1E68   (0x0208)  
	FRuntimeCurveLinearColor                           Moon_Light_Color_Storm_start;                               // 0x2070   (0x0208)  
	FRuntimeCurveLinearColor                           Sun_Light_Color_Storm;                                      // 0x2278   (0x0208)  
	FRuntimeCurveLinearColor                           Moon_Light_Color_Storm;                                     // 0x2480   (0x0208)  
	FRuntimeCurveLinearColor                           SkyLuminanceFactor_Storm;                                   // 0x2688   (0x0208)  
	FRuntimeCurveLinearColor                           SkylightColorCurveRuntime_Storm;                            // 0x2890   (0x0208)  
	FRuntimeCurveLinearColor                           VolumetricFogInscatteringColorRuntime_Storm;                // 0x2A98   (0x0208)  
	bool                                               UseStorm;                                                   // 0x2CA0   (0x0001)  
	unsigned char                                      UnknownData29_6[0x7];                                       // 0x2CA1   (0x0007)  MISSED
	FRuntimeCurveLinearColor                           SkyLuminanceFactor_Storm_Start;                             // 0x2CA8   (0x0208)  
	FRuntimeCurveLinearColor                           SkylightColorCurveRuntime_Storm_Start;                      // 0x2EB0   (0x0208)  
	FRuntimeCurveLinearColor                           VolumetricFogInscatteringColorRuntime_Storm_Start;          // 0x30B8   (0x0208)  
	float                                              CloudPosition;                                              // 0x32C0   (0x0004)  
	float                                              Cloud_Direction_X;                                          // 0x32C4   (0x0004)  
	float                                              Cloud_Direction_Y;                                          // 0x32C8   (0x0004)  
	float                                              RainDirectionStrength;                                      // 0x32CC   (0x0004)  
	float                                              Time;                                                       // 0x32D0   (0x0004)  
	float                                              SandStormDensity;                                           // 0x32D4   (0x0004)  
	int32_t                                            TotalDustDevils;                                            // 0x32D8   (0x0004)  
	int32_t                                            DustDevilsInMap;                                            // 0x32DC   (0x0004)  
	int32_t                                            DustDevilsLeft;                                             // 0x32E0   (0x0004)  
	unsigned char                                      UnknownData30_6[0x4];                                       // 0x32E4   (0x0004)  MISSED
	TArray<class ANiagaraActor*>                       Dust_Actors;                                                // 0x32E8   (0x0010)  
	bool                                               CloudFormingEnded;                                          // 0x32F8   (0x0001)  
	bool                                               WeatherStarted;                                             // 0x32F9   (0x0001)  
	bool                                               RainStarted_Ended;                                          // 0x32FA   (0x0001)  
	bool                                               WeatherEnd_Ended;                                           // 0x32FB   (0x0001)  
	float                                              DustDevil_Distance;                                         // 0x32FC   (0x0004)  
	float                                              DustDevilWaitMin;                                           // 0x3300   (0x0004)  
	bool                                               Dust_Devil_Start_;                                          // 0x3304   (0x0001)  
	unsigned char                                      UnknownData31_6[0x3];                                       // 0x3305   (0x0003)  MISSED
	float                                              DustDevilWaitMax;                                           // 0x3308   (0x0004)  
	float                                              DustDevilWait;                                              // 0x330C   (0x0004)  
	float                                              DustDevilDuration;                                          // 0x3310   (0x0004)  
	float                                              CloudsTime;                                                 // 0x3314   (0x0004)  
	bool                                               SandstormLocalizedStart;                                    // 0x3318   (0x0001)  
	unsigned char                                      UnknownData32_6[0x3];                                       // 0x3319   (0x0003)  MISSED
	float                                              SandStormLocStartEndWait;                                   // 0x331C   (0x0004)  
	float                                              SandStormlocalizedMax;                                      // 0x3320   (0x0004)  
	float                                              SandStormlocalizedMin;                                      // 0x3324   (0x0004)  
	float                                              SandStorLocalizedDurationWait;                              // 0x3328   (0x0004)  
	float                                              SandStormStartDurationWait;                                 // 0x332C   (0x0004)  
	float                                              SandStormlocalizedStartWait;                                // 0x3330   (0x0004)  
	float                                              SandStormLocalized_Distance;                                // 0x3334   (0x0004)  
	class ANiagaraActor*                               SandStormNearest;                                           // 0x3338   (0x0008)  
	class ANiagaraActor*                               LocalizedStormNearest;                                      // 0x3340   (0x0008)  
	class UNiagaraComponent*                           Niagara_Component;                                          // 0x3348   (0x0008)  
	class ANiagaraActor*                               Array_Element;                                              // 0x3350   (0x0008)  
	TArray<class AActor*>                              Lightning_Actors;                                           // 0x3358   (0x0010)  
	TArray<class APostProcessVolume*>                  SandStormPostProcess;                                       // 0x3368   (0x0010)  
	class APostProcessVolume*                          PP_Array_Element;                                           // 0x3378   (0x0008)  
	float                                              StormFogStrenght;                                           // 0x3380   (0x0004)  
	bool                                               SandStormFormingStarted;                                    // 0x3384   (0x0001)  
	bool                                               SandStormFormingEnd;                                        // 0x3385   (0x0001)  
	bool                                               SandStormDurationEnd;                                       // 0x3386   (0x0001)  
	unsigned char                                      UnknownData33_6[0x1];                                       // 0x3387   (0x0001)  MISSED
	float                                              SandStormEndDurationWait;                                   // 0x3388   (0x0004)  
	float                                              WeatherDrying;                                              // 0x338C   (0x0004)  
	FRuntimeCurveLinearColor                           SunColor;                                                   // 0x3390   (0x0208)  
	bool                                               SanstormFog;                                                // 0x3598   (0x0001)  
	unsigned char                                      UnknownData34_6[0x3];                                       // 0x3599   (0x0003)  MISSED
	float                                              Fog_Density;                                                // 0x359C   (0x0004)  


	/// Functions
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormFog
	// void SandStormFog(float Value);                                                                                          // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sand Storm Postprocess Actors
	// void SandStormPostprocessActors();                                                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Lightning
	// void Lightning();                                                                                                        // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Reset Weather
	// void ResetWeather();                                                                                                     // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SaveWeatherValues_BP
	// void SaveWeatherValues_BP(class UWeatherStateContainer*& Output);                                                        // [0x1c5deb0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Set Weather Values
	// void SetWeatherValues(class UWeatherStateContainer* NewParam);                                                           // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
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
	// void WeatherLightingEnd(float Timeline);                                                                                 // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.LightingCurvesDefinition
	// void LightingCurvesDefinition();                                                                                         // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Weather Lighting Start
	// void WeatherLightingStart(float Timeline);                                                                               // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
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
	// void CloudsForming__FinishedFunc();                                                                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Clouds Forming__UpdateFunc
	// void CloudsForming__UpdateFunc();                                                                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Start__FinishedFunc
	// void SandstormStart__FinishedFunc();                                                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Start__UpdateFunc
	// void SandstormStart__UpdateFunc();                                                                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Duration__FinishedFunc
	// void SandstormDuration__FinishedFunc();                                                                                  // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Sandstorm Duration__UpdateFunc
	// void SandstormDuration__UpdateFunc();                                                                                    // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStorm Ending__FinishedFunc
	// void SandStormEnding__FinishedFunc();                                                                                    // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStorm Ending__UpdateFunc
	// void SandStormEnding__UpdateFunc();                                                                                      // [0x1c5deb0] BlueprintEvent       
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
	// void RefreshSettings();                                                                                                  // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
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
	// void DustDevilSystem();                                                                                                  // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Transition
	// void Transition();                                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Dust Devil Duration
	// void DustDevilDuration();                                                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Localized Sandstorm Start
	// void LocalizedSandstormStart(float Time);                                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.Localized Sandstorm End
	// void LocalizedSandstormEnd(float Time);                                                                                  // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.SandStormLocalizedDuration
	// void SandStormLocalizedDuration(float Time);                                                                             // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.StartSaveWeather
	// void StartSaveWeather();                                                                                                 // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Materials/Lighting/DynamicSystem/BP_DynamicTOD.BP_DynamicTOD_C.ExecuteUbergraph_BP_DynamicTOD
	// void ExecuteUbergraph_BP_DynamicTOD(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ABP_DynamicTOD_C) == 0x35A0); // 13728 bytes (0x000EE8 - 0x0035A0)
static_assert(offsetof(ABP_DynamicTOD_C, UberGraphFrame) == 0x0EE8);
static_assert(offsetof(ABP_DynamicTOD_C, PostProcessGlobal) == 0x0EF0);
static_assert(offsetof(ABP_DynamicTOD_C, NS_lightning_Strike) == 0x0EF8);
static_assert(offsetof(ABP_DynamicTOD_C, BP_CurveProfileTo_RT) == 0x0F00);
static_assert(offsetof(ABP_DynamicTOD_C, NS_DustDevil) == 0x0F08);
static_assert(offsetof(ABP_DynamicTOD_C, PS_Weather) == 0x0F10);
static_assert(offsetof(ABP_DynamicTOD_C, PostProcessWeatherStorm) == 0x0F18);
static_assert(offsetof(ABP_DynamicTOD_C, NextGenFog) == 0x0F20);
static_assert(offsetof(ABP_DynamicTOD_C, PS_Rain_Player) == 0x0F28);
static_assert(offsetof(ABP_DynamicTOD_C, VolumetricCloud) == 0x0F30);
static_assert(offsetof(ABP_DynamicTOD_C, PostProcessSunset) == 0x0F38);
static_assert(offsetof(ABP_DynamicTOD_C, SkyAtmosphere) == 0x0F40);
static_assert(offsetof(ABP_DynamicTOD_C, PostProcessSunrise) == 0x0F48);
static_assert(offsetof(ABP_DynamicTOD_C, StarFieldHemisphereSection3) == 0x0F50);
static_assert(offsetof(ABP_DynamicTOD_C, StarFieldHemisphereSection2) == 0x0F58);
static_assert(offsetof(ABP_DynamicTOD_C, StarFieldHemisphereSection1) == 0x0F60);
static_assert(offsetof(ABP_DynamicTOD_C, PostProcessNight) == 0x0F68);
static_assert(offsetof(ABP_DynamicTOD_C, PostProcessDay) == 0x0F70);
static_assert(offsetof(ABP_DynamicTOD_C, SunFlare) == 0x0F78);
static_assert(offsetof(ABP_DynamicTOD_C, SunSprite) == 0x0F80);
static_assert(offsetof(ABP_DynamicTOD_C, PPV_LensEffects) == 0x0F88);
static_assert(offsetof(ABP_DynamicTOD_C, PPV_Grading) == 0x0F90);
static_assert(offsetof(ABP_DynamicTOD_C, PS_Sundog) == 0x0F98);
static_assert(offsetof(ABP_DynamicTOD_C, PS_Weather_Test) == 0x0FA0);
static_assert(offsetof(ABP_DynamicTOD_C, StarField_Mesh) == 0x0FA8);
static_assert(offsetof(ABP_DynamicTOD_C, MoonSprite) == 0x0FB0);
static_assert(offsetof(ABP_DynamicTOD_C, MoonLight) == 0x0FB8);
static_assert(offsetof(ABP_DynamicTOD_C, ExponentialHeightFog) == 0x0FC0);
static_assert(offsetof(ABP_DynamicTOD_C, SkyLight) == 0x0FC8);
static_assert(offsetof(ABP_DynamicTOD_C, SunLight) == 0x0FD0);
static_assert(offsetof(ABP_DynamicTOD_C, LocalizedSandSTormDuration__Direction_FD313B3C46CD087B330837B51867D59B) == 0x0FDC);
static_assert(offsetof(ABP_DynamicTOD_C, LocalizedSandSTormDuration) == 0x0FE0);
static_assert(offsetof(ABP_DynamicTOD_C, SandStormLocalizedEndTimeline__Direction_48EC10844B3946BED1AF91943BCFCE5F) == 0x0FEC);
static_assert(offsetof(ABP_DynamicTOD_C, SandStormLocalizedEndTimeline) == 0x0FF0);
static_assert(offsetof(ABP_DynamicTOD_C, SandStormLocalizedStartTimeline__Direction_FC0302A54393F4E652B93DA70E6D86BD) == 0x0FFC);
static_assert(offsetof(ABP_DynamicTOD_C, SandStormLocalizedStartTimeline) == 0x1000);
static_assert(offsetof(ABP_DynamicTOD_C, DustDevilStart__Direction_4936C8E444CA8F75521A06A340DEE1D6) == 0x100C);
static_assert(offsetof(ABP_DynamicTOD_C, DustDevilStart) == 0x1010);
static_assert(offsetof(ABP_DynamicTOD_C, Sandstorm_Duration__Direction_98814F9B46670C5DBF5E65AF5B782971) == 0x101C);
static_assert(offsetof(ABP_DynamicTOD_C, Sandstorm_Duration) == 0x1020);
static_assert(offsetof(ABP_DynamicTOD_C, SandStorm_Ending__Direction_993E6221403E7EA5E41239BB84985DA2) == 0x102C);
static_assert(offsetof(ABP_DynamicTOD_C, SandStorm_Ending) == 0x1030);
static_assert(offsetof(ABP_DynamicTOD_C, Sandstorm_Start__Direction_50FB6BE241A032992929E39CD2EFA446) == 0x103C);
static_assert(offsetof(ABP_DynamicTOD_C, Sandstorm_Start) == 0x1040);
static_assert(offsetof(ABP_DynamicTOD_C, DryingTImeline__Direction_88849F99452F247D2C51FCBCD06F9C8E) == 0x104C);
static_assert(offsetof(ABP_DynamicTOD_C, DryingTImeline) == 0x1050);
static_assert(offsetof(ABP_DynamicTOD_C, Clouds_Forming__Direction_C1BC676946AD6660E80AC4916ADB2A79) == 0x105C);
static_assert(offsetof(ABP_DynamicTOD_C, Clouds_Forming) == 0x1060);
static_assert(offsetof(ABP_DynamicTOD_C, Timeline_1__Direction_12E1DFAF483288166190A1A2D5A908D0) == 0x106C);
static_assert(offsetof(ABP_DynamicTOD_C, Timeline) == 0x1070);
static_assert(offsetof(ABP_DynamicTOD_C, RainEnd__Direction_1385B0EA432B7975987A9D9C9DA3BF03) == 0x107C);
static_assert(offsetof(ABP_DynamicTOD_C, RainEnd) == 0x1080);
static_assert(offsetof(ABP_DynamicTOD_C, RainStart__Direction_743FC35B46D68C348439008F88EAA504) == 0x108C);
static_assert(offsetof(ABP_DynamicTOD_C, RainStart) == 0x1090);
static_assert(offsetof(ABP_DynamicTOD_C, Container_Volumes) == 0x10C8);
static_assert(offsetof(ABP_DynamicTOD_C, Detached_Placement) == 0x10D8);
static_assert(offsetof(ABP_DynamicTOD_C, Weather_Actors) == 0x10F0);
static_assert(offsetof(ABP_DynamicTOD_C, Wind_Rotation) == 0x1104);
static_assert(offsetof(ABP_DynamicTOD_C, AtmosphericFogComponent) == 0x1118);
static_assert(offsetof(ABP_DynamicTOD_C, Static_Meshes) == 0x1148);
static_assert(offsetof(ABP_DynamicTOD_C, Static_Meshes_Masked) == 0x1158);
static_assert(offsetof(ABP_DynamicTOD_C, Mat_Param_Name) == 0x1168);
static_assert(offsetof(ABP_DynamicTOD_C, Mat_Slot_Names) == 0x1170);
static_assert(offsetof(ABP_DynamicTOD_C, Emissive_Strength) == 0x1180);
static_assert(offsetof(ABP_DynamicTOD_C, Emissive_MIDs_Mask) == 0x1188);
static_assert(offsetof(ABP_DynamicTOD_C, Emissive_MIDs) == 0x1198);
static_assert(offsetof(ABP_DynamicTOD_C, Vector_Field) == 0x11C0);
static_assert(offsetof(ABP_DynamicTOD_C, Spawned_Weather_PS) == 0x11D0);
static_assert(offsetof(ABP_DynamicTOD_C, Exterior_Weather_Params) == 0x11E0);
static_assert(offsetof(ABP_DynamicTOD_C, Exterior_Rain) == 0x1210);
static_assert(offsetof(ABP_DynamicTOD_C, SunDiscMaterial) == 0x1220);
static_assert(offsetof(ABP_DynamicTOD_C, Weather_Start_Event) == 0x1228);
static_assert(offsetof(ABP_DynamicTOD_C, Weather_End_Event) == 0x1230);
static_assert(offsetof(ABP_DynamicTOD_C, Weather_State_Group) == 0x1238);
static_assert(offsetof(ABP_DynamicTOD_C, SunElevation) == 0x1258);
static_assert(offsetof(ABP_DynamicTOD_C, MoonElevation) == 0x1260);
static_assert(offsetof(ABP_DynamicTOD_C, RainAndLightMask) == 0x1268);
static_assert(offsetof(ABP_DynamicTOD_C, MaterialWetness) == 0x1278);
static_assert(offsetof(ABP_DynamicTOD_C, RainParticles) == 0x1280);
static_assert(offsetof(ABP_DynamicTOD_C, MaterialSpecularNearFar) == 0x1288);
static_assert(offsetof(ABP_DynamicTOD_C, WetMaterialSpecularNearFar) == 0x1290);
static_assert(offsetof(ABP_DynamicTOD_C, WetSkyProbeMipBrightness) == 0x12A0);
static_assert(offsetof(ABP_DynamicTOD_C, DrySkyProbeMipBrightness) == 0x12A8);
static_assert(offsetof(ABP_DynamicTOD_C, Rain) == 0x12B8);
static_assert(offsetof(ABP_DynamicTOD_C, FogDensityCurve_Runtime) == 0x12D0);
static_assert(offsetof(ABP_DynamicTOD_C, FogHeightFalloffCurve_Runtime) == 0x1358);
static_assert(offsetof(ABP_DynamicTOD_C, FogExtinctionScaleCurve_Runtime) == 0x13E0);
static_assert(offsetof(ABP_DynamicTOD_C, TimeOfDayCurve_Runtime) == 0x1468);
static_assert(offsetof(ABP_DynamicTOD_C, SunriseSunsetCurve_Runtime) == 0x14F0);
static_assert(offsetof(ABP_DynamicTOD_C, WeatherStartCurve_Runtime) == 0x1578);
static_assert(offsetof(ABP_DynamicTOD_C, SkyLuminanceFactor) == 0x1610);
static_assert(offsetof(ABP_DynamicTOD_C, SkylightColorCurveRuntime) == 0x1818);
static_assert(offsetof(ABP_DynamicTOD_C, VolumetricFogInscatteringColorRuntime) == 0x1A20);
static_assert(offsetof(ABP_DynamicTOD_C, Cloud_Storm) == 0x1C30);
static_assert(offsetof(ABP_DynamicTOD_C, OverlappedVolume) == 0x1C40);
static_assert(offsetof(ABP_DynamicTOD_C, Sun_Light_Intensity_Storm) == 0x1C48);
static_assert(offsetof(ABP_DynamicTOD_C, Sun_Light_Intensity_Storm_Start) == 0x1CD0);
static_assert(offsetof(ABP_DynamicTOD_C, Moon_Light_Intensity_Storm) == 0x1D58);
static_assert(offsetof(ABP_DynamicTOD_C, Moon_Light_Intensity_Storm_Start) == 0x1DE0);
static_assert(offsetof(ABP_DynamicTOD_C, Sun_Light_Color_Storm_Start) == 0x1E68);
static_assert(offsetof(ABP_DynamicTOD_C, Moon_Light_Color_Storm_start) == 0x2070);
static_assert(offsetof(ABP_DynamicTOD_C, Sun_Light_Color_Storm) == 0x2278);
static_assert(offsetof(ABP_DynamicTOD_C, Moon_Light_Color_Storm) == 0x2480);
static_assert(offsetof(ABP_DynamicTOD_C, SkyLuminanceFactor_Storm) == 0x2688);
static_assert(offsetof(ABP_DynamicTOD_C, SkylightColorCurveRuntime_Storm) == 0x2890);
static_assert(offsetof(ABP_DynamicTOD_C, VolumetricFogInscatteringColorRuntime_Storm) == 0x2A98);
static_assert(offsetof(ABP_DynamicTOD_C, SkyLuminanceFactor_Storm_Start) == 0x2CA8);
static_assert(offsetof(ABP_DynamicTOD_C, SkylightColorCurveRuntime_Storm_Start) == 0x2EB0);
static_assert(offsetof(ABP_DynamicTOD_C, VolumetricFogInscatteringColorRuntime_Storm_Start) == 0x30B8);
static_assert(offsetof(ABP_DynamicTOD_C, Dust_Actors) == 0x32E8);
static_assert(offsetof(ABP_DynamicTOD_C, SandStormNearest) == 0x3338);
static_assert(offsetof(ABP_DynamicTOD_C, LocalizedStormNearest) == 0x3340);
static_assert(offsetof(ABP_DynamicTOD_C, Niagara_Component) == 0x3348);
static_assert(offsetof(ABP_DynamicTOD_C, Array_Element) == 0x3350);
static_assert(offsetof(ABP_DynamicTOD_C, Lightning_Actors) == 0x3358);
static_assert(offsetof(ABP_DynamicTOD_C, SandStormPostProcess) == 0x3368);
static_assert(offsetof(ABP_DynamicTOD_C, PP_Array_Element) == 0x3378);
static_assert(offsetof(ABP_DynamicTOD_C, SunColor) == 0x3390);
