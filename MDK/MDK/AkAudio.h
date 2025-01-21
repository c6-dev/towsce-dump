
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x0090 (0x000310 - 0x0003A0)
class AAkAcousticPortal : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(AkAcousticPortalState)                     InitialState                                                OFFSET(get<T>, {0x310, 1, 0, 0})
	DMember(float)                                     ObstructionRefreshInterval                                  OFFSET(get<float>, {0x314, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            ObstructionCollisionChannel                                 OFFSET(get<T>, {0x318, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	// void OpenPortal();                                                                                                       // [0x11dc360] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x11dbf30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	// void ClosePortal();                                                                                                      // [0x11dbe20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x0008 (0x000268 - 0x000270)
class UAkPortalComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0018 (0x000030 - 0x000048)
class UAkAudioType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  ShortID                                                     OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	CMember(TArray<class UObject*>)                    UserData                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0000 (0x000048 - 0x000048)
class UAkAcousticTexture : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0050 (0x0002B8 - 0x000308)
class AAkAmbientSound : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UAkAudioEvent*)                      AkAudioEvent                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UAkComponent*)                       AkComponent                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      StopWhenOwnerIsDestroyed                                    OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	DMember(bool)                                      AutoPost                                                    OFFSET(get<bool>, {0x2C9, 1, 0, 0})
	DMember(bool)                                      bDistanceCull                                               OFFSET(get<bool>, {0x2CA, 1, 0, 0})
	DMember(float)                                     CullRadius                                                  OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     CullDebounce                                                OFFSET(get<float>, {0x2D0, 4, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	// void StopAmbientSound();                                                                                                 // [0x11dd590] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	// void StartAmbientSound();                                                                                                // [0x11dd570] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkMainOutputSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   AudioDeviceShareset                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  DeviceID                                                    OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	CMember(EAkPanningRule)                            PanningRule                                                 OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(EAkChannelConfigType)                      ChannelConfigType                                           OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  ChannelMask                                                 OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  NumberOfChannels                                            OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FAkSpatialAudioSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint32_t)                                  MaxSoundPropagationDepth                                    OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  DiffractionFlags                                            OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     MovementThreshold                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  NumberOfPrimaryRays                                         OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  ReflectionOrder                                             OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      EnableDiffractionOnReflections                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      EnableDirectPathDiffraction                                 OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(float)                                     MaximumPathLength                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      EnableTransmission                                          OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FAkCommonInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(uint32_t)                                  MaximumNumberOfMemoryPools                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  MaximumNumberOfPositioningPaths                             OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  CommandQueueSize                                            OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  SamplesPerFrame                                             OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	SMember(FAkMainOutputSettings)                     MainOutputSettings                                          OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	DMember(float)                                     StreamingLookAheadRatio                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(uint16_t)                                  NumberOfRefillsInVoice                                      OFFSET(get<uint16_t>, {0x3C, 2, 0, 0})
	SMember(FAkSpatialAudioSettings)                   SpatialAudioSettings                                        OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0008 (0x000060 - 0x000068)
class FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(uint32_t)                                  SampleRate                                                  OFFSET(get<uint32_t>, {0x60, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FAkCommunicationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint32_t)                                  PoolSize                                                    OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  DiscoveryBroadcastPort                                      OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  CommandPort                                                 OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
	DMember(uint16_t)                                  NotificationPort                                            OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	SMember(FString)                                   NetworkName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0008 (0x000020 - 0x000028)
class FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      InitializeSystemComms                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkAdvancedSpatialAudioSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkAdvancedSpatialAudioSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     DiffractionShadowAttenuationFactor                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DiffractionShadowDegrees                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x0034 (0x000000 - 0x000034)
class FAkAdvancedInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(uint32_t)                                  IO_MemorySize                                               OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  IO_Granularity                                              OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     TargetAutoStreamBufferLength                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      UseStreamCache                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(uint32_t)                                  MaximumPinnedBytesInCache                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      EnableGameSyncPreparation                                   OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(uint32_t)                                  ContinuousPlaybackLookAhead                                 OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  MonitorQueuePoolSize                                        OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  MaximumHardwareTimeoutMs                                    OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      DebugOutOfRangeCheckEnabled                                 OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     DebugOutOfRangeLimit                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FAkAdvancedSpatialAudioSettings)           SpatialAudioSettings                                        OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x0004 (0x000034 - 0x000038)
class FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      EnableMultiCoreRendering                                    OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  AudioAPI                                                    OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      RoundFrameSizeToHardwareSize                                OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkAndroidInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkAndroidAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC8, 64, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0048 (0x000030 - 0x000078)
class UAkPlatformInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0040 (0x000030 - 0x000070)
class UAkAssetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(uint32_t)                                  CachedHash                                                  OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/AkAudio.AkAssetDataWithMedia
/// Size: 0x0010 (0x000070 - 0x000080)
class UAkAssetDataWithMedia : public UAkAssetData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<class UAkMediaAsset*>)              MediaList                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0008 (0x000030 - 0x000038)
class UAkAssetPlatformData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UAkAssetData*)                       CurrentAssetData                                            OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AkAudio.AkAssetBase
/// Size: 0x0010 (0x000048 - 0x000058)
class UAkAssetBase : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UAkAssetPlatformData*)               PlatformAssetData                                           OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x0118 (0x000058 - 0x000170)
class UAkAudioBank : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      AutoLoad                                                    OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UAkAssetPlatformData*>>) LocalizedPlatformAssetDataMap                    OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TSet<TWeakObjectPtr<UAkAudioEvent*>>)      LinkedAkEvents                                              OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(class UAkAssetPlatformData*)               CurrentLocalizedPlatformAssetData                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TArray<class UAkAudioBank*>)               ReferencedBanks                                             OFFSET(get<T>, {0x138, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainerData
/// Size: 0x0050 (0x000030 - 0x000080)
class UAkAssetDataSwitchContainerData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<class UAkGroupValue*>)      GroupValue                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UAkGroupValue*)                      DefaultGroupValue                                           OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<class UAkMediaAsset*>)              MediaList                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<class UAkAssetDataSwitchContainerData*>) Children                                               OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainer
/// Size: 0x0068 (0x000080 - 0x0000E8)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<class UAkAssetDataSwitchContainerData*>) SwitchContainers                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(class UAkGroupValue*)                      DefaultGroupValue                                           OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/AkAudio.AkAudioEventData
/// Size: 0x01C8 (0x0000E8 - 0x0002B0)
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(float)                                     MaxAttenuationRadius                                        OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(bool)                                      IsInfinite                                                  OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(float)                                     MinimumDuration                                             OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     MaximumDuration                                             OFFSET(get<float>, {0xF4, 4, 0, 0})
	CMember(TMap<FString, class UAkAssetDataSwitchContainer*>) LocalizedMedia                                      OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TSet<UAkAudioEvent*>)                      PostedEvents                                                OFFSET(get<T>, {0x148, 80, 0, 0})
	CMember(TSet<UAkAuxBus*>)                          UserDefinedSends                                            OFFSET(get<T>, {0x198, 80, 0, 0})
	CMember(TSet<UAkTrigger*>)                         PostedTriggers                                              OFFSET(get<T>, {0x1E8, 80, 0, 0})
	CMember(TSet<UAkGroupValue*>)                      GroupValues                                                 OFFSET(get<T>, {0x238, 80, 0, 0})
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x0098 (0x000058 - 0x0000F0)
class UAkAudioEvent : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FString, TWeakObjectPtr<UAkAssetPlatformData*>>) LocalizedPlatformAssetDataMap                    OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(class UAkAudioBank*)                       RequiredBank                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(float)                                     FadeDuration                                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(class UAkAssetPlatformData*)               CurrentLocalizedPlatformData                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(float)                                     MaxAttenuationRadius                                        OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      IsInfinite                                                  OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(float)                                     MinimumDuration                                             OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     MaximumDuration                                             OFFSET(get<float>, {0xD4, 4, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.GetMinimumDuration
	// float GetMinimumDuration();                                                                                              // [0x11dbff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaximumDuration
	// float GetMaximumDuration();                                                                                              // [0x11dbfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	// float GetMaxAttenuationRadius();                                                                                         // [0x11dbf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetIsInfinite
	// bool GetIsInfinite();                                                                                                    // [0x11dbf60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0028 (0x000268 - 0x000290)
class UAkGameObject : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class UAkAudioEvent*)                      AkAudioEvent                                                OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x270, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	// void Stop();                                                                                                             // [0x11e4670] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x11e23b0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources); // [0x11e2210] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11e1a50] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FString in_EventName); // [0x11e1820] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x0208 (0x000288 - 0x000490)
class UAkComponent : public UAkGameObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(bool)                                      bUseSpatialAudio                                            OFFSET(get<bool>, {0x288, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OcclusionCollisionChannel                                   OFFSET(get<T>, {0x290, 1, 0, 0})
	DMember(bool)                                      EnableSpotReflectors                                        OFFSET(get<bool>, {0x294, 1, 1, 0})
	CMember(class UAkAuxBus*)                          EarlyReflectionAuxBus                                       OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FString)                                   EarlyReflectionAuxBusName                                   OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(int32_t)                                   EarlyReflectionOrder                                        OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
	DMember(float)                                     EarlyReflectionBusSendGain                                  OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     EarlyReflectionMaxPathLength                                OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     roomReverbAuxBusGain                                        OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(int32_t)                                   diffractionMaxEdges                                         OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(int32_t)                                   diffractionMaxPaths                                         OFFSET(get<int32_t>, {0x2C4, 4, 0, 0})
	DMember(float)                                     diffractionMaxPathLength                                    OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      DrawFirstOrderReflections                                   OFFSET(get<bool>, {0x2CC, 1, 1, 0})
	DMember(bool)                                      DrawSecondOrderReflections                                  OFFSET(get<bool>, {0x2CC, 1, 1, 1})
	DMember(bool)                                      DrawHigherOrderReflections                                  OFFSET(get<bool>, {0x2CC, 1, 1, 2})
	DMember(bool)                                      DrawDiffraction                                             OFFSET(get<bool>, {0x2CC, 1, 1, 3})
	DMember(bool)                                      bDisableRoomIdentification                                  OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      StopWhenOwnerDestroyed                                      OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	DMember(float)                                     AttenuationScalingFactor                                    OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     OcclusionRefreshInterval                                    OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bUseReverbVolumes                                           OFFSET(get<bool>, {0x2DC, 1, 0, 0})
	DMember(bool)                                      bDistanceCull                                               OFFSET(get<bool>, {0x2DD, 1, 0, 0})
	DMember(float)                                     CullRadius                                                  OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     CullDebounce                                                OFFSET(get<float>, {0x2E4, 4, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0x11dd7a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	// void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x11dd5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                             // [0x11dd3c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0x11dd330] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                     // [0x11dd180] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume);                                                                                // [0x11dd100] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0x11dd050] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	// void SetEarlyReflectionsVolume(float SendVolume);                                                                        // [0x11dcf40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                      // [0x11dcea0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	// void SetAttenuationScalingFactor(float Value);                                                                           // [0x11dcda0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                       // [0x11dcb30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// int32_t PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventByName
	// int32_t PostAkEventByName(FString in_EventName);                                                                         // [0x11dc740] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x11dc020] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	// float GetAttenuationRadius();                                                                                            // [0x11dbed0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0038 (0x000488 - 0x0004C0)
class UAkAudioInputComponent : public UAkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:


	/// Functions
	// Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// int32_t PostAssociatedAudioInputEvent();                                                                                 // [0x11dcb00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x0008 (0x000058 - 0x000060)
class UAkAuxBus : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UAkAudioBank*)                       RequiredBank                                                OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkBoolPropertyToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ItemProperty                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (0x000000 - 0x000030)
class FAkWwiseObjectDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemPath                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (0x000000 - 0x000040)
class FAkWwiseItemToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FAkWwiseObjectDetails)                     ItemPicked                                                  OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FString)                                   ItemPath                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0A58 (0x000138 - 0x000B90)
class UAkCheckBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	CMember(ECheckBoxState)                            CheckedState                                                OFFSET(get<T>, {0x520, 1, 0, 0})
	SMember(FDelegateProperty)                         CheckedStateDelegate                                        OFFSET(getStruct<T>, {0x524, 16, 0, 0})
	SMember(FCheckBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x538, 1408, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0xAB8, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0xAB9, 1, 0, 0})
	SMember(FAkBoolPropertyToControl)                  ThePropertyToControl                                        OFFSET(getStruct<T>, {0xAC0, 16, 0, 0})
	SMember(FAkWwiseItemToControl)                     ItemToControl                                               OFFSET(getStruct<T>, {0xAD0, 64, 0, 0})
	SMember(FMulticastInlineDelegate)                  AkOnCheckStateChanged                                       OFFSET(getStruct<T>, {0xB10, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDropped                                               OFFSET(getStruct<T>, {0xB20, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDropped                                           OFFSET(getStruct<T>, {0xB30, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x11dcfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x11dce20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	// void SetAkItemId(FGuid& ItemId);                                                                                         // [0x11dcd00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	// void SetAkBoolProperty(FString ItemProperty);                                                                            // [0x11dcc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0x11dc2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0x11dc270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x11dbf00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	// FString GetAkProperty();                                                                                                 // [0x11dbe80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	// FGuid GetAkItemId();                                                                                                     // [0x11dbe40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkChinookPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkChinookPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkMPXPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkMPXPlatformInfo : public UAkChinookPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkXSXPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXSXPlatformInfo : public UAkChinookPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0078 (0x000048 - 0x0000C0)
class UAkFolder : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   UnrealFolderPath                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   WwiseFolderPath                                             OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.AkGameplayStatics.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);                                                     // [0x11e4cf0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UseEarlyReflections
	// void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x11e4ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName
	// void UnloadBankByName(FString BankName);                                                                                 // [0x11e4a40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankAsync
	// void UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankUnloadedCallback);                                 // [0x11e4960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBank
	// void UnloadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x11e47f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture
	// void StopProfilerCapture();                                                                                              // [0x11e47d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture
	// void StopOutputCapture();                                                                                                // [0x11e47b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                            // [0x11e4730] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAll
	// void StopAll();                                                                                                          // [0x11e4710] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopActor
	// void StopActor(class AActor* Actor);                                                                                     // [0x11e4690] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture
	// void StartProfilerCapture(FString Filename);                                                                             // [0x11e45e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture
	// void StartOutputCapture(FString Filename);                                                                               // [0x11e4550] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                           // [0x11e44d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy); // [0x11e4290] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);            // [0x11e4140] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0x11e4040] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset);                          // [0x11e3ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0x11e3ca0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetReflectionsOrder
	// void SetReflectionsOrder(int32_t Order, bool RefreshPaths);                                                              // [0x11e3e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPanningRule
	// void SetPanningRule(PanningRule PanRule);                                                                                // [0x11e3c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                           // [0x11e3b70] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	// void SetOcclusionScalingFactor(float ScalingFactor);                                                                     // [0x11e3af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);                                            // [0x11e3a30] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x11e38d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x11e36f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x11e3510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0x11e3420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);      // [0x11e32d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusConfig
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                         // [0x11e3200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);                                    // [0x11e3100] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventCB
	// int32_t PostEventCB(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x11e2e10] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventByName
	// void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);                         // [0x11e2cf0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAttached
	// int32_t PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x11e2b00] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x11e2990] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject); // [0x11e27d0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x11e2630] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11e1fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo); // [0x11e1d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadInitBank
	// void LoadInitBank();                                                                                                     // [0x11e1800] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBanks
	// void LoadBanks(TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);                                           // [0x11e1710] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankByName
	// void LoadBankByName(FString BankName);                                                                                   // [0x11e1680] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankAsync
	// void LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankLoadedCallback);                                     // [0x11e15a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBank
	// void LoadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x11e1430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0x11e13a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsEditor
	// bool IsEditor();                                                                                                         // [0x11e1370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset);                         // [0x11e11e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x11e0fb0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	// float GetOcclusionScalingFactor();                                                                                       // [0x11e0e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                        // [0x11e0ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// TArray<FString> GetAvailableAudioCultures();                                                                             // [0x11e0870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	// class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);                               // [0x11e0600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkComponent
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0x11e06d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                                 // [0x11e0600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x11e04c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0x11e02f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearBanks
	// void ClearBanks();                                                                                                       // [0x11e02d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.CancelEventCallback
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                          // [0x11e0230] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// void AddOutputCaptureMarker(FString MarkerText);                                                                         // [0x11e01a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0008 (0x000030 - 0x000038)
class UAkCallbackInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UAkComponent*)                       AkComponent                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0008 (0x000038 - 0x000040)
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   PlayingID                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   EventID                                                     OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0008 (0x000040 - 0x000048)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType
	// EAkMidiEventType GetType();                                                                                              // [0x11e1340] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                            // [0x11e0f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                        // [0x11e0e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                              // [0x11e0d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                            // [0x11e0cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                         // [0x11e0c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                              // [0x11e0b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                                // [0x11e0a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// char GetChannel();                                                                                                       // [0x11e0a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc
	// bool GetCc(FAkMidiCc& AsCc);                                                                                             // [0x11e0950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0018 (0x000040 - 0x000058)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Identifier                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   Position                                                    OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FString)                                   Label                                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0018 (0x000040 - 0x000058)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     EstimatedDuration                                           OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   AudioNodeID                                                 OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   MediaID                                                     OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bStreaming                                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (0x000000 - 0x000024)
class FAkSegmentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(int32_t)                                   CurrentPosition                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PreEntryDuration                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActiveDuration                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PostExitDuration                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   RemainingLookAheadTime                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     BeatDuration                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BarDuration                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     GridDuration                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     GridOffset                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0040 (0x000038 - 0x000078)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   PlayingID                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FAkSegmentInfo)                            SegmentInfo                                                 OFFSET(getStruct<T>, {0x3C, 36, 0, 0})
	CMember(EAkCallbackType)                           MusicSyncType                                               OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FString)                                   UserCueName                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkGeometrySurfaceOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAkAcousticTexture*)                 AcousticTexture                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnableOcclusionOverride                                    OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(float)                                     OcclusionValue                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkAcousticSurface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint32_t)                                  Texture                                                     OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Occlusion                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  Point0                                                      OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Point1                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Point2                                                      OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  Surface                                                     OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (0x000000 - 0x000050)
class FAkGeometryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FVector>)                           Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FAkAcousticSurface>)                Surfaces                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FAkTriangle>)                       Triangles                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          ToOverrideAcousticTexture                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          ToOverrideOcclusion                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x0138 (0x000268 - 0x0003A0)
class UAkGeometryComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(AkMeshType)                                MeshType                                                    OFFSET(get<T>, {0x268, 1, 0, 0})
	DMember(int32_t)                                   LOD                                                         OFFSET(get<int32_t>, {0x26C, 4, 0, 0})
	DMember(float)                                     WeldingThreshold                                            OFFSET(get<float>, {0x270, 4, 0, 0})
	CMember(TMap<class UMaterialInterface*, FAkGeometrySurfaceOverride>) StaticMeshSurfaceOverride                 OFFSET(get<T>, {0x278, 80, 0, 0})
	SMember(FAkGeometrySurfaceOverride)                CollisionMeshSurfaceOverride                                OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	DMember(bool)                                      bEnableDiffraction                                          OFFSET(get<bool>, {0x2D8, 1, 1, 0})
	DMember(bool)                                      bEnableDiffractionOnBoundaryEdges                           OFFSET(get<bool>, {0x2D8, 1, 1, 1})
	CMember(class AActor*)                             AssociatedRoom                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(FAkGeometryData)                           GeometryData                                                OFFSET(getStruct<T>, {0x2F8, 80, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	// void UpdateGeometry();                                                                                                   // [0x11e9740] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	// void RemoveGeometry();                                                                                                   // [0x11e9020] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	// void ConvertMesh();                                                                                                      // [0x11e89a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0028 (0x000048 - 0x000070)
class UAkGroupValue : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<TWeakObjectPtr<UAkMediaAsset*>>)    MediaDependencies                                           OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(uint32_t)                                  GroupShortID                                                OFFSET(get<uint32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  AudioAPI                                                    OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      GlobalFocus                                                 OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x3D, 1, 0, 0})
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkHololensInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkHololensAdvancedInitializationSettings) AdvancedSettings                                            OFFSET(getStruct<T>, {0xC8, 64, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkIndianaAudioStatics
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkIndianaAudioStatics : public UAkGameplayStatics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.AkIndianaAudioStatics.StopSoundByID
	// void StopSoundByID(int32_t PlayingID, int32_t FadeTime);                                                                 // [0x11e9680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetSwitchByID
	// void SetSwitchByID(FName SwitchGroup, int32_t SwitchStateID, class AActor* Actor);                                       // [0x11e9580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetStateChecked
	// void SetStateChecked(FName StateGroup, FName State);                                                                     // [0x11e94c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetRTPCValueOnPlayingID
	// void SetRTPCValueOnPlayingID(int32_t PlayingID, FName RTPC, float Value, int32_t InterpolationTimeMs);                   // [0x11e92d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetRTPCValueChecked
	// void SetRTPCValueChecked(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC); // [0x11e9140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.ResetRTPCValue
	// void ResetRTPCValue(FName RTPC, int32_t InterpolationTimeMs, class AActor* Actor);                                       // [0x11e9040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.PostExternalSourceEvent
	// int32_t PostExternalSourceEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, FString ExternalSource, FString SourceEvent, bool StopWhenAttachedToDestroyed); // [0x11e8e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.PostEventAtLocationByEvent
	// int32_t PostEventAtLocationByEvent(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x11e8cf0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.PostEvent2D
	// int32_t PostEvent2D(class UAkAudioEvent* AkEvent);                                                                       // [0x11e8c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.GetSwitch
	// bool GetSwitch(FName SwitchGroup, int32_t& OutState, class AActor* Actor);                                               // [0x11e8b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkPluginInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkPluginInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  PluginID                                                    OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   dll                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Class /Script/AkAudio.AkInitBankAssetData
/// Size: 0x0010 (0x000080 - 0x000090)
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FAkPluginInfo>)                     PluginInfos                                                 OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x0020 (0x000058 - 0x000078)
class UAkInitBank : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FString>)                           AvailableAudioCultures                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   DefaultLanguage                                             OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (0x000000 - 0x00000C)
class FAkAudioSession : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EAkAudioSessionCategory)                   AudioSessionCategory                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  AudioSessionCategoryOptions                                 OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	CMember(EAkAudioSessionMode)                       AudioSessionMode                                            OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x00E0 (0x000030 - 0x000110)
class UAkIOSInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkAudioSession)                           AudioSession                                                OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettings)         AdvancedSettings                                            OFFSET(getStruct<T>, {0xD8, 52, 0, 0})
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                          // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                      // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0040 (0x000120 - 0x000160)
class UAkItemBoolProperties : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDragged                                           OFFSET(getStruct<T>, {0x130, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x11e9420] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x11e8a40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x11e89c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                      // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                                  // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0040 (0x000120 - 0x000160)
class UAkItemProperties : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDragged                                           OFFSET(getStruct<T>, {0x130, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x11e9420] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x11e8ac0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x11e89c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x0048 (0x000268 - 0x0002B0)
class UAkLateReverbComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x268, 1, 1, 0})
	CMember(class UAkAuxBus*)                          AuxBus                                                      OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(FString)                                   AuxBusName                                                  OFFSET(getStruct<T>, {0x278, 16, 0, 0})
	DMember(float)                                     SendLevel                                                   OFFSET(get<float>, {0x288, 4, 0, 0})
	DMember(float)                                     FadeRate                                                    OFFSET(get<float>, {0x28C, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x290, 4, 0, 0})
	CMember(class UAkLateReverbComponent*)             NextLowerPriorityComponent                                  OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkLinuxInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC8, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkLuminInitializationSettings
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UAkLuminInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC0, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11edbc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLuminPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkLuminPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkMacInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC8, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0038 (0x000030 - 0x000068)
class UAkMediaAssetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      IsStreamed                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      UseDeviceMemory                                             OFFSET(get<bool>, {0x31, 1, 0, 0})
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0030 (0x000030 - 0x000060)
class UAkMediaAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(uint32_t)                                  ID                                                          OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      AutoLoad                                                    OFFSET(get<bool>, {0x34, 1, 0, 0})
	CMember(TArray<class UObject*>)                    UserData                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UAkMediaAssetData*)                  CurrentMediaAssetData                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0000 (0x000060 - 0x000060)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0060 (0x000060 - 0x0000C0)
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/AkAudio.AkPellegrinoPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkPellegrinoPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkDPXPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkDPXPlatformInfo : public UAkPellegrinoPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkPS5PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkPS5PlatformInfo : public UAkPellegrinoPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/AkAudio.AkPS4AdvancedInitializationSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  ACPBatchBufferSize                                          OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/AkAudio.AkPS4InitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkPS4InitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x38, 96, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkPS4AdvancedInitializationSettings)      AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 64, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11edbc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPS4PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkPS4PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/AkAudio.AkPS5AdvancedInitializationSettings
/// Size: 0x0004 (0x000038 - 0x00003C)
class FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bVorbisHwAcceleration                                       OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Class /Script/AkAudio.AkPS5InitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkPS5InitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x38, 96, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkPS5AdvancedInitializationSettings)      AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 60, 0, 0})
};

