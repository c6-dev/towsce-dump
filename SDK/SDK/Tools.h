
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Content
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Volumetrics/Tools/FluidSimulation/Blueprints/Enums/EVolumeTextureDimensions.EVolumeTextureDimensions
/// Size: 0x01 (1 bytes)
enum class EVolumeTextureDimensions : uint8_t
{
	EVolumeTextureDimensions__NewEnumerator0                                         = 0,
	EVolumeTextureDimensions__NewEnumerator1                                         = 1,
	EVolumeTextureDimensions__NewEnumerator2                                         = 2,
	EVolumeTextureDimensions__NewEnumerator3                                         = 3,
	EVolumeTextureDimensions__NewEnumerator4                                         = 4,
	EVolumeTextureDimensions__NewEnumerator5                                         = 5,
	EVolumeTextureDimensions__NewEnumerator6                                         = 6,
	EVolumeTextureDimensions__NewEnumerator7                                         = 7
};

/// Enum /Volumetrics/Tools/JumpFlooding/Blueprints/Enums/JumpFloodSeedMode.JumpFloodSeedMode
/// Size: 0x01 (1 bytes)
enum class JumpFloodSeedMode : uint8_t
{
	JumpFloodSeedMode__NewEnumerator0                                                = 0,
	JumpFloodSeedMode__NewEnumerator2                                                = 1,
	JumpFloodSeedMode__NewEnumerator3                                                = 2,
	JumpFloodSeedMode__NewEnumerator4                                                = 3,
	JumpFloodSeedMode__NewEnumerator1                                                = 4
};

/// Class /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C
/// Size: 0x0355 (853 bytes) (0x0002B8 - 0x000355) align 8 MaxSize: 0x0355
class ABP_CloudMaskGenerator_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x02C0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02C8   (0x0008)  
	FIntPoint                                          Resolution;                                                 // 0x02D0   (0x0008)  
	class UTextureRenderTarget2D*                      Scene_Capture_RT;                                           // 0x02D8   (0x0008)  
	class UMaterialInstanceDynamic*                    CopyCloudMID;                                               // 0x02E0   (0x0008)  
	class UMaterialInstanceDynamic*                    BlendCloudMID;                                              // 0x02E8   (0x0008)  
	class UMaterialInstanceDynamic*                    Finalize_Blur_Cloud_MID;                                    // 0x02F0   (0x0008)  
	class UTextureRenderTarget2D*                      Cloud_Scratch_RT;                                           // 0x02F8   (0x0008)  
	class UTextureRenderTarget2D*                      Cloud_Single_Render_RT;                                     // 0x0300   (0x0008)  
	class UTextureRenderTarget2D*                      Blended_Cloud_RT;                                           // 0x0308   (0x0008)  
	class UTextureRenderTarget2D*                      Finalized_Cloud_RT;                                         // 0x0310   (0x0008)  
	int32_t                                            Blur_Radius;                                                // 0x0318   (0x0004)  
	FVector                                            Detail_Channels;                                            // 0x031C   (0x000C)  
	class AVolumetricCloud*                            CloudComp;                                                  // 0x0328   (0x0008)  
	FString                                            Texture_Path;                                               // 0x0330   (0x0010)  
	FString                                            Texture_Name;                                               // 0x0340   (0x0010)  
	float                                              Scale_Km;                                                   // 0x0350   (0x0004)  
	bool                                               RenderedThisFrame;                                          // 0x0354   (0x0001)  


	/// Functions
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.Render Clouds
	// void RenderClouds(bool DeferRender);                                                                                     // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.Allocate RTs
	// void AllocateRTs();                                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.Save Texture
	// void SaveTexture();                                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.ExecuteUbergraph_BP_CloudMaskGenerator
	// void ExecuteUbergraph_BP_CloudMaskGenerator(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Struct /Volumetrics/Tools/CloudCompositing/Blueprints/Structs/CloudNoiseSettings.CloudNoiseSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FCloudNoiseSettings
{ 
	float                                              NoiseTiling_6_A88C75CE41384502C2167BAFB165960A;             // 0x0000   (0x0004)  
	float                                              NoiseIntensity_7_3C91204E44D26EDA1F226691E5DBA77C;          // 0x0004   (0x0004)  
	float                                              NoiseSeed_8_8C33D00144BDE4547AD180A7CBD0EC4C;               // 0x0008   (0x0004)  
};

