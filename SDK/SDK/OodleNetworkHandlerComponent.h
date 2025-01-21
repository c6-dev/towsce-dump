
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OodleNetworkHandlerComponent.EOodleEnableMode
/// Size: 0x01 (1 bytes)
enum class EOodleEnableMode : uint8_t
{
	EOodleEnableMode__AlwaysEnabled                                                  = 0,
	EOodleEnableMode__WhenCompressedPacketReceived                                   = 1
};

/// Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOodleNetworkTrainerCommandlet : public UCommandlet
{ 
public:
	bool                                               bCompressionTest;                                           // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            HashTableSize;                                              // 0x008C   (0x0004)  
	int32_t                                            DictionarySize;                                             // 0x0090   (0x0004)  
	int32_t                                            DictionaryTrials;                                           // 0x0094   (0x0004)  
	int32_t                                            TrialRandomness;                                            // 0x0098   (0x0004)  
	int32_t                                            TrialGenerations;                                           // 0x009C   (0x0004)  
	bool                                               bNoTrials;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UOodleNetworkTrainerCommandlet) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
