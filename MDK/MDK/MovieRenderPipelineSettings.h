
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: UMG

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSoftClassPath)                            BurnInClass                                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(bool)                                      bCompositeOntoFinalImage                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UMoviePipelineBurnInWidget*)         BurnInWidgetInstance                                        OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x0000 (0x000278 - 0x000278)
class UMoviePipelineBurnInWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	// void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);                                                            // [0x1c5deb0] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<FString, float>)                      ConsoleVariables                                            OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<FString>)                           StartConsoleCommands                                        OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FString>)                           EndConsoleCommands                                          OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0020 (0x000050 - 0x000070)
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bCompositeOntoFinalImage                                    OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x68, 8, 0, 0})
};

