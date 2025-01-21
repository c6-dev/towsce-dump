
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (0x000000 - 0x000028)
class FAutoCompleteCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Command                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Desc                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UConsoleSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   MaxScrollbackSize                                           OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FAutoCompleteCommand>)              ManualAutoCompleteList                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FString>)                           AutoCompleteMapPaths                                        OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(float)                                     BackgroundOpacityPercentage                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bOrderTopToBottom                                           OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bDisplayHelpInAutoComplete                                  OFFSET(get<bool>, {0x5D, 1, 0, 0})
	SMember(FColor)                                    InputColor                                                  OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	SMember(FColor)                                    HistoryColor                                                OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteCommandColor                                    OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteCVarColor                                       OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteFadedColor                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameModeName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSoftClassPath)                            GameMode                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UGameMapsSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FString)                                   LocalMapOptions                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FSoftObjectPath)                           TransitionMap                                               OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bUseSplitscreen                                             OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<ETwoPlayerSplitScreenType>)    TwoPlayerSplitscreenLayout                                  OFFSET(get<T>, {0x59, 1, 0, 0})
	CMember(TEnumAsByte<EThreePlayerSplitScreenType>)  ThreePlayerSplitscreenLayout                                OFFSET(get<T>, {0x5A, 1, 0, 0})
	CMember(EFourPlayerSplitScreenType)                FourPlayerSplitscreenLayout                                 OFFSET(get<T>, {0x5B, 1, 0, 0})
	DMember(bool)                                      bOffsetPlayerGamepadIds                                     OFFSET(get<bool>, {0x5C, 1, 0, 0})
	SMember(FSoftClassPath)                            GameInstanceClass                                           OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FSoftObjectPath)                           GameDefaultMap                                              OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FSoftObjectPath)                           ServerDefaultMap                                            OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FSoftClassPath)                            GlobalDefaultGameMode                                       OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FSoftClassPath)                            GlobalDefaultServerGameMode                                 OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	CMember(TArray<FGameModeName>)                     GameModeMapPrefixes                                         OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FGameModeName>)                     GameModeClassAliases                                        OFFSET(get<T>, {0xE8, 16, 0, 0})


	/// Functions
	// Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	// void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);                                                            // [0x24dd230] Final|Native|Public|BlueprintCallable 
	// Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	// bool GetSkipAssigningGamepadToPlayer1();                                                                                 // [0x24dd200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings
	// class UGameMapsSettings* GetGameMapsSettings();                                                                          // [0x24dd1d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UGameNetworkManagerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   MinDynamicBandwidth                                         OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MaxDynamicBandwidth                                         OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   TotalNetBandwidth                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   BadPingThreshold                                            OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bIsStandbyCheckingEnabled                                   OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(float)                                     StandbyRxCheatTime                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     StandbyTxCheatTime                                          OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PercentMissingForRxStandby                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     PercentMissingForTxStandby                                  OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     PercentForBadPing                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     JoinInProgressStandbyWaitTime                               OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameSessionSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   MaxSpectators                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MaxPlayers                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bRequiresPushToTalk                                         OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UGeneralEngineSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x00E8 (0x000030 - 0x000118)
class UGeneralProjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FString)                                   CompanyName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   CompanyDistinguishedName                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   CopyrightNotice                                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   Homepage                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   LicensingTerms                                              OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   PrivacyPolicy                                               OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FGuid)                                     ProjectID                                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   ProjectName                                                 OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   ProjectVersion                                              OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FString)                                   SupportContact                                              OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FText)                                     ProjectDisplayedTitle                                       OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	SMember(FText)                                     ProjectDebugTitleInfo                                       OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
	DMember(bool)                                      bShouldWindowPreserveAspectRatio                            OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bUseBorderlessWindow                                        OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bStartInVR                                                  OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(bool)                                      bAllowWindowResize                                          OFFSET(get<bool>, {0x113, 1, 0, 0})
	DMember(bool)                                      bAllowClose                                                 OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(bool)                                      bAllowMaximize                                              OFFSET(get<bool>, {0x115, 1, 0, 0})
	DMember(bool)                                      bAllowMinimize                                              OFFSET(get<bool>, {0x116, 1, 0, 0})
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UHudSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bShowHUD                                                    OFFSET(get<bool>, {0x30, 1, 1, 0})
	CMember(TArray<FName>)                             DebugDisplay                                                OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/EngineSettings.VersionSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UVersionSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Configuration                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x02
enum class ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass                                                   = 0,
	ESubLevelStripMode__IsChildOf                                                    = 1
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x03
enum class EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid                                                 = 0,
	EFourPlayerSplitScreenType__Vertical                                             = 1,
	EFourPlayerSplitScreenType__Horizontal                                           = 2
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x04
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop                                            = 0,
	EThreePlayerSplitScreenType__FavorBottom                                         = 1,
	EThreePlayerSplitScreenType__Vertical                                            = 2,
	EThreePlayerSplitScreenType__Horizontal                                          = 3
};

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x02
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal                                            = 0,
	ETwoPlayerSplitScreenType__Vertical                                              = 1
};

