
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/FaceFX.EFaceFXActorBlendMode
/// Size: 0x01 (1 bytes)
enum class EFaceFXActorBlendMode : uint8_t
{
	EFaceFXActorBlendMode__Global                                                    = 0,
	EFaceFXActorBlendMode__Replace                                                   = 1,
	EFaceFXActorBlendMode__Additive                                                  = 2
};

/// Enum /Script/FaceFX.EFaceFXBlendMode
/// Size: 0x01 (1 bytes)
enum class EFaceFXBlendMode : uint8_t
{
	EFaceFXBlendMode__Replace                                                        = 0,
	EFaceFXBlendMode__Additive                                                       = 1
};

/// Class /Script/FaceFX.FaceFXAsset
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UFaceFXAsset : public UObject
{ 
public:
};

/// Struct /Script/FaceFX.FaceFXIdData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFaceFXIdData
{ 
	uint64_t                                           ID;                                                         // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/FaceFX.FaceFXActorData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FFaceFXActorData
{ 
	TArray<char>                                       ActorRawData;                                               // 0x0000   (0x0010)  
	TArray<char>                                       BonesRawData;                                               // 0x0010   (0x0010)  
	TArray<FFaceFXIdData>                              Ids;                                                        // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/FaceFX.FaceFXActor
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UFaceFXActor : public UFaceFXAsset
{ 
public:
	TArray<FFaceFXActorData>                           PlatformData;                                               // 0x0030   (0x0010)  
	FFaceFXActorData                                   ActorData;                                                  // 0x0040   (0x0080)  
	TArray<class UFaceFXAnim*>                         Animations;                                                 // 0x00C0   (0x0010)  
	EFaceFXActorBlendMode                              BlendMode;                                                  // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Struct /Script/FaceFX.FaceFXAnimData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFaceFXAnimData
{ 
	TArray<char>                                       RawData;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/FaceFX.FaceFXAnimId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FFaceFXAnimId
{ 
	FName                                              Group;                                                      // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
};

/// Class /Script/FaceFX.FaceFXAnim
/// Size: 0x0128 (296 bytes) (0x000030 - 0x000128) align 8 MaxSize: 0x0128
class UFaceFXAnim : public UFaceFXAsset
{ 
public:
	TArray<FFaceFXAnimData>                            PlatformData;                                               // 0x0030   (0x0010)  
	FFaceFXAnimData                                    AnimData;                                                   // 0x0040   (0x0010)  
	FFaceFXAnimId                                      ID;                                                         // 0x0050   (0x0010)  
	TWeakObjectPtr<class USoundWave*>                  Audio;                                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0068   (0x0020)  MISSED
	TWeakObjectPtr<class UObject*>                     AudioAkEvent;                                               // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0090   (0x0020)  MISSED
	TWeakObjectPtr<class UObject*>                     AudioAkEventStop;                                           // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x00B8   (0x0020)  MISSED
	TWeakObjectPtr<class UObject*>                     AudioAkEventPause;                                          // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x00E0   (0x0020)  MISSED
	TWeakObjectPtr<class UObject*>                     AudioAkEventResume;                                         // 0x0100   (0x0008)  
	unsigned char                                      UnknownData04_7[0x20];                                      // 0x0108   (0x0020)  MISSED
};

/// Struct /Script/FaceFX.FaceFXSkelMeshComponentId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFaceFXSkelMeshComponentId
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	FName                                              Name;                                                       // 0x0004   (0x0008)  
};

/// Class /Script/FaceFX.FaceFXAnimationSection
/// Size: 0x0148 (328 bytes) (0x0000F0 - 0x000148) align 8 MaxSize: 0x0148
class UFaceFXAnimationSection : public UMovieSceneSection
{ 
public:
	FFaceFXSkelMeshComponentId                         SkelMeshComponentId;                                        // 0x00F0   (0x000C)  
	FFaceFXAnimId                                      AnimationId;                                                // 0x00FC   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	TWeakObjectPtr<class UFaceFXAnim*>                 Animation;                                                  // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0118   (0x0020)  MISSED
	float                                              StartOffset;                                                // 0x0138   (0x0004)  
	float                                              EndOffset;                                                  // 0x013C   (0x0004)  
	bool                                               bIsAnimationDurationLoaded : 1;                             // 0x0140:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              AnimationDuration;                                          // 0x0144   (0x0004)  
};

/// Class /Script/FaceFX.FaceFXAnimationTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFaceFXAnimationTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
};

/// Class /Script/FaceFX.FaceFXBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UFaceFXBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FaceFX.FaceFXBlueprintLibrary.GetAnimationBounds
	// bool GetAnimationBounds(class UFaceFXAnim* Animation, float& Start, float& End, float& Duration);                        // [0x98c840] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FaceFX.FaceFXCharacter
/// Size: 0x01A0 (416 bytes) (0x000030 - 0x0001A0) align 8 MaxSize: 0x01A0
class UFaceFXCharacter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x88];                                      // 0x0030   (0x0088)  MISSED
	class UFaceFXActor*                                FaceFXActor;                                                // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD0];                                      // 0x00C0   (0x00D0)  MISSED
	class UFaceFXAnim*                                 CurrentAnim;                                                // 0x0190   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Struct /Script/FaceFX.FaceFXEntry
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FFaceFXEntry
{ 
	class USkeletalMeshComponent*                      SkelMeshComp;                                               // 0x0000   (0x0008)  
	class UActorComponent*                             AudioComp;                                                  // 0x0008   (0x0008)  
	TWeakObjectPtr<class UFaceFXActor*>                Asset;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0018   (0x0020)  MISSED
	class UFaceFXCharacter*                            Character;                                                  // 0x0038   (0x0008)  
	bool                                               bIsCompensateForForceFrontXAxis : 1;                        // 0x0040:0 (0x0001)  
	bool                                               bIsAutoPlaySound : 1;                                       // 0x0040:1 (0x0001)  
	bool                                               bIsDisableMorphTargets : 1;                                 // 0x0040:2 (0x0001)  
	bool                                               bIsDisableMaterialParameters : 1;                           // 0x0040:3 (0x0001)  
	bool                                               bIsIgnoreEvents : 1;                                        // 0x0040:4 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/FaceFX.FaceFXComponent
/// Size: 0x0130 (304 bytes) (0x0000E0 - 0x000130) align 8 MaxSize: 0x0130
class UFaceFXComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,318) /* FMulticastInlineDelegate */ __um(OnPlaybackAudioStart);                               // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,319) /* FMulticastInlineDelegate */ __um(OnPlaybackStopped);                                  // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,320) /* FMulticastInlineDelegate */ __um(OnAnimationEvent);                                   // 0x0100   (0x0010)  
	class USkeletalMesh*                               AuthoredSkeleton;                                           // 0x0110   (0x0008)  
	TArray<FFaceFXEntry>                               Entries;                                                    // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0128   (0x0008)  MISSED


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
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UFaceFXConfig : public UObject
{ 
public:
	EFaceFXBlendMode                                   DefaultBlendMode;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/FaceFX.AnimNode_BlendFaceFXAnimation
/// Size: 0x0060 (96 bytes) (0x000010 - 0x000060) align 8 MaxSize: 0x0060
struct FAnimNode_BlendFaceFXAnimation : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	float                                              Alpha;                                                      // 0x0020   (0x0004)  
	bool                                               bSkipBoneMappingWithoutNS;                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x34];                                      // 0x002C   (0x0034)  MISSED
};

