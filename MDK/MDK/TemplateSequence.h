
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00A8 (0x000068 - 0x000110)
class UTemplateSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             BoundActorClass                                             OFFSET(get<T>, {0x70, 40, 0, 0})
	CMember(TWeakObjectPtr<class AActor*>)             BoundPreviewActor                                           OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TMap<FGuid, FName>)                        BoundActorComponents                                        OFFSET(get<T>, {0xC0, 80, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x000110 - 0x000110)
class UCameraAnimationSequence : public UTemplateSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0660 (0x000030 - 0x000690)
class USequenceCameraShakeCameraStandIn : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	DMember(float)                                     FieldOfView                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bConstrainAspectRatio                                       OFFSET(get<bool>, {0x3C, 1, 1, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         OFFSET(getStruct<T>, {0x50, 1392, 0, 0})
	DMember(float)                                     PostProcessBlendWeight                                      OFFSET(get<float>, {0x5C0, 4, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0x5C4, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x5D0, 24, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0x5E8, 88, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0x640, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0x644, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0x648, 4, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0030 (0x000030 - 0x000060)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UCameraAnimationSequence*)           Sequence                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     RandomSegmentDuration                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bRandomSegment                                              OFFSET(get<bool>, {0x4C, 1, 0, 0})
	CMember(class USequenceCameraShakeSequencePlayer*) Player                                                      OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class USequenceCameraShakeCameraStandIn*)  CameraStandIn                                               OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x0400 (0x000030 - 0x000430)
class USequenceCameraShakeSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UObject*)                            BoundObjectOverride                                         OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UMovieSceneSequence*)                Sequence                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        OFFSET(getStruct<T>, {0x2E8, 232, 0, 0})
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
class FTemplateSequenceBindingOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<class UObject*>)            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0058 (0x0002B8 - 0x000310)
class ATemplateSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x2C8, 20, 0, 0})
	CMember(class UTemplateSequencePlayer*)            SequencePlayer                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(FSoftObjectPath)                           TemplateSequence                                            OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	SMember(FTemplateSequenceBindingOverrideData)      BindingOverride                                             OFFSET(getStruct<T>, {0x300, 12, 0, 0})


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
/// Size: 0x0008 (0x0004F0 - 0x0004F8)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0xe6b940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FTemplateSectionPropertyScale : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGuid)                                     ObjectBinding                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMovieScenePropertyBinding)                PropertyBinding                                             OFFSET(getStruct<T>, {0x10, 20, 0, 0})
	CMember(ETemplateSectionPropertyScaleType)         PropertyScaleType                                           OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(getStruct<T>, {0x28, 160, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0018 (0x000170 - 0x000188)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TArray<FTemplateSectionPropertyScale>)     PropertyScales                                              OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000048 - 0x0000A0)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000048 - 0x000098)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x03
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

