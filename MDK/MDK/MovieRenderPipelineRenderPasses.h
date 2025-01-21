
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ActorLayerUtilities
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Struct /Script/MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
/// Size: 0x0030 (0x000000 - 0x000030)
class FMoviePipelinePostProcessPass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<class UMaterialInterface*>) Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
/// Size: 0x00A8 (0x0000D0 - 0x000178)
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(bool)                                      bAccumulatorIncludesAlpha                                   OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bDisableMultisampleEffects                                  OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(bool)                                      bUse32BitPostProcessMaterials                               OFFSET(get<bool>, {0xD2, 1, 0, 0})
	CMember(TArray<FMoviePipelinePostProcessPass>)     AdditionalPostProcessMaterials                              OFFSET(get<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bAddDefaultLayer                                            OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(TArray<FActorLayer>)                       StencilLayers                                               OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         ActivePostProcessMaterials                                  OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(class UMaterialInterface*)                 StencilLayerMaterial                                        OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TArray<class UTextureRenderTarget2D*>)     TileRenderTargets                                           OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
/// Size: 0x0000 (0x000178 - 0x000178)
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
/// Size: 0x0000 (0x000178 - 0x000178)
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
/// Size: 0x0000 (0x000178 - 0x000178)
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
/// Size: 0x0000 (0x000178 - 0x000178)
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
/// Size: 0x0000 (0x000178 - 0x000178)
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
/// Size: 0x0020 (0x000050 - 0x000070)
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
/// Size: 0x0008 (0x000070 - 0x000078)
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EEXRCompressionFormat)                     Compression                                                 OFFSET(get<T>, {0x70, 1, 0, 0})
	DMember(bool)                                      bMultilayer                                                 OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
/// Size: 0x0000 (0x000070 - 0x000070)
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
/// Size: 0x0000 (0x000070 - 0x000070)
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
/// Size: 0x0000 (0x000070 - 0x000070)
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   FileNameFormatOverride                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Enum /Script/MovieRenderPipelineRenderPasses.EEXRCompressionFormat
/// Size: 0x03
enum class EEXRCompressionFormat : uint8_t
{
	EEXRCompressionFormat__None                                                      = 0,
	EEXRCompressionFormat__PIZ                                                       = 1,
	EEXRCompressionFormat__ZIP                                                       = 2
};

