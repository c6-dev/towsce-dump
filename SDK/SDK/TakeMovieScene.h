
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0470 (1136 bytes) (0x0000F0 - 0x000470) align 8 MaxSize: 0x0470
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneIntegerChannel                          HoursCurve;                                                 // 0x00F0   (0x0090)  
	FMovieSceneIntegerChannel                          MinutesCurve;                                               // 0x0180   (0x0090)  
	FMovieSceneIntegerChannel                          SecondsCurve;                                               // 0x0210   (0x0090)  
	FMovieSceneIntegerChannel                          FramesCurve;                                                // 0x02A0   (0x0090)  
	FMovieSceneFloatChannel                            SubFramesCurve;                                             // 0x0330   (0x00A0)  
	FMovieSceneStringChannel                           Slate;                                                      // 0x03D0   (0x00A0)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UMovieSceneTakeSettings : public UObject
{ 
public:
	FString                                            HoursName;                                                  // 0x0030   (0x0010)  
	FString                                            MinutesName;                                                // 0x0040   (0x0010)  
	FString                                            SecondsName;                                                // 0x0050   (0x0010)  
	FString                                            FramesName;                                                 // 0x0060   (0x0010)  
	FString                                            SubFramesName;                                              // 0x0070   (0x0010)  
	FString                                            SlateName;                                                  // 0x0080   (0x0010)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMovieSceneTakeSection) == 0x0470); // 1136 bytes (0x0000F0 - 0x000470)
static_assert(sizeof(UMovieSceneTakeSettings) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UMovieSceneTakeTrack) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(offsetof(UMovieSceneTakeSection, HoursCurve) == 0x00F0);
static_assert(offsetof(UMovieSceneTakeSection, MinutesCurve) == 0x0180);
static_assert(offsetof(UMovieSceneTakeSection, SecondsCurve) == 0x0210);
static_assert(offsetof(UMovieSceneTakeSection, FramesCurve) == 0x02A0);
static_assert(offsetof(UMovieSceneTakeSection, SubFramesCurve) == 0x0330);
static_assert(offsetof(UMovieSceneTakeSection, Slate) == 0x03D0);
static_assert(offsetof(UMovieSceneTakeSettings, HoursName) == 0x0030);
static_assert(offsetof(UMovieSceneTakeSettings, MinutesName) == 0x0040);
static_assert(offsetof(UMovieSceneTakeSettings, SecondsName) == 0x0050);
static_assert(offsetof(UMovieSceneTakeSettings, FramesName) == 0x0060);
static_assert(offsetof(UMovieSceneTakeSettings, SubFramesName) == 0x0070);
static_assert(offsetof(UMovieSceneTakeSettings, SlateName) == 0x0080);
static_assert(offsetof(UMovieSceneTakeTrack, Sections) == 0x0098);
