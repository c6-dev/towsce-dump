
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: OpenColorIO
/// dependency: UMG

/// Class /Script/MovieRenderPipelineCore.MoviePipeline
/// Size: 0x02B8 (0x000030 - 0x0002E8)
class UMoviePipeline : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FMulticastInlineDelegate)                  OnMoviePipelineFinishedDelegate                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoviePipelineWorkFinishedDelegate                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoviePipelineShotWorkFinishedDelegate                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(class UMoviePipelineCustomTimeStep*)       CustomTimeStep                                              OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UEngineCustomTimeStep*)              CachedPrevCustomTimeStep                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class ULevelSequence*)                     TargetSequence                                              OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class ALevelSequenceActor*)                LevelSequenceActor                                          OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UMovieRenderDebugWidget*)            DebugWidget                                                 OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UTexture*)                           PreviewTexture                                              OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UClass*)                             DebugWidgetClass                                            OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          CurrentJob                                                  OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Shutdown
	// void Shutdown(bool bError);                                                                                              // [0xe13670] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	// void RequestShutdown(bool bIsError);                                                                                     // [0xe12a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	// void OnMoviePipelineFinishedImpl();                                                                                      // [0xe129b0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	// bool IsShutdownRequested();                                                                                              // [0xe127b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Initialize
	// void Initialize(class UMoviePipelineExecutorJob* InJob);                                                                 // [0xe126f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	// class UTexture* GetPreviewTexture();                                                                                     // [0xe12590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	// class UMoviePipelineMasterConfig* GetPipelineMasterConfig();                                                             // [0xe124d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCustomTimeStep
/// Size: 0x0008 (0x000030 - 0x000038)
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting
/// Size: 0x0020 (0x000030 - 0x000050)
class UMoviePipelineSetting : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<class UMoviePipeline*>)     CachedPipeline                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	// void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);                           // [0xe19020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
/// Size: 0x0020 (0x000050 - 0x000070)
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   SpatialSampleCount                                          OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   TemporalSampleCount                                         OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bOverrideAntiAliasing                                       OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<EAntiAliasingMethod>)          AntiAliasingMethod                                          OFFSET(get<T>, {0x59, 1, 0, 0})
	DMember(int32_t)                                   RenderWarmUpCount                                           OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bUseCameraCutForWarmUp                                      OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   EngineWarmUpCount                                           OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bRenderWarmUpFrames                                         OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	// void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool& bShotsChanged); // [0xe13700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	// int32_t ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams);                                              // [0xe12ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
	// void ResolveFilenameFormatArguments(FString InFormatString, FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs); // [0xe12af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	// EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);                                            // [0xe12500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	// void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);   // [0xe123b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	// void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);    // [0xe12290] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	// FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);                                                      // [0xe121f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	// FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);                                                // [0xe12160] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	// FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);                                                       // [0xe12090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	// FText GetJobName(class UMoviePipeline* InMoviePipeline);                                                                 // [0xe11fa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	// FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);                                               // [0xe11f10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	// FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);                                                               // [0xe11e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	// bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, FTimespan& OutEstimate);                                // [0xe11d50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
	// FIntPoint GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot); // [0xe11c80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	// FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);                                                 // [0xe11be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	// FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);                                           // [0xe11b50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	// FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);                    // [0xe11a60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	// EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);                                     // [0xe119d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	// void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);             // [0xe11830] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
	// float GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);                                                    // [0xe117a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
	// float GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);                                                      // [0xe11710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
	// float GetCurrentAperture(class UMoviePipeline* InMoviePipeline);                                                         // [0xe11680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	// float GetCompletionPercentage(class UMoviePipeline* InPipeline);                                                         // [0xe115f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
	// class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InShot); // [0xe11080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
	// class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);               // [0xe10e50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCameraSetting
/// Size: 0x0008 (0x000050 - 0x000058)
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EMoviePipelineShutterTiming)               ShutterTiming                                               OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(float)                                     OverscanPercentage                                          OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineColorSetting
/// Size: 0x0068 (0x000050 - 0x0000B8)
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FOpenColorIODisplayConfiguration)          OCIOConfiguration                                           OFFSET(getStruct<T>, {0x50, 96, 0, 0})
	DMember(bool)                                      bDisableToneCurve                                           OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
