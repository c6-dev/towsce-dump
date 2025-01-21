
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UMoviePlayerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bWaitForMoviesToComplete                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bMoviesAreSkippable                                         OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bSkippingPlaybackAtEngineInitStage                          OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(float)                                     MinimumLoadingScreenDisplayTime                             OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FString>)                           StartupMovies                                               OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x03
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                                                                        = 0,
	MT_Looped                                                                        = 1,
	MT_LoadingLoop                                                                   = 2
};

