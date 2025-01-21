
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapARPin.MagicLeapARPinComponent
/// Size: 0x01B8 (0x000268 - 0x000420)
class UMagicLeapARPinComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FString)                                   ObjectUID                                                   OFFSET(getStruct<T>, {0x268, 16, 0, 0})
	DMember(int32_t)                                   UserIndex                                                   OFFSET(get<int32_t>, {0x278, 4, 0, 0})
	CMember(EMagicLeapAutoPinType)                     AutoPinType                                                 OFFSET(get<T>, {0x27C, 1, 0, 0})
	DMember(bool)                                      bShouldPinActor                                             OFFSET(get<bool>, {0x27D, 1, 0, 0})
	CMember(class UClass*)                             PinDataClass                                                OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(TSet<EMagicLeapARPinType>)                 SearchPinTypes                                              OFFSET(get<T>, {0x288, 80, 0, 0})
	CMember(class USphereComponent*)                   SearchVolume                                                OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPersistentEntityPinned                                    OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPersistentEntityPinLost                                   OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPinDataLoadAttemptCompleted                               OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FGuid)                                     PinnedCFUID                                                 OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	CMember(class USceneComponent*)                    PinnedSceneComponent                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UMagicLeapARPinSaveGame*)            PinData                                                     OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.UnPin
	// void UnPin();                                                                                                            // [0xfde240] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
	// class UMagicLeapARPinSaveGame* TryGetPinData(class UClass* InPinDataClass, bool& OutPinDataValid);                       // [0xfde020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
	// bool PinToRestoredOrSyncedID();                                                                                          // [0xfddcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToID
	// bool PinToID(FGuid& PinId);                                                                                              // [0xfddc10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
	// void PinToBestFit();                                                                                                     // [0xfddbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	// bool PinSceneComponent(class USceneComponent* ComponentToPin);                                                           // [0xfddb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	// bool PinRestoredOrSynced();                                                                                              // [0xfddb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinActor
	// bool PinActor(class AActor* ActorToPin);                                                                                 // [0xfdda80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	// void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);                                                  // [0x1c5deb0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	// void PersistentEntityPinLost__DelegateSignature();                                                                       // [0x1c5deb0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
	// void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);                                      // [0x1c5deb0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	// bool IsPinned();                                                                                                         // [0xfdd930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	// bool GetPinState(FMagicLeapARPinState& State);                                                                           // [0xfdd7d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	// bool GetPinnedPinID(FGuid& PinId);                                                                                       // [0xfdd880] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinData
	// class UMagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);                                                   // [0xfdd730] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
	// void AttemptPinDataRestorationAsync();                                                                                   // [0xfdccf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
	// bool AttemptPinDataRestoration();                                                                                        // [0xfdccc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
	// void UnBindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                        // [0xfde1a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
	// void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                               // [0xfde100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
	// EMagicLeapPassableWorldError SetGlobalQueryFilter(FMagicLeapARPinQuery& InGlobalFilter);                                 // [0xfddeb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
	// void SetContentBindingSaveGameUserIndex(int32_t UserIndex);                                                              // [0xfdde30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
	// EMagicLeapPassableWorldError QueryARPins(FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);                              // [0xfddcf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
	// bool ParseStringToARPinId(FString PinIdString, FGuid& ARPinId);                                                          // [0xfdd990] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
	// bool IsTrackerValid();                                                                                                   // [0xfdd960] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
	// EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count);                                                      // [0xfdd6a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
	// EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter);                            // [0xfdd5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
	// int32_t GetContentBindingSaveGameUserIndex();                                                                            // [0xfdd590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
	// EMagicLeapPassableWorldError GetClosestARPin(FVector& SearchPoint, FGuid& PinId);                                        // [0xfdd4a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
	// EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, TArray<FGuid>& Pins);                              // [0xfdd3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
	// FString GetARPinStateToString(FMagicLeapARPinState& State);                                                              // [0xfdd2d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
	// EMagicLeapPassableWorldError GetARPinState(FGuid& PinId, FMagicLeapARPinState& State);                                   // [0xfdd1d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
	// bool GetARPinPositionAndOrientation_TrackingSpace(FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment); // [0xfdd040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
	// bool GetARPinPositionAndOrientation(FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment); // [0xfdceb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
	// EMagicLeapPassableWorldError DestroyTracker();                                                                           // [0xfdce80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
	// EMagicLeapPassableWorldError CreateTracker();                                                                            // [0xfdce50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
	// void BindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                          // [0xfdcdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
	// void BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                                 // [0xfdcd10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
	// FString ARPinIdToString(FGuid& ARPinId);                                                                                 // [0xfdcbe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class AMagicLeapARPinInfoActorBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FGuid)                                     PinId                                                       OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	DMember(bool)                                      bVisibilityOverride                                         OFFSET(get<bool>, {0x2C8, 1, 0, 0})


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	// void OnUpdateARPinState();                                                                                               // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinRenderer
/// Size: 0x0068 (0x0002B8 - 0x000320)
class AMagicLeapARPinRenderer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	DMember(bool)                                      bInfoActorsVisibilityOverride                               OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	CMember(TMap<FGuid, class AMagicLeapARPinInfoActorBase*>) AllInfoActors                                        OFFSET(get<T>, {0x2C0, 80, 0, 0})
	CMember(class UClass*)                             ClassToSpawn                                                OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	// void SetVisibilityOverride(bool InVisibilityOverride);                                                                   // [0xfddf90] Final|Native|Private|BlueprintCallable 
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinState
/// Size: 0x0014 (0x000000 - 0x000014)
class FMagicLeapARPinState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Confidence                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ValidRadius                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RotationError                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TranslationError                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EMagicLeapARPinType)                       PinType                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UMagicLeapARPinSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     UpdateCheckFrequency                                        OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FMagicLeapARPinState)                      OnUpdatedEventTriggerDelta                                  OFFSET(getStruct<T>, {0x34, 20, 0, 0})
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UMagicLeapARPinSaveGame : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FGuid)                                     PinnedID                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FTransform)                                ComponentWorldTransform                                     OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                PinTransform                                                OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	DMember(bool)                                      bShouldPinActor                                             OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList
/// Size: 0x0050 (0x000000 - 0x000050)
class FMagicLeapARPinObjectIdList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TSet<FString>)                             ObjectIdList                                                OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings
/// Size: 0x0050 (0x000030 - 0x000080)
class UMagicLeapARPinContentBindings : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGuid, FMagicLeapARPinObjectIdList>)  AllContentBindings                                          OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinQuery
/// Size: 0x0068 (0x000000 - 0x000068)
class FMagicLeapARPinQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TSet<EMagicLeapARPinType>)                 Types                                                       OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(int32_t)                                   MaxResults                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	SMember(FVector)                                   TargetPoint                                                 OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bSorted                                                     OFFSET(get<bool>, {0x64, 1, 0, 0})
};

