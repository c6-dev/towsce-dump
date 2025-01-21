
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x01 (1 bytes)
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                                                                        = 0,
	MT_Looped                                                                        = 1,
	MT_LoadingLoop                                                                   = 2
};

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePlayerSettings : public UObject
{ 
public:
	bool                                               bWaitForMoviesToComplete;                                   // 0x0030   (0x0001)  
	bool                                               bMoviesAreSkippable;                                        // 0x0031   (0x0001)  
	bool                                               bSkippingPlaybackAtEngineInitStage;                         // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	float                                              MinimumLoadingScreenDisplayTime;                            // 0x0034   (0x0004)  
	TArray<FString>                                    StartupMovies;                                              // 0x0038   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMoviePlayerSettings) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 0x0038);
