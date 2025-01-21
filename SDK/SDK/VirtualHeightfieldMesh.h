
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

/// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UHeightfieldMinMaxTexture : public UObject
{ 
public:
	class UTexture2D*                                  Texture;                                                    // 0x0030   (0x0008)  
	class UTexture2D*                                  LodBiasTexture;                                             // 0x0038   (0x0008)  
	class UTexture2D*                                  LodBiasMinMaxTexture;                                       // 0x0040   (0x0008)  
	int32_t                                            MaxCPULevels;                                               // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FVector2D>                                  TextureData;                                                // 0x0050   (0x0010)  
	FIntPoint                                          TextureDataSize;                                            // 0x0060   (0x0008)  
	TArray<int32_t>                                    TextureDataMips;                                            // 0x0068   (0x0010)  
};

/// Class /Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{ 
public:
	class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                              // 0x0048   (0x0008)  
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 8 MaxSize: 0x02C0
class AVirtualHeightfieldMesh : public AActor
{ 
public:
	class UVirtualHeightfieldMeshComponent*            VirtualHeightfieldMeshComponent;                            // 0x02B8   (0x0008)  
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
/// Size: 0x0570 (1392 bytes) (0x0004F8 - 0x000570) align 16 MaxSize: 0x0570
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{ 
public:
	TWeakObjectPtr<class ARuntimeVirtualTextureVolume*> VirtualTexture;                                            // 0x04F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0500   (0x0020)  MISSED
	class ARuntimeVirtualTextureVolume*                VirtualTextureRef;                                          // 0x0520   (0x0008)  
	class UObject*                                     VirtualTextureThumbnail;                                    // 0x0528   (0x0008)  
	bool                                               bCopyBoundsButton;                                          // 0x0530   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0531   (0x0007)  MISSED
	class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                              // 0x0538   (0x0008)  
	int32_t                                            NumMinMaxTextureBuildLevels;                                // 0x0540   (0x0004)  
	bool                                               bBuildMinMaxTextureButton;                                  // 0x0544   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0545   (0x0003)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0548   (0x0008)  
	float                                              Lod0ScreenSize;                                             // 0x0550   (0x0004)  
	float                                              Lod0Distribution;                                           // 0x0554   (0x0004)  
	float                                              LodDistribution;                                            // 0x0558   (0x0004)  
	float                                              LodBiasScale;                                               // 0x055C   (0x0004)  
	int32_t                                            NumForceLoadLods;                                           // 0x0560   (0x0004)  
	int32_t                                            NumOcclusionLods;                                           // 0x0564   (0x0004)  
	bool                                               bHiddenInEditor;                                            // 0x0568   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0569   (0x0007)  MISSED


	/// Functions
	// Function /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
	// void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame);                                // [0xbe8b20] Final|Native|Protected|HasOutParms|Const 
};

#pragma pack(pop)


static_assert(sizeof(UHeightfieldMinMaxTexture) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UMaterialExpressionHeightfieldMinMaxTexture) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(AVirtualHeightfieldMesh) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UVirtualHeightfieldMeshComponent) == 0x0570); // 1392 bytes (0x0004F8 - 0x000570)
static_assert(offsetof(UHeightfieldMinMaxTexture, Texture) == 0x0030);
static_assert(offsetof(UHeightfieldMinMaxTexture, LodBiasTexture) == 0x0038);
static_assert(offsetof(UHeightfieldMinMaxTexture, LodBiasMinMaxTexture) == 0x0040);
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureData) == 0x0050);
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureDataSize) == 0x0060);
static_assert(offsetof(UHeightfieldMinMaxTexture, TextureDataMips) == 0x0068);
static_assert(offsetof(UMaterialExpressionHeightfieldMinMaxTexture, MinMaxTexture) == 0x0048);
static_assert(offsetof(AVirtualHeightfieldMesh, VirtualHeightfieldMeshComponent) == 0x02B8);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTexture) == 0x04F8);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTextureRef) == 0x0520);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, VirtualTextureThumbnail) == 0x0528);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, MinMaxTexture) == 0x0538);
static_assert(offsetof(UVirtualHeightfieldMeshComponent, Material) == 0x0548);
