
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RigVM

/// Struct /Script/PowerIKRuntime.PowerIKBodyInertia
/// Size: 0x0014 (0x000000 - 0x000014)
class FPowerIKBodyInertia : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      ApplyInertiaToBody                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     SmoothFactor                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      UseSpring                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     SpringStrength                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SpringDamping                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKBoneBendDirection
/// Size: 0x0014 (0x000000 - 0x000014)
class FPowerIKBoneBendDirection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   BendDirection                                               OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKExcludedBone
/// Size: 0x0008 (0x000000 - 0x000008)
class FPowerIKExcludedBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKBoneLimit
/// Size: 0x002C (0x000000 - 0x00002C)
class FPowerIKBoneLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKSmoothing
/// Size: 0x0018 (0x000000 - 0x000018)
class FPowerIKSmoothing : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      SmoothPositionOverTime                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MaxPositionSpeed                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxPositionDistance                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      SmoothRotationOverTime                                      OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     MaxDegreesSpeed                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxDegreesDistance                                          OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKPoleVector
/// Size: 0x0020 (0x000000 - 0x000020)
class FPowerIKPoleVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TEnumAsByte<EPoleVectorModeEnum>)          Mode                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(float)                                     AngleOffset                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKEffector
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FPowerIKEffector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(TEnumAsByte<EEffectorSpaceEnum>)           PositionSpace                                               OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	CMember(TEnumAsByte<EEffectorSpaceEnum>)           RotationSpace                                               OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(float)                                     PullWeight                                                  OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      NormalizePulling                                            OFFSET(get<bool>, {0x2C, 1, 0, 0})
	SMember(FVector)                                   PositivePullFactor                                          OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   NegativePullFactor                                          OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	DMember(bool)                                      RotateBone                                                  OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      RotateLimb                                                  OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(float)                                     DeltaSmoothSpeed                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     AngularDeltaSmoothSpeed                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FPowerIKSmoothing)                         Smoothing                                                   OFFSET(getStruct<T>, {0x54, 24, 0, 0})
	SMember(FPowerIKPoleVector)                        PoleVector                                                  OFFSET(getStruct<T>, {0x6C, 32, 0, 0})
	DMember(bool)                                      AffectsCenterOfGravity                                      OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKCenterOfGravity
