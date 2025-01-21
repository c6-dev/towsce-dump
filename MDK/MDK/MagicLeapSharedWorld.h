
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMagicLeapSharedWorldSharedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGuid>)                             PinIDs                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x00D0 (0x0003A8 - 0x000478)
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FMagicLeapSharedWorldSharedData)           SharedWorldData                                             OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNewLocalDataFromClients                                   OFFSET(getStruct<T>, {0x3B8, 16, 0, 0})
	DMember(float)                                     PinSelectionConfidenceThreshold                             OFFSET(get<float>, {0x3C8, 4, 0, 0})
	CMember(class AMagicLeapSharedWorldPlayerController*) ChosenOne                                                OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	// bool SendSharedWorldDataToClients();                                                                                     // [0xfe2e50] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	// void SelectChosenOne();                                                                                                  // [0xfe2e30] BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	// void MagicLeapOnNewLocalDataFromClients__DelegateSignature();                                                            // [0x1c5deb0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	// void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);                                      // [0xfe2d10] BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (0x000000 - 0x000010)
class FMagicLeapSharedWorldAlignmentTransforms : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        AlignmentTransforms                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0040 (0x000328 - 0x000368)
class AMagicLeapSharedWorldGameState : public AGameState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FMagicLeapSharedWorldSharedData)           SharedWorldData                                             OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FMagicLeapSharedWorldAlignmentTransforms)  AlignmentTransforms                                         OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSharedWorldDataUpdated                                    OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAlignmentTransformsUpdated                                OFFSET(getStruct<T>, {0x358, 16, 0, 0})


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	// void OnReplicate_SharedWorldData();                                                                                      // [0xfe2e10] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	// void OnReplicate_AlignmentTransforms();                                                                                  // [0xfe2df0] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	// void MagicLeapSharedWorldEvent__DelegateSignature();                                                                     // [0x1c5deb0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	// FTransform CalculateXRCameraRootTransform();                                                                             // [0xfe2bc0] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0018 (0x000628 - 0x000640)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	// void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);                                  // [0xfe2f20] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	// void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);                       // [0xfe2e80] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	// bool IsChosenOne();                                                                                                      // [0xfe2dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	// void ClientSetChosenOne(bool bChosenOne);                                                                                // [0xfe2c80] Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	// void ClientMarkReadyForSendingLocalData();                                                                               // [0xfe2c60] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	// bool CanSendLocalDataToServer();                                                                                         // [0xfe2c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (0x000000 - 0x000024)
class FMagicLeapSharedWorldPinData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FGuid)                                     PinId                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMagicLeapARPinState)                      PinState                                                    OFFSET(getStruct<T>, {0x10, 20, 0, 0})
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMagicLeapSharedWorldLocalData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMagicLeapSharedWorldPinData>)      LocalPins                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

