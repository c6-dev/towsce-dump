
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioAnalyzer.AudioAnalyzerAsset
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioAnalyzerAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0050 (0x000030 - 0x000080)
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class USoundWave*)                         Sound                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     DurationInSeconds                                           OFFSET(get<float>, {0x38, 4, 0, 0})
};

