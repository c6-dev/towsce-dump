
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore
/// dependency: PhysicsCore

/// Struct /Script/Water.SphericalPontoon
/// Size: 0x0220 (0x000000 - 0x000220)
class FSphericalPontoon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FName)                                     CenterSocket                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   LocalForce                                                  OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   CenterLocation                                              OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FQuat)                                     SocketRotation                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(float)                                     WaterHeight                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     WaterDepth                                                  OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     ImmersionDepth                                              OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FVector)                                   WaterPlaneLocation                                          OFFSET(getStruct<T>, {0x5C, 12, 0, 0})
	SMember(FVector)                                   WaterPlaneNormal                                            OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FVector)                                   WaterSurfacePosition                                        OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FVector)                                   WaterVelocity                                               OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	CMember(class AWaterBody*)                         CurrentWaterBody                                            OFFSET(get<T>, {0x208, 8, 0, 0})
};

/// Struct /Script/Water.BuoyancyData
/// Size: 0x0050 (0x000000 - 0x000050)
class FBuoyancyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FSphericalPontoon>)                 Pontoons                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     BuoyancyCoefficient                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     BuoyancyDamp                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BuoyancyDamp2                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMinVelocity                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMaxVelocity                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMax                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MaxBuoyantForce                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     WaterShorePushFactor                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     WaterVelocityStrength                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MaxWaterForce                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DragCoefficient                                             OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DragCoefficient2                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     AngularDragCoefficient                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxDragSpeed                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bApplyDragForcesInWater                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/Water.BuoyancyComponent
/// Size: 0x0128 (0x0000E0 - 0x000208)
class UBuoyancyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TArray<FSphericalPontoon>)                 Pontoons                                                    OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnteredWaterDelegate                                      OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExitedWaterDelegate                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FBuoyancyData)                             BuoyancyData                                                OFFSET(getStruct<T>, {0x110, 80, 0, 0})
	CMember(TArray<class AWaterBody*>)                 CurrentWaterBodies                                          OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(class UPrimitiveComponent*)                SimulatingComponent                                         OFFSET(get<T>, {0x170, 8, 0, 0})


	/// Functions
	// Function /Script/Water.BuoyancyComponent.OnPontoonExitedWater
	// void OnPontoonExitedWater(FSphericalPontoon& Pontoon);                                                                   // [0xc1ed80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.OnPontoonEnteredWater
	// void OnPontoonEnteredWater(FSphericalPontoon& Pontoon);                                                                  // [0xc1ecb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.IsInWaterBody
	// bool IsInWaterBody();                                                                                                    // [0xc1ebf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	// void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, FVector& OutWaterVelocity); // [0xc1e6a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Water.BuoyancyManager
/// Size: 0x00B8 (0x0002B8 - 0x000370)
class ABuoyancyManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(TArray<class UBuoyancyComponent*>)         BuoyancyComponents                                          OFFSET(get<T>, {0x308, 16, 0, 0})


	/// Functions
	// Function /Script/Water.BuoyancyManager.GetBuoyancyComponentManager
	// bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager*& Manager);                   // [0xc1e4a0] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Water.ConvertWaterBodyActorsCommandlet
