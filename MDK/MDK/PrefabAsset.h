
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PrefabAsset.PrefabActor
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class APrefabActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UPrefabComponent*)                   PrefabComponent                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/PrefabAsset.PrefabActor.SetPrefab
	// void SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);                                        // [0x8d7700] Final|Native|Public|BlueprintCallable 
	// Function /Script/PrefabAsset.PrefabActor.SetMobility
	// void SetMobility(TEnumAsByte<EComponentMobility> InMobility);                                                            // [0x8d7680] Final|Native|Public|BlueprintCallable 
	// Function /Script/PrefabAsset.PrefabActor.GetPrefab
	// class UPrefabAsset* GetPrefab();                                                                                         // [0x8d7650] Final|Native|Public|BlueprintCallable 
	// Function /Script/PrefabAsset.PrefabActor.DestroyPrefabActor
	// void DestroyPrefabActor(bool bDestroyAttachedChildren);                                                                  // [0x8d75c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PrefabAsset.PrefabAsset
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UPrefabAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGuid)                                     PrefabId                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     PrefabContent                                               OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   PrefabPivot                                                 OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FString)                                   PrefabHash                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TMap<FString, FSoftObjectPath>)            AssetReferences                                             OFFSET(get<T>, {0x78, 80, 0, 0})
	DMember(int32_t)                                   NumActors                                                   OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Class /Script/PrefabAsset.PrefabComponent
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UPrefabComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bConnected                                                  OFFSET(get<bool>, {0x268, 1, 1, 0})
	DMember(bool)                                      bLockSelection                                              OFFSET(get<bool>, {0x268, 1, 1, 1})
	CMember(class UBlueprint*)                         GeneratedBlueprint                                          OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UPrefabAsset*)                       Prefab                                                      OFFSET(get<T>, {0x278, 8, 0, 0})
	DMember(bool)                                      bTransient                                                  OFFSET(get<bool>, {0x280, 1, 1, 0})
	DMember(bool)                                      bGenerateHLOD                                               OFFSET(get<bool>, {0x280, 1, 1, 1})
	DMember(bool)                                      bUseLightmapForHLOD                                         OFFSET(get<bool>, {0x280, 1, 1, 2})
	DMember(bool)                                      bOverrideDiffuseTextureSize                                 OFFSET(get<bool>, {0x280, 1, 1, 3})
	DMember(bool)                                      bOverrideNormalTextureSize                                  OFFSET(get<bool>, {0x280, 1, 1, 4})
	DMember(bool)                                      bOverrideSpecularTextureSize                                OFFSET(get<bool>, {0x280, 1, 1, 5})
	DMember(bool)                                      bOverrideRoughnessTextureSize                               OFFSET(get<bool>, {0x280, 1, 1, 6})
	DMember(bool)                                      bOverrideEmissiveTextureSize                                OFFSET(get<bool>, {0x280, 1, 1, 7})
	DMember(bool)                                      bOverrideScreenSize                                         OFFSET(get<bool>, {0x281, 1, 1, 0})
	DMember(bool)                                      bOverrideTransitionScreenSize                               OFFSET(get<bool>, {0x281, 1, 1, 1})
	DMember(uint16_t)                                  DiffuseTextureSize                                          OFFSET(get<uint16_t>, {0x284, 2, 0, 0})
	DMember(uint16_t)                                  NormalTextureSize                                           OFFSET(get<uint16_t>, {0x286, 2, 0, 0})
	DMember(uint16_t)                                  SpecularTextureSize                                         OFFSET(get<uint16_t>, {0x288, 2, 0, 0})
	DMember(uint16_t)                                  RoughnessTextureSize                                        OFFSET(get<uint16_t>, {0x28A, 2, 0, 0})
	DMember(uint16_t)                                  EmissiveTextureSize                                         OFFSET(get<uint16_t>, {0x28C, 2, 0, 0})
	DMember(float)                                     ScreenSize                                                  OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     TransitionScreenSize                                        OFFSET(get<float>, {0x294, 4, 0, 0})
};

/// Class /Script/PrefabAsset.PrefabToolSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UPrefabToolSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bReplaceActorsWithCreatedPrefab                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bNestedPrefabSupport                                        OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bUpdateAllPrefabActorsWhenOpenMap                           OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap    OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bUpdateAllPrefabActorsWhenApply                             OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bEnablePrefabComponentVisualizer                            OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bLockPrefabSelectionByDefault                               OFFSET(get<bool>, {0x36, 1, 0, 0})
	DMember(bool)                                      bDisableLockPrefabSelectionFeature                          OFFSET(get<bool>, {0x37, 1, 0, 0})
	DMember(bool)                                      bSupportGenerateBlueprint                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bForceApplyPerInstanceVertexColor                           OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bEnablePrefabTextEditor                                     OFFSET(get<bool>, {0x3B, 1, 0, 0})
	DMember(bool)                                      bDebugMode                                                  OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

