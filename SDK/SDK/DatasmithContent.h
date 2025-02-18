
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence

#pragma pack(push, 0x1)

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorType
/// Size: 0x01 (1 bytes)
enum class EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point                                              = 0,
	EDatasmithAreaLightActorType__Spot                                               = 1,
	EDatasmithAreaLightActorType__Rect                                               = 2
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape
/// Size: 0x01 (1 bytes)
enum class EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle                                         = 0,
	EDatasmithAreaLightActorShape__Disc                                              = 1,
	EDatasmithAreaLightActorShape__Sphere                                            = 2,
	EDatasmithAreaLightActorShape__Cylinder                                          = 3,
	EDatasmithAreaLightActorShape__None                                              = 4
};

/// Enum /Script/DatasmithContent.EDatasmithCADRetessellationRule
/// Size: 0x01 (1 bytes)
enum class EDatasmithCADRetessellationRule : uint8_t
{
	EDatasmithCADRetessellationRule__All                                             = 0,
	EDatasmithCADRetessellationRule__SkipDeletedSurfaces                             = 1
};

/// Enum /Script/DatasmithContent.EDatasmithCADStitchingTechnique
/// Size: 0x01 (1 bytes)
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone                                   = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal                                   = 1,
	EDatasmithCADStitchingTechnique__StitchingSew                                    = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportScene
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel                                                  = 0,
	EDatasmithImportScene__CurrentLevel                                              = 1,
	EDatasmithImportScene__AssetsOnly                                                = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMax
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMax__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMax__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMax__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMax__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMax__LIGHTMAP6                                           = 5,
	EDatasmithImportLightmapMax__LIGHTMAP7                                           = 6
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMin
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMin__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMin__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMin__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMin__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMin__LIGHTMAP6                                           = 5
};

/// Enum /Script/DatasmithContent.EDatasmithImportMaterialQuality
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves                              = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves                      = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves                            = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportActorPolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update                                              = 0,
	EDatasmithImportActorPolicy__Full                                                = 1,
	EDatasmithImportActorPolicy__Ignore                                              = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace                                     = 0,
	EDatasmithImportAssetConflictPolicy__Update                                      = 1,
	EDatasmithImportAssetConflictPolicy__Use                                         = 2,
	EDatasmithImportAssetConflictPolicy__Ignore                                      = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current                                     = 0,
	EDatasmithImportSearchPackagePolicy__All                                         = 1
};