/// Size: 0x0000 (0x000088 - 0x000088)
class UConvertWaterBodyActorsCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/Water.EnvQueryTest_InsideWaterBody
/// Size: 0x0008 (0x000200 - 0x000208)
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	DMember(bool)                                      bIncludeWaves                                               OFFSET(get<bool>, {0x200, 1, 0, 0})
	DMember(bool)                                      bSimpleWaves                                                OFFSET(get<bool>, {0x201, 1, 0, 0})
	DMember(bool)                                      bIgnoreExclusionVolumes                                     OFFSET(get<bool>, {0x202, 1, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UGerstnerWaterWaveGeneratorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	// void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);                                                             // [0xc1e3f0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
/// Size: 0x0038 (0x000030 - 0x000068)
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   NumWaves                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     Randomness                                                  OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MinWavelength                                               OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxWavelength                                               OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     WavelengthFalloff                                           OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MinAmplitude                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxAmplitude                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     AmplitudeFalloff                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     WindAngleDeg                                                OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DirectionAngularSpreadDeg                                   OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SmallWaveSteepness                                          OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     LargeWaveSteepness                                          OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     SteepnessFalloff                                            OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Struct /Script/Water.GerstnerWaveOctave
/// Size: 0x0014 (0x000000 - 0x000014)
class FGerstnerWaveOctave : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumWaves                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     AmplitudeScale                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MainDirection                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpreadAngle                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bUniformSpread                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
/// Size: 0x0018 (0x000030 - 0x000048)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EWaveSpectrumType)                         SpectrumType                                                OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FGerstnerWaveOctave>)               Octaves                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Water.WaterWavesBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UWaterWavesBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Water.WaterWaves
/// Size: 0x0000 (0x000030 - 0x000030)
class UWaterWaves : public UWaterWavesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/Water.GerstnerWave
/// Size: 0x0030 (0x000000 - 0x000030)
class FGerstnerWave : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     WaveLength                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Steepness                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector2D)                                 WaveVector                                                  OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(float)                                     WaveSpeed                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     WKA                                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Q                                                           OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     PhaseOffset                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaves
/// Size: 0x0020 (0x000030 - 0x000050)
class UGerstnerWaterWaves : public UWaterWaves
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UGerstnerWaterWaveGeneratorBase*)    GerstnerWaveGenerator                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FGerstnerWave>)                     GerstnerWaves                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     MaxWaveHeight                                               OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveSubsystem
/// Size: 0x0018 (0x000038 - 0x000050)
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/Water.LakeCollisionComponent
/// Size: 0x0018 (0x0004F8 - 0x000510)
class ULakeCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(class UBodySetup*)                         CachedBodySetup                                             OFFSET(get<T>, {0x4F8, 8, 0, 0})
	SMember(FVector)                                   BoxExtent                                                   OFFSET(getStruct<T>, {0x500, 12, 0, 0})
};

/// Class /Script/Water.NiagaraDataInterfaceWater
/// Size: 0x0008 (0x000040 - 0x000048)
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class AWaterBody*)                         SourceBody                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Water.NiagaraWaterFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/Water.NiagaraWaterFunctionLibrary.SetWaterBody
	// void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);            // [0xc1f080] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/Water.OceanCollisionComponent
/// Size: 0x0028 (0x0004F8 - 0x000520)
class UOceanCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(class UBodySetup*)                         CachedBodySetup                                             OFFSET(get<T>, {0x4F8, 8, 0, 0})
};

/// Class /Script/Water.OceanBoxCollisionComponent
/// Size: 0x0000 (0x000520 - 0x000520)
class UOceanBoxCollisionComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
};

/// Struct /Script/Water.UnderwaterPostProcessSettings
/// Size: 0x0590 (0x000000 - 0x000590)
class FUnderwaterPostProcessSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BlendRadius                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         OFFSET(getStruct<T>, {0x10, 1392, 0, 0})
	CMember(class UMaterialInterface*)                 UnderwaterPostProcessMaterial                               OFFSET(get<T>, {0x580, 8, 0, 0})
};

