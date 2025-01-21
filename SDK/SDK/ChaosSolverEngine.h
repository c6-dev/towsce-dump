
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x01 (1 bytes)
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_None                                           = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 5
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UChaosDebugDrawComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UChaosEventListenerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FChaosHandlerSet
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(80,765) /* TSet<UObject*> */         __um(ChaosHandlers);                                        // 0x0008   (0x0050)  
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FBreakEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x02A0 (672 bytes) (0x0000E8 - 0x0002A0) align 8 MaxSize: 0x02A0
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x110];                                     // 0x00E8   (0x0110)  MISSED
	TMap<class UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;                                // 0x01F8   (0x0050)  
	TMap<class UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;                          // 0x0248   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UChaosNotifyHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);                             // [0x3c7d430] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UChaosSolver : public UObject
{ 
public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FChaosDebugSubstepControl
{ 
	bool                                               bPause;                                                     // 0x0000   (0x0001)  
	bool                                               bSubstep;                                                   // 0x0001   (0x0001)  
	bool                                               bStep;                                                      // 0x0002   (0x0001)  
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x03B0 (944 bytes) (0x0002B8 - 0x0003B0) align 8 MaxSize: 0x03B0
class AChaosSolverActor : public AActor
{ 
public:
	FChaosSolverConfiguration                          Properties;                                                 // 0x02B8   (0x0068)  
	float                                              TimeStepMultiplier;                                         // 0x0320   (0x0004)  
	int32_t                                            CollisionIterations;                                        // 0x0324   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0328   (0x0004)  
	int32_t                                            PushOutPairIterations;                                      // 0x032C   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0330   (0x0004)  
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x0334   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0335   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0336   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x0338   (0x0010)  
	bool                                               DoGenerateBreakingData;                                     // 0x0348   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0349   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x034C   (0x0010)  
	bool                                               DoGenerateTrailingData;                                     // 0x035C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x035D   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0360   (0x0010)  
	float                                              MassScale;                                                  // 0x0370   (0x0004)  
	bool                                               bGenerateContactGraph;                                      // 0x0374   (0x0001)  
	bool                                               bHasFloor;                                                  // 0x0375   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0376   (0x0002)  MISSED
	float                                              FloorHeight;                                                // 0x0378   (0x0004)  
	FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x037C   (0x0003)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x037F   (0x0001)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0380   (0x0008)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0388   (0x0018)  MISSED
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                           // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x03A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// void SetSolverActive(bool bActive);                                                                                      // [0xd4e6b0] Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// void SetAsCurrentWorldSolver();                                                                                          // [0x3c7d520] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UChaosSolverSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0040   (0x0008)  MISSED
	FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0048   (0x0018)  
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FChaosPhysicsCollisionInfo
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	class UPrimitiveComponent*                         OtherComponent;                                             // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FVector                                            Normal;                                                     // 0x001C   (0x000C)  
	FVector                                            AccumulatedImpulse;                                         // 0x0028   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0034   (0x000C)  
	FVector                                            OtherVelocity;                                              // 0x0040   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x004C   (0x000C)  
	FVector                                            OtherAngularVelocity;                                       // 0x0058   (0x000C)  
	float                                              Mass;                                                       // 0x0064   (0x0004)  
	float                                              OtherMass;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FChaosBreakEvent
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0014   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0020   (0x000C)  
	float                                              Mass;                                                       // 0x002C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UChaosDebugDrawComponent) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UChaosEventListenerComponent) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(FChaosHandlerSet) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x02A0); // 672 bytes (0x0000E8 - 0x0002A0)
static_assert(sizeof(UChaosNotifyHandlerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UChaosSolver) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FChaosDebugSubstepControl) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(AChaosSolverActor) == 0x03B0); // 944 bytes (0x0002B8 - 0x0003B0)
static_assert(sizeof(UChaosSolverSettings) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FChaosBreakEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 0x01F8);
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 0x0248);
static_assert(offsetof(AChaosSolverActor, Properties) == 0x02B8);
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x0334);
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x0338);
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x034C);
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x0360);
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x037C);
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x0380);
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x03A0);
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x0048);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x0000);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x0008);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x0010);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x001C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x0028);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x0034);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x004C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x0058);
static_assert(offsetof(FChaosBreakEvent, Component) == 0x0000);
static_assert(offsetof(FChaosBreakEvent, Location) == 0x0008);
static_assert(offsetof(FChaosBreakEvent, Velocity) == 0x0014);
static_assert(offsetof(FChaosBreakEvent, AngularVelocity) == 0x0020);
