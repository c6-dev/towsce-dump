
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioAnalyzer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0000 (0x000080 - 0x000080)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     StartingFrequency                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumBands                                                    OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     NumBandsPerOctave                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     AnalysisPeriod                                              OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bDownmixToMono                                              OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(EConstantQFFTSizeEnum)                     FFTSize                                                     OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(EFFTWindowType)                            WindowType                                                  OFFSET(get<T>, {0x42, 1, 0, 0})
	CMember(EAudioSpectrumType)                        SpectrumType                                                OFFSET(get<T>, {0x43, 1, 0, 0})
	DMember(float)                                     BandWidthStretch                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(EConstantQNormalizationEnum)               CQTNormalization                                            OFFSET(get<T>, {0x48, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0008 (0x000080 - 0x000088)
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UConstantQNRTSettings*)              Settings                                                    OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	// void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);               // [0x112df50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	// void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);                         // [0x112da40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     AnalysisPeriod                                              OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(ELoudnessNRTCurveTypeEnum)                 CurveType                                                   OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0008 (0x000080 - 0x000088)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class ULoudnessNRTSettings*)               Settings                                                    OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	// void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);                                                   // [0x112e380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	// void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                         // [0x112e080] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	// void GetLoudnessAtTime(float InSeconds, float& OutLoudness);                                                             // [0x112de70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	// void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                                   // [0x112db70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bDownmixToMono                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     GranularityInSeconds                                        OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Sensitivity                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0008 (0x000080 - 0x000088)
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UOnsetNRTSettings*)                  Settings                                                    OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	// void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x112e1a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	// void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x112dc90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x09
enum class EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min                                                       = 0,
	EConstantQFFTSizeEnum__XXSmall                                                   = 1,
	EConstantQFFTSizeEnum__XSmall                                                    = 2,
	EConstantQFFTSizeEnum__Small                                                     = 3,
	EConstantQFFTSizeEnum__Medium                                                    = 4,
	EConstantQFFTSizeEnum__Large                                                     = 5,
	EConstantQFFTSizeEnum__XLarge                                                    = 6,
	EConstantQFFTSizeEnum__XXLarge                                                   = 7,
	EConstantQFFTSizeEnum__Max                                                       = 8
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x03
enum class EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x05
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4
};

