
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UOodleNetworkTrainerCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bCompressionTest                                            OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   HashTableSize                                               OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   DictionarySize                                              OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   DictionaryTrials                                            OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	DMember(int32_t)                                   TrialRandomness                                             OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   TrialGenerations                                            OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bNoTrials                                                   OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Enum /Script/OodleNetworkHandlerComponent.EOodleEnableMode
/// Size: 0x02
enum class EOodleEnableMode : uint8_t
{
	EOodleEnableMode__AlwaysEnabled                                                  = 0,
	EOodleEnableMode__WhenCompressedPacketReceived                                   = 1
};