/// Size: 0x0010 (0x000000 - 0x000010)
class FPowerIKCenterOfGravity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HorizAmount                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     VertAmount                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PullBodyAmount                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.AnimNode_PowerIK
/// Size: 0x0140 (0x0000C8 - 0x000208)
class FAnimNode_PowerIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FName)                                     CharacterRoot                                               OFFSET(getStruct<T>, {0xC8, 8, 0, 0})
	DMember(float)                                     RootRotationMultiplier                                      OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FPowerIKBodyInertia)                       BodyInertia                                                 OFFSET(getStruct<T>, {0xD4, 20, 0, 0})
	CMember(TArray<FPowerIKBoneBendDirection>)         BendDirections                                              OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FPowerIKExcludedBone>)              ExcludedBones                                               OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FPowerIKBoneLimit>)                 JointLimits                                                 OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<FPowerIKEffector>)                  Effectors                                                   OFFSET(get<T>, {0x118, 16, 0, 0})
	DMember(float)                                     SmoothingMaxSpeedMultiplier                                 OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     SmoothingMaxDistanceMultiplier                              OFFSET(get<float>, {0x12C, 4, 0, 0})
	SMember(FPowerIKCenterOfGravity)                   CenterOfGravityConstraint                                   OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	DMember(int32_t)                                   MaxSquashIterations                                         OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(int32_t)                                   MaxStretchIterations                                        OFFSET(get<int32_t>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   MaxFinalIterations                                          OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(bool)                                      AllowBoneTranslation                                        OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(float)                                     SolverAlpha                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     DebugDrawSize                                               OFFSET(get<float>, {0x154, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKGroundFoot
/// Size: 0x0060 (0x000000 - 0x000060)
class FPowerIKGroundFoot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PullWeight                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      NormalizePulling                                            OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FVector)                                   PositivePullFactor                                          OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   NegativePullFactor                                          OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKGroundCollision
/// Size: 0x0014 (0x000000 - 0x000014)
class FPowerIKGroundCollision : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      TraceComplex                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     RayCastUp                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RayCastDown                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      EnableWallCollision                                         OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     WallOffset                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKGroundSlope
/// Size: 0x0094 (0x000000 - 0x000094)
class FPowerIKGroundSlope : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 148;

public:
	SMember(FVector)                                   StrideDirection                                             OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     MaxGroundAngle                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxNormalAngularSpeed                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      OrientToGround                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     OrientToPitch                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     OrientToRoll                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      ScaleStride                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     UphillStrideScale                                           OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     DownhillStrideScale                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     SidehillStrideScale                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     SidehillPushOuterFeet                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      Lean                                                        OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     UphillLean                                                  OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DownhillLean                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SidehillLean                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      CounterLean                                                 OFFSET(get<bool>, {0x44, 1, 0, 0})
	SMember(FName)                                     CounterLeanBoneName                                         OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	DMember(float)                                     UphillCounterLean                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DownhillCounterLean                                         OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SidehillCounterLean                                         OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      MoveRoot                                                    OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(float)                                     UphillVertOffset                                            OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     UphillHorizOffset                                           OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     DownhillVertOffset                                          OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     DownhillHorizOffset                                         OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     SidehillHorizOffset                                         OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     SidehillVertOffset                                          OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      RotateFootToGround                                          OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(float)                                     PitchFootAmount                                             OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     RollFootAmount                                              OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     FootAngleDeltaSmoothSpeed                                   OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(bool)                                      OffsetFeetPositions                                         OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(float)                                     StaticFootOffset                                            OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.AnimNode_PowerIK_Ground
/// Size: 0x02C8 (0x0000C8 - 0x000390)
class FAnimNode_PowerIK_Ground : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FName)                                     CharacterRoot                                               OFFSET(getStruct<T>, {0xC8, 8, 0, 0})
	SMember(FPowerIKBodyInertia)                       BodyInertia                                                 OFFSET(getStruct<T>, {0xD0, 20, 0, 0})
	CMember(TArray<FPowerIKGroundFoot>)                Feet                                                        OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     FeetDeltaSmoothSpeed                                        OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     RootRotationMultiplier                                      OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FPowerIKGroundCollision)                   GroundCollision                                             OFFSET(getStruct<T>, {0x100, 20, 0, 0})
	SMember(FPowerIKGroundSlope)                       GroundSlope                                                 OFFSET(getStruct<T>, {0x114, 148, 0, 0})
	CMember(TArray<FPowerIKBoneBendDirection>)         BendDirections                                              OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FPowerIKExcludedBone>)              ExcludedBones                                               OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<FPowerIKBoneLimit>)                 JointLimits                                                 OFFSET(get<T>, {0x1C8, 16, 0, 0})
	DMember(int32_t)                                   MaxSquashIterations                                         OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	DMember(int32_t)                                   MaxStretchIterations                                        OFFSET(get<int32_t>, {0x1EC, 4, 0, 0})
	DMember(int32_t)                                   MaxFinalIterations                                          OFFSET(get<int32_t>, {0x1F0, 4, 0, 0})
	DMember(bool)                                      AllowBoneTranslation                                        OFFSET(get<bool>, {0x1F4, 1, 0, 0})
	DMember(float)                                     SolverAlpha                                                 OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     DebugDrawSize                                               OFFSET(get<float>, {0x1FC, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PowerIKWalkingLimb
/// Size: 0x0130 (0x000000 - 0x000130)
class FPowerIKWalkingLimb : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(float)                                     LimbMaxLengthMultiplier                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     StepLengthMultiplier                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StepDuration                                                OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     StepHeight                                                  OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(TArray<int32_t>)                           RelatedLimbs                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     RotateFootToGround                                          OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     FootCollisionRadius                                         OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.AnimNode_PowerIK_Walk
/// Size: 0x0180 (0x0000C8 - 0x000248)
class FAnimNode_PowerIK_Walk : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FName)                                     CharacterRoot                                               OFFSET(getStruct<T>, {0xC8, 8, 0, 0})
	DMember(float)                                     RootRotationMultiplier                                      OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FPowerIKBodyInertia)                       BodyInertia                                                 OFFSET(getStruct<T>, {0xD4, 20, 0, 0})
	CMember(TArray<FPowerIKWalkingLimb>)               Limbs                                                       OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     StepMaxReachDistance                                        OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     StepDurationMultiplier                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     StepHeightMultiplier                                        OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(class UCurveFloat*)                        StepHeightCurve                                             OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UCurveFloat*)                        StepSpeedCurve                                              OFFSET(get<T>, {0x118, 8, 0, 0})
	DMember(float)                                     TeleportDistance                                            OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(bool)                                      PrintTeleportWarning                                        OFFSET(get<bool>, {0x124, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            OFFSET(get<T>, {0x125, 1, 0, 0})
	DMember(bool)                                      TraceComplex                                                OFFSET(get<bool>, {0x126, 1, 0, 0})
	CMember(TArray<FPowerIKBoneBendDirection>)         BendDirections                                              OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FPowerIKExcludedBone>)              ExcludedBones                                               OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<FPowerIKBoneLimit>)                 JointLimits                                                 OFFSET(get<T>, {0x148, 16, 0, 0})
	DMember(int32_t)                                   MaxSquashIterations                                         OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	DMember(int32_t)                                   MaxStretchIterations                                        OFFSET(get<int32_t>, {0x15C, 4, 0, 0})
	DMember(int32_t)                                   MaxFinalIterations                                          OFFSET(get<int32_t>, {0x160, 4, 0, 0})
	DMember(bool)                                      AllowBoneTranslation                                        OFFSET(get<bool>, {0x164, 1, 0, 0})
	DMember(float)                                     SolverAlpha                                                 OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     DebugDrawSize                                               OFFSET(get<float>, {0x16C, 4, 0, 0})
};