/// Class /Script/DatasmithContent.DatasmithObjectTemplate
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDatasmithObjectTemplate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithActorTemplate
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align 8 MaxSize: 0x00D8
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	SDK_UNDEFINED(80,771) /* TSet<FName> */            __um(Layers);                                               // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,772) /* TSet<FName> */            __um(Tags);                                                 // 0x0088   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithAdditionalData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithAdditionalData : public UObject
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActor
/// Size: 0x0310 (784 bytes) (0x0002B8 - 0x000310) align 8 MaxSize: 0x0310
class ADatasmithAreaLightActor : public AActor
{ 
public:
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x02B8   (0x0001)  
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x02B9   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x02BA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x02BB   (0x0001)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x02BC   (0x0008)  
	float                                              Intensity;                                                  // 0x02C4   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02C9   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x02CC   (0x0010)  
	float                                              Temperature;                                                // 0x02DC   (0x0004)  
	class UTextureLightProfile*                        IESTexture;                                                 // 0x02E0   (0x0008)  
	bool                                               bUseIESBrightness;                                          // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02E9   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x02EC   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x02F0   (0x000C)  
	float                                              SourceRadius;                                               // 0x02FC   (0x0004)  
	float                                              SourceLength;                                               // 0x0300   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0304   (0x0004)  
	float                                              SpotlightInnerAngle;                                        // 0x0308   (0x0004)  
	float                                              SpotlightOuterAngle;                                        // 0x030C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x0038   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x003C   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0044   (0x0010)  
	float                                              Intensity;                                                  // 0x0054   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              Temperature;                                                // 0x005C   (0x0004)  
	TWeakObjectPtr<class UTextureLightProfile*>        IESTexture;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0068   (0x0020)  MISSED
	bool                                               bUseIESBrightness;                                          // 0x0088   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x008C   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0090   (0x000C)  
	float                                              SourceRadius;                                               // 0x009C   (0x0004)  
	float                                              SourceLength;                                               // 0x00A0   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x00A4   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithAssetImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithAssetImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithSceneImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithSceneImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithCADImportSceneData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithMDLSceneImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithGLTFSceneImportData
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{ 
public:
	FString                                            Generator;                                                  // 0x0030   (0x0010)  
	float                                              Version;                                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            Author;                                                     // 0x0048   (0x0010)  
	FString                                            License;                                                    // 0x0058   (0x0010)  
	FString                                            Source;                                                     // 0x0068   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{ 
public:
	FString                                            SourceMeshName;                                             // 0x0030   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithFBXSceneImportData
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{ 
public:
	bool                                               bGenerateLightmapUVs;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            TexturesDir;                                                // 0x0038   (0x0010)  
	char                                               IntermediateSerialization;                                  // 0x0048   (0x0001)  
	bool                                               bColorizeMaterials;                                         // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData
/// Size: 0x0098 (152 bytes) (0x000050 - 0x000098) align 8 MaxSize: 0x0098
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0050   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0051   (0x0001)  
	bool                                               bRemoveInvisibleNodes;                                      // 0x0052   (0x0001)  
	bool                                               bSimplifyNodeHierarchy;                                     // 0x0053   (0x0001)  
	bool                                               bImportVar;                                                 // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	FString                                            VarPath;                                                    // 0x0058   (0x0010)  
	bool                                               bImportPos;                                                 // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            PosPath;                                                    // 0x0070   (0x0010)  
	bool                                               bImportTml;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FString                                            TmlPath;                                                    // 0x0088   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithVREDAssetImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithVREDSceneImportData
/// Size: 0x00B0 (176 bytes) (0x000050 - 0x0000B0) align 8 MaxSize: 0x00B0
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0050   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0051   (0x0001)  
	bool                                               bImportMats;                                                // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0053   (0x0005)  MISSED
	FString                                            MatsPath;                                                   // 0x0058   (0x0010)  
	bool                                               bImportVar;                                                 // 0x0068   (0x0001)  
	bool                                               bCleanVar;                                                  // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED
	FString                                            VarPath;                                                    // 0x0070   (0x0010)  
	bool                                               bImportLightInfo;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FString                                            LightInfoPath;                                              // 0x0088   (0x0010)  
	bool                                               bImportClipInfo;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            ClipInfoPath;                                               // 0x00A0   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithIFCSceneImportData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshIFCImportData
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{ 
public:
	FString                                            SourceGlobalId;                                             // 0x0030   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithAssetUserData
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UDatasmithAssetUserData : public UAssetUserData
{ 
public:
	TMap<FName, FString>                               MetaData;                                                   // 0x0030   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FDatasmithCameraLookatTrackingSettingsTemplate
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bAllowRoll : 1;                                             // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithCineCameraActorTemplate
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraLookatTrackingSettingsTemplate     LookatTrackingSettings;                                     // 0x0038   (0x0030)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDatasmithCameraFilmbackSettingsTemplate
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLensSettingsTemplate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDatasmithCameraLensSettingsTemplate
{ 
	float                                              MaxFStop;                                                   // 0x0000   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDatasmithCameraFocusSettingsTemplate
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FDatasmithPostProcessSettingsTemplate
{ 
	bool                                               bOverride_WhiteTemp : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bOverride_ColorSaturation : 1;                              // 0x0000:1 (0x0001)  
	bool                                               bOverride_VignetteIntensity : 1;                            // 0x0000:2 (0x0001)  
	bool                                               bOverride_FilmWhitePoint : 1;                               // 0x0000:3 (0x0001)  
	bool                                               bOverride_AutoExposureMethod : 1;                           // 0x0000:4 (0x0001)  
	bool                                               bOverride_CameraISO : 1;                                    // 0x0000:5 (0x0001)  
	bool                                               bOverride_CameraShutterSpeed : 1;                           // 0x0000:6 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	bool                                               bOverride_DepthOfFieldFstop : 1;                            // 0x0004:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              WhiteTemp;                                                  // 0x0008   (0x0004)  
	float                                              VignetteIntensity;                                          // 0x000C   (0x0004)  
	FLinearColor                                       FilmWhitePoint;                                             // 0x0010   (0x0010)  
	FVector4                                           ColorSaturation;                                            // 0x0020   (0x0010)  
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              CameraISO;                                                  // 0x0034   (0x0004)  
	float                                              CameraShutterSpeed;                                         // 0x0038   (0x0004)  
	float                                              DepthOfFieldFstop;                                          // 0x003C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 16 MaxSize: 0x00A0
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraFilmbackSettingsTemplate           FilmbackSettings;                                           // 0x0038   (0x0008)  
	FDatasmithCameraLensSettingsTemplate               LensSettings;                                               // 0x0040   (0x0004)  
	FDatasmithCameraFocusSettingsTemplate              FocusSettings;                                              // 0x0044   (0x0008)  
	float                                              CurrentFocalLength;                                         // 0x004C   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0054   (0x000C)  MISSED
	FDatasmithPostProcessSettingsTemplate              PostProcessSettings;                                        // 0x0060   (0x0040)  
};

/// Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	// FString GetDatasmithUserDataValueForKey(class UObject* Object, FName Key);                                               // [0xec56a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	// void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues); // [0xec54e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	// class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);                                              // [0xec5450] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithCustomActionBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDatasmithCustomActionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDecalComponentTemplate
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	int32_t                                            SortOrder;                                                  // 0x0038   (0x0004)  
	FVector                                            DecalSize;                                                  // 0x003C   (0x000C)  
	class UMaterialInterface*                          Material;                                                   // 0x0048   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithImportedSequencesActor
/// Size: 0x02C8 (712 bytes) (0x0002B8 - 0x0002C8) align 8 MaxSize: 0x02C8
class ADatasmithImportedSequencesActor : public AActor
{ 
public:
	TArray<class ULevelSequence*>                      ImportedSequences;                                          // 0x02B8   (0x0010)  


	/// Functions
	// Function /Script/DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	// void PlayLevelSequence(class ULevelSequence* SequenceToPlay);                                                            // [0xec57b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithOptionsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithOptionsBase : public UObject
{ 
public:
};

/// Struct /Script/DatasmithContent.DatasmithTessellationOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FDatasmithTessellationOptions
{ 
	float                                              ChordTolerance;                                             // 0x0000   (0x0004)  
	float                                              MaxEdgeLength;                                              // 0x0004   (0x0004)  
	float                                              NormalTolerance;                                            // 0x0008   (0x0004)  
	EDatasmithCADStitchingTechnique                    StitchingTechnique;                                         // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithCommonTessellationOptions
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{ 
public:
	FDatasmithTessellationOptions                      Options;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithAssetImportOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDatasmithAssetImportOptions
{ 
	FName                                              PackagePath;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMeshImportOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FDatasmithStaticMeshImportOptions
{ 
	EDatasmithImportLightmapMin                        MinLightmapResolution;                                      // 0x0000   (0x0001)  
	EDatasmithImportLightmapMax                        MaxLightmapResolution;                                      // 0x0001   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0002   (0x0001)  
	bool                                               bRemoveDegenerates;                                         // 0x0003   (0x0001)  
};

/// Struct /Script/DatasmithContent.DatasmithImportBaseOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FDatasmithImportBaseOptions
{ 
	EDatasmithImportScene                              SceneHandling;                                              // 0x0000   (0x0001)  
	bool                                               bIncludeGeometry;                                           // 0x0001   (0x0001)  
	bool                                               bIncludeMaterial;                                           // 0x0002   (0x0001)  
	bool                                               bIncludeLight;                                              // 0x0003   (0x0001)  
	bool                                               bIncludeCamera;                                             // 0x0004   (0x0001)  
	bool                                               bIncludeAnimation;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FDatasmithAssetImportOptions                       AssetOptions;                                               // 0x0008   (0x0008)  
	FDatasmithStaticMeshImportOptions                  StaticMeshOptions;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithReimportOptions
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FDatasmithReimportOptions
{ 
	bool                                               bUpdateActors;                                              // 0x0000   (0x0001)  
	bool                                               bRespawnDeletedActors;                                      // 0x0001   (0x0001)  
};

/// Class /Script/DatasmithContent.DatasmithImportOptions
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UDatasmithImportOptions : public UDatasmithOptionsBase
{ 
public:
	EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                        // 0x0030   (0x0001)  
	EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                     // 0x0031   (0x0001)  
	EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                      // 0x0032   (0x0001)  
	EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                                // 0x0033   (0x0001)  
	EDatasmithImportActorPolicy                        LightImportPolicy;                                          // 0x0034   (0x0001)  
	EDatasmithImportActorPolicy                        CameraImportPolicy;                                         // 0x0035   (0x0001)  
	EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                     // 0x0036   (0x0001)  
	EDatasmithImportMaterialQuality                    MaterialQuality;                                            // 0x0037   (0x0001)  
	FDatasmithImportBaseOptions                        BaseOptions;                                                // 0x0038   (0x0014)  
	FDatasmithReimportOptions                          ReimportOptions;                                            // 0x004C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	FString                                            Filename;                                                   // 0x0050   (0x0010)  
	FString                                            FilePath;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLandscapeTemplate
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{ 
public:
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0038   (0x0008)  
	int32_t                                            StaticLightingLOD;                                          // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLightComponentTemplate
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	bool                                               bVisible : 1;                                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0039   (0x0003)  MISSED
	bool                                               CastShadows : 1;                                            // 0x003C:0 (0x0001)  
	bool                                               bUseTemperature : 1;                                        // 0x003C:1 (0x0001)  
	bool                                               bUseIESBrightness : 1;                                      // 0x003C:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              Intensity;                                                  // 0x0040   (0x0004)  
	float                                              Temperature;                                                // 0x0044   (0x0004)  
	float                                              IESBrightnessScale;                                         // 0x0048   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x004C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UMaterialInterface*                          LightFunctionMaterial;                                      // 0x0060   (0x0008)  
	class UTextureLightProfile*                        IESTexture;                                                 // 0x0068   (0x0008)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticParameterSetTemplate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FDatasmithStaticParameterSetTemplate
{ 
	TMap<FName, bool>                                  StaticSwitchParameters;                                     // 0x0000   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate
/// Size: 0x01A0 (416 bytes) (0x000038 - 0x0001A0) align 8 MaxSize: 0x01A0
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{ 
public:
	TWeakObjectPtr<class UMaterialInterface*>          ParentMaterial;                                             // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
	TMap<FName, float>                                 ScalarParameterValues;                                      // 0x0060   (0x0050)  
	TMap<FName, FLinearColor>                          VectorParameterValues;                                      // 0x00B0   (0x0050)  
	SDK_UNDEFINED(80,773) /* TMap<FName, TWeakObjectPtr<UTexture*>> */ __um(TextureParameterValues);               // 0x0100   (0x0050)  
	FDatasmithStaticParameterSetTemplate               StaticParameters;                                           // 0x0150   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	ELightUnits                                        IntensityUnits;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              SourceRadius;                                               // 0x003C   (0x0004)  
	float                                              SourceLength;                                               // 0x0040   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0044   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 16 MaxSize: 0x0090
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FDatasmithPostProcessSettingsTemplate              Settings;                                                   // 0x0040   (0x0040)  
	bool                                               bEnabled : 1;                                               // 0x0080:0 (0x0001)  
	bool                                               bUnbound : 1;                                               // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0081   (0x000F)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithScene
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDatasmithScene : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithSceneActor
/// Size: 0x0310 (784 bytes) (0x0002B8 - 0x000310) align 8 MaxSize: 0x0310
class ADatasmithSceneActor : public AActor
{ 
public:
	class UDatasmithScene*                             Scene;                                                      // 0x02B8   (0x0008)  
	SDK_UNDEFINED(80,774) /* TMap<FName, TWeakObjectPtr<AActor*>> */ __um(RelatedActors);                          // 0x02C0   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithSceneComponentTemplate
/// Size: 0x0100 (256 bytes) (0x000038 - 0x000100) align 16 MaxSize: 0x0100
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0040   (0x0030)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TWeakObjectPtr<class USceneComponent*>             AttachParent;                                               // 0x0078   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0080   (0x0020)  MISSED
	bool                                               bVisible;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(80,775) /* TSet<FName> */            __um(Tags);                                                 // 0x00A8   (0x0050)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	TEnumAsByte<ESkyLightSourceType>                   SourceType;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            CubemapResolution;                                          // 0x003C   (0x0004)  
	class UTextureCube*                                Cubemap;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	float                                              InnerConeAngle;                                             // 0x0038   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x003C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0038   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0040   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoTemplate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDatasmithMeshSectionInfoTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0000   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoMapTemplate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FDatasmithMeshSectionInfoMapTemplate
{ 
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate>  Map;                                                        // 0x0000   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FDatasmithMeshBuildSettingsTemplate
{ 
	bool                                               bUseMikkTSpace : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               bRecomputeNormals : 1;                                      // 0x0000:1 (0x0001)  
	bool                                               bRecomputeTangents : 1;                                     // 0x0000:2 (0x0001)  
	bool                                               bRemoveDegenerates : 1;                                     // 0x0000:3 (0x0001)  
	bool                                               bBuildAdjacencyBuffer : 1;                                  // 0x0000:4 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis : 1;                          // 0x0000:5 (0x0001)  
	bool                                               bUseFullPrecisionUVs : 1;                                   // 0x0000:6 (0x0001)  
	bool                                               bGenerateLightmapUVs : 1;                                   // 0x0000:7 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MinLightmapResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            SrcLightmapIndex;                                           // 0x0008   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMaterialTemplate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FDatasmithStaticMaterialTemplate
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x0008)  
	class UMaterialInterface*                          MaterialInterface;                                          // 0x0008   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshTemplate
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithMeshSectionInfoMapTemplate               SectionInfoMap;                                             // 0x0038   (0x0050)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0088   (0x0004)  
	int32_t                                            LightMapResolution;                                         // 0x008C   (0x0004)  
	TArray<FDatasmithMeshBuildSettingsTemplate>        BuildSettings;                                              // 0x0090   (0x0010)  
	TArray<FDatasmithStaticMaterialTemplate>           StaticMaterials;                                            // 0x00A0   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithRetessellationOptions
/// Size: 0x0014 (20 bytes) (0x000010 - 0x000014) align 4 MaxSize: 0x0014
struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions
{ 
	EDatasmithCADRetessellationRule                    RetessellationRule;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UDatasmithObjectTemplate) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDatasmithActorTemplate) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(UDatasmithAdditionalData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ADatasmithAreaLightActor) == 0x0310); // 784 bytes (0x0002B8 - 0x000310)
static_assert(sizeof(UDatasmithAreaLightActorTemplate) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UDatasmithAssetImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithStaticMeshImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithStaticMeshCADImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithSceneImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithTranslatedSceneImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithCADImportSceneData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithMDLSceneImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithGLTFSceneImportData) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UDatasmithStaticMeshGLTFImportData) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithFBXSceneImportData) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UDatasmithDeltaGenAssetImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithDeltaGenSceneImportData) == 0x0098); // 152 bytes (0x000050 - 0x000098)
static_assert(sizeof(UDatasmithVREDAssetImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithVREDSceneImportData) == 0x00B0); // 176 bytes (0x000050 - 0x0000B0)
static_assert(sizeof(UDatasmithIFCSceneImportData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithStaticMeshIFCImportData) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithAssetUserData) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FDatasmithCameraLookatTrackingSettingsTemplate) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UDatasmithCineCameraActorTemplate) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(FDatasmithCameraFilmbackSettingsTemplate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithCameraLensSettingsTemplate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithCameraFocusSettingsTemplate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithPostProcessSettingsTemplate) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UDatasmithCineCameraComponentTemplate) == 0x00A0); // 160 bytes (0x000038 - 0x0000A0)
static_assert(sizeof(UDatasmithContentBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDatasmithCustomActionBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDatasmithDecalComponentTemplate) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(ADatasmithImportedSequencesActor) == 0x02C8); // 712 bytes (0x0002B8 - 0x0002C8)
static_assert(sizeof(UDatasmithOptionsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FDatasmithTessellationOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDatasmithCommonTessellationOptions) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FDatasmithAssetImportOptions) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithStaticMeshImportOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithImportBaseOptions) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FDatasmithReimportOptions) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(UDatasmithImportOptions) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UDatasmithLandscapeTemplate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UDatasmithLightComponentTemplate) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(FDatasmithStaticParameterSetTemplate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UDatasmithMaterialInstanceTemplate) == 0x01A0); // 416 bytes (0x000038 - 0x0001A0)
static_assert(sizeof(UDatasmithPointLightComponentTemplate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UDatasmithPostProcessVolumeTemplate) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UDatasmithScene) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(ADatasmithSceneActor) == 0x0310); // 784 bytes (0x0002B8 - 0x000310)
static_assert(sizeof(UDatasmithSceneComponentTemplate) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(UDatasmithSkyLightComponentTemplate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UDatasmithSpotLightComponentTemplate) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UDatasmithStaticMeshComponentTemplate) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FDatasmithMeshSectionInfoTemplate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithMeshSectionInfoMapTemplate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FDatasmithMeshBuildSettingsTemplate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDatasmithStaticMaterialTemplate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDatasmithStaticMeshTemplate) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(FDatasmithRetessellationOptions) == 0x0014); // 20 bytes (0x000010 - 0x000014)
static_assert(offsetof(ADatasmithAreaLightActor, Mobility) == 0x02B8);
static_assert(offsetof(ADatasmithAreaLightActor, LightType) == 0x02B9);
static_assert(offsetof(ADatasmithAreaLightActor, LightShape) == 0x02BA);
static_assert(offsetof(ADatasmithAreaLightActor, Dimensions) == 0x02BC);
static_assert(offsetof(ADatasmithAreaLightActor, IntensityUnits) == 0x02C8);
static_assert(offsetof(ADatasmithAreaLightActor, Color) == 0x02CC);
static_assert(offsetof(ADatasmithAreaLightActor, IESTexture) == 0x02E0);
static_assert(offsetof(ADatasmithAreaLightActor, Rotation) == 0x02F0);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, LightType) == 0x0038);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, LightShape) == 0x0039);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Dimensions) == 0x003C);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Color) == 0x0044);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, IntensityUnits) == 0x0058);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, IESTexture) == 0x0060);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Rotation) == 0x0090);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Generator) == 0x0030);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Author) == 0x0048);
static_assert(offsetof(UDatasmithGLTFSceneImportData, License) == 0x0058);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Source) == 0x0068);
static_assert(offsetof(UDatasmithStaticMeshGLTFImportData, SourceMeshName) == 0x0030);
static_assert(offsetof(UDatasmithFBXSceneImportData, TexturesDir) == 0x0038);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, VarPath) == 0x0058);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, PosPath) == 0x0070);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, TmlPath) == 0x0088);
static_assert(offsetof(UDatasmithVREDSceneImportData, MatsPath) == 0x0058);
static_assert(offsetof(UDatasmithVREDSceneImportData, VarPath) == 0x0070);
static_assert(offsetof(UDatasmithVREDSceneImportData, LightInfoPath) == 0x0088);
static_assert(offsetof(UDatasmithVREDSceneImportData, ClipInfoPath) == 0x00A0);
static_assert(offsetof(UDatasmithStaticMeshIFCImportData, SourceGlobalId) == 0x0030);
static_assert(offsetof(UDatasmithAssetUserData, MetaData) == 0x0030);
static_assert(offsetof(FDatasmithCameraLookatTrackingSettingsTemplate, ActorToTrack) == 0x0008);
static_assert(offsetof(UDatasmithCineCameraActorTemplate, LookatTrackingSettings) == 0x0038);
static_assert(offsetof(FDatasmithCameraFocusSettingsTemplate, FocusMethod) == 0x0000);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, FilmWhitePoint) == 0x0010);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, ColorSaturation) == 0x0020);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, AutoExposureMethod) == 0x0030);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, FilmbackSettings) == 0x0038);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, LensSettings) == 0x0040);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, FocusSettings) == 0x0044);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, PostProcessSettings) == 0x0060);
static_assert(offsetof(UDatasmithDecalComponentTemplate, DecalSize) == 0x003C);
static_assert(offsetof(UDatasmithDecalComponentTemplate, Material) == 0x0048);
static_assert(offsetof(ADatasmithImportedSequencesActor, ImportedSequences) == 0x02B8);
static_assert(offsetof(FDatasmithTessellationOptions, StitchingTechnique) == 0x000C);
static_assert(offsetof(UDatasmithCommonTessellationOptions, Options) == 0x0030);
static_assert(offsetof(FDatasmithAssetImportOptions, PackagePath) == 0x0000);
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MinLightmapResolution) == 0x0000);
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MaxLightmapResolution) == 0x0001);
static_assert(offsetof(FDatasmithImportBaseOptions, SceneHandling) == 0x0000);
static_assert(offsetof(FDatasmithImportBaseOptions, AssetOptions) == 0x0008);
static_assert(offsetof(FDatasmithImportBaseOptions, StaticMeshOptions) == 0x0010);
static_assert(offsetof(UDatasmithImportOptions, SearchPackagePolicy) == 0x0030);
static_assert(offsetof(UDatasmithImportOptions, MaterialConflictPolicy) == 0x0031);
static_assert(offsetof(UDatasmithImportOptions, TextureConflictPolicy) == 0x0032);
static_assert(offsetof(UDatasmithImportOptions, StaticMeshActorImportPolicy) == 0x0033);
static_assert(offsetof(UDatasmithImportOptions, LightImportPolicy) == 0x0034);
static_assert(offsetof(UDatasmithImportOptions, CameraImportPolicy) == 0x0035);
static_assert(offsetof(UDatasmithImportOptions, OtherActorImportPolicy) == 0x0036);
static_assert(offsetof(UDatasmithImportOptions, MaterialQuality) == 0x0037);
static_assert(offsetof(UDatasmithImportOptions, BaseOptions) == 0x0038);
static_assert(offsetof(UDatasmithImportOptions, ReimportOptions) == 0x004C);
static_assert(offsetof(UDatasmithImportOptions, Filename) == 0x0050);
static_assert(offsetof(UDatasmithImportOptions, FilePath) == 0x0060);
static_assert(offsetof(UDatasmithLandscapeTemplate, LandscapeMaterial) == 0x0038);
static_assert(offsetof(UDatasmithLightComponentTemplate, LightColor) == 0x004C);
static_assert(offsetof(UDatasmithLightComponentTemplate, LightFunctionMaterial) == 0x0060);
static_assert(offsetof(UDatasmithLightComponentTemplate, IESTexture) == 0x0068);
static_assert(offsetof(FDatasmithStaticParameterSetTemplate, StaticSwitchParameters) == 0x0000);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, ParentMaterial) == 0x0038);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, ScalarParameterValues) == 0x0060);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, VectorParameterValues) == 0x00B0);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, StaticParameters) == 0x0150);
static_assert(offsetof(UDatasmithPointLightComponentTemplate, IntensityUnits) == 0x0038);
static_assert(offsetof(UDatasmithPostProcessVolumeTemplate, Settings) == 0x0040);
static_assert(offsetof(ADatasmithSceneActor, Scene) == 0x02B8);
static_assert(offsetof(UDatasmithSceneComponentTemplate, RelativeTransform) == 0x0040);
static_assert(offsetof(UDatasmithSceneComponentTemplate, Mobility) == 0x0070);
static_assert(offsetof(UDatasmithSceneComponentTemplate, AttachParent) == 0x0078);
static_assert(offsetof(UDatasmithSkyLightComponentTemplate, SourceType) == 0x0038);
static_assert(offsetof(UDatasmithSkyLightComponentTemplate, Cubemap) == 0x0040);
static_assert(offsetof(UDatasmithStaticMeshComponentTemplate, StaticMesh) == 0x0038);
static_assert(offsetof(UDatasmithStaticMeshComponentTemplate, OverrideMaterials) == 0x0040);
static_assert(offsetof(FDatasmithMeshSectionInfoMapTemplate, Map) == 0x0000);
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialSlotName) == 0x0000);
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialInterface) == 0x0008);
static_assert(offsetof(UDatasmithStaticMeshTemplate, SectionInfoMap) == 0x0038);
static_assert(offsetof(UDatasmithStaticMeshTemplate, BuildSettings) == 0x0090);
static_assert(offsetof(UDatasmithStaticMeshTemplate, StaticMaterials) == 0x00A0);
static_assert(offsetof(FDatasmithRetessellationOptions, RetessellationRule) == 0x0010);