/// Struct /Script/Water.WaterCurveSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterCurveSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UCurveFloat*)                        ElevationCurveAsset                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Class /Script/Water.WaterBody
/// Size: 0x0BE8 (0x0002B8 - 0x000EA0)
class AWaterBody : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	CMember(class UPhysicalMaterial*)                  PhysicalMaterial                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(float)                                     TargetWaveMaskDepth                                         OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     MaxWaveHeightOffset                                         OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bFillCollisionUnderWaterBodiesForNavmesh                    OFFSET(get<bool>, {0x2DC, 1, 0, 0})
	SMember(FUnderwaterPostProcessSettings)            UnderwaterPostProcessSettings                               OFFSET(getStruct<T>, {0x2E0, 1424, 0, 0})
	CMember(EWaterBodyType)                            WaterBodyType                                               OFFSET(get<T>, {0x870, 1, 0, 0})
	SMember(FWaterCurveSettings)                       CurveSettings                                               OFFSET(getStruct<T>, {0x878, 32, 0, 0})
	CMember(class UMaterialInterface*)                 WaterMaterial                                               OFFSET(get<T>, {0x898, 8, 0, 0})
	CMember(class UMaterialInterface*)                 UnderwaterPostProcessMaterial                               OFFSET(get<T>, {0x8A0, 8, 0, 0})
	DMember(bool)                                      bAffectsLandscape                                           OFFSET(get<bool>, {0x8A8, 1, 0, 0})
	DMember(bool)                                      bGenerateCollisions                                         OFFSET(get<bool>, {0x8A9, 1, 0, 0})
	DMember(bool)                                      bOverrideWaterMesh                                          OFFSET(get<bool>, {0x8AA, 1, 0, 0})
	CMember(class UStaticMesh*)                        WaterMeshOverride                                           OFFSET(get<T>, {0x8B0, 8, 0, 0})
	DMember(int32_t)                                   OverlapMaterialPriority                                     OFFSET(get<int32_t>, {0x8B8, 4, 0, 0})
	SMember(FName)                                     CollisionProfileName                                        OFFSET(getStruct<T>, {0x8BC, 8, 0, 0})
	CMember(class UWaterSplineComponent*)              SplineComp                                                  OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(class UWaterSplineMetadata*)               WaterSplineMetadata                                         OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           WaterMID                                                    OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           UnderwaterPostProcessMID                                    OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(TArray<TLazyObjectPtr<AWaterBodyIsland*>>) Islands                                                     OFFSET(get<T>, {0x8E8, 16, 0, 0})
	CMember(TArray<TLazyObjectPtr<AWaterBodyExclusionVolume*>>) ExclusionVolumes                                   OFFSET(get<T>, {0x8F8, 16, 0, 0})
	CMember(TWeakObjectPtr<class ALandscapeProxy*>)    Landscape                                                   OFFSET(get<T>, {0x908, 8, 0, 0})
	SMember(FPostProcessSettings)                      CurrentPostProcessSettings                                  OFFSET(getStruct<T>, {0x910, 1392, 0, 0})
	DMember(bool)                                      bCanAffectNavigation                                        OFFSET(get<bool>, {0xE80, 1, 0, 0})
	CMember(class UClass*)                             WaterNavAreaClass                                           OFFSET(get<T>, {0xE88, 8, 0, 0})
	CMember(class UWaterWavesBase*)                    WaterWaves                                                  OFFSET(get<T>, {0xE90, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterBody.SetWaterWaves
	// void SetWaterWaves(class UWaterWavesBase* InWaterWaves);                                                                 // [0xc1f1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.OnWaterBodyChanged
	// void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);                                   // [0xc1ee50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0xc1eb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                              // [0xc1eb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterMaterial
	// class UMaterialInterface* GetWaterMaterial();                                                                            // [0xc1eb10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
	// class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();                                              // [0xc1eae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                             // [0xc1e9f0] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                              // [0xc1e9c0] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetMaxWaveHeight
	// float GetMaxWaveHeight();                                                                                                // [0xc1e8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetIslands
	// TArray<AWaterBodyIsland*> GetIslands();                                                                                  // [0xc1e620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetExclusionVolumes
	// TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                                // [0xc1e5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterBodyGenerator
/// Size: 0x0000 (0x000030 - 0x000030)
class UWaterBodyGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Water.CustomMeshGenerator
/// Size: 0x0008 (0x000030 - 0x000038)
class UCustomMeshGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UStaticMeshComponent*)               MeshComp                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyCustom
/// Size: 0x0008 (0x000E98 - 0x000EA0)
class AWaterBodyCustom : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	CMember(class UCustomMeshGenerator*)               CustomGenerator                                             OFFSET(get<T>, {0xE98, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyExclusionVolume
/// Size: 0x0018 (0x000320 - 0x000338)
class AWaterBodyExclusionVolume : public APhysicsVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	DMember(bool)                                      bIgnoreAllOverlappingWaterBodies                            OFFSET(get<bool>, {0x320, 1, 0, 0})
	CMember(TArray<class AWaterBody*>)                 WaterBodiesToIgnore                                         OFFSET(get<T>, {0x328, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyIsland
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class AWaterBodyIsland : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UWaterSplineComponent*)              SplineComp                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterBodyIsland.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0xc1eb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.LakeGenerator
/// Size: 0x0018 (0x000030 - 0x000048)
class ULakeGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UStaticMeshComponent*)               LakeMeshComp                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UBoxComponent*)                      LakeCollisionComp                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class ULakeCollisionComponent*)            LakeCollision                                               OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyLake
/// Size: 0x0008 (0x000E98 - 0x000EA0)
class AWaterBodyLake : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	CMember(class ULakeGenerator*)                     LakeGenerator                                               OFFSET(get<T>, {0xE98, 8, 0, 0})
};

