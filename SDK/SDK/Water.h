
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/Water.EBuoyancyEvent
/// Size: 0x01 (1 bytes)
enum class EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody                                                 = 0,
	EBuoyancyEvent__ExitedWaterBody                                                  = 1
};

/// Enum /Script/Water.EWaveSpectrumType
/// Size: 0x01 (1 bytes)
enum class EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips                                                      = 0,
	EWaveSpectrumType__PiersonMoskowitz                                              = 1,
	EWaveSpectrumType__JONSWAP                                                       = 2
};

/// Enum /Script/Water.EWaterBrushBlendType
/// Size: 0x01 (1 bytes)
enum class EWaterBrushBlendType : uint8_t
{
	EWaterBrushBlendType__AlphaBlend                                                 = 0,
	EWaterBrushBlendType__Min                                                        = 1,
	EWaterBrushBlendType__Max                                                        = 2,
	EWaterBrushBlendType__Additive                                                   = 3
};

/// Enum /Script/Water.EWaterBodyType
/// Size: 0x01 (1 bytes)
enum class EWaterBodyType : uint8_t
{
	EWaterBodyType__River                                                            = 0,
	EWaterBodyType__Lake                                                             = 1,
	EWaterBodyType__Ocean                                                            = 2,
	EWaterBodyType__Transition                                                       = 3,
	EWaterBodyType__Num                                                              = 4
};

/// Enum /Script/Water.EWaterBrushFalloffMode
/// Size: 0x01 (1 bytes)
enum class EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle                                                    = 0,
	EWaterBrushFalloffMode__Width                                                    = 1
};

/// Struct /Script/Water.SphericalPontoon
/// Size: 0x0220 (544 bytes) (0x000000 - 0x000220) align 16 MaxSize: 0x0220
struct FSphericalPontoon
{ 
	FName                                              CenterSocket;                                               // 0x0000   (0x0008)  
	FVector                                            RelativeLocation;                                           // 0x0008   (0x000C)  
	float                                              Radius;                                                     // 0x0014   (0x0004)  
	FVector                                            LocalForce;                                                 // 0x0018   (0x000C)  
	FVector                                            CenterLocation;                                             // 0x0024   (0x000C)  
	FQuat                                              SocketRotation;                                             // 0x0030   (0x0010)  
	FVector                                            Offset;                                                     // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	float                                              WaterHeight;                                                // 0x0050   (0x0004)  
	float                                              WaterDepth;                                                 // 0x0054   (0x0004)  
	float                                              ImmersionDepth;                                             // 0x0058   (0x0004)  
	FVector                                            WaterPlaneLocation;                                         // 0x005C   (0x000C)  
	FVector                                            WaterPlaneNormal;                                           // 0x0068   (0x000C)  
	FVector                                            WaterSurfacePosition;                                       // 0x0074   (0x000C)  
	FVector                                            WaterVelocity;                                              // 0x0080   (0x000C)  
	int32_t                                            WaterBodyIndex;                                             // 0x008C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x178];                                     // 0x0090   (0x0178)  MISSED
	class AWaterBody*                                  CurrentWaterBody;                                           // 0x0208   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0210   (0x0010)  MISSED
};

