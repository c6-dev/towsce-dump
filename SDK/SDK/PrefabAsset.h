
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/PrefabAsset.PrefabActor
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 8 MaxSize: 0x02C0
class APrefabActor : public AActor
{ 
public:
	class UPrefabComponent*                            PrefabComponent;                                            // 0x02B8   (0x0008)  


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
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UPrefabAsset : public UObject
{ 
public:
	FGuid                                              PrefabId;                                                   // 0x0030   (0x0010)  
	FText                                              PrefabContent;                                              // 0x0040   (0x0018)  
	FVector                                            PrefabPivot;                                                // 0x0058   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FString                                            PrefabHash;                                                 // 0x0068   (0x0010)  
	TMap<FString, FSoftObjectPath>                     AssetReferences;                                            // 0x0078   (0x0050)  
	int32_t                                            NumActors;                                                  // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/PrefabAsset.PrefabComponent
/// Size: 0x02A0 (672 bytes) (0x000268 - 0x0002A0) align 16 MaxSize: 0x02A0
class UPrefabComponent : public USceneComponent
{ 
public:
	bool                                               bConnected : 1;                                             // 0x0268:0 (0x0001)  
	bool                                               bLockSelection : 1;                                         // 0x0268:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	class UBlueprint*                                  GeneratedBlueprint;                                         // 0x0270   (0x0008)  
	class UPrefabAsset*                                Prefab;                                                     // 0x0278   (0x0008)  
	bool                                               bTransient : 1;                                             // 0x0280:0 (0x0001)  
	bool                                               bGenerateHLOD : 1;                                          // 0x0280:1 (0x0001)  
	bool                                               bUseLightmapForHLOD : 1;                                    // 0x0280:2 (0x0001)  
	bool                                               bOverrideDiffuseTextureSize : 1;                            // 0x0280:3 (0x0001)  
	bool                                               bOverrideNormalTextureSize : 1;                             // 0x0280:4 (0x0001)  
	bool                                               bOverrideSpecularTextureSize : 1;                           // 0x0280:5 (0x0001)  
	bool                                               bOverrideRoughnessTextureSize : 1;                          // 0x0280:6 (0x0001)  
	bool                                               bOverrideEmissiveTextureSize : 1;                           // 0x0280:7 (0x0001)  
	bool                                               bOverrideScreenSize : 1;                                    // 0x0281:0 (0x0001)  
	bool                                               bOverrideTransitionScreenSize : 1;                          // 0x0281:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0282   (0x0002)  MISSED
	uint16_t                                           DiffuseTextureSize;                                         // 0x0284   (0x0002)  
	uint16_t                                           NormalTextureSize;                                          // 0x0286   (0x0002)  
	uint16_t                                           SpecularTextureSize;                                        // 0x0288   (0x0002)  
	uint16_t                                           RoughnessTextureSize;                                       // 0x028A   (0x0002)  
	uint16_t                                           EmissiveTextureSize;                                        // 0x028C   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x028E   (0x0002)  MISSED
	float                                              ScreenSize;                                                 // 0x0290   (0x0004)  
	float                                              TransitionScreenSize;                                       // 0x0294   (0x0004)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/PrefabAsset.PrefabToolSettings
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPrefabToolSettings : public UObject
{ 
public:
	bool                                               bReplaceActorsWithCreatedPrefab;                            // 0x0030   (0x0001)  
	bool                                               bNestedPrefabSupport;                                       // 0x0031   (0x0001)  
	bool                                               bUpdateAllPrefabActorsWhenOpenMap;                          // 0x0032   (0x0001)  
	bool                                               bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap;   // 0x0033   (0x0001)  
	bool                                               bUpdateAllPrefabActorsWhenApply;                            // 0x0034   (0x0001)  
	bool                                               bEnablePrefabComponentVisualizer;                           // 0x0035   (0x0001)  
	bool                                               bLockPrefabSelectionByDefault;                              // 0x0036   (0x0001)  
	bool                                               bDisableLockPrefabSelectionFeature;                         // 0x0037   (0x0001)  
	bool                                               bSupportGenerateBlueprint;                                  // 0x0038   (0x0001)  
	bool                                               bForceApplyPerInstanceVertexColor;                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003A   (0x0001)  MISSED
	bool                                               bEnablePrefabTextEditor;                                    // 0x003B   (0x0001)  
	bool                                               bDebugMode;                                                 // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(APrefabActor) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UPrefabAsset) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UPrefabComponent) == 0x02A0); // 672 bytes (0x000268 - 0x0002A0)
static_assert(sizeof(UPrefabToolSettings) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(offsetof(APrefabActor, PrefabComponent) == 0x02B8);
static_assert(offsetof(UPrefabAsset, PrefabId) == 0x0030);
static_assert(offsetof(UPrefabAsset, PrefabContent) == 0x0040);
static_assert(offsetof(UPrefabAsset, PrefabPivot) == 0x0058);
static_assert(offsetof(UPrefabAsset, PrefabHash) == 0x0068);
static_assert(offsetof(UPrefabAsset, AssetReferences) == 0x0078);
static_assert(offsetof(UPrefabComponent, GeneratedBlueprint) == 0x0270);
static_assert(offsetof(UPrefabComponent, Prefab) == 0x0278);
