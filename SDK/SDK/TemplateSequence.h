
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04 (4 bytes)
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align 8 MaxSize: 0x0110
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	TSoftObjectPtr<class UClass*>                      BoundActorClass;                                            // 0x0070   (0x0028)  
	TWeakObjectPtr<class AActor*>                      BoundPreviewActor;                                          // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00A0   (0x0020)  MISSED
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00C0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0110 (272 bytes) (0x000110 - 0x000110) align 8 MaxSize: 0x0110
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0690 (1680 bytes) (0x000030 - 0x000690) align 16 MaxSize: 0x0690
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	float                                              FieldOfView;                                                // 0x0038   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0050   (0x0570)  
	float                                              PostProcessBlendWeight;                                     // 0x05C0   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x05C4   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x05D0   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x05E8   (0x0058)  
	float                                              CurrentFocalLength;                                         // 0x0640   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0644   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0648   (0x0004)  
	unsigned char                                      UnknownData03_7[0x44];                                      // 0x064C   (0x0044)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0030   (0x0008)  
	float                                              PlayRate;                                                   // 0x0038   (0x0004)  
	float                                              Scale;                                                      // 0x003C   (0x0004)  
	float                                              BlendInTime;                                                // 0x0040   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0044   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0048   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	class USequenceCameraShakeSequencePlayer*          Player;                                                     // 0x0050   (0x0008)  
	class USequenceCameraShakeCameraStandIn*           CameraStandIn;                                              // 0x0058   (0x0008)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x0430 (1072 bytes) (0x000030 - 0x000430) align 8 MaxSize: 0x0430
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x2A8];                                     // 0x0030   (0x02A8)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x02D8   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x02E0   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02E8   (0x00E8)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x03D0   (0x0060)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<class UObject*>                     Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0310 (784 bytes) (0x0002B8 - 0x000310) align 8 MaxSize: 0x0310
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x02B8   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02C8   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02DC   (0x0004)  MISSED
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x02E0   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x02E8   (0x0018)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0300   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x030C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0xe6bc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                            // [0xe6bb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0xe6bb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0xe6baf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0xe6bac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x04F8 (1272 bytes) (0x0004F0 - 0x0004F8) align 8 MaxSize: 0x04F8
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0xe6b940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x0014)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x0024   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0028   (0x00A0)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0188 (392 bytes) (0x000170 - 0x000188) align 8 MaxSize: 0x0188
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0170   (0x0008)  MISSED
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0178   (0x0010)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0048   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x00A0 (160 bytes) (0x000048 - 0x0000A0) align 8 MaxSize: 0x00A0
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0048   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0098 (152 bytes) (0x000048 - 0x000098) align 8 MaxSize: 0x0098
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UTemplateSequence) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(UCameraAnimationSequence) == 0x0110); // 272 bytes (0x000110 - 0x000110)
static_assert(sizeof(USequenceCameraShakeCameraStandIn) == 0x0690); // 1680 bytes (0x000030 - 0x000690)
static_assert(sizeof(USequenceCameraShakePattern) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(USequenceCameraShakeSequencePlayer) == 0x0430); // 1072 bytes (0x000030 - 0x000430)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x0310); // 784 bytes (0x0002B8 - 0x000310)
static_assert(sizeof(UTemplateSequencePlayer) == 0x04F8); // 1272 bytes (0x0004F0 - 0x0004F8)
static_assert(sizeof(FTemplateSectionPropertyScale) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(UTemplateSequenceSection) == 0x0188); // 392 bytes (0x000170 - 0x000188)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x00A0); // 160 bytes (0x000048 - 0x0000A0)
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x0098); // 152 bytes (0x000048 - 0x000098)
static_assert(sizeof(UTemplateSequenceTrack) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0068);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0070);
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x0098);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00C0);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, PostProcessSettings) == 0x0050);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, Filmback) == 0x05C4);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, LensSettings) == 0x05D0);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, FocusSettings) == 0x05E8);
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x0030);
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x0050);
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x0058);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, BoundObjectOverride) == 0x02D8);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, Sequence) == 0x02E0);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, RootTemplateInstance) == 0x02E8);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x02C8);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x02E0);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x02E8);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0300);
static_assert(offsetof(FTemplateSectionPropertyScale, ObjectBinding) == 0x0000);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyBinding) == 0x0010);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyScaleType) == 0x0024);
static_assert(offsetof(FTemplateSectionPropertyScale, FloatChannel) == 0x0028);
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x0178);
