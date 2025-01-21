
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Content
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C
/// Size: 0x009D (0x0002B8 - 0x000355)
class ABP_CloudMaskGenerator_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 853;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMesh                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FIntPoint)                                 Resolution                                                  OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Scene_Capture_RT                                            OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CopyCloudMID                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BlendCloudMID                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Finalize_Blur_Cloud_MID                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Cloud_Scratch_RT                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Cloud_Single_Render_RT                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Blended_Cloud_RT                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Finalized_Cloud_RT                                          OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   Blur_Radius                                                 OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	SMember(FVector)                                   Detail_Channels                                             OFFSET(getStruct<T>, {0x31C, 12, 0, 0})
	CMember(class AVolumetricCloud*)                   CloudComp                                                   OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FString)                                   Texture_Path                                                OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FString)                                   Texture_Name                                                OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	DMember(float)                                     Scale_Km                                                    OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(bool)                                      RenderedThisFrame                                           OFFSET(get<bool>, {0x354, 1, 0, 0})


	/// Functions
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.Render Clouds
	// void Render Clouds(bool DeferRender);                                                                                    // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.Allocate RTs
	// void Allocate RTs();                                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.Save Texture
	// void Save Texture();                                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMaskGenerator.BP_CloudMaskGenerator_C.ExecuteUbergraph_BP_CloudMaskGenerator
	// void ExecuteUbergraph_BP_CloudMaskGenerator(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Struct /Volumetrics/Tools/CloudCompositing/Blueprints/Structs/CloudNoiseSettings.CloudNoiseSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FCloudNoiseSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     NoiseTiling_6_A88C75CE41384502C2167BAFB165960A              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NoiseIntensity_7_3C91204E44D26EDA1F226691E5DBA77C           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     NoiseSeed_8_8C33D00144BDE4547AD180A7CBD0EC4C                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C