/// Class /Script/Water.OceanGenerator
/// Size: 0x0020 (0x000030 - 0x000050)
class UOceanGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UOceanBoxCollisionComponent*>) CollisionBoxes                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UOceanCollisionComponent*>)   CollisionHullSets                                           OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyOcean
/// Size: 0x0018 (0x000E98 - 0x000EB0)
class AWaterBodyOcean : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3760;

public:
	CMember(class UOceanGenerator*)                    OceanGenerator                                              OFFSET(get<T>, {0xE98, 8, 0, 0})
	SMember(FVector)                                   CollisionExtents                                            OFFSET(getStruct<T>, {0xEA0, 12, 0, 0})
	DMember(float)                                     HeightOffset                                                OFFSET(get<float>, {0xEAC, 4, 0, 0})
};

/// Class /Script/Water.RiverGenerator
/// Size: 0x0010 (0x000030 - 0x000040)
class URiverGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class USplineMeshComponent*>)       SplineMeshComponents                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyRiver
/// Size: 0x0028 (0x000E98 - 0x000EC0)
class AWaterBodyRiver : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3776;

public:
	CMember(class URiverGenerator*)                    RiverGenerator                                              OFFSET(get<T>, {0xE98, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LakeTransitionMaterial                                      OFFSET(get<T>, {0xEA0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           LakeTransitionMID                                           OFFSET(get<T>, {0xEA8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OceanTransitionMaterial                                     OFFSET(get<T>, {0xEB0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           OceanTransitionMID                                          OFFSET(get<T>, {0xEB8, 8, 0, 0})
};

/// Class /Script/Water.WaterBrushActorInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UWaterBrushActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Water.WaterMeshActor
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class AWaterMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UTexture2D*)                         WaterVelocityTexture                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UWaterMeshComponent*)                WaterMesh                                                   OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Script/Water.WaterMeshComponent
/// Size: 0x0120 (0x000520 - 0x000640)
class UWaterMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	DMember(int32_t)                                   ForceCollapseDensityLevel                                   OFFSET(get<int32_t>, {0x520, 4, 0, 0})
	DMember(float)                                     TileSize                                                    OFFSET(get<float>, {0x524, 4, 0, 0})
	SMember(FIntPoint)                                 ExtentInTiles                                               OFFSET(getStruct<T>, {0x528, 8, 0, 0})
	CMember(class UMaterialInterface*)                 FarDistanceMaterial                                         OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(float)                                     FarDistanceMeshExtent                                       OFFSET(get<float>, {0x538, 4, 0, 0})
	SMember(FVector)                                   RTWorldLocation                                             OFFSET(getStruct<T>, {0x53C, 12, 0, 0})
	SMember(FVector)                                   RTWorldSizeVector                                           OFFSET(getStruct<T>, {0x548, 12, 0, 0})
	CMember(TSet<UMaterialInterface*>)                 UsedMaterials                                               OFFSET(get<T>, {0x5B8, 80, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          OFFSET(get<int32_t>, {0x638, 4, 0, 0})
	DMember(float)                                     LODScale                                                    OFFSET(get<float>, {0x63C, 4, 0, 0})


	/// Functions
	// Function /Script/Water.WaterMeshComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xc1ebd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterRuntimeSettings
/// Size: 0x0040 (0x000040 - 0x000080)
class UWaterRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannelForWaterTraces                              OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TWeakObjectPtr<class UMaterialParameterCollection*>) MaterialParameterCollection                       OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     WaterBodyIconWorldSize                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     WaterBodyIconWorldZOffset                                   OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FName)                                     DefaultWaterCollisionProfileName                            OFFSET(getStruct<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/Water.WaterSplineCurveDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterSplineCurveDefaults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     DefaultDepth                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DefaultWidth                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DefaultVelocity                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultAudioIntensity                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Class /Script/Water.WaterSplineComponent
/// Size: 0x0020 (0x0005F0 - 0x000610)
class UWaterSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	SMember(FWaterSplineCurveDefaults)                 WaterSplineDefaults                                         OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
	SMember(FWaterSplineCurveDefaults)                 PreviousWaterSplineDefaults                                 OFFSET(getStruct<T>, {0x600, 16, 0, 0})
};

/// Class /Script/Water.WaterSplineMetadata
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UWaterSplineMetadata : public USplineMetadata
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FInterpCurveFloat)                         Depth                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FInterpCurveFloat)                         WaterVelocityScalar                                         OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FInterpCurveFloat)                         RiverWidth                                                  OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FInterpCurveFloat)                         AudioIntensity                                              OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FInterpCurveVector)                        WaterVelocity                                               OFFSET(getStruct<T>, {0x90, 24, 0, 0})
};

