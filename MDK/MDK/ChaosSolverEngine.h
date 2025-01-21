
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UChaosDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UChaosEventListenerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (0x000000 - 0x000058)
class FChaosHandlerSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TSet<UObject*>)                            ChaosHandlers                                               OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
class FBreakEventCallbackWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x01B8 (0x0000E8 - 0x0002A0)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TMap<class UPrimitiveComponent*, FChaosHandlerSet>) CollisionEventRegistrations                        OFFSET(get<T>, {0x1F8, 80, 0, 0})
	CMember(TMap<class UPrimitiveComponent*, FBreakEventCallbackWrapper>) BreakEventRegistrations                  OFFSET(get<T>, {0x248, 80, 0, 0})
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UChaosNotifyHandlerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);                             // [0x3c7d430] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0000 (0x000030 - 0x000030)
class UChaosSolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (0x000000 - 0x000003)
class FChaosDebugSubstepControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bPause                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSubstep                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bStep                                                       OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x00F8 (0x0002B8 - 0x0003B0)
class AChaosSolverActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FChaosSolverConfiguration)                 Properties                                                  OFFSET(getStruct<T>, {0x2B8, 104, 0, 0})
	DMember(float)                                     TimeStepMultiplier                                          OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(int32_t)                                   CollisionIterations                                         OFFSET(get<int32_t>, {0x324, 4, 0, 0})
	DMember(int32_t)                                   PushOutIterations                                           OFFSET(get<int32_t>, {0x328, 4, 0, 0})
	DMember(int32_t)                                   PushOutPairIterations                                       OFFSET(get<int32_t>, {0x32C, 4, 0, 0})
	DMember(float)                                     ClusterConnectionFactor                                     OFFSET(get<float>, {0x330, 4, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterUnionConnectionType                                  OFFSET(get<T>, {0x334, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     OFFSET(get<bool>, {0x335, 1, 0, 0})
	SMember(FSolverCollisionFilterSettings)            CollisionFilterSettings                                     OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      OFFSET(get<bool>, {0x348, 1, 0, 0})
	SMember(FSolverBreakingFilterSettings)             BreakingFilterSettings                                      OFFSET(getStruct<T>, {0x34C, 16, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      OFFSET(get<bool>, {0x35C, 1, 0, 0})
	SMember(FSolverTrailingFilterSettings)             TrailingFilterSettings                                      OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	DMember(float)                                     MassScale                                                   OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(bool)                                      bGenerateContactGraph                                       OFFSET(get<bool>, {0x374, 1, 0, 0})
	DMember(bool)                                      bHasFloor                                                   OFFSET(get<bool>, {0x375, 1, 0, 0})
	DMember(float)                                     FloorHeight                                                 OFFSET(get<float>, {0x378, 4, 0, 0})
	SMember(FChaosDebugSubstepControl)                 ChaosDebugSubstepControl                                    OFFSET(getStruct<T>, {0x37C, 3, 0, 0})
	CMember(class UBillboardComponent*)                SpriteComponent                                             OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UChaosGameplayEventDispatcher*)      GameplayEventDispatcherComponent                            OFFSET(get<T>, {0x3A0, 8, 0, 0})


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// void SetSolverActive(bool bActive);                                                                                      // [0xd4e6b0] Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// void SetAsCurrentWorldSolver();                                                                                          // [0x3c7d520] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0020 (0x000040 - 0x000060)
class UChaosSolverSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftClassPath)                            DefaultChaosSolverActorClass                                OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FChaosPhysicsCollisionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                OtherComponent                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   AccumulatedImpulse                                          OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	SMember(FVector)                                   OtherVelocity                                               OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FVector)                                   OtherAngularVelocity                                        OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     OtherMass                                                   OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0030 (0x000000 - 0x000030)
class FChaosBreakEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x06
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_None                                           = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 5
};