/// Size: 0x0088 (0x0002B8 - 0x000340)
class ABP_CloudMask_Object_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SpriteIcon                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               PreviewMesh                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(float)                                     Timeline_0_CloudForming_7097AAF64EFD695CA3C6BE95105C1EB7    OFFSET(get<float>, {0x2D8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_7097AAF64EFD695CA3C6BE95105C1EB7      OFFSET(get<T>, {0x2DC, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TEnumAsByte<CloudObjectType>)              Draw_Type                                                   OFFSET(get<T>, {0x2E8, 1, 0, 0})
	CMember(class UStaticMesh*)                        Static_Mesh                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Cloud_Material                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UTexture*)                           Cloud_Mask                                                  OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Mid                                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     Mip_Level                                                   OFFSET(get<float>, {0x314, 4, 0, 0})
	SMember(FCloudNoiseSettings)                       Noise_Settings                                              OFFSET(getStruct<T>, {0x318, 12, 0, 0})
	SMember(FVector)                                   Detail_Noise_Values                                         OFFSET(getStruct<T>, {0x324, 12, 0, 0})
	DMember(bool)                                      Show_Debug                                                  OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(bool)                                      StormClouds                                                 OFFSET(get<bool>, {0x331, 1, 0, 0})
	SMember(FVector)                                   CloudScale                                                  OFFSET(getStruct<T>, {0x334, 12, 0, 0})


	/// Functions
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.CloudUpdate
	// void CloudUpdate();                                                                                                      // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CloudMask_Object.BP_CloudMask_Object_C.Update Mask Generator
	// void Update Mask Generator();                                                                                            // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
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
/// Size: 0x0071 (0x0000E0 - 0x000151)
class UJumpFloodComponent_2D_C : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 337;

public:
	CMember(class UTextureRenderTarget2D*)             RT_A                                                        OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RT_B                                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UTexture*)                           Seed_Texture                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(int32_t)                                   StartIndex                                                  OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   CurrentIndex                                                OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   LastIndex                                                   OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   SmoothPasses                                                OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	SMember(FIntPoint)                                 _2D_Size                                                    OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Find_Edges_Material                                         OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Jump_Step_Material                                          OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Compute_Gradient_Material                                   OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Edge_Smooth_Material                                        OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Find_Edges_MID                                              OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Jump_Step_MID                                               OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Compute_Gradient_MID                                        OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Edge_Smooth_MID                                             OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(TEnumAsByte<JumpFloodSeedMode>)            SeedMode                                                    OFFSET(get<T>, {0x150, 1, 0, 0})


	/// Functions
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Edge Smooth Iteration
	// void Edge Smooth Iteration(class UTexture*& Result RT);                                                                  // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Compute Gradient
	// void Compute Gradient(class UTexture*& Result RT);                                                                       // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Single Iteration
	// void Single Iteration(class UTexture*& Result RT);                                                                       // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Jump Flood
	// void Jump Flood(TEnumAsByte<JumpFloodSeedMode> Seed Mode, class UTexture* Seed Texture, int32_t Smoothing Passes, class UTexture*& Result RT); // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Detect Edges
	// void Detect Edges(class UTexture*& Seed Texture, TEnumAsByte<JumpFloodSeedMode> Mode, class UTexture*& Result RT);       // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Allocate Render Targets
	// void Allocate Render Targets(class UTexture*& Seed Texture);                                                             // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/JumpFlooding/Blueprints/JumpFloodComponent_2D.JumpFloodComponent_2D_C.Assign Render Targets
	// void Assign Render Targets(class UTextureRenderTarget2D*& RT A, class UTextureRenderTarget2D*& RT B);                    // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UVolumetricsBPLIbrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.GetFirstActorOfClass
	// void GetFirstActorOfClass(class UObject* WorldContent, class UClass* Class, class UObject* __WorldContext, class AActor*& Actor); // [0x1c5deb0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.Get Texture Size
	// void Get Texture Size(class UTexture* Texture, class UObject* __WorldContext, FIntPoint& Size);                          // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.RT Size Compare
	// void RT Size Compare(class UTextureRenderTarget2D*& A, class UTextureRenderTarget2D*& B, class UObject* __WorldContext, bool& Match); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.PseudoVolume Dimensions
	// void PseudoVolume Dimensions(TEnumAsByte<EVolumeTextureDimensions> Dimensions, class UObject* __WorldContext, FIntPoint& RT Size, FIntPoint& XY Frames, int32_t& Volume Size); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.Create and Assign MID
	// void Create and Assign MID(class UMaterialInstanceDynamic*& Mid, class UMaterialInterface* Parent, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Volumetrics/Tools/BlueprintLibraries/VolumetricsBPLIbrary.VolumetricsBPLIbrary_C.Create and Assign RT
	// void Create and Assign RT(class UTextureRenderTarget2D*& RT, FIntPoint Size, TEnumAsByte<ETextureRenderTargetFormat> Format, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Volumetrics/Tools/CloudCompositing/Blueprints/BP_CurveProfileTo_RT.BP_CurveProfileTo_RT_C
/// Size: 0x0088 (0x0002B8 - 0x000340)
class ABP_CurveProfileTo_RT_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UJumpFloodComponent_2D_C*)           JumpFloodComponent_2D                                       OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMesh                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Seed_Curve_RT                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Curve_Line_Equation_RT                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             Accumulated_Distance_Fields                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             JumpFlood_Result_RT                                         OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCurveLinearColor*)                  Curve                                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FIntPoint)                                 Resolution                                                  OFFSET(getStruct<T>, {0x300, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Seed_Curve_MID                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Composite_Result_MID                                        OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Preview_MID                                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      Show_Jump_Flood                                             OFFSET(get<bool>, {0x320, 1, 0, 0})
	SMember(FString)                                   Texture_Name                                                OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	DMember(int32_t)                                   Channel                                                     OFFSET(get<int32_t>, {0x338, 4, 0, 0})
	DMember(float)                                     Encoding_Bias                                               OFFSET(get<float>, {0x33C, 4, 0, 0})


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

/// Enum /Volumetrics/Tools/FluidSimulation/Blueprints/Enums/EVolumeTextureDimensions.EVolumeTextureDimensions
/// Size: 0x08
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
/// Size: 0x05
enum class JumpFloodSeedMode : uint8_t
{
	JumpFloodSeedMode__NewEnumerator0                                                = 0,
	JumpFloodSeedMode__NewEnumerator2                                                = 1,
	JumpFloodSeedMode__NewEnumerator3                                                = 2,
	JumpFloodSeedMode__NewEnumerator4                                                = 3,
	JumpFloodSeedMode__NewEnumerator1                                                = 4
};

