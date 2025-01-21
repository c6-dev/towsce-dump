
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeapARPin.EMagicLeapARPinType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapARPinType : uint8_t
{
	EMagicLeapARPinType__SingleUserSingleSession                                     = 0,
	EMagicLeapARPinType__SingleUserMultiSession                                      = 1,
	EMagicLeapARPinType__MultiUserMultiSession                                       = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapAutoPinType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration                                     = 0,
	EMagicLeapAutoPinType__Always                                                    = 1,
	EMagicLeapAutoPinType__Never                                                     = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapPassableWorldError
/// Size: 0x01 (1 bytes)
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

/// Class /Script/MagicLeapARPin.MagicLeapARPinComponent
/// Size: 0x0420 (1056 bytes) (0x000268 - 0x000420) align 16 MaxSize: 0x0420
class UMagicLeapARPinComponent : public USceneComponent
{ 
public:
	FString                                            ObjectUID;                                                  // 0x0268   (0x0010)  
	int32_t                                            UserIndex;                                                  // 0x0278   (0x0004)  
	EMagicLeapAutoPinType                              AutoPinType;                                                // 0x027C   (0x0001)  
	bool                                               bShouldPinActor;                                            // 0x027D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x027E   (0x0002)  MISSED
	class UClass*                                      PinDataClass;                                               // 0x0280   (0x0008)  
	SDK_UNDEFINED(80,831) /* TSet<EMagicLeapARPinType> */ __um(SearchPinTypes);                                    // 0x0288   (0x0050)  
	class USphereComponent*                            SearchVolume;                                               // 0x02D8   (0x0008)  
	SDK_UNDEFINED(16,832) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinned);                           // 0x02E0   (0x0010)  
	SDK_UNDEFINED(16,833) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinLost);                          // 0x02F0   (0x0010)  
	SDK_UNDEFINED(16,834) /* FMulticastInlineDelegate */ __um(OnPinDataLoadAttemptCompleted);                      // 0x0300   (0x0010)  
	FGuid                                              PinnedCFUID;                                                // 0x0310   (0x0010)  
	class USceneComponent*                             PinnedSceneComponent;                                       // 0x0320   (0x0008)  
	class UMagicLeapARPinSaveGame*                     PinData;                                                    // 0x0328   (0x0008)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x0330   (0x00F0)  MISSED


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
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{ 
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
/// Size: 0x02D0 (720 bytes) (0x0002B8 - 0x0002D0) align 8 MaxSize: 0x02D0
class AMagicLeapARPinInfoActorBase : public AActor
{ 
public:
	FGuid                                              PinId;                                                      // 0x02B8   (0x0010)  
	bool                                               bVisibilityOverride;                                        // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	// void OnUpdateARPinState();                                                                                               // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinRenderer
/// Size: 0x0320 (800 bytes) (0x0002B8 - 0x000320) align 8 MaxSize: 0x0320
class AMagicLeapARPinRenderer : public AActor
{ 
public:
	bool                                               bInfoActorsVisibilityOverride;                              // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
	TMap<FGuid, class AMagicLeapARPinInfoActorBase*>   AllInfoActors;                                              // 0x02C0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	// void SetVisibilityOverride(bool InVisibilityOverride);                                                                   // [0xfddf90] Final|Native|Private|BlueprintCallable 
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMagicLeapARPinState
{ 
	float                                              Confidence;                                                 // 0x0000   (0x0004)  
	float                                              ValidRadius;                                                // 0x0004   (0x0004)  
	float                                              RotationError;                                              // 0x0008   (0x0004)  
	float                                              TranslationError;                                           // 0x000C   (0x0004)  
	EMagicLeapARPinType                                PinType;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSettings
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UMagicLeapARPinSettings : public UObject
{ 
public:
	float                                              UpdateCheckFrequency;                                       // 0x0030   (0x0004)  
	FMagicLeapARPinState                               OnUpdatedEventTriggerDelta;                                 // 0x0034   (0x0014)  
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 16 MaxSize: 0x00B0
class UMagicLeapARPinSaveGame : public USaveGame
{ 
public:
	FGuid                                              PinnedID;                                                   // 0x0030   (0x0010)  
	FTransform                                         ComponentWorldTransform;                                    // 0x0040   (0x0030)  
	FTransform                                         PinTransform;                                               // 0x0070   (0x0030)  
	bool                                               bShouldPinActor;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMagicLeapARPinObjectIdList
{ 
	SDK_UNDEFINED(80,835) /* TSet<FString> */          __um(ObjectIdList);                                         // 0x0000   (0x0050)  
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UMagicLeapARPinContentBindings : public USaveGame
{ 
public:
	TMap<FGuid, FMagicLeapARPinObjectIdList>           AllContentBindings;                                         // 0x0030   (0x0050)  
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinQuery
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMagicLeapARPinQuery
{ 
	SDK_UNDEFINED(80,836) /* TSet<EMagicLeapARPinType> */ __um(Types);                                             // 0x0000   (0x0050)  
	int32_t                                            MaxResults;                                                 // 0x0050   (0x0004)  
	FVector                                            TargetPoint;                                                // 0x0054   (0x000C)  
	float                                              Radius;                                                     // 0x0060   (0x0004)  
	bool                                               bSorted;                                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapARPinComponent) == 0x0420); // 1056 bytes (0x000268 - 0x000420)
static_assert(sizeof(UMagicLeapARPinFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(AMagicLeapARPinInfoActorBase) == 0x02D0); // 720 bytes (0x0002B8 - 0x0002D0)
static_assert(sizeof(AMagicLeapARPinRenderer) == 0x0320); // 800 bytes (0x0002B8 - 0x000320)
static_assert(sizeof(FMagicLeapARPinState) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UMagicLeapARPinSettings) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UMagicLeapARPinSaveGame) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(FMagicLeapARPinObjectIdList) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UMagicLeapARPinContentBindings) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FMagicLeapARPinQuery) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(UMagicLeapARPinComponent, ObjectUID) == 0x0268);
static_assert(offsetof(UMagicLeapARPinComponent, AutoPinType) == 0x027C);
static_assert(offsetof(UMagicLeapARPinComponent, PinDataClass) == 0x0280);
static_assert(offsetof(UMagicLeapARPinComponent, SearchVolume) == 0x02D8);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedCFUID) == 0x0310);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedSceneComponent) == 0x0320);
static_assert(offsetof(UMagicLeapARPinComponent, PinData) == 0x0328);
static_assert(offsetof(AMagicLeapARPinInfoActorBase, PinId) == 0x02B8);
static_assert(offsetof(AMagicLeapARPinRenderer, AllInfoActors) == 0x02C0);
static_assert(offsetof(AMagicLeapARPinRenderer, ClassToSpawn) == 0x0318);
static_assert(offsetof(FMagicLeapARPinState, PinType) == 0x0010);
static_assert(offsetof(UMagicLeapARPinSettings, OnUpdatedEventTriggerDelta) == 0x0034);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinnedID) == 0x0030);
static_assert(offsetof(UMagicLeapARPinSaveGame, ComponentWorldTransform) == 0x0040);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinTransform) == 0x0070);
static_assert(offsetof(UMagicLeapARPinContentBindings, AllContentBindings) == 0x0030);
static_assert(offsetof(FMagicLeapARPinQuery, TargetPoint) == 0x0054);
