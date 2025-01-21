
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Foliage.CoverGrassClustersComponent
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UCoverGrassClustersComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class AInstancedFoliageActor*)             InstancedFoliageActor                                       OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(TArray<FVector4>)                          CoverClusterSpheres                                         OFFSET(get<T>, {0x270, 16, 0, 0})
	SMember(FVector4)                                  TotalBoundsSphere                                           OFFSET(getStruct<T>, {0x280, 16, 0, 0})
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0030 (0x000750 - 0x000780)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FMulticastInlineDelegate)                  OnInstanceTakePointDamage                                   OFFSET(getStruct<T>, {0x750, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInstanceTakeRadialDamage                                  OFFSET(getStruct<T>, {0x760, 16, 0, 0})
	SMember(FGuid)                                     GenerationGuid                                              OFFSET(getStruct<T>, {0x770, 16, 0, 0})
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0x000030 - 0x000030)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x2ca9170] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box);          // [0x2ca9030] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (0x000000 - 0x00000C)
class FFoliageVertexColorChannelMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      UseMask                                                     OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(float)                                     MaskThreshold                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      InvertMask                                                  OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x03B0 (0x000030 - 0x0003E0)
class UFoliageType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FGuid)                                     UpdateGuid                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UStaticMesh*>)                TerrainLODMeshes                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     DensityAdjustmentFactor                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bSingleInstanceModeOverrideRadius                           OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(float)                                     SingleInstanceModeRadius                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(EFoliageScaling)                           Scaling                                                     OFFSET(get<T>, {0x64, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	SMember(FFoliageVertexColorChannelMask)            VertexColorMaskByChannel                                    OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	CMember(TEnumAsByte<FoliageVertexColorMask>)       VertexColorMask                                             OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(float)                                     VertexColorMaskThreshold                                    OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      VertexColorMaskInvert                                       OFFSET(get<bool>, {0xB8, 1, 1, 0})
	SMember(FFloatInterval)                            ZOffset                                                     OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	DMember(bool)                                      AlignToNormal                                               OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(float)                                     AlignMaxAngle                                               OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      RandomYaw                                                   OFFSET(get<bool>, {0xCC, 1, 1, 0})
	DMember(float)                                     RandomPitchAngle                                            OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FFloatInterval)                            GroundSlopeAngle                                            OFFSET(getStruct<T>, {0xD4, 8, 0, 0})
	SMember(FFloatInterval)                            Height                                                      OFFSET(getStruct<T>, {0xDC, 8, 0, 0})
	CMember(TArray<FName>)                             LandscapeLayers                                             OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     MinimumLayerWeight                                          OFFSET(get<float>, {0xF8, 4, 0, 0})
	CMember(TArray<FName>)                             ExclusionLandscapeLayers                                    OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     MinimumExclusionLayerWeight                                 OFFSET(get<float>, {0x110, 4, 0, 0})
	SMember(FName)                                     LandscapeLayer                                              OFFSET(getStruct<T>, {0x114, 8, 0, 0})
	DMember(bool)                                      CollisionWithWorld                                          OFFSET(get<bool>, {0x11C, 1, 1, 0})
	SMember(FVector)                                   CollisionScale                                              OFFSET(getStruct<T>, {0x120, 12, 0, 0})
	SMember(FBoxSphereBounds)                          MeshBounds                                                  OFFSET(getStruct<T>, {0x12C, 28, 0, 0})
	SMember(FVector)                                   LowBoundOriginRadius                                        OFFSET(getStruct<T>, {0x148, 12, 0, 0})
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    OFFSET(get<T>, {0x154, 1, 0, 0})
	SMember(FInt32Interval)                            CullDistance                                                OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      bEnableStaticLighting                                       OFFSET(get<bool>, {0x160, 1, 1, 0})
	DMember(bool)                                      CastShadow                                                  OFFSET(get<bool>, {0x160, 1, 1, 1})
	DMember(bool)                                      bAffectDynamicIndirectLighting                              OFFSET(get<bool>, {0x160, 1, 1, 2})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x160, 1, 1, 3})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x160, 1, 1, 4})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x160, 1, 1, 5})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x160, 1, 1, 6})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x160, 1, 1, 7})
	DMember(bool)                                      bOverrideLightMapRes                                        OFFSET(get<bool>, {0x161, 1, 1, 0})
	DMember(int32_t)                                   OverriddenLightMapRes                                       OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	CMember(ELightmapType)                             LightmapType                                                OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bUseAsOccluder                                              OFFSET(get<bool>, {0x16C, 1, 1, 0})
	DMember(bool)                                      bVisibleInRayTracing                                        OFFSET(get<bool>, {0x170, 1, 1, 0})
	DMember(bool)                                      bEvaluateWorldPositionOffset                                OFFSET(get<bool>, {0x170, 1, 1, 1})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x178, 344, 0, 0})
	CMember(TEnumAsByte<EHasCustomNavigableGeometry>)  CustomNavigableGeometry                                     OFFSET(get<T>, {0x2D0, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x2D1, 1, 0, 0})
	DMember(bool)                                      bOverrideMinInstancesPerBatch                               OFFSET(get<bool>, {0x2D4, 1, 1, 0})
	DMember(uint32_t)                                  OverridenMinInstancesPerBatch                               OFFSET(get<uint32_t>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x2DC, 1, 1, 0})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x2E0, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x2E4, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x2EC, 4, 0, 0})
	DMember(float)                                     ShadeRadius                                                 OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(int32_t)                                   NumSteps                                                    OFFSET(get<int32_t>, {0x2F4, 4, 0, 0})
	DMember(float)                                     InitialSeedDensity                                          OFFSET(get<float>, {0x2F8, 4, 0, 0})
	DMember(float)                                     AverageSpreadDistance                                       OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     SpreadVariance                                              OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   SeedsPerStep                                                OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	DMember(int32_t)                                   DistributionSeed                                            OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	DMember(float)                                     MaxInitialSeedOffset                                        OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(bool)                                      bCanGrowInShade                                             OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bSpawnsInShade                                              OFFSET(get<bool>, {0x311, 1, 0, 0})
	DMember(float)                                     MaxInitialAge                                               OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     OverlapPriority                                             OFFSET(get<float>, {0x31C, 4, 0, 0})
	SMember(FFloatInterval)                            ProceduralScale                                             OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        ScaleCurve                                                  OFFSET(getStruct<T>, {0x328, 136, 0, 0})
	DMember(int32_t)                                   ChangeCount                                                 OFFSET(get<int32_t>, {0x3B0, 4, 0, 0})
	DMember(bool)                                      ReapplyDensity                                              OFFSET(get<bool>, {0x3B4, 1, 1, 0})
	DMember(bool)                                      ReapplyRadius                                               OFFSET(get<bool>, {0x3B4, 1, 1, 1})
	DMember(bool)                                      ReapplyAlignToNormal                                        OFFSET(get<bool>, {0x3B4, 1, 1, 2})
	DMember(bool)                                      ReapplyRandomYaw                                            OFFSET(get<bool>, {0x3B4, 1, 1, 3})
	DMember(bool)                                      ReapplyScaling                                              OFFSET(get<bool>, {0x3B4, 1, 1, 4})
	DMember(bool)                                      ReapplyScaleX                                               OFFSET(get<bool>, {0x3B4, 1, 1, 5})
	DMember(bool)                                      ReapplyScaleY                                               OFFSET(get<bool>, {0x3B4, 1, 1, 6})
	DMember(bool)                                      ReapplyScaleZ                                               OFFSET(get<bool>, {0x3B4, 1, 1, 7})
	DMember(bool)                                      ReapplyRandomPitchAngle                                     OFFSET(get<bool>, {0x3B5, 1, 1, 0})
	DMember(bool)                                      ReapplyGroundSlope                                          OFFSET(get<bool>, {0x3B5, 1, 1, 1})
	DMember(bool)                                      ReapplyHeight                                               OFFSET(get<bool>, {0x3B5, 1, 1, 2})
	DMember(bool)                                      ReapplyLandscapeLayers                                      OFFSET(get<bool>, {0x3B5, 1, 1, 3})
	DMember(bool)                                      ReapplyZOffset                                              OFFSET(get<bool>, {0x3B5, 1, 1, 4})
	DMember(bool)                                      ReapplyCollisionWithWorld                                   OFFSET(get<bool>, {0x3B5, 1, 1, 5})
	DMember(bool)                                      ReapplyVertexColorMask                                      OFFSET(get<bool>, {0x3B5, 1, 1, 6})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x3B5, 1, 1, 7})
	DMember(bool)                                      bEnableDiscardOnLoad                                        OFFSET(get<bool>, {0x3B6, 1, 1, 0})
	DMember(uint32_t)                                  DensityScalingTier                                          OFFSET(get<uint32_t>, {0x3B8, 4, 0, 0})
	DMember(uint32_t)                                  LODBiasTier                                                 OFFSET(get<uint32_t>, {0x3BC, 4, 0, 0})
	DMember(uint32_t)                                  MinShadowLOD                                                OFFSET(get<uint32_t>, {0x3C0, 4, 0, 0})
	DMember(char)                                      bCastScreenSpaceShadows                                     OFFSET(get<char>, {0x3C4, 1, 0, 0})
	DMember(char)                                      bInteractableHighlightOcclusion                             OFFSET(get<char>, {0x3C5, 1, 0, 0})
	DMember(bool)                                      bIsSoftCover                                                OFFSET(get<bool>, {0x3C6, 1, 0, 0})
	CMember(TArray<class URuntimeVirtualTexture*>)     RuntimeVirtualTextures                                      OFFSET(get<T>, {0x3C8, 16, 0, 0})
	DMember(int32_t)                                   VirtualTextureCullMips                                      OFFSET(get<int32_t>, {0x3D8, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                OFFSET(get<T>, {0x3DC, 1, 0, 0})
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class UFoliageType_Actor : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x3E0, 8, 0, 0})
	DMember(bool)                                      bShouldAttachToBaseComponent                                OFFSET(get<bool>, {0x3E8, 1, 0, 0})
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0020 (0x0003E0 - 0x000400)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x3E8, 16, 0, 0})
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0x3F8, 8, 0, 0})
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0068 (0x0002B8 - 0x000320)
class AInstancedFoliageActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UCoverGrassClustersComponent*)       CoverGrassClustersComponent                                 OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0060 (0x0002C8 - 0x000328)
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UCapsuleComponent*)                  CapsuleComponent                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FVector)                                   TouchingActorEntryPosition                                  OFFSET(getStruct<T>, {0x2D0, 12, 0, 0})
	SMember(FVector)                                   FoliageVelocity                                             OFFSET(getStruct<T>, {0x2DC, 12, 0, 0})
	SMember(FVector)                                   FoliageForce                                                OFFSET(getStruct<T>, {0x2E8, 12, 0, 0})
	SMember(FVector)                                   FoliagePosition                                             OFFSET(getStruct<T>, {0x2F4, 12, 0, 0})
	DMember(float)                                     FoliageDamageImpulseScale                                   OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     FoliageTouchImpulseScale                                    OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     FoliageStiffness                                            OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     FoliageStiffnessQuadratic                                   OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(float)                                     FoliageDamping                                              OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     MaxDamageImpulse                                            OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     MaxTouchImpulse                                             OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x320, 4, 0, 0})


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x2ca8e10] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0010 (0x000590 - 0x0005A0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0008 (0x000310 - 0x000318)
class AProceduralFoliageBlockingVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class AProceduralFoliageVolume*)           ProceduralFoliageVolume                                     OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000E0 - 0x000108)
class UProceduralFoliageComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UProceduralFoliageSpawner*)          FoliageSpawner                                              OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     TileOverlap                                                 OFFSET(get<float>, {0xE8, 4, 0, 0})
	CMember(class AVolume*)                            SpawningVolume                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FGuid)                                     ProceduralGuid                                              OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (0x000000 - 0x000020)
class FFoliageTypeObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UObject*)                            FoliageTypeObject                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFoliageType*)                       TypeInstance                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsAsset                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(class UClass*)                             Type                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0040 (0x000030 - 0x000070)
class UProceduralFoliageSpawner : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     TileSize                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   NumUniqueTiles                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     MinimumQuadTreeSize                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(TArray<FFoliageTypeObject>)                FoliageTypes                                                OFFSET(get<T>, {0x48, 16, 0, 0})


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                         // [0x2ca92d0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (0x000000 - 0x000050)
class FProceduralFoliageInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     Age                                                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(class UFoliageType*)                       Type                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0130 (0x000030 - 0x000160)
class UProceduralFoliageTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UProceduralFoliageSpawner*)          FoliageSpawner                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FProceduralFoliageInstance>)        InstancesArray                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0008 (0x000310 - 0x000318)
class AProceduralFoliageVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UProceduralFoliageComponent*)        ProceduralComponent                                         OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x05
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x05
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x05
enum class FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x04
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x03
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2
};