/// Class /Script/AkAudio.AkDPXInitializationSettings
/// Size: 0x0000 (0x000100 - 0x000100)
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0038 (0x000310 - 0x000348)
class AAkReverbVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x310, 1, 1, 0})
	CMember(class UAkAuxBus*)                          AuxBus                                                      OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FString)                                   AuxBusName                                                  OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	DMember(float)                                     SendLevel                                                   OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     FadeRate                                                    OFFSET(get<float>, {0x334, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x338, 4, 0, 0})
	CMember(class UAkLateReverbComponent*)             LateReverbComponent                                         OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0028 (0x000288 - 0x0002B0)
class UAkRoomComponent : public UAkGameObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x288, 1, 1, 0})
	CMember(class UAkRoomComponent*)                   NextLowerPriorityComponent                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     WallOcclusion                                               OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     AuxSendLevel                                                OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      AutoPost                                                    OFFSET(get<bool>, {0x2A4, 1, 0, 0})
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0000 (0x000048 - 0x000048)
class UAkRtpc : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0030 (0x000000 - 0x000030)
class FAkGeometrySurfacePropertiesToMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<class UAkAcousticTexture*>) AcousticTexture                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     OcclusionValue                                              OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x0118 (0x000030 - 0x000148)
class UAkSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(char)                                      MaxSimultaneousReverbVolumes                                OFFSET(get<char>, {0x30, 1, 0, 0})
	SMember(FFilePath)                                 WwiseProjectPath                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FDirectoryPath)                            WwiseSoundDataFolder                                        OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bAutoConnectToWAAPI                                         OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultOcclusionCollisionChannel                            OFFSET(get<T>, {0x59, 1, 0, 0})
	CMember(TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap>) AkGeometryMap             OFFSET(get<T>, {0x60, 80, 0, 0})
	DMember(bool)                                      SplitSwitchContainerMedia                                   OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      SplitMediaPerFolder                                         OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      UseEventBasedPackaging                                      OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      EnableAutomaticAssetSynchronization                         OFFSET(get<bool>, {0xB3, 1, 0, 0})
	SMember(FString)                                   CommandletCommitMessage                                     OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(TMap<FString, FString>)                    UnrealCultureToWwiseCulture                                 OFFSET(get<T>, {0xC8, 80, 0, 0})
	DMember(bool)                                      AskedToUseNewAssetManagement                                OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bEnableMultiCoreRendering                                   OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(bool)                                      MigratedEnableMultiCoreRendering                            OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      FixupRedirectorsDuringMigration                             OFFSET(get<bool>, {0x11B, 1, 0, 0})
	SMember(FDirectoryPath)                            WwiseWindowsInstallationPath                                OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FFilePath)                                 WwiseMacInstallationPath                                    OFFSET(getStruct<T>, {0x130, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0068 (0x000030 - 0x000098)
class UAkSettingsPerUser : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FDirectoryPath)                            WwiseWindowsInstallationPath                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FFilePath)                                 WwiseMacInstallationPath                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      EnableAutomaticAssetSynchronization                         OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FString)                                   WaapiIPAddress                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(uint32_t)                                  WaapiPort                                                   OFFSET(get<uint32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bAutoConnectToWAAPI                                         OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      AutoSyncSelection                                           OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(bool)                                      SuppressWwiseProjectPathWarnings                            OFFSET(get<bool>, {0x6E, 1, 0, 0})
	DMember(bool)                                      SoundDataGenerationSkipLanguage                             OFFSET(get<bool>, {0x6F, 1, 0, 0})
	DMember(uint32_t)                                  MonitorPoolMemory                                           OFFSET(get<uint32_t>, {0x70, 4, 0, 0})
	DMember(uint32_t)                                  MonitorQueueMemory                                          OFFSET(get<uint32_t>, {0x74, 4, 0, 0})
	DMember(uint32_t)                                  CommunicationMemory                                         OFFSET(get<uint32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkPropertyToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ItemProperty                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x0430 (0x000120 - 0x000550)
class UAkSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x124, 16, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x138, 840, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x480, 1, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x484, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x494, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                OFFSET(get<bool>, {0x4A4, 1, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x4A5, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x4A8, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x4AC, 1, 0, 0})
	SMember(FAkPropertyToControl)                      ThePropertyToControl                                        OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FAkWwiseItemToControl)                     ItemToControl                                               OFFSET(getStruct<T>, {0x4C0, 64, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDropped                                               OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDropped                                           OFFSET(getStruct<T>, {0x520, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x11ee090] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x11ee010] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x11edf80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x11edef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x11ede60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x11eddd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0x11edd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0x11edc90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	// float GetValue();                                                                                                        // [0x11edb90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	// FString GetAkSliderItemProperty();                                                                                       // [0x11edb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	// FGuid GetAkSliderItemId();                                                                                               // [0x11edb00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0018 (0x000310 - 0x000328)
class AAkSpatialAudioVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UAkSurfaceReflectorSetComponent*)    SurfaceReflectorSet                                         OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UAkLateReverbComponent*)             LateReverb                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UAkRoomComponent*)                   Room                                                        OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0028 (0x0002B8 - 0x0002E0)
class AAkSpotReflector : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UAkAuxBus*)                          EarlyReflectionAuxBus                                       OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FString)                                   EarlyReflectionAuxBusName                                   OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	CMember(class UAkAcousticTexture*)                 AcousticTexture                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(float)                                     DistanceScalingFactor                                       OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     Level                                                       OFFSET(get<float>, {0x2DC, 4, 0, 0})
};

