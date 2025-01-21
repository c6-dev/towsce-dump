
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/FaceFX.FaceFXAsset
/// Size: 0x0000 (0x000030 - 0x000030)
class UFaceFXAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/FaceFX.FaceFXIdData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFaceFXIdData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  ID                                                          OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXActorData
/// Size: 0x0080 (0x000000 - 0x000080)
class FFaceFXActorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<char>)                              ActorRawData                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<char>)                              BonesRawData                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FFaceFXIdData>)                     Ids                                                         OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Class /Script/FaceFX.FaceFXActor
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UFaceFXActor : public UFaceFXAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FFaceFXActorData>)                  PlatformData                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FFaceFXActorData)                          ActorData                                                   OFFSET(getStruct<T>, {0x40, 128, 0, 0})
	CMember(TArray<class UFaceFXAnim*>)                Animations                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(EFaceFXActorBlendMode)                     BlendMode                                                   OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXAnimData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFaceFXAnimData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              RawData                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXAnimId
/// Size: 0x0010 (0x000000 - 0x000010)
class FFaceFXAnimId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Group                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Class /Script/FaceFX.FaceFXAnim
/// Size: 0x00F8 (0x000030 - 0x000128)
class UFaceFXAnim : public UFaceFXAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FFaceFXAnimData>)                   PlatformData                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FFaceFXAnimData)                           AnimData                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FFaceFXAnimId)                             ID                                                          OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<class USoundWave*>)         Audio                                                       OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<class UObject*>)            AudioAkEvent                                                OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TWeakObjectPtr<class UObject*>)            AudioAkEventStop                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UObject*>)            AudioAkEventPause                                           OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TWeakObjectPtr<class UObject*>)            AudioAkEventResume                                          OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXSkelMeshComponentId
/// Size: 0x000C (0x000000 - 0x00000C)
class FFaceFXSkelMeshComponentId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Class /Script/FaceFX.FaceFXAnimationSection
/// Size: 0x0058 (0x0000F0 - 0x000148)
class UFaceFXAnimationSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FFaceFXSkelMeshComponentId)                SkelMeshComponentId                                         OFFSET(getStruct<T>, {0xF0, 12, 0, 0})
	SMember(FFaceFXAnimId)                             AnimationId                                                 OFFSET(getStruct<T>, {0xFC, 16, 0, 0})
	CMember(TWeakObjectPtr<class UFaceFXAnim*>)        Animation                                                   OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(bool)                                      bIsAnimationDurationLoaded                                  OFFSET(get<bool>, {0x140, 1, 1, 0})
	DMember(float)                                     AnimationDuration                                           OFFSET(get<float>, {0x144, 4, 0, 0})
};

/// Class /Script/FaceFX.FaceFXAnimationTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UFaceFXAnimationTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         AnimationSections                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/FaceFX.FaceFXBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UFaceFXBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/FaceFX.FaceFXBlueprintLibrary.GetAnimationBounds
	// bool GetAnimationBounds(class UFaceFXAnim* Animation, float& Start, float& End, float& Duration);                        // [0x98c840] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FaceFX.FaceFXCharacter
/// Size: 0x0170 (0x000030 - 0x0001A0)
class UFaceFXCharacter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(class UFaceFXActor*)                       FaceFXActor                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UFaceFXAnim*)                        CurrentAnim                                                 OFFSET(get<T>, {0x190, 8, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FFaceFXEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USkeletalMeshComponent*)             SkelMeshComp                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UActorComponent*)                    AudioComp                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<class UFaceFXActor*>)       Asset                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UFaceFXCharacter*)                   Character                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bIsCompensateForForceFrontXAxis                             OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bIsAutoPlaySound                                            OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bIsDisableMorphTargets                                      OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bIsDisableMaterialParameters                                OFFSET(get<bool>, {0x40, 1, 1, 3})
	DMember(bool)                                      bIsIgnoreEvents                                             OFFSET(get<bool>, {0x40, 1, 1, 4})
};