/// Enum /Script/MagicLeapARPin.EMagicLeapARPinType
/// Size: 0x03
enum class EMagicLeapARPinType : uint8_t
{
	EMagicLeapARPinType__SingleUserSingleSession                                     = 0,
	EMagicLeapARPinType__SingleUserMultiSession                                      = 1,
	EMagicLeapARPinType__MultiUserMultiSession                                       = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapAutoPinType
/// Size: 0x03
enum class EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration                                     = 0,
	EMagicLeapAutoPinType__Always                                                    = 1,
	EMagicLeapAutoPinType__Never                                                     = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapPassableWorldError
/// Size: 0x12
enum class EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None                                               = 0,
	EMagicLeapPassableWorldError__LowMapQuality                                      = 1,
	EMagicLeapPassableWorldError__UnableToLocalize                                   = 2,
	EMagicLeapPassableWorldError__Unavailable                                        = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied                                    = 4,
	EMagicLeapPassableWorldError__InvalidParam                                       = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure                                 = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending                            = 7,
	EMagicLeapPassableWorldError__StartupPending                                     = 8,
	EMagicLeapPassableWorldError__SharedWorldNotEnabled                              = 9,
	EMagicLeapPassableWorldError__NotImplemented                                     = 10,
	EMagicLeapPassableWorldError__PinNotFound                                        = 11
};