/// Class /Script/Water.WaterSubsystem
/// Size: 0x00C8 (0x000048 - 0x000110)
class UWaterSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class ABuoyancyManager*)                   BuoyancyManager                                             OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCameraUnderwaterStateChanged                              OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWaterScalabilityChanged                                   OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(class UStaticMesh*)                        DefaultRiverMesh                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UStaticMesh*)                        DefaultLakeMesh                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class AWaterMeshActor*)                    WaterMeshActor                                              OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterSubsystem.SetOceanFloodHeight
	// void SetOceanFloodHeight(float InFloodHeight);                                                                           // [0xc1f000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.PrintToWaterLog
	// void PrintToWaterLog(FString Message, bool bWarning);                                                                    // [0xc1ef20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.IsWaterRenderingEnabled
	// bool IsWaterRenderingEnabled();                                                                                          // [0xc1ec80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	// bool IsUnderwaterPostProcessEnabled();                                                                                   // [0xc1ec50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	// bool IsShallowWaterSimulationEnabled();                                                                                  // [0xc1ec20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetWaterTimeSeconds
	// float GetWaterTimeSeconds();                                                                                             // [0xc1eba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	// float GetSmoothedWorldTimeSeconds();                                                                                     // [0xc1eab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	// int32_t GetShallowWaterSimulationRenderTargetSize();                                                                     // [0xc1ea80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	// int32_t GetShallowWaterMaxImpulseForces();                                                                               // [0xc1ea50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	// int32_t GetShallowWaterMaxDynamicForces();                                                                               // [0xc1ea20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetOceanTotalHeight
	// float GetOceanTotalHeight();                                                                                             // [0xc1e970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanFloodHeight
	// float GetOceanFloodHeight();                                                                                             // [0xc1e950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanBaseHeight
	// float GetOceanBaseHeight();                                                                                              // [0xc1e920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetCameraUnderwaterDepth
	// float GetCameraUnderwaterDepth();                                                                                        // [0xc1e580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterWavesAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UWaterWavesAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UWaterWaves*)                        WaterWaves                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Water.WaterWavesAssetReference