/// Class /Script/AkAudio.AkStadiaInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkStadiaInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
};

/// Class /Script/AkAudio.AkQuailInitializationSettings
/// Size: 0x0000 (0x000100 - 0x000100)
class UAkQuailInitializationSettings : public UAkStadiaInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/AkAudio.AkStadiaPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkStadiaPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkQuailPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkQuailPlatformInfo : public UAkStadiaPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkStateValue : public UAkGroupValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AkAudio.AkPoly
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkPoly : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAkAcousticTexture*)                 Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Occlusion                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      EnableSurface                                               OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bEnableSurfaceReflectors                                    OFFSET(get<bool>, {0x268, 1, 1, 0})
	CMember(TArray<FAkPoly>)                           AcousticPolys                                               OFFSET(get<T>, {0x270, 16, 0, 0})
	DMember(bool)                                      bEnableDiffraction                                          OFFSET(get<bool>, {0x280, 1, 1, 0})
	DMember(bool)                                      bEnableDiffractionOnBoundaryEdges                           OFFSET(get<bool>, {0x280, 1, 1, 1})
	CMember(class AActor*)                             AssociatedRoom                                              OFFSET(get<T>, {0x288, 8, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// void UpdateSurfaceReflectorSet();                                                                                        // [0x11ee110] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// void SendSurfaceReflectorSet();                                                                                          // [0x11edc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// void RemoveSurfaceReflectorSet();                                                                                        // [0x11edc50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0008 (0x000020 - 0x000028)
class FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EAkCommSystem)                             CommunicationSystem                                         OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Class /Script/AkAudio.AkSwitchInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkSwitchInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithCommSelection) CommunicationSettings                                       OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC8, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkSwitchPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkSwitchValue : public UAkGroupValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0000 (0x000048 - 0x000048)
class UAkTrigger : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x00E0 (0x000030 - 0x000110)
class UAkTVOSInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkAudioSession)                           AudioSession                                                OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettings)         AdvancedSettings                                            OFFSET(getStruct<T>, {0xD8, 52, 0, 0})
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiCalls.Unsubscribe
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                        // [0x11f42a0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SubscribeToWaapi
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0x11f4000] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                                // [0x11f3f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& Callback);                                                    // [0x11f3100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& Callback);                                                   // [0x11f3050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                         // [0x11f2fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                                // [0x11f2380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                            // [0x11f22b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.CallWaapi
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);    // [0x11f1e30] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0000 (0x000030 - 0x000030)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                            // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                        // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiJsonManager.SetStringField
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);         // [0x11f3d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0x11f3a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);           // [0x11f3850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);              // [0x11f3650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0x11f3420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0x11f31b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetStringField
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                        // [0x11f2e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                             // [0x11f2ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0x11f2970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0x11f2810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                             // [0x11f26b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                      // [0x11f2470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                             // [0x11f2180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                         // [0x11f2060] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                                 // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                             // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  AudioAPI                                                    OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      GlobalFocus                                                 OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x3D, 1, 0, 0})
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkWindowsInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkWindowsAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC8, 64, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/AkAudio.AkWinGDKAdvancedInitializationSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  AudioAPI                                                    OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      GlobalFocus                                                 OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x3D, 1, 0, 0})
};