/// Size: 0x0040 (0x000050 - 0x000090)
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   FileNameFormatOverride                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(EMoviePipelineEncodeQuality)               Quality                                                     OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArgs                                   OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bDeleteSourceFiles                                          OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bSkipEncodeOnRenderCanceled                                 OFFSET(get<bool>, {0x79, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
/// Size: 0x00C8 (0x000040 - 0x000108)
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FString)                                   ExecutablePath                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FText)                                     CodecHelpText                                               OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FString)                                   VideoCodec                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   AudioCodec                                                  OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   OutputFileExtension                                         OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   CommandLineFormat                                           OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   VideoInputStringFormat                                      OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   AudioInputStringFormat                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_Low                                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_Med                                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_High                                         OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_Epic                                         OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineConfigBase
/// Size: 0x0028 (0x000030 - 0x000058)
class UMoviePipelineConfigBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UMoviePipelineSetting*>)      Settings                                                    OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	// void RemoveSetting(class UMoviePipelineSetting* InSetting);                                                              // [0xe129d0] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	// TArray<UMoviePipelineSetting*> GetUserSettings();                                                                        // [0xe12670] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	// TArray<UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings);                // [0xe113b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	// class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);                   // [0xe11180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	// class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);              // [0xe10fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	// void CopyFrom(class UMoviePipelineConfigBase* InConfig);                                                                 // [0xe10da0] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineDebugSettings
/// Size: 0x0010 (0x000050 - 0x000060)
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bWriteAllSamples                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bCaptureFramesWithRenderDoc                                 OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(int32_t)                                   CaptureFrame                                                OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase
/// Size: 0x00E0 (0x000030 - 0x000110)
class UMoviePipelineExecutorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMulticastInlineDelegate)                  OnExecutorFinishedDelegate                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExecutorErroredDelegate                                   OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SocketMessageRecievedDelegate                               OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HTTPResponseRecievedDelegate                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(class UClass*)                             DebugWidgetClass                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FString)                                   UserData                                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(class UClass*)                             TargetPipelineClass                                         OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0xe135e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0xe13540] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	// void SetMoviePipelineClass(class UClass* InPipelineClass);                                                               // [0xe134b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	// bool SendSocketMessage(FString InMessage);                                                                               // [0xe13400] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	// int32_t SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, TMap<FString, FString>& InHeaders);            // [0xe131f0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	// void OnExecutorFinishedImpl();                                                                                           // [0xe129b0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	// void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);                       // [0xe12830] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	// void OnBeginFrame();                                                                                                     // [0xe12810] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	// bool IsSocketConnected();                                                                                                // [0xe127e0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	// bool IsRendering();                                                                                                      // [0xe12780] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0xe12630] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0xe125b0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	// void Execute(class UMoviePipelineQueue* InPipelineQueue);                                                                // [0xe10f20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	// void DisconnectSocket();                                                                                                 // [0xe10e30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	// bool ConnectSocket(FString InHostName, int32_t InPort);                                                                  // [0xe10cb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	// void CancelCurrentJob();                                                                                                 // [0xe10c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	// void CancelAllJobs();                                                                                                    // [0xe10c70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputBase
/// Size: 0x0000 (0x000050 - 0x000050)
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
/// Size: 0x0038 (0x000050 - 0x000088)
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   FileNameFormatOverride                                      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FCPXMLExportDataSource)                    DataSource                                                  OFFSET(getStruct<T>, {0x68, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameMode
/// Size: 0x0000 (0x000360 - 0x000360)
class AMoviePipelineGameMode : public AGameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
/// Size: 0x00C0 (0x000050 - 0x000110)
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UClass*)                             GameModeOverride                                            OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bCinematicQualitySettings                                   OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(EMoviePipelineTextureStreamingMethod)      TextureStreaming                                            OFFSET(get<T>, {0x59, 1, 0, 0})
	DMember(bool)                                      bUseLODZero                                                 OFFSET(get<bool>, {0x5A, 1, 0, 0})
	DMember(bool)                                      bDisableHLODs                                               OFFSET(get<bool>, {0x5B, 1, 0, 0})
	DMember(bool)                                      bUseHighQualityShadows                                      OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(int32_t)                                   ShadowDistanceScale                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     ShadowRadiusThreshold                                       OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bOverrideViewDistanceScale                                  OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(int32_t)                                   ViewDistanceScale                                           OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bFlushGrassStreaming                                        OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineHighResSetting
/// Size: 0x0018 (0x000050 - 0x000068)
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   TileCount                                                   OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     TextureSharpnessBias                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     OverlapRatio                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bOverrideSubSurfaceScattering                               OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(int32_t)                                   BurleySampleCount                                           OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
/// Size: 0x0028 (0x000110 - 0x000138)
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(class UMoviePipelineQueue*)                Queue                                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UMoviePipeline*)                     ActiveMoviePipeline                                         OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor
/// Size: 0x0038 (0x000138 - 0x000170)
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      bUseCurrentLevel                                            OFFSET(get<bool>, {0x138, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
/// Size: 0x0030 (0x000040 - 0x000070)
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bCloseEditor                                                OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArguments                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   InheritedCommandLineArguments                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   InitialDelayFrameCount                                      OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TMap<FString, class UMoviePipelineShotConfig*>) PerShotConfigMapping                                   OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(class UMoviePipelineOutputSetting*)        OutputSetting                                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<class UMoviePipelineSetting*>)      TransientSettings                                           OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
	// void InitializeTransientSettings();                                                                                      // [0xe19a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
	// TArray<UMoviePipelineSetting*> GetTransientSettings();                                                                   // [0xe19970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
	// FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);                                                      // [0xe19500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
	// TArray<UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);            // [0xe193b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputSetting
