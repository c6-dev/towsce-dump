
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: UMG

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FLevelSequenceObjectReferenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (0x000000 - 0x000038)
class FLevelSequenceBindingReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   PackageName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           ExternalObjectPath                                          OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FString)                                   ObjectPath                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FLevelSequenceBindingReferenceArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FLevelSequenceBindingReference>)    References                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FLevelSequenceBindingReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FGuid, FLevelSequenceBindingReferenceArray>) BindingIdToReferences                                OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FGuid>)                               AnimSequenceInstances                                       OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (0x000000 - 0x000038)
class FLevelSequenceObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TLazyObjectPtr<class UObject*>)            ObjectOrOwner                                               OFFSET(get<T>, {0x0, 28, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TWeakObjectPtr<class UObject*>)            CachedComponent                                             OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x0168 (0x000068 - 0x0001D0)
class ULevelSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FLevelSequenceObjectReferenceMap)          ObjectReferences                                            OFFSET(getStruct<T>, {0x78, 80, 0, 0})
	SMember(FLevelSequenceBindingReferences)           BindingReferences                                           OFFSET(getStruct<T>, {0xC8, 160, 0, 0})
	CMember(TMap<FString, FLevelSequenceObject>)       PossessedObjects                                            OFFSET(get<T>, {0x168, 80, 0, 0})
	CMember(class UClass*)                             DirectorClass                                               OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<class UAssetUserData*>)             AssetUserData                                               OFFSET(get<T>, {0x1C0, 16, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	// void RemoveMetaDataByClass(class UClass* InClass);                                                                       // [0x313daf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// class UObject* FindOrAddMetaDataByClass(class UClass* InClass);                                                          // [0x313d030] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	// class UObject* FindMetaDataByClass(class UClass* InClass);                                                               // [0x313d030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	// class UObject* CopyMetaData(class UObject* InMetaData);                                                                  // [0x313d030] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FLevelSequenceCameraSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bOverrideAspectRatioAxisConstraint                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EAspectRatioAxisConstraint>)   AspectRatioAxisConstraint                                   OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0088 (0x0002B8 - 0x000340)
class ALevelSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x2D0, 20, 0, 0})
	CMember(class ULevelSequencePlayer*)               SequencePlayer                                              OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FSoftObjectPath)                           LevelSequence                                               OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})
	SMember(FLevelSequenceCameraSettings)              CameraSettings                                              OFFSET(getStruct<T>, {0x308, 2, 0, 0})
	CMember(class ULevelSequenceBurnInOptions*)        BurnInOptions                                               OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UMovieSceneBindingOverrides*)        BindingOverrides                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x320, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceData                                       OFFSET(get<bool>, {0x320, 1, 1, 1})
	DMember(bool)                                      bReplicatePlayback                                          OFFSET(get<bool>, {0x320, 1, 1, 2})
	CMember(class UObject*)                            DefaultInstanceData                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class ULevelSequenceBurnIn*)               BurnInInstance                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      bShowBurnin                                                 OFFSET(get<bool>, {0x338, 1, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	// void ShowBurnin();                                                                                                       // [0x313e0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(class ULevelSequence* InSequence);                                                                      // [0x313e060] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x313dfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                           // [0x313dda0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x313dc40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                    // [0x313dc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x313db60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// void RemoveBindingByTag(FName Tag, class AActor* Actor);                                                                 // [0x313da20] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);                                             // [0x313d920] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                         // [0x1c5deb0] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.LoadSequence
	// class ULevelSequence* LoadSequence();                                                                                    // [0x313d8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	// void HideBurnin();                                                                                                       // [0x313d890] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	// class ULevelSequencePlayer* GetSequencePlayer();                                                                         // [0x313d820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// class ULevelSequence* GetSequence();                                                                                     // [0x313d7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                         // [0x313d2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	// FMovieSceneObjectBindingID FindNamedBinding(FName Tag);                                                                  // [0x313d230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	// void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);                               // [0x313cf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);                  // [0x313cdd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0118 (0x0004F0 - 0x000608)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FMulticastInlineDelegate)                  OnCameraCut                                                 OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// class UCameraComponent* GetActiveCameraComponent();                                                                      // [0x313d3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor); // [0x313d0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0028 (0x000030 - 0x000058)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     SkelTrackGuid                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToLevelSequence                                         OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0040 (0x000030 - 0x000070)
class UDefaultLevelSequenceInstanceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class AActor*)                             TransformOriginActor                                        OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FTransform)                                TransformOrigin                                             OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0000 (0x000030 - 0x000030)
class ULevelSequenceMetaData : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class ULevelSequenceBurnInInitSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0028 (0x000030 - 0x000058)
class ULevelSequenceBurnInOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bUseBurnIn                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FSoftClassPath)                            BurnInClass                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(class ULevelSequenceBurnInInitSettings*)   Settings                                                    OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                            // [0x313ded0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0030 (0x000000 - 0x000030)
class FLevelSequenceAnimSequenceLinkItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     SkelTrackGuid                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToAnimSequence                                          OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bExportTransforms                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bExportCurves                                               OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bRecordInWorldSpace                                         OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0010 (0x000030 - 0x000040)
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FLevelSequenceAnimSequenceLinkItem>) AnimSequenceLinks                                          OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLevelSequenceSnapshotSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(char)                                      ZeroPadAmount                                               OFFSET(get<char>, {0x0, 1, 0, 0})
	SMember(FFrameRate)                                FrameRate                                                   OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FLevelSequencePlayerSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   MasterName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       MasterTime                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       SourceTime                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   CurrentShotName                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotLocalTime                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotSourceTime                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   SourceTimecode                                              OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TWeakObjectPtr<class UCameraComponent*>)   CameraComponent                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FLevelSequenceSnapshotSettings)            Settings                                                    OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	CMember(class ULevelSequence*)                     ActiveShot                                                  OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FMovieSceneSequenceID)                     ShotID                                                      OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C0 (0x000278 - 0x000338)
class ULevelSequenceBurnIn : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FLevelSequencePlayerSnapshot)              FrameInformation                                            OFFSET(getStruct<T>, {0x278, 184, 0, 0})
	CMember(class ALevelSequenceActor*)                LevelSequenceActor                                          OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(class UObject* InSettings);                                                                             // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// class UClass* GetSettingsClass();                                                                                        // [0x313d850] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0010 (0x000030 - 0x000040)
class ULevelSequenceDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class ULevelSequencePlayer*)               Player                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   SubSequenceID                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MovieScenePlayerIndex                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	// void OnCreated();                                                                                                        // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                                // [0x313d7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x313d6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	// class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                                 // [0x313d5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x313d4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	// class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                   // [0x313d400] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0030 (0x000040 - 0x000070)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bDefaultLockEngineToDisplayRate                             OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FString)                                   DefaultDisplayRate                                          OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   DefaultTickResolution                                       OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(EUpdateClockSource)                        DefaultClockSource                                          OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x0002B8 - 0x0002E0)
class ALevelSequenceMediaController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class ALevelSequenceActor*)                Sequence                                                    OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UMediaComponent*)                    MediaComponent                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(float)                                     ServerStartTimeSeconds                                      OFFSET(get<float>, {0x2D0, 4, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                                  // [0x313e110] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	// void Play();                                                                                                             // [0x313d900] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// void OnRep_ServerStartTimeSeconds();                                                                                     // [0x313d8e0] Final|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	// class ALevelSequenceActor* GetSequence();                                                                                // [0xc1eb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// class UMediaComponent* GetMediaComponent();                                                                              // [0x2fcb220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
class FBoundActorProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
class FLevelSequenceLegacyObjectReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

