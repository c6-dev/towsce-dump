
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UEOSArtifactSettings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FArtifactSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ArtifactName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ClientSecret                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   SandboxId                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   DeploymentId                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   EncryptionKey                                               OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UEOSSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   CacheDir                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   DefaultArtifactName                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   TickBudgetInMilliseconds                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(bool)                                      bEnableOverlay                                              OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(bool)                                      bEnableSocialOverlay                                        OFFSET(get<bool>, {0x55, 1, 0, 0})
	DMember(bool)                                      bShouldEnforceBeingLaunchedByEGS                            OFFSET(get<bool>, {0x56, 1, 0, 0})
	CMember(TArray<FString>)                           TitleStorageTags                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   TitleStorageReadChunkLength                                 OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(TArray<FArtifactSettings>)                 Artifacts                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bUseEAS                                                     OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bUseEOSConnect                                              OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bMirrorStatsToEOS                                           OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(bool)                                      bMirrorAchievementsToEOS                                    OFFSET(get<bool>, {0x83, 1, 0, 0})
	DMember(bool)                                      bUseEOSSessions                                             OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(bool)                                      bMirrorPresenceToEAS                                        OFFSET(get<bool>, {0x85, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemEOS.NetConnectionEOS
/// Size: 0x0008 (0x001C50 - 0x001C58)
class UNetConnectionEOS : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7256;

public:
};

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x0008 (0x0007D8 - 0x0007E0)
class UNetDriverEOS : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	DMember(bool)                                      bIsPassthrough                                              OFFSET(get<bool>, {0x7D8, 1, 0, 0})
	DMember(bool)                                      bIsUsingP2PSockets                                          OFFSET(get<bool>, {0x7D9, 1, 0, 0})
};