/// Size: 0x0068 (0x000050 - 0x0000B8)
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FDirectoryPath)                            OutputDirectory                                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   FileNameFormat                                              OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FIntPoint)                                 OutputResolution                                            OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bUseCustomFrameRate                                         OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FFrameRate)                                OutputFrameRate                                             OFFSET(getStruct<T>, {0x7C, 8, 0, 0})
	DMember(bool)                                      bOverrideExistingOutput                                     OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   HandleFrameCount                                            OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   OutputFrameStep                                             OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(bool)                                      bUseCustomPlaybackRange                                     OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(int32_t)                                   CustomStartFrame                                            OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   CustomEndFrame                                              OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   VersionNumber                                               OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bAutoVersion                                                OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(int32_t)                                   ZeroPadFrameNumbers                                         OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberOffset                                           OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bFlushDiskWritesPerShot                                     OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
/// Size: 0x0018 (0x000110 - 0x000128)
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(class UClass*)                             ExecutorClass                                               OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UMoviePipelineQueue*)                PipelineQueue                                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UWorld*)                             LastLoadedWorld                                             OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	// void OnMapLoad(class UWorld* InWorld);                                                                                   // [0xe19ae0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	// class UWorld* GetLastLoadedWorld();                                                                                      // [0xe19650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	// void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);                                                         // [0xe19300] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot
/// Size: 0x0108 (0x000030 - 0x000138)
class UMoviePipelineExecutorShot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   OuterName                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   InnerName                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(float)                                     Progress                                                    OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FString)                                   StatusMessage                                               OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	CMember(class UMoviePipelineShotConfig*)           ShotOverrideConfig                                          OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelineShotConfig*>) ShotOverridePresetOrigin                              OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	// bool ShouldRender();                                                                                                     // [0xe1a1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0xe1a110] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0xe1a070] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	// void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);                                              // [0xe19fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	// void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);                                             // [0xe19f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0xe19930] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0xe12670] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	// class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();                                                           // [0xe19790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	// class UMoviePipelineShotConfig* GetShotOverrideConfiguration();                                                          // [0xe19770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	// class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);                               // [0xe18f80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UMoviePipelineExecutorJob : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   JobName                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FSoftObjectPath)                           Sequence                                                    OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FSoftObjectPath)                           Map                                                         OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FString)                                   Author                                                      OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(TArray<class UMoviePipelineExecutorShot*>) ShotInfo                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   UserData                                                    OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   StatusMessage                                               OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     StatusProgress                                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bIsConsumed                                                 OFFSET(get<bool>, {0xB4, 1, 0, 0})
	CMember(class UMoviePipelineMasterConfig*)         Configuration                                               OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelineMasterConfig*>) PresetOrigin                                        OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0xe1a110] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0xe1a070] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	// void SetSequence(FSoftObjectPath InSequence);                                                                            // [0xe19e50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	// void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);                                                        // [0xe19dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	// void SetConsumed(bool bInConsumed);                                                                                      // [0xe19d30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	// void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);                                                       // [0xe19ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	// void OnDuplicated();                                                                                                     // [0xe19ac0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	// bool IsConsumed();                                                                                                       // [0xe19a50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0xe198f0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0xe19870] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	// class UMoviePipelineMasterConfig* GetPresetOrigin();                                                                     // [0xe19670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	// class UMoviePipelineMasterConfig* GetConfiguration();                                                                    // [0xe194e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueue
