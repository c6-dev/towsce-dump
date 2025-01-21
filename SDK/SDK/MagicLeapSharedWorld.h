
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

#pragma pack(push, 0x1)

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMagicLeapSharedWorldSharedData
{ 
	TArray<FGuid>                                      PinIDs;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x0478 (1144 bytes) (0x0003A8 - 0x000478) align 8 MaxSize: 0x0478
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,837) /* FMulticastInlineDelegate */ __um(OnNewLocalDataFromClients);                          // 0x03B8   (0x0010)  
	float                                              PinSelectionConfidenceThreshold;                            // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x03CC   (0x00A4)  MISSED
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                  // 0x0470   (0x0008)  


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
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{ 
	TArray<FTransform>                                 AlignmentTransforms;                                        // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0368 (872 bytes) (0x000328 - 0x000368) align 8 MaxSize: 0x0368
class AMagicLeapSharedWorldGameState : public AGameState
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0328   (0x0010)  
	FMagicLeapSharedWorldAlignmentTransforms           AlignmentTransforms;                                        // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,838) /* FMulticastInlineDelegate */ __um(OnSharedWorldDataUpdated);                           // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,839) /* FMulticastInlineDelegate */ __um(OnAlignmentTransformsUpdated);                       // 0x0358   (0x0010)  


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
/// Size: 0x0640 (1600 bytes) (0x000628 - 0x000640) align 8 MaxSize: 0x0640
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0628   (0x0018)  MISSED


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
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FMagicLeapSharedWorldPinData
{ 
	FGuid                                              PinId;                                                      // 0x0000   (0x0010)  
	FMagicLeapARPinState                               PinState;                                                   // 0x0010   (0x0014)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMagicLeapSharedWorldLocalData
{ 
	TArray<FMagicLeapSharedWorldPinData>               LocalPins;                                                  // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FMagicLeapSharedWorldSharedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameMode) == 0x0478); // 1144 bytes (0x0003A8 - 0x000478)
static_assert(sizeof(FMagicLeapSharedWorldAlignmentTransforms) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameState) == 0x0368); // 872 bytes (0x000328 - 0x000368)
static_assert(sizeof(AMagicLeapSharedWorldPlayerController) == 0x0640); // 1600 bytes (0x000628 - 0x000640)
static_assert(sizeof(FMagicLeapSharedWorldPinData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMagicLeapSharedWorldLocalData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FMagicLeapSharedWorldSharedData, PinIDs) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, SharedWorldData) == 0x03A8);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, ChosenOne) == 0x0470);
static_assert(offsetof(FMagicLeapSharedWorldAlignmentTransforms, AlignmentTransforms) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameState, SharedWorldData) == 0x0328);
static_assert(offsetof(AMagicLeapSharedWorldGameState, AlignmentTransforms) == 0x0338);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinId) == 0x0000);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinState) == 0x0010);
static_assert(offsetof(FMagicLeapSharedWorldLocalData, LocalPins) == 0x0000);
