
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ImageWriteQueue

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneCaptureProtocolBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EMovieSceneCaptureProtocolState)           State                                                       OFFSET(get<T>, {0x58, 1, 0, 0})


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	// bool IsCapturing();                                                                                                      // [0x3150b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	// EMovieSceneCaptureProtocolState GetState();                                                                              // [0x2a47e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0000 (0x000060 - 0x000060)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0038 (0x000060 - 0x000098)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (0x000000 - 0x000010)
class FCompositionGraphCapturePasses : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Value                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x0068 (0x000060 - 0x0000C8)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FCompositionGraphCapturePasses)            IncludeRenderPasses                                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bCaptureFramesInHDR                                         OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(int32_t)                                   HDRCompressionQuality                                       OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	CMember(TEnumAsByte<EHDRCaptureGamut>)             CaptureGamut                                                OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FSoftObjectPath)                           PostProcessingMaterial                                      OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(bool)                                      bDisableScreenPercentage                                    OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(class UMaterialInterface*)                 PostProcessingMaterialPtr                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0010 (0x000060 - 0x000070)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(int32_t)                                   CompressionQuality                                          OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bCompressed                                                 OFFSET(get<bool>, {0xE0, 1, 0, 0})
	CMember(TEnumAsByte<EHDRCaptureGamut>)             CaptureGamut                                                OFFSET(get<T>, {0xE1, 1, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UMovieSceneCaptureInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureResolution : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ResX                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ResY                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FMovieSceneCaptureSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FDirectoryPath)                            OutputDirectory                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UClass*)                             GameModeOverride                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   OutputFormat                                                OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bOverwriteExisting                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bUseRelativeFrameNumbers                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   HandleFrames                                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FString)                                   MovieExtension                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(char)                                      ZeroPadFrameNumbers                                         OFFSET(get<char>, {0x40, 1, 0, 0})
	SMember(FFrameRate)                                FrameRate                                                   OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bUseCustomFrameRate                                         OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FFrameRate)                                CustomFrameRate                                             OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FCaptureResolution)                        Resolution                                                  OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bEnableTextureStreaming                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bCinematicEngineScalability                                 OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bCinematicMode                                              OFFSET(get<bool>, {0x62, 1, 0, 0})
	DMember(bool)                                      bAllowMovement                                              OFFSET(get<bool>, {0x63, 1, 0, 0})
	DMember(bool)                                      bAllowTurning                                               OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      bShowPlayer                                                 OFFSET(get<bool>, {0x65, 1, 0, 0})
	DMember(bool)                                      bShowHUD                                                    OFFSET(get<bool>, {0x66, 1, 0, 0})
	DMember(bool)                                      bUsePathTracer                                              OFFSET(get<bool>, {0x67, 1, 0, 0})
	DMember(int32_t)                                   PathTracerSamplePerPixel                                    OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x01F8 (0x000030 - 0x000228)
class UMovieSceneCapture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FSoftClassPath)                            ImageCaptureProtocolType                                    OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FSoftClassPath)                            AudioCaptureProtocolType                                    OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(class UMovieSceneImageCaptureProtocolBase*) ImageCaptureProtocol                                       OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UMovieSceneAudioCaptureProtocolBase*) AudioCaptureProtocol                                       OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FMovieSceneCaptureSettings)                Settings                                                    OFFSET(getStruct<T>, {0x80, 112, 0, 0})
	DMember(bool)                                      bUseSeparateProcess                                         OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(bool)                                      bCloseEditorWhenCaptureStarts                               OFFSET(get<bool>, {0xF1, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArguments                              OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FString)                                   InheritedCommandLineArguments                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	// void SetImageCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x3150d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	// void SetAudioCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x3150ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();                                                         // [0x3150ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();                                                         // [0x3150a30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0020 (0x000228 - 0x000248)
class ULevelCapture : public UMovieSceneCapture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	DMember(bool)                                      bAutoStartCapture                                           OFFSET(get<bool>, {0x228, 1, 0, 0})
	SMember(FGuid)                                     PrerequisiteActorId                                         OFFSET(getStruct<T>, {0x234, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0000 (0x000030 - 0x000030)
class UMovieSceneCaptureEnvironment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	// bool IsCaptureInProgress();                                                                                              // [0x3150af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// int32_t GetCaptureFrameNumber();                                                                                         // [0x3150a80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// float GetCaptureElapsedTime();                                                                                           // [0x3150a50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	// class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();                                                   // [0x31506d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	// class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();                                                   // [0x31506a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x0080 (0x000060 - 0x0000E0)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	// void StopCapturingFinalPixels();                                                                                         // [0x3150f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	// void StartCapturingFinalPixels(FCapturedPixelsID& StreamID);                                                             // [0x3150e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	// void ResolveBuffer(class UTexture* Buffer, FCapturedPixelsID& BufferID);                                                 // [0x3150b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	// void OnWarmUp();                                                                                                         // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	// void OnTick();                                                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	// void OnStartCapture();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	// bool OnSetup();                                                                                                          // [0x18a9080] Native|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	// void OnPreTick();                                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	// void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);                       // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	// void OnPauseCapture();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	// void OnFinalize();                                                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	// void OnCaptureFrame();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	// bool OnCanFinalize();                                                                                                    // [0x18a9050] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	// void OnBeginFinalize();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	// FFrameMetrics GetCurrentFrameMetrics();                                                                                  // [0x3150ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	// FString GenerateFilename(FFrameMetrics& InFrameMetrics);                                                                 // [0x3150700] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(EDesiredImageFormat)                       Format                                                      OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bEnableCompression                                          OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(int32_t)                                   CompressionQuality                                          OFFSET(get<int32_t>, {0xE4, 4, 0, 0})


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	// void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& StreamID, FFrameMetrics& FrameMetrics, bool bCopyImageData); // [0x3150f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	// FString GenerateFilenameForCurrentFrame();                                                                               // [0x31509b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	// FString GenerateFilenameForBuffer(class UTexture* Buffer, FCapturedPixelsID& StreamID);                                  // [0x31507f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0018 (0x000070 - 0x000088)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bUseCompression                                             OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     CompressionQuality                                          OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (0x000000 - 0x000010)
class FFrameMetrics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     TotalElapsedTime                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FrameDelta                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FrameNumber                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumDroppedFrames                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (0x000000 - 0x000010)
class FCapturedPixels : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (0x000000 - 0x000050)
class FCapturedPixelsID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FName>)                        Identifiers                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
/// Size: 0x06
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                                                                      = 0,
	HCGM_P3DCI                                                                       = 1,
	HCGM_Rec2020                                                                     = 2,
	HCGM_ACES                                                                        = 3,
	HCGM_ACEScg                                                                      = 4,
	HCGM_Linear                                                                      = 5
};

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
/// Size: 0x04
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle                                            = 0,
	EMovieSceneCaptureProtocolState__Initialized                                     = 1,
	EMovieSceneCaptureProtocolState__Capturing                                       = 2,
	EMovieSceneCaptureProtocolState__Finalizing                                      = 3
};