/// Class /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C
/// Size: 0x0340 (832 bytes) (0x0002B8 - 0x000340) align 8 MaxSize: 0x0340
class ABP_CloudMask_Object_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        SpriteIcon;                                                 // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        PreviewMesh;                                                // 0x02C8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02D0   (0x0008)  
	float                                              Timeline_0_CloudForming_7097AAF64EFD695CA3C6BE95105C1EB7;   // 0x02D8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_7097AAF64EFD695CA3C6BE95105C1EB7;     // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02DD   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x02E0   (0x0008)  
	TEnumAsByte<CloudObjectType>                       Draw_Type;                                                  // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02E9   (0x0007)  MISSED
	class UStaticMesh*                                 Static_Mesh;                                                // 0x02F0   (0x0008)  
	class UMaterialInterface*                          Cloud_Material;                                             // 0x02F8   (0x0008)  
	class UTexture*                                    Cloud_Mask;                                                 // 0x0300   (0x0008)  
	class UMaterialInstanceDynamic*                    Mid;                                                        // 0x0308   (0x0008)  
	float                                              Density;                                                    // 0x0310   (0x0004)  
	float                                              Mip_Level;                                                  // 0x0314   (0x0004)  
	FCloudNoiseSettings                                Noise_Settings;                                             // 0x0318   (0x000C)  
	FVector                                            Detail_Noise_Values;                                        // 0x0324   (0x000C)  
	bool                                               Show_Debug;                                                 // 0x0330   (0x0001)  
	bool                                               StormClouds;                                                // 0x0331   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0332   (0x0002)  MISSED
	FVector                                            CloudScale;                                                 // 0x0334   (0x000C)  


	/// Functions
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.CloudUpdate
	// void CloudUpdate();                                                                                                      // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.Update Mask Generator
	// void UpdateMaskGenerator();                                                                                              // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1c5deb0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x1c5deb0] BlueprintEvent       
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x1c5deb0] BlueprintEvent       
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.CloudSize
	// void CloudSize();                                                                                                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.ExecuteUbergraph_BP_CloudMask_Object
	// void ExecuteUbergraph_BP_CloudMask_Object(int32_t EntryPoint);                                                           // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C
/// Size: 0x0151 (337 bytes) (0x0000E0 - 0x000151) align 8 MaxSize: 0x0151
class UJumpFloodComponent_2D_C : public UActorComponent
{ 
public:
	class UTextureRenderTarget2D*                      RT_A;                                                       // 0x00E0   (0x0008)  
	class UTextureRenderTarget2D*                      RT_B;                                                       // 0x00E8   (0x0008)  
	class UTexture*                                    Seed_Texture;                                               // 0x00F0   (0x0008)  
	int32_t                                            StartIndex;                                                 // 0x00F8   (0x0004)  
	int32_t                                            CurrentIndex;                                               // 0x00FC   (0x0004)  
	int32_t                                            LastIndex;                                                  // 0x0100   (0x0004)  
	int32_t                                            SmoothPasses;                                               // 0x0104   (0x0004)  
	FIntPoint                                          _2D_Size;                                                   // 0x0108   (0x0008)  
	class UMaterialInterface*                          Find_Edges_Material;                                        // 0x0110   (0x0008)  
	class UMaterialInterface*                          Jump_Step_Material;                                         // 0x0118   (0x0008)  
	class UMaterialInterface*                          Compute_Gradient_Material;                                  // 0x0120   (0x0008)  
	class UMaterialInterface*                          Edge_Smooth_Material;                                       // 0x0128   (0x0008)  
	class UMaterialInstanceDynamic*                    Find_Edges_MID;                                             // 0x0130   (0x0008)  
	class UMaterialInstanceDynamic*                    Jump_Step_MID;                                              // 0x0138   (0x0008)  
	class UMaterialInstanceDynamic*                    Compute_Gradient_MID;                                       // 0x0140   (0x0008)  
	class UMaterialInstanceDynamic*                    Edge_Smooth_MID;                                            // 0x0148   (0x0008)  
	TEnumAsByte<JumpFloodSeedMode>                     SeedMode;                                                   // 0x0150   (0x0001)  


