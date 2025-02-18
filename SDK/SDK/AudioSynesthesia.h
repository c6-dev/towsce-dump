
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioAnalyzer
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x01 (1 bytes)
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
public:
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              StartingFrequency;                                          // 0x0030   (0x0004)  
	int32_t                                            NumBands;                                                   // 0x0034   (0x0004)  
	float                                              NumBandsPerOctave;                                          // 0x0038   (0x0004)  
	float                                              AnalysisPeriod;                                             // 0x003C   (0x0004)  
	bool                                               bDownmixToMono;                                             // 0x0040   (0x0001)  
	EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0041   (0x0001)  
	EFFTWindowType                                     WindowType;                                                 // 0x0042   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x0043   (0x0001)  
	float                                              BandWidthStretch;                                           // 0x0044   (0x0004)  
	EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UConstantQNRTSettings*                       Settings;                                                   // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	// void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);               // [0x112df50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	// void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);                         // [0x112da40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0030   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0034   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0038   (0x0004)  
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                  // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
public:
	class ULoudnessNRTSettings*                        Settings;                                                   // 0x0080   (0x0008)  


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
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	bool                                               bDownmixToMono;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              GranularityInSeconds;                                       // 0x0034   (0x0004)  
	float                                              Sensitivity;                                                // 0x0038   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x003C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UOnsetNRTSettings*                           Settings;                                                   // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	// void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x112e1a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	// void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x112dc90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(UAudioSynesthesiaNRTSettings) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioSynesthesiaNRT) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UConstantQNRTSettings) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UConstantQNRT) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(ULoudnessNRTSettings) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ULoudnessNRT) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UOnsetNRTSettings) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UOnsetNRT) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(offsetof(UConstantQNRTSettings, FFTSize) == 0x0041);
static_assert(offsetof(UConstantQNRTSettings, WindowType) == 0x0042);
static_assert(offsetof(UConstantQNRTSettings, SpectrumType) == 0x0043);
static_assert(offsetof(UConstantQNRTSettings, CQTNormalization) == 0x0048);
static_assert(offsetof(UConstantQNRT, Settings) == 0x0080);
static_assert(offsetof(ULoudnessNRTSettings, CurveType) == 0x003C);
static_assert(offsetof(ULoudnessNRT, Settings) == 0x0080);
static_assert(offsetof(UOnsetNRT, Settings) == 0x0080);
