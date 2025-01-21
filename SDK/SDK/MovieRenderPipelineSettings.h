
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x00A8 (168 bytes) (0x000050 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{ 
public:
	FSoftClassPath                                     BurnInClass;                                                // 0x0050   (0x0018)  
	bool                                               bCompositeOntoFinalImage;                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0069   (0x002F)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0098   (0x0008)  
	class UMoviePipelineBurnInWidget*                  BurnInWidgetInstance;                                       // 0x00A0   (0x0008)  
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x0278 (632 bytes) (0x000278 - 0x000278) align 8 MaxSize: 0x0278
class UMoviePipelineBurnInWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	// void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);                                                            // [0x1c5deb0] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x00D0 (208 bytes) (0x000050 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{ 
public:
	TMap<FString, float>                               ConsoleVariables;                                           // 0x0050   (0x0050)  
	TArray<FString>                                    StartConsoleCommands;                                       // 0x00A0   (0x0010)  
	TArray<FString>                                    EndConsoleCommands;                                         // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0070 (112 bytes) (0x000050 - 0x000070) align 8 MaxSize: 0x0070
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{ 
public:
	bool                                               bCompositeOntoFinalImage;                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0051   (0x0017)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0068   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UMoviePipelineBurnInSetting) == 0x00A8); // 168 bytes (0x000050 - 0x0000A8)
static_assert(sizeof(UMoviePipelineBurnInWidget) == 0x0278); // 632 bytes (0x000278 - 0x000278)
static_assert(sizeof(UMoviePipelineConsoleVariableSetting) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UMoviePipelineWidgetRenderer) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(offsetof(UMoviePipelineBurnInSetting, BurnInClass) == 0x0050);
static_assert(offsetof(UMoviePipelineBurnInSetting, RenderTarget) == 0x0098);
static_assert(offsetof(UMoviePipelineBurnInSetting, BurnInWidgetInstance) == 0x00A0);
static_assert(offsetof(UMoviePipelineConsoleVariableSetting, ConsoleVariables) == 0x0050);
static_assert(offsetof(UMoviePipelineConsoleVariableSetting, StartConsoleCommands) == 0x00A0);
static_assert(offsetof(UMoviePipelineConsoleVariableSetting, EndConsoleCommands) == 0x00B0);
static_assert(offsetof(UMoviePipelineWidgetRenderer, RenderTarget) == 0x0068);
