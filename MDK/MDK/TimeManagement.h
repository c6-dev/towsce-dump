
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0008 (0x000030 - 0x000038)
class UTimeSynchronizationSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseForSynchronization                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   FrameOffset                                                 OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0000 (0x000030 - 0x000030)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/TimeManagement.GenlockedCustomTimeStep
/// Size: 0x0000 (0x000030 - 0x000030)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/TimeManagement.GenlockedFixedRateCustomTimeStep
/// Size: 0x0020 (0x000030 - 0x000050)
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FFrameRate)                                FrameRate                                                   OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Class /Script/TimeManagement.GenlockedTimecodeProvider
/// Size: 0x0028 (0x000038 - 0x000060)
class UGenlockedTimecodeProvider : public UTimecodeProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bUseGenlockToCount                                          OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	// FFrameTime TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate);                   // [0x2ce8390] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	// FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B);                                                     // [0x2ce82d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	// FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                            // [0x2ce8210] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	// FFrameTime SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate);                  // [0x2ce80c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	// FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate);                                        // [0x2ce7fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	// FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B);                                                     // [0x2ce7f20] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	// bool IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate);                                            // [0x2ce7e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	// bool IsValid_Framerate(FFrameRate& InFrameRate);                                                                         // [0x2ce7d80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	// FFrameRate GetTimecodeFrameRate();                                                                                       // [0x2ce7d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	// FTimecode GetTimecode();                                                                                                 // [0x2ce7d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	// FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B);                                                       // [0x2ce7c40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	// FString Conv_TimecodeToString(FTimecode& InTimecode, bool bForceSignDisplay);                                            // [0x2ce7b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	// float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime);                                                // [0x2ce7a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	// float Conv_FrameRateToSeconds(FFrameRate& InFrameRate);                                                                  // [0x2ce79c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	// int32_t Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber);                                                          // [0x2ce7930] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	// FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B);                                                          // [0x2ce7870] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	// FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                                 // [0x2ce77b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (0x000000 - 0x000008)
class FTimedDataInputEvaluationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     DistanceToNewestSampleSeconds                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DistanceToOldestSampleSeconds                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (0x000000 - 0x000018)
class FTimedDataChannelSampleTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
/// Size: 0x05
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode                                 = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode                                    = 1,
	EFrameNumberDisplayFormats__Seconds                                              = 2,
	EFrameNumberDisplayFormats__Frames                                               = 3,
	EFrameNumberDisplayFormats__MAX_Count                                            = 4
};

/// Enum /Script/TimeManagement.ETimedDataInputState
/// Size: 0x03
enum class ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected                                                  = 0,
	ETimedDataInputState__Unresponsive                                               = 1,
	ETimedDataInputState__Disconnected                                               = 2
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
/// Size: 0x03
enum class ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None                                              = 0,
	ETimedDataInputEvaluationType__Timecode                                          = 1,
	ETimedDataInputEvaluationType__PlatformTime                                      = 2
};

