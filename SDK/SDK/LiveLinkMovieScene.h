
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLinkInterface
/// dependency: MovieScene
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
/// Size: 0x0230 (560 bytes) (0x0000F0 - 0x000230) align 8 MaxSize: 0x0230
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{ 
public:
	FLiveLinkSubjectPreset                             SubjectPreset;                                              // 0x00F0   (0x0038)  
	TArray<bool>                                       ChannelMask;                                                // 0x0128   (0x0010)  
	TArray<class UMovieSceneLiveLinkSubSection*>       SubSections;                                                // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0148   (0x0010)  MISSED
	FName                                              SubjectName;                                                // 0x0158   (0x0008)  
	FLiveLinkFrameData                                 TemplateToPush;                                             // 0x0160   (0x0090)  
	FLiveLinkRefSkeleton                               RefSkeleton;                                                // 0x01F0   (0x0020)  
	TArray<FName>                                      CurveNames;                                                 // 0x0210   (0x0010)  
	TArray<FMovieSceneFloatChannel>                    PropertyFloatChannels;                                      // 0x0220   (0x0010)  
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkPropertyData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FLiveLinkPropertyData
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	TArray<FMovieSceneFloatChannel>                    FloatChannel;                                               // 0x0008   (0x0010)  
	TArray<FMovieSceneStringChannel>                   StringChannel;                                              // 0x0018   (0x0010)  
	TArray<FMovieSceneIntegerChannel>                  IntegerChannel;                                             // 0x0028   (0x0010)  
	TArray<FMovieSceneBoolChannel>                     BoolChannel;                                                // 0x0038   (0x0010)  
	TArray<FMovieSceneByteChannel>                     ByteChannel;                                                // 0x0048   (0x0010)  
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkSubSectionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLiveLinkSubSectionData
{ 
	TArray<FLiveLinkPropertyData>                      Properties;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UMovieSceneLiveLinkSubSection : public UObject
{ 
public:
	FLiveLinkSubSectionData                            SubSectionData;                                             // 0x0030   (0x0010)  
	class UClass*                                      SubjectRole;                                                // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
/// Size: 0x00D8 (216 bytes) (0x0000C8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00C8   (0x0008)  MISSED
	class UClass*                                      TrackRole;                                                  // 0x00D0   (0x0008)  
};

/// Struct /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FLiveLinkSubjectPreset                             SubjectPreset;                                              // 0x0038   (0x0038)  
	TArray<bool>                                       ChannelMask;                                                // 0x0070   (0x0010)  
	TArray<FLiveLinkSubSectionData>                    SubSectionsData;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0090   (0x0028)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMovieSceneLiveLinkSection) == 0x0230); // 560 bytes (0x0000F0 - 0x000230)
static_assert(sizeof(FLiveLinkPropertyData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FLiveLinkSubSectionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMovieSceneLiveLinkSubSection) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionAnimation) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionBasicRole) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionProperties) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UMovieSceneLiveLinkTrack) == 0x00D8); // 216 bytes (0x0000C8 - 0x0000D8)
static_assert(sizeof(FMovieSceneLiveLinkSectionTemplate) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectPreset) == 0x00F0);
static_assert(offsetof(UMovieSceneLiveLinkSection, ChannelMask) == 0x0128);
static_assert(offsetof(UMovieSceneLiveLinkSection, SubSections) == 0x0138);
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectName) == 0x0158);
static_assert(offsetof(UMovieSceneLiveLinkSection, TemplateToPush) == 0x0160);
static_assert(offsetof(UMovieSceneLiveLinkSection, RefSkeleton) == 0x01F0);
static_assert(offsetof(UMovieSceneLiveLinkSection, CurveNames) == 0x0210);
static_assert(offsetof(UMovieSceneLiveLinkSection, PropertyFloatChannels) == 0x0220);
static_assert(offsetof(FLiveLinkPropertyData, PropertyName) == 0x0000);
static_assert(offsetof(FLiveLinkPropertyData, FloatChannel) == 0x0008);
static_assert(offsetof(FLiveLinkPropertyData, StringChannel) == 0x0018);
static_assert(offsetof(FLiveLinkPropertyData, IntegerChannel) == 0x0028);
static_assert(offsetof(FLiveLinkPropertyData, BoolChannel) == 0x0038);
static_assert(offsetof(FLiveLinkPropertyData, ByteChannel) == 0x0048);
static_assert(offsetof(FLiveLinkSubSectionData, Properties) == 0x0000);
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubSectionData) == 0x0030);
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubjectRole) == 0x0040);
static_assert(offsetof(UMovieSceneLiveLinkTrack, TrackRole) == 0x00D0);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubjectPreset) == 0x0038);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, ChannelMask) == 0x0070);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubSectionsData) == 0x0080);
