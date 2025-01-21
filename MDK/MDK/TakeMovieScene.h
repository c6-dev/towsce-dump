
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0380 (0x0000F0 - 0x000470)
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FMovieSceneIntegerChannel)                 HoursCurve                                                  OFFSET(getStruct<T>, {0xF0, 144, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 MinutesCurve                                                OFFSET(getStruct<T>, {0x180, 144, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 SecondsCurve                                                OFFSET(getStruct<T>, {0x210, 144, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 FramesCurve                                                 OFFSET(getStruct<T>, {0x2A0, 144, 0, 0})
	SMember(FMovieSceneFloatChannel)                   SubFramesCurve                                              OFFSET(getStruct<T>, {0x330, 160, 0, 0})
	SMember(FMovieSceneStringChannel)                  Slate                                                       OFFSET(getStruct<T>, {0x3D0, 160, 0, 0})
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0060 (0x000030 - 0x000090)
class UMovieSceneTakeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   HoursName                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   MinutesName                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   SecondsName                                                 OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   FramesName                                                  OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   SubFramesName                                               OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   SlateName                                                   OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