	/// Functions
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Edge Smooth Iteration
	// void EdgeSmoothIteration(class UTexture*& ResultRT);                                                                     // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Compute Gradient
	// void ComputeGradient(class UTexture*& ResultRT);                                                                         // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Single Iteration
	// void SingleIteration(class UTexture*& ResultRT);                                                                         // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Jump Flood
	// void JumpFlood(TEnumAsByte<JumpFloodSeedMode> SeedMode, class UTexture* SeedTexture, int32_t SmoothingPasses, class UTexture*& ResultRT); // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Detect Edges
	// void DetectEdges(class UTexture*& SeedTexture, TEnumAsByte<JumpFloodSeedMode> Mode, class UTexture*& ResultRT);          // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Allocate Render Targets
	// void AllocateRenderTargets(class UTexture*& SeedTexture);                                                                // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Assign Render Targets
	// void AssignRenderTargets(class UTextureRenderTarget2D*& RTA, class UTextureRenderTarget2D*& RTB);                        // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVolumetricsBPLIbrary_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.GetFirstActorOfClass
	// void GetFirstActorOfClass(class UObject* WorldContent, class UClass* Class, class UObject* __WorldContext, class AActor*& Actor); // [0x1c5deb0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.Get Texture Size
	// void GetTextureSize(class UTexture* Texture, class UObject* __WorldContext, FIntPoint& Size);                            // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.RT Size Compare
	// void RTSizeCompare(class UTextureRenderTarget2D*& A, class UTextureRenderTarget2D*& B, class UObject* __WorldContext, bool& Match); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.PseudoVolume Dimensions
	// void PseudoVolumeDimensions(TEnumAsByte<EVolumeTextureDimensions> Dimensions, class UObject* __WorldContext, FIntPoint& RTSize, FIntPoint& XYFrames, int32_t& VolumeSize); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.Create and Assign MID
	// void CreateandAssignMID(class UMaterialInstanceDynamic*& Mid, class UMaterialInterface* Parent, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.Create and Assign RT
	// void CreateandAssignRT(class UTextureRenderTarget2D*& RT, FIntPoint Size, TEnumAsByte<ETextureRenderTargetFormat> Format, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CurveProfileTo_RT.BP_CurveProfileTo_RT_C
/// Size: 0x0340 (832 bytes) (0x0002B8 - 0x000340) align 8 MaxSize: 0x0340
class ABP_CurveProfileTo_RT_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UJumpFloodComponent_2D_C*                    JumpFloodComponent_2D;                                      // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x02C8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02D0   (0x0008)  
	class UTextureRenderTarget2D*                      Seed_Curve_RT;                                              // 0x02D8   (0x0008)  
	class UTextureRenderTarget2D*                      Curve_Line_Equation_RT;                                     // 0x02E0   (0x0008)  
	class UTextureRenderTarget2D*                      Accumulated_Distance_Fields;                                // 0x02E8   (0x0008)  
	class UTextureRenderTarget2D*                      JumpFlood_Result_RT;                                        // 0x02F0   (0x0008)  
	class UCurveLinearColor*                           Curve;                                                      // 0x02F8   (0x0008)  
	FIntPoint                                          Resolution;                                                 // 0x0300   (0x0008)  
	class UMaterialInstanceDynamic*                    Seed_Curve_MID;                                             // 0x0308   (0x0008)  
	class UMaterialInstanceDynamic*                    Composite_Result_MID;                                       // 0x0310   (0x0008)  
	class UMaterialInstanceDynamic*                    Preview_MID;                                                // 0x0318   (0x0008)  
	bool                                               Show_Jump_Flood;                                            // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0321   (0x0007)  MISSED
	FString                                            Texture_Name;                                               // 0x0328   (0x0010)  
	int32_t                                            Channel;                                                    // 0x0338   (0x0004)  
	float                                              Encoding_Bias;                                              // 0x033C   (0x0004)  


