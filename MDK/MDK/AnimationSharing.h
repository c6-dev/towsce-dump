
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x0028 (0x0002C8 - 0x0002F0)
class UAnimSharingStateInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UAnimSequence*)                      AnimationToPlay                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(float)                                     PermutationTimeOffset                                       OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(bool)                                      bStateBool                                                  OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	CMember(class UAnimSharingInstance*)               Instance                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	// void GetInstancedActors(TArray<AActor*>& Actors);                                                                        // [0xeb6f70] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TWeakObjectPtr<class USkeletalMeshComponent*>) FromComponent                                           OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TWeakObjectPtr<class USkeletalMeshComponent*>) ToComponent                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bBlendBool                                                  OFFSET(get<bool>, {0x2DC, 1, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TWeakObjectPtr<class USkeletalMeshComponent*>) BaseComponent                                           OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAnimSequence*>)      AdditiveAnimation                                           OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bStateBool                                                  OFFSET(get<bool>, {0x2DC, 1, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x00F0 (0x000030 - 0x000120)
class UAnimSharingInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<class AActor*>)                     RegisteredActors                                            OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UAnimationSharingStateProcessor*)    StateProcessor                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TArray<class UAnimSequence*>)              UsedAnimationSequences                                      OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(class UEnum*)                              StateEnum                                                   OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class AActor*)                             SharingActor                                                OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UAnimationSharingManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class USkeleton*>)                  Skeletons                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UAnimSharingInstance*>)       PerSkeletonData                                             OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	// void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);                               // [0xeb71e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	// class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);                           // [0xeb6eb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	// bool CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);              // [0xeb6de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	// bool AnimationSharingEnabled();                                                                                          // [0xeb6db0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (0x000000 - 0x000018)
class FAnimationSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAnimSequence*)                      AnimSequence                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             AnimBlueprint                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FPerPlatformInt)                           NumRandomizedInstances                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FPerPlatformBool)                          Enabled                                                     OFFSET(getStruct<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FAnimationStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(char)                                      State                                                       OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(TArray<FAnimationSetup>)                   AnimationSetups                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bOnDemand                                                   OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bAdditive                                                   OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bReturnToPreviousState                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bSetNextState                                               OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(char)                                      NextState                                                   OFFSET(get<char>, {0x22, 1, 0, 0})
	SMember(FPerPlatformInt)                           MaximumNumberOfConcurrentInstances                          OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(float)                                     WiggleTimePercentage                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bRequiresCurves                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (0x000000 - 0x000038)
class FPerSkeletonAnimationSharingSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             BlendAnimBlueprint                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UClass*)                             AdditiveAnimBlueprint                                       OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UClass*)                             StateProcessorClass                                         OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<FAnimationStateEntry>)              AnimationStates                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimationSharingScalability : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformBool)                          UseBlendTransitions                                         OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FPerPlatformFloat)                         BlendSignificanceValue                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FPerPlatformInt)                           MaximumNumberConcurrentBlends                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FPerPlatformFloat)                         TickSignificanceValue                                       OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0020 (0x000030 - 0x000050)
class UAnimationSharingSetup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FPerSkeletonAnimationSharingSetup>) SkeletonSetups                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FAnimationSharingScalability)              ScalabilitySettings                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0028 (0x000030 - 0x000058)
class UAnimationSharingStateProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<class UEnum*>)              AnimationStateEnum                                          OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	// void ProcessActorState(int32_t& OutState, class AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // [0xeb7020] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	// class UEnum* GetAnimationStateEnum();                                                                                    // [0xeb6f40] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0008 (0x000040 - 0x000048)
class FTickAnimationSharingFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

