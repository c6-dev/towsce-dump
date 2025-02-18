
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/MotoSynth.MotoSynthRuntimeSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMotoSynthRuntimeSettings
{ 
	bool                                               bSynthToneEnabled;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SynthToneVolume;                                            // 0x0004   (0x0004)  
	float                                              SynthToneFilterFrequency;                                   // 0x0008   (0x0004)  
	int32_t                                            SynthOctaveShift;                                           // 0x000C   (0x0004)  
	bool                                               bGranularEngineEnabled;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              GranularEngineVolume;                                       // 0x0014   (0x0004)  
	float                                              GranularEnginePitchScale;                                   // 0x0018   (0x0004)  
	int32_t                                            NumSamplesToCrossfadeBetweenGrains;                         // 0x001C   (0x0004)  
	int32_t                                            NumGrainTableEntriesPerGrain;                               // 0x0020   (0x0004)  
	int32_t                                            GrainTableRandomOffsetForConstantRPMs;                      // 0x0024   (0x0004)  
	int32_t                                            GrainCrossfadeSamplesForConstantRPMs;                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UMotoSynthSource*                            AccelerationSource;                                         // 0x0030   (0x0008)  
	class UMotoSynthSource*                            DecelerationSource;                                         // 0x0038   (0x0008)  
	bool                                               bStereoWidenerEnabled;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              StereoDelayMsec;                                            // 0x0044   (0x0004)  
	float                                              StereoFeedback;                                             // 0x0048   (0x0004)  
	float                                              StereoWidenerWetlevel;                                      // 0x004C   (0x0004)  
	float                                              StereoWidenerDryLevel;                                      // 0x0050   (0x0004)  
	float                                              StereoWidenerDelayRatio;                                    // 0x0054   (0x0004)  
	bool                                               bStereoWidenerFilterEnabled;                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              StereoWidenerFilterFrequency;                               // 0x005C   (0x0004)  
	float                                              StereoWidenerFilterQ;                                       // 0x0060   (0x0004)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MotoSynth.MotoSynthPreset
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UMotoSynthPreset : public UObject
{ 
public:
	FMotoSynthRuntimeSettings                          Settings;                                                   // 0x0030   (0x0068)  
};

/// Struct /Script/MotoSynth.GrainTableEntry
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGrainTableEntry
{ 
	int32_t                                            SampleIndex;                                                // 0x0000   (0x0004)  
	float                                              RPM;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/MotoSynth.MotoSynthSource
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UMotoSynthSource : public UObject
{ 
public:
	bool                                               bConvertTo8Bit;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              DownSampleFactor;                                           // 0x0034   (0x0004)  
	FRuntimeFloatCurve                                 RPMCurve;                                                   // 0x0038   (0x0088)  
	TArray<float>                                      SourceData;                                                 // 0x00C0   (0x0010)  
	TArray<int16_t>                                    SourceDataPCM;                                              // 0x00D0   (0x0010)  
	int32_t                                            SourceSampleRate;                                           // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FGrainTableEntry>                           GrainTable;                                                 // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/MotoSynth.SynthComponentMoto
/// Size: 0x07F0 (2032 bytes) (0x000730 - 0x0007F0) align 16 MaxSize: 0x07F0
class USynthComponentMoto : public USynthComponent
{ 
public:
	class UMotoSynthPreset*                            MotoSynthPreset;                                            // 0x0730   (0x0008)  
	float                                              RPM;                                                        // 0x0738   (0x0004)  
	unsigned char                                      UnknownData00_7[0xB4];                                      // 0x073C   (0x00B4)  MISSED


	/// Functions
	// Function /Script/MotoSynth.SynthComponentMoto.SetSettings
	// void SetSettings(FMotoSynthRuntimeSettings& InSettings);                                                                 // [0xfd3e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.SetRPM
	// void SetRPM(float InRPM, float InTimeSec);                                                                               // [0xfd3d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xfd3d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotoSynth.SynthComponentMoto.GetRPMRange
	// void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);                                                                    // [0xfd3c50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FMotoSynthRuntimeSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UMotoSynthPreset) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FGrainTableEntry) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UMotoSynthSource) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(USynthComponentMoto) == 0x07F0); // 2032 bytes (0x000730 - 0x0007F0)
static_assert(offsetof(FMotoSynthRuntimeSettings, AccelerationSource) == 0x0030);
static_assert(offsetof(FMotoSynthRuntimeSettings, DecelerationSource) == 0x0038);
static_assert(offsetof(UMotoSynthPreset, Settings) == 0x0030);
static_assert(offsetof(UMotoSynthSource, RPMCurve) == 0x0038);
static_assert(offsetof(UMotoSynthSource, SourceData) == 0x00C0);
static_assert(offsetof(UMotoSynthSource, SourceDataPCM) == 0x00D0);
static_assert(offsetof(UMotoSynthSource, GrainTable) == 0x00E8);
static_assert(offsetof(USynthComponentMoto, MotoSynthPreset) == 0x0730);
