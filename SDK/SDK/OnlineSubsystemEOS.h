
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UEOSArtifactSettings : public UDataAsset
{ 
public:
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FArtifactSettings
{ 
	FString                                            ArtifactName;                                               // 0x0000   (0x0010)  
	FString                                            ClientId;                                                   // 0x0010   (0x0010)  
	FString                                            ClientSecret;                                               // 0x0020   (0x0010)  
	FString                                            ProductId;                                                  // 0x0030   (0x0010)  
	FString                                            SandboxId;                                                  // 0x0040   (0x0010)  
	FString                                            DeploymentId;                                               // 0x0050   (0x0010)  
	FString                                            EncryptionKey;                                              // 0x0060   (0x0010)  
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UEOSSettings : public UObject
{ 
public:
	FString                                            CacheDir;                                                   // 0x0030   (0x0010)  
	FString                                            DefaultArtifactName;                                        // 0x0040   (0x0010)  
	int32_t                                            TickBudgetInMilliseconds;                                   // 0x0050   (0x0004)  
	bool                                               bEnableOverlay;                                             // 0x0054   (0x0001)  
	bool                                               bEnableSocialOverlay;                                       // 0x0055   (0x0001)  
	bool                                               bShouldEnforceBeingLaunchedByEGS;                           // 0x0056   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0057   (0x0001)  MISSED
	TArray<FString>                                    TitleStorageTags;                                           // 0x0058   (0x0010)  
	int32_t                                            TitleStorageReadChunkLength;                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FArtifactSettings>                          Artifacts;                                                  // 0x0070   (0x0010)  
	bool                                               bUseEAS;                                                    // 0x0080   (0x0001)  
	bool                                               bUseEOSConnect;                                             // 0x0081   (0x0001)  
	bool                                               bMirrorStatsToEOS;                                          // 0x0082   (0x0001)  
	bool                                               bMirrorAchievementsToEOS;                                   // 0x0083   (0x0001)  
	bool                                               bUseEOSSessions;                                            // 0x0084   (0x0001)  
	bool                                               bMirrorPresenceToEAS;                                       // 0x0085   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x0086   (0x0002)  MISSED
};

/// Class /Script/OnlineSubsystemEOS.NetConnectionEOS
/// Size: 0x1C58 (7256 bytes) (0x001C50 - 0x001C58) align 8 MaxSize: 0x1C58
class UNetConnectionEOS : public UIpConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x1C50   (0x0008)  MISSED
};

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x07E0 (2016 bytes) (0x0007D8 - 0x0007E0) align 8 MaxSize: 0x07E0
class UNetDriverEOS : public UIpNetDriver
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x07D8   (0x0001)  
	bool                                               bIsUsingP2PSockets;                                         // 0x07D9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x07DA   (0x0006)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UEOSArtifactSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FArtifactSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UEOSSettings) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UNetConnectionEOS) == 0x1C58); // 7256 bytes (0x001C50 - 0x001C58)
static_assert(sizeof(UNetDriverEOS) == 0x07E0); // 2016 bytes (0x0007D8 - 0x0007E0)
static_assert(offsetof(FArtifactSettings, ArtifactName) == 0x0000);
static_assert(offsetof(FArtifactSettings, ClientId) == 0x0010);
static_assert(offsetof(FArtifactSettings, ClientSecret) == 0x0020);
static_assert(offsetof(FArtifactSettings, ProductId) == 0x0030);
static_assert(offsetof(FArtifactSettings, SandboxId) == 0x0040);
static_assert(offsetof(FArtifactSettings, DeploymentId) == 0x0050);
static_assert(offsetof(FArtifactSettings, EncryptionKey) == 0x0060);
static_assert(offsetof(UEOSSettings, CacheDir) == 0x0030);
static_assert(offsetof(UEOSSettings, DefaultArtifactName) == 0x0040);
static_assert(offsetof(UEOSSettings, TitleStorageTags) == 0x0058);
static_assert(offsetof(UEOSSettings, Artifacts) == 0x0070);