/// Class /Script/AkAudio.AkWinGDKInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkWinGDKInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkWinGDKAdvancedInitializationSettings)   AdvancedSettings                                            OFFSET(getStruct<T>, {0xC8, 64, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWinAnvilInitializationSettings
/// Size: 0x0000 (0x000108 - 0x000108)
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/AkAudio.AkWinGDKPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkWinAnvilPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0040 (0x000120 - 0x000160)
class UAkWwiseTree : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDragged                                               OFFSET(getStruct<T>, {0x130, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x11f3c90] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	// FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0x11f2d00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x11f2c80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0060 (0x000120 - 0x000180)
class UAkWwiseTreeSelector : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDragged                                               OFFSET(getStruct<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkXboxOneGDKApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkXboxOneGDKApuHeapInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  CachedSize                                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NonCachedSize                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkXboxOneGDKAdvancedInitializationSettings
/// Size: 0x0004 (0x000038 - 0x00003C)
class FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(uint16_t)                                  MaximumNumberOfXMAVoices                                    OFFSET(get<uint16_t>, {0x38, 2, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x3A, 1, 0, 0})
};

/// Class /Script/AkAudio.AkXboxOneGDKInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkXboxOneGDKInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x38, 96, 0, 0})
	SMember(FAkXboxOneGDKApuHeapInitializationSettings) ApuHeapSettings                                            OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkXboxOneGDKAdvancedInitializationSettings) AdvancedSettings                                          OFFSET(getStruct<T>, {0xC8, 60, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOneAnvilInitializationSettings
/// Size: 0x0000 (0x000108 - 0x000108)
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/AkAudio.AkXboxOneGDKPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkXboxOneAnvilPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/AkAudio.AkXboxOneApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkXboxOneApuHeapInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  CachedSize                                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NonCachedSize                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkXboxOneAdvancedInitializationSettings
/// Size: 0x0004 (0x000038 - 0x00003C)
class FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(uint16_t)                                  MaximumNumberOfXMAVoices                                    OFFSET(get<uint16_t>, {0x38, 2, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x3A, 1, 0, 0})
};

/// Class /Script/AkAudio.AkXboxOneInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkXboxOneInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x38, 96, 0, 0})
	SMember(FAkXboxOneApuHeapInitializationSettings)   ApuHeapSettings                                             OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkXboxOneAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC8, 60, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOnePlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/AkAudio.AkXSXApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkXSXApuHeapInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  CachedSize                                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NonCachedSize                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkXSXAdvancedInitializationSettings
/// Size: 0x0004 (0x000038 - 0x00003C)
class FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(uint16_t)                                  MaximumNumberOfXMAVoices                                    OFFSET(get<uint16_t>, {0x38, 2, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x3A, 1, 0, 0})
};