/// Class /Script/FaceFX.FaceFXComponent
/// Size: 0x0050 (0x0000E0 - 0x000130)
class UFaceFXComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FMulticastInlineDelegate)                  OnPlaybackAudioStart                                        OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackStopped                                           OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnimationEvent                                            OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(class USkeletalMesh*)                      AuthoredSkeleton                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TArray<FFaceFXEntry>)                      Entries                                                     OFFSET(get<T>, {0x118, 16, 0, 0})


	/// Functions
	// Function /Script/FaceFX.FaceFXComponent.StopAll
	// void StopAll();                                                                                                          // [0x98dd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.Stop
	// bool Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);                                            // [0x98dcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.Setup
	// bool Setup(class USkeletalMeshComponent* SkelMeshComp, class UActorComponent* AudioComponent, class UFaceFXActor* Asset, bool IsCompensateForForceFrontXAxis, bool IsAutoPlaySound, bool IsDisableMorphTargets, bool IsDisableMaterialParameters, bool IsIgnoreEvents, class UObject* Caller); // [0x98d9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.Resume
	// bool Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);                                          // [0x98d920] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.PlayById
	// bool PlayById(FName Group, FName AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller); // [0x98d760] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.Play
	// bool Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);   // [0x98d5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.Pause
	// bool Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);                                           // [0x98d510] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.OnCharacterPlaybackStopped
	// void OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, FFaceFXAnimId& AnimId);                               // [0x98d430] Final|Native|Private|HasOutParms 
	// Function /Script/FaceFX.FaceFXComponent.OnCharacterAudioStart
	// void OnCharacterAudioStart(class UFaceFXCharacter* Character, FFaceFXAnimId& AnimId, bool IsAudioStarted, class UActorComponent* AudioComponentStartedOn); // [0x98d2a0] Final|Native|Private|HasOutParms 
	// Function /Script/FaceFX.FaceFXComponent.OnCharacterAnimationEvent
	// void OnCharacterAnimationEvent(class UFaceFXCharacter* Character, FFaceFXAnimId& AnimId, int32_t ChannelIndex, float ChannelTime, float EventTime, FString Payload); // [0x98d0a0] Final|Native|Private|HasOutParms 
	// Function /Script/FaceFX.FaceFXComponent.JumpToById
	// bool JumpToById(float Position, bool Pause, FName Group, FName AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller); // [0x98ce70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.JumpTo
	// bool JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller); // [0x98cc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FaceFX.FaceFXComponent.IsPlayingAnimation
	// bool IsPlayingAnimation(FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);       // [0x98cb50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FaceFX.FaceFXComponent.IsPlaying
	// bool IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);                                       // [0x98ca80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FaceFX.FaceFXComponent.IsPaused
	// bool IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);                                        // [0x98c9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FaceFX.FaceFXConfig
/// Size: 0x0008 (0x000030 - 0x000038)
class UFaceFXConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EFaceFXBlendMode)                          DefaultBlendMode                                            OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/FaceFX.AnimNode_BlendFaceFXAnimation
/// Size: 0x0050 (0x000010 - 0x000060)
class FAnimNode_BlendFaceFXAnimation : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FComponentSpacePoseLink)                   ComponentPose                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bSkipBoneMappingWithoutNS                                   OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXAnimComponentSet
/// Size: 0x0048 (0x000000 - 0x000048)
class FFaceFXAnimComponentSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FFaceFXSkelMeshComponentId)                SkelMeshComponentId                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FFaceFXAnimId)                             AnimationId                                                 OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	CMember(TWeakObjectPtr<class UFaceFXAnim*>)        Animation                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXAnimationSectionData
/// Size: 0x0070 (0x000000 - 0x000070)
class FFaceFXAnimationSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGuid)                                     TrackId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FFaceFXAnimId)                             AnimationId                                                 OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	CMember(TWeakObjectPtr<class UFaceFXAnim*>)        Animation                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FFaceFXSkelMeshComponentId)                ComponentId                                                 OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	DMember(float)                                     AnimDuration                                                OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FFrameNumber)                              StartTime                                                   OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FFrameNumber)                              EndTime                                                     OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXAnimationSectionTemplate
/// Size: 0x0070 (0x000020 - 0x000090)
class FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFaceFXAnimationSectionData)               SectionData                                                 OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/FaceFX.FaceFXAnimSetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFaceFXAnimSetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFaceFXAnimData>)                   Animations                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/FaceFX.EFaceFXActorBlendMode
/// Size: 0x03
enum class EFaceFXActorBlendMode : uint8_t
{
	EFaceFXActorBlendMode__Global                                                    = 0,
	EFaceFXActorBlendMode__Replace                                                   = 1,
	EFaceFXActorBlendMode__Additive                                                  = 2
};

/// Enum /Script/FaceFX.EFaceFXBlendMode
/// Size: 0x02
enum class EFaceFXBlendMode : uint8_t
{
	EFaceFXBlendMode__Replace                                                        = 0,
	EFaceFXBlendMode__Additive                                                       = 1
};

