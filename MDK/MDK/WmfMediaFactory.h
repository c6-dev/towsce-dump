
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/WmfMediaFactory.WmfMediaSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UWmfMediaSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      AllowNonStandardCodecs                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      LowLatency                                                  OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      NativeAudioOut                                              OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      HardwareAcceleratedVideoDecoding                            OFFSET(get<bool>, {0x33, 1, 0, 0})
};