/// Struct /Script/PowerIKRuntime.PlaneConstraint
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlaneConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PowerIKRuntime.PowerIKCore
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FPowerIKCore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/PowerIKRuntime.PowerIKRootData
/// Size: 0x0028 (0x000000 - 0x000028)
class FPowerIKRootData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/PowerIKRuntime.PowerIKBoneData
/// Size: 0x0068 (0x000000 - 0x000068)
class FPowerIKBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/PowerIKRuntime.PowerIKEffectorData
/// Size: 0x0030 (0x000000 - 0x000030)
class FPowerIKEffectorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/PowerIKRuntime.RigUnit_PowerIK
/// Size: 0x0130 (0x000068 - 0x000198)
class FRigUnit_PowerIK : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FName)                                     CharacterRoot                                               OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     RootRotationMultiplier                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(TArray<FPowerIKEffector>)                  Effectors                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FPowerIKBoneBendDirection>)         BendDirections                                              OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FPowerIKExcludedBone>)              ExcludedBones                                               OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FPowerIKBoneLimit>)                 JointLimits                                                 OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FPowerIKCenterOfGravity)                   CenterOfGravityConstraint                                   OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FPowerIKBodyInertia)                       Inertia                                                     OFFSET(getStruct<T>, {0xC8, 20, 0, 0})
	DMember(int32_t)                                   MaxSquashIterations                                         OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   MaxStretchIterations                                        OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   MaxFinalIterations                                          OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(bool)                                      AllowBoneTranslation                                        OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(float)                                     SolverAlpha                                                 OFFSET(get<float>, {0xEC, 4, 0, 0})
	SMember(FPowerIKCore)                              Core                                                        OFFSET(getStruct<T>, {0xF0, 168, 0, 0})
};

/// Enum /Script/PowerIKRuntime.EEffectorSpaceEnum
/// Size: 0x03
enum class EEffectorSpaceEnum : uint8_t
{
	ES_Additive                                                                      = 0,
	ES_World                                                                         = 1,
	ES_Component                                                                     = 2
};

/// Enum /Script/PowerIKRuntime.EPoleVectorModeEnum
/// Size: 0x04
enum class EPoleVectorModeEnum : uint8_t
{
	PV_None                                                                          = 0,
	PV_Position                                                                      = 1,
	PV_Bone                                                                          = 2,
	PV_AngleOffset                                                                   = 3
};

