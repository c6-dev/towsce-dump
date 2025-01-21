
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/AudioAnalyzer.AudioAnalyzerAsset
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioAnalyzerAsset : public UObject
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{ 
public:
	class USoundWave*                                  Sound;                                                      // 0x0030   (0x0008)  
	float                                              DurationInSeconds;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x44];                                      // 0x003C   (0x0044)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioAnalyzerAsset) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioAnalyzerNRTSettings) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioAnalyzerNRT) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(offsetof(UAudioAnalyzerNRT, Sound) == 0x0030);