/// Struct /Script/Water.BuoyancyData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FBuoyancyData
{ 
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x0000   (0x0010)  
	float                                              BuoyancyCoefficient;                                        // 0x0010   (0x0004)  
	float                                              BuoyancyDamp;                                               // 0x0014   (0x0004)  
	float                                              BuoyancyDamp2;                                              // 0x0018   (0x0004)  
	float                                              BuoyancyRampMinVelocity;                                    // 0x001C   (0x0004)  
	float                                              BuoyancyRampMaxVelocity;                                    // 0x0020   (0x0004)  
	float                                              BuoyancyRampMax;                                            // 0x0024   (0x0004)  
	float                                              MaxBuoyantForce;                                            // 0x0028   (0x0004)  
	float                                              WaterShorePushFactor;                                       // 0x002C   (0x0004)  
	float                                              WaterVelocityStrength;                                      // 0x0030   (0x0004)  
	float                                              MaxWaterForce;                                              // 0x0034   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0038   (0x0004)  
	float                                              DragCoefficient2;                                           // 0x003C   (0x0004)  
	float                                              AngularDragCoefficient;                                     // 0x0040   (0x0004)  
	float                                              MaxDragSpeed;                                               // 0x0044   (0x0004)  
	bool                                               bApplyDragForcesInWater;                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/Water.BuoyancyComponent
/// Size: 0x0208 (520 bytes) (0x0000E0 - 0x000208) align 8 MaxSize: 0x0208
class UBuoyancyComponent : public UActorComponent
{ 
public:
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,913) /* FMulticastInlineDelegate */ __um(OnEnteredWaterDelegate);                             // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,914) /* FMulticastInlineDelegate */ __um(OnExitedWaterDelegate);                              // 0x0100   (0x0010)  
	FBuoyancyData                                      BuoyancyData;                                               // 0x0110   (0x0050)  
	TArray<class AWaterBody*>                          CurrentWaterBodies;                                         // 0x0160   (0x0010)  
	class UPrimitiveComponent*                         SimulatingComponent;                                        // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x0178   (0x0090)  MISSED


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
/// Size: 0x0370 (880 bytes) (0x0002B8 - 0x000370) align 8 MaxSize: 0x0370
class ABuoyancyManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x02B8   (0x0050)  MISSED
	TArray<class UBuoyancyComponent*>                  BuoyancyComponents;                                         // 0x0308   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x0318   (0x0058)  MISSED


	/// Functions
	// Function /Script/Water.BuoyancyManager.GetBuoyancyComponentManager
	// bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager*& Manager);                   // [0xc1e4a0] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Water.ConvertWaterBodyActorsCommandlet
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UConvertWaterBodyActorsCommandlet : public UCommandlet
{ 
public:
};

/// Class /Script/Water.EnvQueryTest_InsideWaterBody
/// Size: 0x0208 (520 bytes) (0x000200 - 0x000208) align 8 MaxSize: 0x0208
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{ 
public:
	bool                                               bIncludeWaves;                                              // 0x0200   (0x0001)  
	bool                                               bSimpleWaves;                                               // 0x0201   (0x0001)  
	bool                                               bIgnoreExclusionVolumes;                                    // 0x0202   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0203   (0x0005)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGerstnerWaterWaveGeneratorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	// void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);                                                             // [0xc1e3f0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{ 
public:
	int32_t                                            NumWaves;                                                   // 0x0030   (0x0004)  
	int32_t                                            Seed;                                                       // 0x0034   (0x0004)  
	float                                              Randomness;                                                 // 0x0038   (0x0004)  
	float                                              MinWavelength;                                              // 0x003C   (0x0004)  
	float                                              MaxWavelength;                                              // 0x0040   (0x0004)  
	float                                              WavelengthFalloff;                                          // 0x0044   (0x0004)  
	float                                              MinAmplitude;                                               // 0x0048   (0x0004)  
	float                                              MaxAmplitude;                                               // 0x004C   (0x0004)  
	float                                              AmplitudeFalloff;                                           // 0x0050   (0x0004)  
	float                                              WindAngleDeg;                                               // 0x0054   (0x0004)  
	float                                              DirectionAngularSpreadDeg;                                  // 0x0058   (0x0004)  
	float                                              SmallWaveSteepness;                                         // 0x005C   (0x0004)  
	float                                              LargeWaveSteepness;                                         // 0x0060   (0x0004)  
	float                                              SteepnessFalloff;                                           // 0x0064   (0x0004)  
};

/// Struct /Script/Water.GerstnerWaveOctave
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGerstnerWaveOctave
{ 
	int32_t                                            NumWaves;                                                   // 0x0000   (0x0004)  
	float                                              AmplitudeScale;                                             // 0x0004   (0x0004)  
	float                                              MainDirection;                                              // 0x0008   (0x0004)  
	float                                              SpreadAngle;                                                // 0x000C   (0x0004)  
	bool                                               bUniformSpread;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{ 
public:
	EWaveSpectrumType                                  SpectrumType;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FGerstnerWaveOctave>                        Octaves;                                                    // 0x0038   (0x0010)  
};

/// Class /Script/Water.WaterWavesBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UWaterWavesBase : public UObject
{ 
public:
};

/// Class /Script/Water.WaterWaves
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UWaterWaves : public UWaterWavesBase
{ 
public:
};

/// Struct /Script/Water.GerstnerWave
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FGerstnerWave
{ 
	float                                              WaveLength;                                                 // 0x0000   (0x0004)  
	float                                              Amplitude;                                                  // 0x0004   (0x0004)  
	float                                              Steepness;                                                  // 0x0008   (0x0004)  
	FVector                                            Direction;                                                  // 0x000C   (0x000C)  
	FVector2D                                          WaveVector;                                                 // 0x0018   (0x0008)  
	float                                              WaveSpeed;                                                  // 0x0020   (0x0004)  
	float                                              WKA;                                                        // 0x0024   (0x0004)  
	float                                              Q;                                                          // 0x0028   (0x0004)  
	float                                              PhaseOffset;                                                // 0x002C   (0x0004)  
};

/// Class /Script/Water.GerstnerWaterWaves
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UGerstnerWaterWaves : public UWaterWaves
{ 
public:
	class UGerstnerWaterWaveGeneratorBase*             GerstnerWaveGenerator;                                      // 0x0030   (0x0008)  
	TArray<FGerstnerWave>                              GerstnerWaves;                                              // 0x0038   (0x0010)  
	float                                              MaxWaveHeight;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveSubsystem
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/Water.LakeCollisionComponent
/// Size: 0x0510 (1296 bytes) (0x0004F8 - 0x000510) align 16 MaxSize: 0x0510
class ULakeCollisionComponent : public UPrimitiveComponent
{ 
public:
	class UBodySetup*                                  CachedBodySetup;                                            // 0x04F8   (0x0008)  
	FVector                                            BoxExtent;                                                  // 0x0500   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x050C   (0x0004)  MISSED
};

/// Class /Script/Water.NiagaraDataInterfaceWater
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{ 
public:
	class AWaterBody*                                  SourceBody;                                                 // 0x0040   (0x0008)  
};

/// Class /Script/Water.NiagaraWaterFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Water.NiagaraWaterFunctionLibrary.SetWaterBody
	// void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);            // [0xc1f080] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/Water.OceanCollisionComponent
/// Size: 0x0520 (1312 bytes) (0x0004F8 - 0x000520) align 16 MaxSize: 0x0520
class UOceanCollisionComponent : public UPrimitiveComponent
{ 
public:
	class UBodySetup*                                  CachedBodySetup;                                            // 0x04F8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0500   (0x0020)  MISSED
};

/// Class /Script/Water.OceanBoxCollisionComponent
/// Size: 0x0520 (1312 bytes) (0x000520 - 0x000520) align 16 MaxSize: 0x0520
class UOceanBoxCollisionComponent : public UBoxComponent
{ 
public:
};

/// Struct /Script/Water.UnderwaterPostProcessSettings
/// Size: 0x0590 (1424 bytes) (0x000000 - 0x000590) align 16 MaxSize: 0x0590
struct FUnderwaterPostProcessSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Priority;                                                   // 0x0004   (0x0004)  
	float                                              BlendRadius;                                                // 0x0008   (0x0004)  
	float                                              BlendWeight;                                                // 0x000C   (0x0004)  
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0010   (0x0570)  
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                              // 0x0580   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0588   (0x0008)  MISSED
};

/// Struct /Script/Water.WaterCurveSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWaterCurveSettings
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/Water.WaterBody
/// Size: 0x0EA0 (3744 bytes) (0x0002B8 - 0x000EA0) align 16 MaxSize: 0x0E98
class AWaterBody : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x02B8   (0x0010)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x02C8   (0x0008)  
	float                                              TargetWaveMaskDepth;                                        // 0x02D0   (0x0004)  
	float                                              MaxWaveHeightOffset;                                        // 0x02D4   (0x0004)  
	int32_t                                            WaterBodyIndex;                                             // 0x02D8   (0x0004)  
	bool                                               bFillCollisionUnderWaterBodiesForNavmesh;                   // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02DD   (0x0003)  MISSED
	FUnderwaterPostProcessSettings                     UnderwaterPostProcessSettings;                              // 0x02E0   (0x0590)  
	EWaterBodyType                                     WaterBodyType;                                              // 0x0870   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0871   (0x0007)  MISSED
	FWaterCurveSettings                                CurveSettings;                                              // 0x0878   (0x0020)  
	class UMaterialInterface*                          WaterMaterial;                                              // 0x0898   (0x0008)  
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                              // 0x08A0   (0x0008)  
	bool                                               bAffectsLandscape;                                          // 0x08A8   (0x0001)  
	bool                                               bGenerateCollisions;                                        // 0x08A9   (0x0001)  
	bool                                               bOverrideWaterMesh;                                         // 0x08AA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x08AB   (0x0005)  MISSED
	class UStaticMesh*                                 WaterMeshOverride;                                          // 0x08B0   (0x0008)  
	int32_t                                            OverlapMaterialPriority;                                    // 0x08B8   (0x0004)  
	FName                                              CollisionProfileName;                                       // 0x08BC   (0x0008)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x08C4   (0x0004)  MISSED
	class UWaterSplineComponent*                       SplineComp;                                                 // 0x08C8   (0x0008)  
	class UWaterSplineMetadata*                        WaterSplineMetadata;                                        // 0x08D0   (0x0008)  
	class UMaterialInstanceDynamic*                    WaterMID;                                                   // 0x08D8   (0x0008)  
	class UMaterialInstanceDynamic*                    UnderwaterPostProcessMID;                                   // 0x08E0   (0x0008)  
	SDK_UNDEFINED(16,915) /* TArray<TLazyObjectPtr<AWaterBodyIsland*>> */ __um(Islands);                           // 0x08E8   (0x0010)  
	SDK_UNDEFINED(16,916) /* TArray<TLazyObjectPtr<AWaterBodyExclusionVolume*>> */ __um(ExclusionVolumes);         // 0x08F8   (0x0010)  
	TWeakObjectPtr<class ALandscapeProxy*>             Landscape;                                                  // 0x0908   (0x0008)  
	FPostProcessSettings                               CurrentPostProcessSettings;                                 // 0x0910   (0x0570)  
	bool                                               bCanAffectNavigation;                                       // 0x0E80   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0E81   (0x0007)  MISSED
	class UClass*                                      WaterNavAreaClass;                                          // 0x0E88   (0x0008)  
	class UWaterWavesBase*                             WaterWaves;                                                 // 0x0E90   (0x0008)  


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
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UWaterBodyGenerator : public UObject
{ 
public:
};

/// Class /Script/Water.CustomMeshGenerator
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCustomMeshGenerator : public UWaterBodyGenerator
{ 
public:
	class UStaticMeshComponent*                        MeshComp;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/Water.WaterBodyCustom
/// Size: 0x0EA0 (3744 bytes) (0x000E98 - 0x000EA0) align 16 MaxSize: 0x0EA0
class AWaterBodyCustom : public AWaterBody
{ 
public:
	class UCustomMeshGenerator*                        CustomGenerator;                                            // 0x0E98   (0x0008)  
};

/// Class /Script/Water.WaterBodyExclusionVolume
/// Size: 0x0338 (824 bytes) (0x000320 - 0x000338) align 8 MaxSize: 0x0338
class AWaterBodyExclusionVolume : public APhysicsVolume
{ 
public:
	bool                                               bIgnoreAllOverlappingWaterBodies;                           // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0321   (0x0007)  MISSED
	TArray<class AWaterBody*>                          WaterBodiesToIgnore;                                        // 0x0328   (0x0010)  
};

/// Class /Script/Water.WaterBodyIsland
/// Size: 0x02C8 (712 bytes) (0x0002B8 - 0x0002C8) align 8 MaxSize: 0x02C8
class AWaterBodyIsland : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	class UWaterSplineComponent*                       SplineComp;                                                 // 0x02C0   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBodyIsland.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0xc1eb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.LakeGenerator
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class ULakeGenerator : public UWaterBodyGenerator
{ 
public:
	class UStaticMeshComponent*                        LakeMeshComp;                                               // 0x0030   (0x0008)  
	class UBoxComponent*                               LakeCollisionComp;                                          // 0x0038   (0x0008)  
	class ULakeCollisionComponent*                     LakeCollision;                                              // 0x0040   (0x0008)  
};

/// Class /Script/Water.WaterBodyLake
/// Size: 0x0EA0 (3744 bytes) (0x000E98 - 0x000EA0) align 16 MaxSize: 0x0EA0
class AWaterBodyLake : public AWaterBody
{ 
public:
	class ULakeGenerator*                              LakeGenerator;                                              // 0x0E98   (0x0008)  
};

/// Class /Script/Water.OceanGenerator
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UOceanGenerator : public UWaterBodyGenerator
{ 
public:
	TArray<class UOceanBoxCollisionComponent*>         CollisionBoxes;                                             // 0x0030   (0x0010)  
	TArray<class UOceanCollisionComponent*>            CollisionHullSets;                                          // 0x0040   (0x0010)  
};

/// Class /Script/Water.WaterBodyOcean
/// Size: 0x0EB0 (3760 bytes) (0x000E98 - 0x000EB0) align 16 MaxSize: 0x0EB0
class AWaterBodyOcean : public AWaterBody
{ 
public:
	class UOceanGenerator*                             OceanGenerator;                                             // 0x0E98   (0x0008)  
	FVector                                            CollisionExtents;                                           // 0x0EA0   (0x000C)  
	float                                              HeightOffset;                                               // 0x0EAC   (0x0004)  
};

/// Class /Script/Water.RiverGenerator
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URiverGenerator : public UWaterBodyGenerator
{ 
public:
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                       // 0x0030   (0x0010)  
};

/// Class /Script/Water.WaterBodyRiver
/// Size: 0x0EC0 (3776 bytes) (0x000E98 - 0x000EC0) align 16 MaxSize: 0x0EC0
class AWaterBodyRiver : public AWaterBody
{ 
public:
	class URiverGenerator*                             RiverGenerator;                                             // 0x0E98   (0x0008)  
	class UMaterialInterface*                          LakeTransitionMaterial;                                     // 0x0EA0   (0x0008)  
	class UMaterialInstanceDynamic*                    LakeTransitionMID;                                          // 0x0EA8   (0x0008)  
	class UMaterialInterface*                          OceanTransitionMaterial;                                    // 0x0EB0   (0x0008)  
	class UMaterialInstanceDynamic*                    OceanTransitionMID;                                         // 0x0EB8   (0x0008)  
};

/// Class /Script/Water.WaterBrushActorInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UWaterBrushActorInterface : public UInterface
{ 
public:
};

/// Class /Script/Water.WaterMeshActor
/// Size: 0x02C8 (712 bytes) (0x0002B8 - 0x0002C8) align 8 MaxSize: 0x02C8
class AWaterMeshActor : public AActor
{ 
public:
	class UTexture2D*                                  WaterVelocityTexture;                                       // 0x02B8   (0x0008)  
	class UWaterMeshComponent*                         WaterMesh;                                                  // 0x02C0   (0x0008)  
};

/// Class /Script/Water.WaterMeshComponent
/// Size: 0x0640 (1600 bytes) (0x000520 - 0x000640) align 16 MaxSize: 0x0640
class UWaterMeshComponent : public UMeshComponent
{ 
public:
	int32_t                                            ForceCollapseDensityLevel;                                  // 0x0520   (0x0004)  
	float                                              TileSize;                                                   // 0x0524   (0x0004)  
	FIntPoint                                          ExtentInTiles;                                              // 0x0528   (0x0008)  
	class UMaterialInterface*                          FarDistanceMaterial;                                        // 0x0530   (0x0008)  
	float                                              FarDistanceMeshExtent;                                      // 0x0538   (0x0004)  
	FVector                                            RTWorldLocation;                                            // 0x053C   (0x000C)  
	FVector                                            RTWorldSizeVector;                                          // 0x0548   (0x000C)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x0554   (0x0064)  MISSED
	SDK_UNDEFINED(80,917) /* TSet<UMaterialInterface*> */ __um(UsedMaterials);                                     // 0x05B8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0608   (0x0030)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0638   (0x0004)  
	float                                              LODScale;                                                   // 0x063C   (0x0004)  


	/// Functions
	// Function /Script/Water.WaterMeshComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xc1ebd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterRuntimeSettings
/// Size: 0x0080 (128 bytes) (0x000040 - 0x000080) align 8 MaxSize: 0x0080
class UWaterRuntimeSettings : public UDeveloperSettings
{ 
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannelForWaterTraces;                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TWeakObjectPtr<class UMaterialParameterCollection*> MaterialParameterCollection;                               // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0050   (0x0020)  MISSED
	float                                              WaterBodyIconWorldSize;                                     // 0x0070   (0x0004)  
	float                                              WaterBodyIconWorldZOffset;                                  // 0x0074   (0x0004)  
	FName                                              DefaultWaterCollisionProfileName;                           // 0x0078   (0x0008)  
};

/// Struct /Script/Water.WaterSplineCurveDefaults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FWaterSplineCurveDefaults
{ 
	float                                              DefaultDepth;                                               // 0x0000   (0x0004)  
	float                                              DefaultWidth;                                               // 0x0004   (0x0004)  
	float                                              DefaultVelocity;                                            // 0x0008   (0x0004)  
	float                                              DefaultAudioIntensity;                                      // 0x000C   (0x0004)  
};

/// Class /Script/Water.WaterSplineComponent
/// Size: 0x0610 (1552 bytes) (0x0005F0 - 0x000610) align 16 MaxSize: 0x0610
class UWaterSplineComponent : public USplineComponent
{ 
public:
	FWaterSplineCurveDefaults                          WaterSplineDefaults;                                        // 0x05F0   (0x0010)  
	FWaterSplineCurveDefaults                          PreviousWaterSplineDefaults;                                // 0x0600   (0x0010)  
};

/// Class /Script/Water.WaterSplineMetadata
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UWaterSplineMetadata : public USplineMetadata
{ 
public:
	FInterpCurveFloat                                  Depth;                                                      // 0x0030   (0x0018)  
	FInterpCurveFloat                                  WaterVelocityScalar;                                        // 0x0048   (0x0018)  
	FInterpCurveFloat                                  RiverWidth;                                                 // 0x0060   (0x0018)  
	FInterpCurveFloat                                  AudioIntensity;                                             // 0x0078   (0x0018)  
	FInterpCurveVector                                 WaterVelocity;                                              // 0x0090   (0x0018)  
};

/// Class /Script/Water.WaterSubsystem
/// Size: 0x0110 (272 bytes) (0x000048 - 0x000110) align 8 MaxSize: 0x0110
class UWaterSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0048   (0x0038)  MISSED
	class ABuoyancyManager*                            BuoyancyManager;                                            // 0x0080   (0x0008)  
	SDK_UNDEFINED(16,918) /* FMulticastInlineDelegate */ __um(OnCameraUnderwaterStateChanged);                     // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,919) /* FMulticastInlineDelegate */ __um(OnWaterScalabilityChanged);                          // 0x0098   (0x0010)  
	class UStaticMesh*                                 DefaultRiverMesh;                                           // 0x00A8   (0x0008)  
	class UStaticMesh*                                 DefaultLakeMesh;                                            // 0x00B0   (0x0008)  
	class AWaterMeshActor*                             WaterMeshActor;                                             // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00C0   (0x0028)  MISSED
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x00F0   (0x0020)  MISSED


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
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UWaterWavesAsset : public UObject
{ 
public:
	class UWaterWaves*                                 WaterWaves;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/Water.WaterWavesAssetReference
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UWaterWavesAssetReference : public UWaterWavesBase
{ 
public:
	class UWaterWavesAsset*                            WaterWavesAsset;                                            // 0x0030   (0x0008)  
};

/// Struct /Script/Water.WaterFalloffSettings
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FWaterFalloffSettings
{ 
	EWaterBrushFalloffMode                             FalloffMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FalloffAngle;                                               // 0x0004   (0x0004)  
	float                                              FalloffWidth;                                               // 0x0008   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x000C   (0x0004)  
	float                                              ZOffset;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectBlurring
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FWaterBrushEffectBlurring
{ 
	bool                                               bBlurShape;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Radius;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurlNoise
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FWaterBrushEffectCurlNoise
{ 
	float                                              Curl1Amount;                                                // 0x0000   (0x0004)  
	float                                              Curl2Amount;                                                // 0x0004   (0x0004)  
	float                                              Curl1Tiling;                                                // 0x0008   (0x0004)  
	float                                              Curl2Tiling;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectDisplacement
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FWaterBrushEffectDisplacement
{ 
	float                                              DisplacementHeight;                                         // 0x0000   (0x0004)  
	float                                              DisplacementTiling;                                         // 0x0004   (0x0004)  
	class UTexture2D*                                  Texture;                                                    // 0x0008   (0x0008)  
	float                                              Midpoint;                                                   // 0x0010   (0x0004)  
	FLinearColor                                       Channel;                                                    // 0x0014   (0x0010)  
	float                                              WeightmapInfluence;                                         // 0x0024   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectSmoothBlending
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FWaterBrushEffectSmoothBlending
{ 
	float                                              InnerSmoothDistance;                                        // 0x0000   (0x0004)  
	float                                              OuterSmoothDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectTerracing
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FWaterBrushEffectTerracing
{ 
	float                                              TerraceAlpha;                                               // 0x0000   (0x0004)  
	float                                              TerraceSpacing;                                             // 0x0004   (0x0004)  
	float                                              TerraceSmoothness;                                          // 0x0008   (0x0004)  
	float                                              MaskLength;                                                 // 0x000C   (0x0004)  
	float                                              MaskStartOffset;                                            // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffects
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FWaterBrushEffects
{ 
	FWaterBrushEffectBlurring                          Blurring;                                                   // 0x0000   (0x0008)  
	FWaterBrushEffectCurlNoise                         CurlNoise;                                                  // 0x0008   (0x0010)  
	FWaterBrushEffectDisplacement                      Displacement;                                               // 0x0018   (0x0028)  
	FWaterBrushEffectSmoothBlending                    SmoothBlending;                                             // 0x0040   (0x0008)  
	FWaterBrushEffectTerracing                         Terracing;                                                  // 0x0048   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBodyHeightmapSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FWaterBodyHeightmapSettings
{ 
	EWaterBrushBlendType                               BlendMode;                                                  // 0x0000   (0x0001)  
	bool                                               bInvertShape;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FWaterFalloffSettings                              FalloffSettings;                                            // 0x0004   (0x0014)  
	FWaterBrushEffects                                 Effects;                                                    // 0x0018   (0x0060)  
	int32_t                                            Priority;                                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBodyWeightmapSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWaterBodyWeightmapSettings
{ 
	float                                              FalloffWidth;                                               // 0x0000   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x0004   (0x0004)  
	class UTexture2D*                                  ModulationTexture;                                          // 0x0008   (0x0008)  
	float                                              TextureTiling;                                              // 0x0010   (0x0004)  
	float                                              TextureInfluence;                                           // 0x0014   (0x0004)  
	float                                              Midpoint;                                                   // 0x0018   (0x0004)  
	float                                              FinalOpacity;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurves
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWaterBrushEffectCurves
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FSphericalPontoon) == 0x0220); // 544 bytes (0x000000 - 0x000220)
static_assert(sizeof(FBuoyancyData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UBuoyancyComponent) == 0x0208); // 520 bytes (0x0000E0 - 0x000208)
static_assert(sizeof(ABuoyancyManager) == 0x0370); // 880 bytes (0x0002B8 - 0x000370)
static_assert(sizeof(UConvertWaterBodyActorsCommandlet) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UEnvQueryTest_InsideWaterBody) == 0x0208); // 520 bytes (0x000200 - 0x000208)
static_assert(sizeof(UGerstnerWaterWaveGeneratorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGerstnerWaterWaveGeneratorSimple) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(FGerstnerWaveOctave) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UGerstnerWaterWaveGeneratorSpectrum) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UWaterWavesBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWaterWaves) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FGerstnerWave) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UGerstnerWaterWaves) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UGerstnerWaterWaveSubsystem) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(ULakeCollisionComponent) == 0x0510); // 1296 bytes (0x0004F8 - 0x000510)
static_assert(sizeof(UNiagaraDataInterfaceWater) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UNiagaraWaterFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UOceanCollisionComponent) == 0x0520); // 1312 bytes (0x0004F8 - 0x000520)
static_assert(sizeof(UOceanBoxCollisionComponent) == 0x0520); // 1312 bytes (0x000520 - 0x000520)
static_assert(sizeof(FUnderwaterPostProcessSettings) == 0x0590); // 1424 bytes (0x000000 - 0x000590)
static_assert(sizeof(FWaterCurveSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(AWaterBody) == 0x0E98); // 3736 bytes (0x0002B8 - 0x000E98)
static_assert(sizeof(UWaterBodyGenerator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCustomMeshGenerator) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(AWaterBodyCustom) == 0x0EA0); // 3744 bytes (0x000E98 - 0x000EA0)
static_assert(sizeof(AWaterBodyExclusionVolume) == 0x0338); // 824 bytes (0x000320 - 0x000338)
static_assert(sizeof(AWaterBodyIsland) == 0x02C8); // 712 bytes (0x0002B8 - 0x0002C8)
static_assert(sizeof(ULakeGenerator) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(AWaterBodyLake) == 0x0EA0); // 3744 bytes (0x000E98 - 0x000EA0)
static_assert(sizeof(UOceanGenerator) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(AWaterBodyOcean) == 0x0EB0); // 3760 bytes (0x000E98 - 0x000EB0)
static_assert(sizeof(URiverGenerator) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(AWaterBodyRiver) == 0x0EC0); // 3776 bytes (0x000E98 - 0x000EC0)
static_assert(sizeof(UWaterBrushActorInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(AWaterMeshActor) == 0x02C8); // 712 bytes (0x0002B8 - 0x0002C8)
static_assert(sizeof(UWaterMeshComponent) == 0x0640); // 1600 bytes (0x000520 - 0x000640)
static_assert(sizeof(UWaterRuntimeSettings) == 0x0080); // 128 bytes (0x000040 - 0x000080)
static_assert(sizeof(FWaterSplineCurveDefaults) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UWaterSplineComponent) == 0x0610); // 1552 bytes (0x0005F0 - 0x000610)
static_assert(sizeof(UWaterSplineMetadata) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UWaterSubsystem) == 0x0110); // 272 bytes (0x000048 - 0x000110)
static_assert(sizeof(UWaterWavesAsset) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UWaterWavesAssetReference) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FWaterFalloffSettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FWaterBrushEffectBlurring) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWaterBrushEffectCurlNoise) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWaterBrushEffectDisplacement) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FWaterBrushEffectSmoothBlending) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWaterBrushEffectTerracing) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FWaterBrushEffects) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWaterBodyHeightmapSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FWaterBodyWeightmapSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWaterBrushEffectCurves) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FSphericalPontoon, CenterSocket) == 0x0000);
static_assert(offsetof(FSphericalPontoon, RelativeLocation) == 0x0008);
static_assert(offsetof(FSphericalPontoon, LocalForce) == 0x0018);
static_assert(offsetof(FSphericalPontoon, CenterLocation) == 0x0024);
static_assert(offsetof(FSphericalPontoon, SocketRotation) == 0x0030);
static_assert(offsetof(FSphericalPontoon, Offset) == 0x0040);
static_assert(offsetof(FSphericalPontoon, WaterPlaneLocation) == 0x005C);
static_assert(offsetof(FSphericalPontoon, WaterPlaneNormal) == 0x0068);
static_assert(offsetof(FSphericalPontoon, WaterSurfacePosition) == 0x0074);
static_assert(offsetof(FSphericalPontoon, WaterVelocity) == 0x0080);
static_assert(offsetof(FSphericalPontoon, CurrentWaterBody) == 0x0208);
static_assert(offsetof(FBuoyancyData, Pontoons) == 0x0000);
static_assert(offsetof(UBuoyancyComponent, Pontoons) == 0x00E0);
static_assert(offsetof(UBuoyancyComponent, BuoyancyData) == 0x0110);
static_assert(offsetof(UBuoyancyComponent, CurrentWaterBodies) == 0x0160);
static_assert(offsetof(UBuoyancyComponent, SimulatingComponent) == 0x0170);
static_assert(offsetof(ABuoyancyManager, BuoyancyComponents) == 0x0308);
static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, SpectrumType) == 0x0030);
static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, Octaves) == 0x0038);
static_assert(offsetof(FGerstnerWave, Direction) == 0x000C);
static_assert(offsetof(FGerstnerWave, WaveVector) == 0x0018);
static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaveGenerator) == 0x0030);
static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaves) == 0x0038);
static_assert(offsetof(ULakeCollisionComponent, CachedBodySetup) == 0x04F8);
static_assert(offsetof(ULakeCollisionComponent, BoxExtent) == 0x0500);
static_assert(offsetof(UNiagaraDataInterfaceWater, SourceBody) == 0x0040);
static_assert(offsetof(UOceanCollisionComponent, CachedBodySetup) == 0x04F8);
static_assert(offsetof(FUnderwaterPostProcessSettings, PostProcessSettings) == 0x0010);
static_assert(offsetof(FUnderwaterPostProcessSettings, UnderwaterPostProcessMaterial) == 0x0580);
static_assert(offsetof(FWaterCurveSettings, ElevationCurveAsset) == 0x0008);
static_assert(offsetof(AWaterBody, PhysicalMaterial) == 0x02C8);
static_assert(offsetof(AWaterBody, UnderwaterPostProcessSettings) == 0x02E0);
static_assert(offsetof(AWaterBody, WaterBodyType) == 0x0870);
static_assert(offsetof(AWaterBody, CurveSettings) == 0x0878);
static_assert(offsetof(AWaterBody, WaterMaterial) == 0x0898);
static_assert(offsetof(AWaterBody, UnderwaterPostProcessMaterial) == 0x08A0);
static_assert(offsetof(AWaterBody, WaterMeshOverride) == 0x08B0);
static_assert(offsetof(AWaterBody, CollisionProfileName) == 0x08BC);
static_assert(offsetof(AWaterBody, SplineComp) == 0x08C8);
static_assert(offsetof(AWaterBody, WaterSplineMetadata) == 0x08D0);
static_assert(offsetof(AWaterBody, WaterMID) == 0x08D8);
static_assert(offsetof(AWaterBody, UnderwaterPostProcessMID) == 0x08E0);
static_assert(offsetof(AWaterBody, Landscape) == 0x0908);
static_assert(offsetof(AWaterBody, CurrentPostProcessSettings) == 0x0910);
static_assert(offsetof(AWaterBody, WaterNavAreaClass) == 0x0E88);
static_assert(offsetof(AWaterBody, WaterWaves) == 0x0E90);
static_assert(offsetof(UCustomMeshGenerator, MeshComp) == 0x0030);
static_assert(offsetof(AWaterBodyCustom, CustomGenerator) == 0x0E98);
static_assert(offsetof(AWaterBodyExclusionVolume, WaterBodiesToIgnore) == 0x0328);
static_assert(offsetof(AWaterBodyIsland, SplineComp) == 0x02C0);
static_assert(offsetof(ULakeGenerator, LakeMeshComp) == 0x0030);
static_assert(offsetof(ULakeGenerator, LakeCollisionComp) == 0x0038);
static_assert(offsetof(ULakeGenerator, LakeCollision) == 0x0040);
static_assert(offsetof(AWaterBodyLake, LakeGenerator) == 0x0E98);
static_assert(offsetof(UOceanGenerator, CollisionBoxes) == 0x0030);
static_assert(offsetof(UOceanGenerator, CollisionHullSets) == 0x0040);
static_assert(offsetof(AWaterBodyOcean, OceanGenerator) == 0x0E98);
static_assert(offsetof(AWaterBodyOcean, CollisionExtents) == 0x0EA0);
static_assert(offsetof(URiverGenerator, SplineMeshComponents) == 0x0030);
static_assert(offsetof(AWaterBodyRiver, RiverGenerator) == 0x0E98);
static_assert(offsetof(AWaterBodyRiver, LakeTransitionMaterial) == 0x0EA0);
static_assert(offsetof(AWaterBodyRiver, LakeTransitionMID) == 0x0EA8);
static_assert(offsetof(AWaterBodyRiver, OceanTransitionMaterial) == 0x0EB0);
static_assert(offsetof(AWaterBodyRiver, OceanTransitionMID) == 0x0EB8);
static_assert(offsetof(AWaterMeshActor, WaterVelocityTexture) == 0x02B8);
static_assert(offsetof(AWaterMeshActor, WaterMesh) == 0x02C0);
static_assert(offsetof(UWaterMeshComponent, ExtentInTiles) == 0x0528);
static_assert(offsetof(UWaterMeshComponent, FarDistanceMaterial) == 0x0530);
static_assert(offsetof(UWaterMeshComponent, RTWorldLocation) == 0x053C);
static_assert(offsetof(UWaterMeshComponent, RTWorldSizeVector) == 0x0548);
static_assert(offsetof(UWaterRuntimeSettings, CollisionChannelForWaterTraces) == 0x0040);
static_assert(offsetof(UWaterRuntimeSettings, MaterialParameterCollection) == 0x0048);
static_assert(offsetof(UWaterRuntimeSettings, DefaultWaterCollisionProfileName) == 0x0078);
static_assert(offsetof(UWaterSplineComponent, WaterSplineDefaults) == 0x05F0);
static_assert(offsetof(UWaterSplineComponent, PreviousWaterSplineDefaults) == 0x0600);
static_assert(offsetof(UWaterSplineMetadata, Depth) == 0x0030);
static_assert(offsetof(UWaterSplineMetadata, WaterVelocityScalar) == 0x0048);
static_assert(offsetof(UWaterSplineMetadata, RiverWidth) == 0x0060);
static_assert(offsetof(UWaterSplineMetadata, AudioIntensity) == 0x0078);
static_assert(offsetof(UWaterSplineMetadata, WaterVelocity) == 0x0090);
static_assert(offsetof(UWaterSubsystem, BuoyancyManager) == 0x0080);
static_assert(offsetof(UWaterSubsystem, DefaultRiverMesh) == 0x00A8);
static_assert(offsetof(UWaterSubsystem, DefaultLakeMesh) == 0x00B0);
static_assert(offsetof(UWaterSubsystem, WaterMeshActor) == 0x00B8);
static_assert(offsetof(UWaterSubsystem, MaterialParameterCollection) == 0x00E8);
static_assert(offsetof(UWaterWavesAsset, WaterWaves) == 0x0030);
static_assert(offsetof(UWaterWavesAssetReference, WaterWavesAsset) == 0x0030);
static_assert(offsetof(FWaterFalloffSettings, FalloffMode) == 0x0000);
static_assert(offsetof(FWaterBrushEffectDisplacement, Texture) == 0x0008);
static_assert(offsetof(FWaterBrushEffectDisplacement, Channel) == 0x0014);
static_assert(offsetof(FWaterBrushEffects, Blurring) == 0x0000);
static_assert(offsetof(FWaterBrushEffects, CurlNoise) == 0x0008);
static_assert(offsetof(FWaterBrushEffects, Displacement) == 0x0018);
static_assert(offsetof(FWaterBrushEffects, SmoothBlending) == 0x0040);
static_assert(offsetof(FWaterBrushEffects, Terracing) == 0x0048);
static_assert(offsetof(FWaterBodyHeightmapSettings, BlendMode) == 0x0000);
static_assert(offsetof(FWaterBodyHeightmapSettings, FalloffSettings) == 0x0004);
static_assert(offsetof(FWaterBodyHeightmapSettings, Effects) == 0x0018);
static_assert(offsetof(FWaterBodyWeightmapSettings, ModulationTexture) == 0x0008);
static_assert(offsetof(FWaterBrushEffectCurves, ElevationCurveAsset) == 0x0008);