/// Struct /Script/FaceFX.FaceFXAnimComponentSet
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FFaceFXAnimComponentSet
{ 
	FFaceFXSkelMeshComponentId                         SkelMeshComponentId;                                        // 0x0000   (0x000C)  
	FFaceFXAnimId                                      AnimationId;                                                // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TWeakObjectPtr<class UFaceFXAnim*>                 Animation;                                                  // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/FaceFX.FaceFXAnimationSectionData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FFaceFXAnimationSectionData
{ 
	FGuid                                              TrackId;                                                    // 0x0000   (0x0010)  
	int32_t                                            RowIndex;                                                   // 0x0010   (0x0004)  
	FFaceFXAnimId                                      AnimationId;                                                // 0x0014   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TWeakObjectPtr<class UFaceFXAnim*>                 Animation;                                                  // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	FFaceFXSkelMeshComponentId                         ComponentId;                                                // 0x0050   (0x000C)  
	float                                              AnimDuration;                                               // 0x005C   (0x0004)  
	float                                              StartOffset;                                                // 0x0060   (0x0004)  
	float                                              EndOffset;                                                  // 0x0064   (0x0004)  
	FFrameNumber                                       StartTime;                                                  // 0x0068   (0x0004)  
	FFrameNumber                                       EndTime;                                                    // 0x006C   (0x0004)  
};

/// Struct /Script/FaceFX.FaceFXAnimationSectionTemplate
/// Size: 0x0090 (144 bytes) (0x000020 - 0x000090) align 8 MaxSize: 0x0090
struct FFaceFXAnimationSectionTemplate : FMovieSceneEvalTemplate
{ 
	FFaceFXAnimationSectionData                        SectionData;                                                // 0x0020   (0x0070)  
};

/// Struct /Script/FaceFX.FaceFXAnimSetData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFaceFXAnimSetData
{ 
	TArray<FFaceFXAnimData>                            Animations;                                                 // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UFaceFXAsset) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FFaceFXIdData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFaceFXActorData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UFaceFXActor) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(FFaceFXAnimData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFaceFXAnimId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UFaceFXAnim) == 0x0128); // 296 bytes (0x000030 - 0x000128)
static_assert(sizeof(FFaceFXSkelMeshComponentId) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UFaceFXAnimationSection) == 0x0148); // 328 bytes (0x0000F0 - 0x000148)
static_assert(sizeof(UFaceFXAnimationTrack) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UFaceFXBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UFaceFXCharacter) == 0x01A0); // 416 bytes (0x000030 - 0x0001A0)
static_assert(sizeof(FFaceFXEntry) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UFaceFXComponent) == 0x0130); // 304 bytes (0x0000E0 - 0x000130)
static_assert(sizeof(UFaceFXConfig) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FAnimNode_BlendFaceFXAnimation) == 0x0060); // 96 bytes (0x000010 - 0x000060)
static_assert(sizeof(FFaceFXAnimComponentSet) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FFaceFXAnimationSectionData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FFaceFXAnimationSectionTemplate) == 0x0090); // 144 bytes (0x000020 - 0x000090)
static_assert(sizeof(FFaceFXAnimSetData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FFaceFXIdData, Name) == 0x0008);
static_assert(offsetof(FFaceFXActorData, ActorRawData) == 0x0000);
static_assert(offsetof(FFaceFXActorData, BonesRawData) == 0x0010);
static_assert(offsetof(FFaceFXActorData, Ids) == 0x0020);
static_assert(offsetof(UFaceFXActor, PlatformData) == 0x0030);
static_assert(offsetof(UFaceFXActor, ActorData) == 0x0040);
static_assert(offsetof(UFaceFXActor, Animations) == 0x00C0);
static_assert(offsetof(UFaceFXActor, BlendMode) == 0x00D0);
static_assert(offsetof(FFaceFXAnimData, RawData) == 0x0000);
static_assert(offsetof(FFaceFXAnimId, Group) == 0x0000);
static_assert(offsetof(FFaceFXAnimId, Name) == 0x0008);
static_assert(offsetof(UFaceFXAnim, PlatformData) == 0x0030);
static_assert(offsetof(UFaceFXAnim, AnimData) == 0x0040);
static_assert(offsetof(UFaceFXAnim, ID) == 0x0050);
static_assert(offsetof(UFaceFXAnim, Audio) == 0x0060);
static_assert(offsetof(UFaceFXAnim, AudioAkEvent) == 0x0088);
static_assert(offsetof(UFaceFXAnim, AudioAkEventStop) == 0x00B0);
static_assert(offsetof(UFaceFXAnim, AudioAkEventPause) == 0x00D8);
static_assert(offsetof(UFaceFXAnim, AudioAkEventResume) == 0x0100);
static_assert(offsetof(FFaceFXSkelMeshComponentId, Name) == 0x0004);
static_assert(offsetof(UFaceFXAnimationSection, SkelMeshComponentId) == 0x00F0);
static_assert(offsetof(UFaceFXAnimationSection, AnimationId) == 0x00FC);
static_assert(offsetof(UFaceFXAnimationSection, Animation) == 0x0110);
static_assert(offsetof(UFaceFXAnimationTrack, AnimationSections) == 0x00A0);
static_assert(offsetof(UFaceFXCharacter, FaceFXActor) == 0x00B8);
static_assert(offsetof(UFaceFXCharacter, CurrentAnim) == 0x0190);
static_assert(offsetof(FFaceFXEntry, SkelMeshComp) == 0x0000);
static_assert(offsetof(FFaceFXEntry, AudioComp) == 0x0008);
static_assert(offsetof(FFaceFXEntry, Asset) == 0x0010);
static_assert(offsetof(FFaceFXEntry, Character) == 0x0038);
static_assert(offsetof(UFaceFXComponent, AuthoredSkeleton) == 0x0110);
static_assert(offsetof(UFaceFXComponent, Entries) == 0x0118);
static_assert(offsetof(UFaceFXConfig, DefaultBlendMode) == 0x0030);
static_assert(offsetof(FAnimNode_BlendFaceFXAnimation, ComponentPose) == 0x0010);
static_assert(offsetof(FFaceFXAnimComponentSet, SkelMeshComponentId) == 0x0000);
static_assert(offsetof(FFaceFXAnimComponentSet, AnimationId) == 0x000C);
static_assert(offsetof(FFaceFXAnimComponentSet, Animation) == 0x0020);
static_assert(offsetof(FFaceFXAnimationSectionData, TrackId) == 0x0000);
static_assert(offsetof(FFaceFXAnimationSectionData, AnimationId) == 0x0014);
static_assert(offsetof(FFaceFXAnimationSectionData, Animation) == 0x0028);
static_assert(offsetof(FFaceFXAnimationSectionData, ComponentId) == 0x0050);
static_assert(offsetof(FFaceFXAnimationSectionData, StartTime) == 0x0068);
static_assert(offsetof(FFaceFXAnimationSectionData, EndTime) == 0x006C);
static_assert(offsetof(FFaceFXAnimationSectionTemplate, SectionData) == 0x0020);
static_assert(offsetof(FFaceFXAnimSetData, Animations) == 0x0000);
