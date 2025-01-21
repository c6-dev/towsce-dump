
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLinkInterface
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
/// Size: 0x0140 (0x0000F0 - 0x000230)
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FLiveLinkSubjectPreset)                    SubjectPreset                                               OFFSET(getStruct<T>, {0xF0, 56, 0, 0})
	CMember(TArray<bool>)                              ChannelMask                                                 OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<class UMovieSceneLiveLinkSubSection*>) SubSections                                              OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	SMember(FLiveLinkFrameData)                        TemplateToPush                                              OFFSET(getStruct<T>, {0x160, 144, 0, 0})
	SMember(FLiveLinkRefSkeleton)                      RefSkeleton                                                 OFFSET(getStruct<T>, {0x1F0, 32, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  OFFSET(get<T>, {0x210, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatChannel>)           PropertyFloatChannels                                       OFFSET(get<T>, {0x220, 16, 0, 0})
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkPropertyData
/// Size: 0x0058 (0x000000 - 0x000058)
class FLiveLinkPropertyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FMovieSceneFloatChannel>)           FloatChannel                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FMovieSceneStringChannel>)          StringChannel                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FMovieSceneIntegerChannel>)         IntegerChannel                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMovieSceneBoolChannel>)            BoolChannel                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FMovieSceneByteChannel>)            ByteChannel                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkSubSectionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkSubSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FLiveLinkPropertyData>)             Properties                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection
/// Size: 0x0028 (0x000030 - 0x000058)
class UMovieSceneLiveLinkSubSection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FLiveLinkSubSectionData)                   SubSectionData                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             SubjectRole                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UClass*)                             TrackRole                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Struct /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
/// Size: 0x0080 (0x000038 - 0x0000B8)
class FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FLiveLinkSubjectPreset)                    SubjectPreset                                               OFFSET(getStruct<T>, {0x38, 56, 0, 0})
	CMember(TArray<bool>)                              ChannelMask                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FLiveLinkSubSectionData>)           SubSectionsData                                             OFFSET(get<T>, {0x80, 16, 0, 0})
};