	/// Functions
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CurveProfileTo_RT.BP_CurveProfileTo_RT_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CurveProfileTo_RT.BP_CurveProfileTo_RT_C.Draw
	// void Draw();                                                                                                             // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CurveProfileTo_RT.BP_CurveProfileTo_RT_C.Clear
	// void Clear();                                                                                                            // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CurveProfileTo_RT.BP_CurveProfileTo_RT_C.Save
	// void Save();                                                                                                             // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CurveProfileTo_RT.BP_CurveProfileTo_RT_C.ExecuteUbergraph_BP_CurveProfileTo_RT
	// void ExecuteUbergraph_BP_CurveProfileTo_RT(int32_t EntryPoint);                                                          // [0x1c5deb0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ABP_CloudMaskGenerator_C) == 0x0355); // 853 bytes (0x0002B8 - 0x000355)
static_assert(sizeof(FCloudNoiseSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ABP_CloudMask_Object_C) == 0x0340); // 832 bytes (0x0002B8 - 0x000340)
static_assert(sizeof(UJumpFloodComponent_2D_C) == 0x0151); // 337 bytes (0x0000E0 - 0x000151)
static_assert(sizeof(UVolumetricsBPLIbrary_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ABP_CurveProfileTo_RT_C) == 0x0340); // 832 bytes (0x0002B8 - 0x000340)
static_assert(offsetof(ABP_CloudMaskGenerator_C, UberGraphFrame) == 0x02B8);
static_assert(offsetof(ABP_CloudMaskGenerator_C, StaticMesh) == 0x02C0);
static_assert(offsetof(ABP_CloudMaskGenerator_C, DefaultSceneRoot) == 0x02C8);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Resolution) == 0x02D0);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Scene_Capture_RT) == 0x02D8);
static_assert(offsetof(ABP_CloudMaskGenerator_C, CopyCloudMID) == 0x02E0);
static_assert(offsetof(ABP_CloudMaskGenerator_C, BlendCloudMID) == 0x02E8);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Finalize_Blur_Cloud_MID) == 0x02F0);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Cloud_Scratch_RT) == 0x02F8);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Cloud_Single_Render_RT) == 0x0300);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Blended_Cloud_RT) == 0x0308);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Finalized_Cloud_RT) == 0x0310);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Detail_Channels) == 0x031C);
static_assert(offsetof(ABP_CloudMaskGenerator_C, CloudComp) == 0x0328);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Texture_Path) == 0x0330);
static_assert(offsetof(ABP_CloudMaskGenerator_C, Texture_Name) == 0x0340);
static_assert(offsetof(ABP_CloudMask_Object_C, UberGraphFrame) == 0x02B8);
static_assert(offsetof(ABP_CloudMask_Object_C, SpriteIcon) == 0x02C0);
static_assert(offsetof(ABP_CloudMask_Object_C, PreviewMesh) == 0x02C8);
static_assert(offsetof(ABP_CloudMask_Object_C, DefaultSceneRoot) == 0x02D0);
static_assert(offsetof(ABP_CloudMask_Object_C, Timeline_0__Direction_7097AAF64EFD695CA3C6BE95105C1EB7) == 0x02DC);
static_assert(offsetof(ABP_CloudMask_Object_C, Timeline) == 0x02E0);
static_assert(offsetof(ABP_CloudMask_Object_C, Draw_Type) == 0x02E8);
static_assert(offsetof(ABP_CloudMask_Object_C, Static_Mesh) == 0x02F0);
static_assert(offsetof(ABP_CloudMask_Object_C, Cloud_Material) == 0x02F8);
static_assert(offsetof(ABP_CloudMask_Object_C, Cloud_Mask) == 0x0300);
static_assert(offsetof(ABP_CloudMask_Object_C, Mid) == 0x0308);
static_assert(offsetof(ABP_CloudMask_Object_C, Noise_Settings) == 0x0318);
static_assert(offsetof(ABP_CloudMask_Object_C, Detail_Noise_Values) == 0x0324);
static_assert(offsetof(ABP_CloudMask_Object_C, CloudScale) == 0x0334);
static_assert(offsetof(UJumpFloodComponent_2D_C, RT_A) == 0x00E0);
static_assert(offsetof(UJumpFloodComponent_2D_C, RT_B) == 0x00E8);
static_assert(offsetof(UJumpFloodComponent_2D_C, Seed_Texture) == 0x00F0);
static_assert(offsetof(UJumpFloodComponent_2D_C, _2D_Size) == 0x0108);
static_assert(offsetof(UJumpFloodComponent_2D_C, Find_Edges_Material) == 0x0110);
static_assert(offsetof(UJumpFloodComponent_2D_C, Jump_Step_Material) == 0x0118);
static_assert(offsetof(UJumpFloodComponent_2D_C, Compute_Gradient_Material) == 0x0120);
static_assert(offsetof(UJumpFloodComponent_2D_C, Edge_Smooth_Material) == 0x0128);
static_assert(offsetof(UJumpFloodComponent_2D_C, Find_Edges_MID) == 0x0130);
static_assert(offsetof(UJumpFloodComponent_2D_C, Jump_Step_MID) == 0x0138);
static_assert(offsetof(UJumpFloodComponent_2D_C, Compute_Gradient_MID) == 0x0140);
static_assert(offsetof(UJumpFloodComponent_2D_C, Edge_Smooth_MID) == 0x0148);
static_assert(offsetof(UJumpFloodComponent_2D_C, SeedMode) == 0x0150);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, UberGraphFrame) == 0x02B8);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, JumpFloodComponent_2D) == 0x02C0);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, StaticMesh) == 0x02C8);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, DefaultSceneRoot) == 0x02D0);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Seed_Curve_RT) == 0x02D8);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Curve_Line_Equation_RT) == 0x02E0);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Accumulated_Distance_Fields) == 0x02E8);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, JumpFlood_Result_RT) == 0x02F0);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Curve) == 0x02F8);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Resolution) == 0x0300);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Seed_Curve_MID) == 0x0308);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Composite_Result_MID) == 0x0310);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Preview_MID) == 0x0318);
static_assert(offsetof(ABP_CurveProfileTo_RT_C, Texture_Name) == 0x0328);