/// Size: 0x0018 (0x000030 - 0x000048)
class UMoviePipelineQueue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UMoviePipelineExecutorJob*>)  Jobs                                                        OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	// TArray<UMoviePipelineExecutorJob*> GetJobs();                                                                            // [0xe19590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	// class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);                                   // [0xe19260] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	// void DeleteJob(class UMoviePipelineExecutorJob* InJob);                                                                  // [0xe191d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	// void CopyFrom(class UMoviePipelineQueue* InQueue);                                                                       // [0xe19140] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	// class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);                                                // [0xe18ee0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
/// Size: 0x0010 (0x000038 - 0x000048)
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UMoviePipelineExecutorBase*)         ActiveExecutor                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UMoviePipelineQueue*)                CurrentQueue                                                OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	// void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);                                      // [0xe19c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	// class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);                                 // [0xe19b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	// bool IsRendering();                                                                                                      // [0xe19a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	// class UMoviePipelineQueue* GetQueue();                                                                                   // [0xe19750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	// class UMoviePipelineExecutorBase* GetActiveExecutor();                                                                   // [0xe19390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineRenderPass
/// Size: 0x0000 (0x000050 - 0x000050)
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineShotConfig
/// Size: 0x0000 (0x000058 - 0x000058)
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineVideoOutputBase
/// Size: 0x0040 (0x000050 - 0x000090)
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineViewFamilySetting
/// Size: 0x0000 (0x000050 - 0x000050)
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieRenderPipelineCore.MovieRenderDebugWidget
/// Size: 0x0000 (0x000278 - 0x000278)
class UMovieRenderDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
	// void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);                                                        // [0x1c5deb0] Event|Public|BlueprintEvent 
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelinePassIdentifier
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoviePipelinePassIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoviePipelineRenderPassOutputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           FilePaths                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineShotOutputData
/// Size: 0x0058 (0x000000 - 0x000058)
class FMoviePipelineShotOutputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<class UMoviePipelineExecutorShot*>) Shot                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TMap<FMoviePipelinePassIdentifier, FMoviePipelineRenderPassOutputData>) RenderPassData                 OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineOutputData
/// Size: 0x0028 (0x000000 - 0x000028)
class FMoviePipelineOutputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMoviePipeline*)                     Pipeline                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          Job                                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TArray<FMoviePipelineShotOutputData>)      ShotData                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
/// Size: 0x0100 (0x000000 - 0x000100)
class FMoviePipelineFilenameResolveParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(int32_t)                                   FrameNumber                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberShot                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberRel                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberShotRel                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   CameraNameOverride                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ShotNameOverride                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   ZeroPadFrameNumberCount                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bForceRelativeFrameNumbers                                  OFFSET(get<bool>, {0x34, 1, 0, 0})
	CMember(TMap<FString, FString>)                    FileNameFormatOverrides                                     OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TMap<FString, FString>)                    FileMetadata                                                OFFSET(get<T>, {0x88, 80, 0, 0})
	SMember(FDateTime)                                 InitializationTime                                          OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	DMember(int32_t)                                   InitializationVersion                                       OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          Job                                                         OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UMoviePipelineExecutorShot*)         ShotOverride                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(int32_t)                                   AdditionalFrameNumberOffset                                 OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFormatArgs
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FMoviePipelineFormatArgs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<FString, FString>)                    FilenameArguments                                           OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FString, FString>)                    FileMetadata                                                OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          InJob                                                       OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineCameraCutInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FMoviePipelineCameraCutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
/// Size: 0x0028 (0x000000 - 0x000028)
class FMoviePipelineSegmentWorkMetrics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   SegmentName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   OutputFrameIndex                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TotalOutputFrameCount                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   OutputSubSampleIndex                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalSubSampleCount                                         OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   EngineWarmUpFrameIndex                                      OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TotalEngineWarmUpFrameCount                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineEncodeQuality
/// Size: 0x04
enum class EMoviePipelineEncodeQuality : uint8_t
{
	EMoviePipelineEncodeQuality__Low                                                 = 0,
	EMoviePipelineEncodeQuality__Medium                                              = 1,
	EMoviePipelineEncodeQuality__High                                                = 2,
	EMoviePipelineEncodeQuality__Epic                                                = 3
};

/// Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
/// Size: 0x02
enum class FCPXMLExportDataSource : uint8_t
{
	FCPXMLExportDataSource__OutputMetadata                                           = 0,
	FCPXMLExportDataSource__SequenceData                                             = 1
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
/// Size: 0x03
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
	EMoviePipelineTextureStreamingMethod__None                                       = 0,
	EMoviePipelineTextureStreamingMethod__Disabled                                   = 1,
	EMoviePipelineTextureStreamingMethod__FullyLoad                                  = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
/// Size: 0x03
enum class EMoviePipelineShutterTiming : uint8_t
{
	EMoviePipelineShutterTiming__FrameOpen                                           = 0,
	EMoviePipelineShutterTiming__FrameCenter                                         = 1,
	EMoviePipelineShutterTiming__FrameClose                                          = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
/// Size: 0x05
enum class EMovieRenderShotState : uint8_t
{
	EMovieRenderShotState__Uninitialized                                             = 0,
	EMovieRenderShotState__WarmingUp                                                 = 1,
	EMovieRenderShotState__MotionBlur                                                = 2,
	EMovieRenderShotState__Rendering                                                 = 3,
	EMovieRenderShotState__Finished                                                  = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
/// Size: 0x05
enum class EMovieRenderPipelineState : uint8_t
{
	EMovieRenderPipelineState__Uninitialized                                         = 0,
	EMovieRenderPipelineState__ProducingFrames                                       = 1,
	EMovieRenderPipelineState__Finalize                                              = 2,
	EMovieRenderPipelineState__Export                                                = 3,
	EMovieRenderPipelineState__Finished                                              = 4
};