/// Size: 0x0008 (0x000030 - 0x000038)
class UWaterWavesAssetReference : public UWaterWavesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UWaterWavesAsset*)                   WaterWavesAsset                                             OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Water.WaterFalloffSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterFalloffSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EWaterBrushFalloffMode)                    FalloffMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     FalloffAngle                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FalloffWidth                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ZOffset                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectBlurring
/// Size: 0x0008 (0x000000 - 0x000008)
class FWaterBrushEffectBlurring : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bBlurShape                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Radius                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectCurlNoise
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterBrushEffectCurlNoise : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Curl1Amount                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Curl2Amount                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Curl1Tiling                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Curl2Tiling                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectDisplacement
/// Size: 0x0028 (0x000000 - 0x000028)
class FWaterBrushEffectDisplacement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     DisplacementHeight                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DisplacementTiling                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(class UTexture2D*)                         Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Midpoint                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FLinearColor)                              Channel                                                     OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	DMember(float)                                     WeightmapInfluence                                          OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectSmoothBlending
/// Size: 0x0008 (0x000000 - 0x000008)
class FWaterBrushEffectSmoothBlending : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     InnerSmoothDistance                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OuterSmoothDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectTerracing
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterBrushEffectTerracing : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TerraceAlpha                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TerraceSpacing                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TerraceSmoothness                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaskLength                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaskStartOffset                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffects
/// Size: 0x0060 (0x000000 - 0x000060)
class FWaterBrushEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWaterBrushEffectBlurring)                 Blurring                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FWaterBrushEffectCurlNoise)                CurlNoise                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FWaterBrushEffectDisplacement)             Displacement                                                OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	SMember(FWaterBrushEffectSmoothBlending)           SmoothBlending                                              OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FWaterBrushEffectTerracing)                Terracing                                                   OFFSET(getStruct<T>, {0x48, 20, 0, 0})
};

/// Struct /Script/Water.WaterBodyHeightmapSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FWaterBodyHeightmapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EWaterBrushBlendType)                      BlendMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvertShape                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FWaterFalloffSettings)                     FalloffSettings                                             OFFSET(getStruct<T>, {0x4, 20, 0, 0})
	SMember(FWaterBrushEffects)                        Effects                                                     OFFSET(getStruct<T>, {0x18, 96, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/Water.WaterBodyWeightmapSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterBodyWeightmapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     FalloffWidth                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(class UTexture2D*)                         ModulationTexture                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TextureTiling                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TextureInfluence                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Midpoint                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FinalOpacity                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectCurves
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterBrushEffectCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UCurveFloat*)                        ElevationCurveAsset                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Enum /Script/Water.EBuoyancyEvent
/// Size: 0x02
enum class EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody                                                 = 0,
	EBuoyancyEvent__ExitedWaterBody                                                  = 1
};

/// Enum /Script/Water.EWaveSpectrumType
/// Size: 0x03
enum class EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips                                                      = 0,
	EWaveSpectrumType__PiersonMoskowitz                                              = 1,
	EWaveSpectrumType__JONSWAP                                                       = 2
};

/// Enum /Script/Water.EWaterBrushBlendType
/// Size: 0x04
enum class EWaterBrushBlendType : uint8_t
{
	EWaterBrushBlendType__AlphaBlend                                                 = 0,
	EWaterBrushBlendType__Min                                                        = 1,
	EWaterBrushBlendType__Max                                                        = 2,
	EWaterBrushBlendType__Additive                                                   = 3
};

/// Enum /Script/Water.EWaterBodyType
/// Size: 0x05
enum class EWaterBodyType : uint8_t
{
	EWaterBodyType__River                                                            = 0,
	EWaterBodyType__Lake                                                             = 1,
	EWaterBodyType__Ocean                                                            = 2,
	EWaterBodyType__Transition                                                       = 3,
	EWaterBodyType__Num                                                              = 4
};

/// Enum /Script/Water.EWaterBrushFalloffMode
/// Size: 0x02
enum class EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle                                                    = 0,
	EWaterBrushFalloffMode__Width                                                    = 1
};

