
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
/// Size: 0x0048 (0x000030 - 0x000078)
class UHeightfieldMinMaxTexture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UTexture2D*)                         Texture                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UTexture2D*)                         LodBiasTexture                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UTexture2D*)                         LodBiasMinMaxTexture                                        OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   MaxCPULevels                                                OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(TArray<FVector2D>)                         TextureData                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FIntPoint)                                 TextureDataSize                                             OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(TArray<int32_t>)                           TextureDataMips                                             OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
/// Size: 0x0008 (0x000048 - 0x000050)
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UHeightfieldMinMaxTexture*)          MinMaxTexture                                               OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AVirtualHeightfieldMesh : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UVirtualHeightfieldMeshComponent*)   VirtualHeightfieldMeshComponent                             OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
/// Size: 0x0078 (0x0004F8 - 0x000570)
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(TWeakObjectPtr<class ARuntimeVirtualTextureVolume*>) VirtualTexture                                    OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class ARuntimeVirtualTextureVolume*)       VirtualTextureRef                                           OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UObject*)                            VirtualTextureThumbnail                                     OFFSET(get<T>, {0x528, 8, 0, 0})
	DMember(bool)                                      bCopyBoundsButton                                           OFFSET(get<bool>, {0x530, 1, 0, 0})
	CMember(class UHeightfieldMinMaxTexture*)          MinMaxTexture                                               OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(int32_t)                                   NumMinMaxTextureBuildLevels                                 OFFSET(get<int32_t>, {0x540, 4, 0, 0})
	DMember(bool)                                      bBuildMinMaxTextureButton                                   OFFSET(get<bool>, {0x544, 1, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(float)                                     Lod0ScreenSize                                              OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     Lod0Distribution                                            OFFSET(get<float>, {0x554, 4, 0, 0})
	DMember(float)                                     LodDistribution                                             OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     LodBiasScale                                                OFFSET(get<float>, {0x55C, 4, 0, 0})
	DMember(int32_t)                                   NumForceLoadLods                                            OFFSET(get<int32_t>, {0x560, 4, 0, 0})
	DMember(int32_t)                                   NumOcclusionLods                                            OFFSET(get<int32_t>, {0x564, 4, 0, 0})
	DMember(bool)                                      bHiddenInEditor                                             OFFSET(get<bool>, {0x568, 1, 0, 0})


	/// Functions
	// Function /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
	// void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame);                                // [0xbe8b20] Final|Native|Protected|HasOutParms|Const 
};