/// Class /Script/AkAudio.AkXSXInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkXSXInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x38, 96, 0, 0})
	SMember(FAkXSXApuHeapInitializationSettings)       ApuHeapSettings                                             OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FAkXSXAdvancedInitializationSettings)      AdvancedSettings                                            OFFSET(getStruct<T>, {0xC8, 60, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMPXInitializationSettings
/// Size: 0x0000 (0x000108 - 0x000108)
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Struct /Script/AkAudio.AkAudioEventTrackKey
/// Size: 0x0020 (0x000000 - 0x000020)
class FAkAudioEventTrackKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class UAkAudioEvent*)                      AkAudioEvent                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/AkAudio.InterpTrackAkAudioEvent
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FAkAudioEventTrackKey>)             Events                                                      OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bContinueEventOnMatineeEnd                                  OFFSET(get<bool>, {0xA8, 1, 1, 0})
};

/// Class /Script/AkAudio.InterpTrackAkAudioRTPC
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   Param                                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bPlayOnReverse                                              OFFSET(get<bool>, {0xA8, 1, 1, 0})
	DMember(bool)                                      bContinueRTPCOnMatineeEnd                                   OFFSET(get<bool>, {0xA8, 1, 1, 1})
};

/// Class /Script/AkAudio.InterpTrackInstAkAudioEvent
/// Size: 0x0008 (0x000030 - 0x000038)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     LastUpdatePosition                                          OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/AkAudio.InterpTrackInstAkAudioRTPC
/// Size: 0x0008 (0x000030 - 0x000038)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     LastUpdatePosition                                          OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x00E8 (0x0000F0 - 0x0001D8)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(class UAkAudioEvent*)                      Event                                                       OFFSET(get<T>, {0x130, 8, 0, 0})
	DMember(bool)                                      RetriggerEvent                                              OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(int32_t)                                   ScrubTailLengthMs                                           OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(bool)                                      StopAtSectionEnd                                            OFFSET(get<bool>, {0x140, 1, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	DMember(float)                                     MaxSourceDuration                                           OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FString)                                   MaxDurationSourceID                                         OFFSET(getStruct<T>, {0x180, 16, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bIsAMasterTrack                                             OFFSET(get<bool>, {0xA8, 1, 1, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneTangentDataSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ArriveTangent                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentWeightMode>)  TangentWeightMode                                           OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     ArriveTangentWeight                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LeaveTangentWeight                                          OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (0x000000 - 0x00001C)
class FMovieSceneFloatValueSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ERichCurveInterpMode>)         InterpMode                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentMode>)        TangentMode                                                 OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FMovieSceneTangentDataSerializationHelper) Tangent                                                     OFFSET(getStruct<T>, {0x8, 20, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneFloatChannelSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PreInfinityExtrap                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PostInfinityExtrap                                          OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<int32_t>)                           Times                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatValueSerializationHelper>) Values                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x0168 (0x0000F0 - 0x000258)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(class UAkRtpc*)                            RTPC                                                        OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FRichCurve)                                FloatCurve                                                  OFFSET(getStruct<T>, {0x108, 128, 0, 0})
	SMember(FMovieSceneFloatChannelSerializationHelper) FloatChannelSerializationHelper                            OFFSET(getStruct<T>, {0x188, 48, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RTPCChannel                                                 OFFSET(getStruct<T>, {0x1B8, 160, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Completed                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // [0x11f6990] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x11f6950] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0050 (0x000038 - 0x000088)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  Completed                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x11f6c20] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x11f6970] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (0x000000 - 0x000010)
class FAKWaapiJsonObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkWaapiSubscriptionId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/AkAudio.AkAmbSoundCheckpointRecord
/// Size: 0x0001 (0x000000 - 0x000001)
class FAkAmbSoundCheckpointRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bCurrentlyPlaying                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FAkExternalSourceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ExternalSrcName                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(AkCodecId)                                 CodecID                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(class UAkExternalMediaAsset*)              ExternalSourceAsset                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      IsStreamed                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (0x000000 - 0x000002)
class FAkMidiEventBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EAkMidiEventType)                          Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      Chan                                                        OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0001 (0x000002 - 0x000003)
class FAkMidiProgramChange : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(char)                                      ProgramNum                                                  OFFSET(get<char>, {0x2, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0001 (0x000002 - 0x000003)
class FAkMidiChannelAftertouch : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x2, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiNoteAftertouch : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Note                                                        OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0006 (0x000002 - 0x000008)
class FAkMidiPitchBend : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(char)                                      ValueLsb                                                    OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      ValueMsb                                                    OFFSET(get<char>, {0x3, 1, 0, 0})
	DMember(int32_t)                                   FullValue                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiCc : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EAkMidiCcValues)                           Cc                                                          OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiNoteOnOff : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Note                                                        OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Velocity                                                    OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiGeneric : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Param1                                                      OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Param2                                                      OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FAkChannelMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ChannelMask                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkWaapiFieldNames : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   FieldName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkWaapiUri : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Uri                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMovieSceneAkAudioEventSection*)     Section                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMovieSceneAkAudioRTPCSection*)      Section                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x13
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x58
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x02
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x07
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x04
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x03
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x03
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x10
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__AAC                                                                   = 10,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x97
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x11
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x05
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x11
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x05
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x03
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x16
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x22
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_LFE                                                   = 1,
	AkChannelConfiguration__Ak_1                                                     = 2,
	AkChannelConfiguration__Ak_2                                                     = 3,
	AkChannelConfiguration__Ak_25                                                    = 4,
	AkChannelConfiguration__Ak_3                                                     = 5,
	AkChannelConfiguration__Ak_37                                                    = 6,
	AkChannelConfiguration__Ak_4                                                     = 7,
	AkChannelConfiguration__Ak_49                                                    = 8,
	AkChannelConfiguration__Ak_5                                                     = 9,
	AkChannelConfiguration__Ak_511                                                   = 10,
	AkChannelConfiguration__Ak_7                                                     = 11,
	AkChannelConfiguration__Ak_5_1                                                   = 12,
	AkChannelConfiguration__Ak_7_1                                                   = 13,
	AkChannelConfiguration__Ak_7_115                                                 = 14,
	AkChannelConfiguration__Ak_Auro_9                                                = 15,
	AkChannelConfiguration__Ak_Auro_10                                               = 16,
	AkChannelConfiguration__Ak_Auro_11                                               = 17,
	AkChannelConfiguration__Ak_Auro_13                                               = 18,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 19,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 20,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 21
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x02
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x02
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x02
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkHololensAudioAPI
/// Size: 0x03
enum class EAkHololensAudioAPI : uint8_t
{
	EAkHololensAudioAPI__Wasapi                                                      = 0,
	EAkHololensAudioAPI__XAudio2                                                     = 1,
	EAkHololensAudioAPI__DirectSound                                                 = 2
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x02
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x16
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x03
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkDiffractionFlags
/// Size: 0x03
enum class EAkDiffractionFlags : uint8_t
{
	EAkDiffractionFlags__UseBuiltInParam                                             = 0,
	EAkDiffractionFlags__UseObstruction                                              = 1,
	EAkDiffractionFlags__CalcEmitterVirtualPosition                                  = 3
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x02
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkWindowsAudioAPI
/// Size: 0x03
enum class EAkWindowsAudioAPI : uint8_t
{
	EAkWindowsAudioAPI__Wasapi                                                       = 0,
	EAkWindowsAudioAPI__XAudio2                                                      = 1,
	EAkWindowsAudioAPI__DirectSound                                                  = 2
};

/// Enum /Script/AkAudio.EAkWinGDKAudioAPI
/// Size: 0x03
enum class EAkWinGDKAudioAPI : uint8_t
{
	EAkWinGDKAudioAPI__Wasapi                                                        = 0,
	EAkWinGDKAudioAPI__XAudio2                                                       = 1,
	EAkWinGDKAudioAPI__DirectSound                                                   = 2
};

