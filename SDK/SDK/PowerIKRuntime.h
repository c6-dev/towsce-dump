
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RigVM

#pragma pack(push, 0x1)

/// Enum /Script/PowerIKRuntime.EEffectorSpaceEnum
/// Size: 0x01 (1 bytes)
enum class EEffectorSpaceEnum : uint8_t
{
	ES_Additive                                                                      = 0,
	ES_World                                                                         = 1,
	ES_Component                                                                     = 2
};

/// Enum /Script/PowerIKRuntime.EPoleVectorModeEnum
/// Size: 0x01 (1 bytes)
enum class EPoleVectorModeEnum : uint8_t
{
	PV_None                                                                          = 0,
	PV_Position                                                                      = 1,
	PV_Bone                                                                          = 2,
	PV_AngleOffset                                                                   = 3
};

/// Struct /Script/PowerIKRuntime.PowerIKBodyInertia
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPowerIKBodyInertia
{ 
	bool                                               ApplyInertiaToBody;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SmoothFactor;                                               // 0x0004   (0x0004)  
	bool                                               UseSpring;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              SpringStrength;                                             // 0x000C   (0x0004)  
	float                                              SpringDamping;                                              // 0x0010   (0x0004)  
};

/// Struct /Script/PowerIKRuntime.PowerIKBoneBendDirection
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPowerIKBoneBendDirection
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0008)  
	FVector                                            BendDirection;                                              // 0x0008   (0x000C)  
};

/// Struct /Script/PowerIKRuntime.PowerIKExcludedBone
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPowerIKExcludedBone
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0008)  
};

/// Struct /Script/PowerIKRuntime.PowerIKBoneLimit
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FPowerIKBoneLimit
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0008)  
	float                                              Stiffness;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x000C   (0x0020)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKSmoothing
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FPowerIKSmoothing
{ 
	bool                                               SmoothPositionOverTime;                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxPositionSpeed;                                           // 0x0004   (0x0004)  
	float                                              MaxPositionDistance;                                        // 0x0008   (0x0004)  
	bool                                               SmoothRotationOverTime;                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MaxDegreesSpeed;                                            // 0x0010   (0x0004)  
	float                                              MaxDegreesDistance;                                         // 0x0014   (0x0004)  
};

/// Struct /Script/PowerIKRuntime.PowerIKPoleVector
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FPowerIKPoleVector
{ 
	TEnumAsByte<EPoleVectorModeEnum>                   Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Position;                                                   // 0x0004   (0x000C)  
	FName                                              BoneName;                                                   // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0018   (0x0004)  MISSED
	float                                              AngleOffset;                                                // 0x001C   (0x0004)  
};

/// Struct /Script/PowerIKRuntime.PowerIKEffector
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FPowerIKEffector
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0008)  
	FVector                                            Position;                                                   // 0x0008   (0x000C)  
	TEnumAsByte<EEffectorSpaceEnum>                    PositionSpace;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRotator                                           Rotation;                                                   // 0x0018   (0x000C)  
	TEnumAsByte<EEffectorSpaceEnum>                    RotationSpace;                                              // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              PullWeight;                                                 // 0x0028   (0x0004)  
	bool                                               NormalizePulling;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	FVector                                            PositivePullFactor;                                         // 0x0030   (0x000C)  
	FVector                                            NegativePullFactor;                                         // 0x003C   (0x000C)  
	bool                                               RotateBone;                                                 // 0x0048   (0x0001)  
	bool                                               RotateLimb;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	float                                              DeltaSmoothSpeed;                                           // 0x004C   (0x0004)  
	float                                              AngularDeltaSmoothSpeed;                                    // 0x0050   (0x0004)  
	FPowerIKSmoothing                                  Smoothing;                                                  // 0x0054   (0x0018)  
	FPowerIKPoleVector                                 PoleVector;                                                 // 0x006C   (0x0020)  
	bool                                               AffectsCenterOfGravity;                                     // 0x008C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	float                                              Alpha;                                                      // 0x0090   (0x0004)  
	unsigned char                                      UnknownData05_7[0x3C];                                      // 0x0094   (0x003C)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKCenterOfGravity
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPowerIKCenterOfGravity
{ 
	float                                              Alpha;                                                      // 0x0000   (0x0004)  
	float                                              HorizAmount;                                                // 0x0004   (0x0004)  
	float                                              VertAmount;                                                 // 0x0008   (0x0004)  
	float                                              PullBodyAmount;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/PowerIKRuntime.AnimNode_PowerIK
/// Size: 0x0208 (520 bytes) (0x0000C8 - 0x000208) align 8 MaxSize: 0x0208
struct FAnimNode_PowerIK : FAnimNode_SkeletalControlBase
{ 
	FName                                              CharacterRoot;                                              // 0x00C8   (0x0008)  
	float                                              RootRotationMultiplier;                                     // 0x00D0   (0x0004)  
	FPowerIKBodyInertia                                BodyInertia;                                                // 0x00D4   (0x0014)  
	TArray<FPowerIKBoneBendDirection>                  BendDirections;                                             // 0x00E8   (0x0010)  
	TArray<FPowerIKExcludedBone>                       ExcludedBones;                                              // 0x00F8   (0x0010)  
	TArray<FPowerIKBoneLimit>                          JointLimits;                                                // 0x0108   (0x0010)  
	TArray<FPowerIKEffector>                           Effectors;                                                  // 0x0118   (0x0010)  
	float                                              SmoothingMaxSpeedMultiplier;                                // 0x0128   (0x0004)  
	float                                              SmoothingMaxDistanceMultiplier;                             // 0x012C   (0x0004)  
	FPowerIKCenterOfGravity                            CenterOfGravityConstraint;                                  // 0x0130   (0x0010)  
	int32_t                                            MaxSquashIterations;                                        // 0x0140   (0x0004)  
	int32_t                                            MaxStretchIterations;                                       // 0x0144   (0x0004)  
	int32_t                                            MaxFinalIterations;                                         // 0x0148   (0x0004)  
	bool                                               AllowBoneTranslation;                                       // 0x014C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x014D   (0x0003)  MISSED
	float                                              SolverAlpha;                                                // 0x0150   (0x0004)  
	float                                              DebugDrawSize;                                              // 0x0154   (0x0004)  
	unsigned char                                      UnknownData01_7[0xB0];                                      // 0x0158   (0x00B0)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKGroundFoot
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 4 MaxSize: 0x0060
struct FPowerIKGroundFoot
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0008)  
	float                                              PullWeight;                                                 // 0x0008   (0x0004)  
	bool                                               NormalizePulling;                                           // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVector                                            PositivePullFactor;                                         // 0x0010   (0x000C)  
	FVector                                            NegativePullFactor;                                         // 0x001C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x0028   (0x0038)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKGroundCollision
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPowerIKGroundCollision
{ 
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                           // 0x0000   (0x0001)  
	bool                                               TraceComplex;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              RayCastUp;                                                  // 0x0004   (0x0004)  
	float                                              RayCastDown;                                                // 0x0008   (0x0004)  
	bool                                               EnableWallCollision;                                        // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              WallOffset;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/PowerIKRuntime.PowerIKGroundSlope
/// Size: 0x0094 (148 bytes) (0x000000 - 0x000094) align 4 MaxSize: 0x0094
struct FPowerIKGroundSlope
{ 
	FVector                                            StrideDirection;                                            // 0x0000   (0x000C)  
	float                                              MaxGroundAngle;                                             // 0x000C   (0x0004)  
	float                                              MaxNormalAngularSpeed;                                      // 0x0010   (0x0004)  
	bool                                               OrientToGround;                                             // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              OrientToPitch;                                              // 0x0018   (0x0004)  
	float                                              OrientToRoll;                                               // 0x001C   (0x0004)  
	bool                                               ScaleStride;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              UphillStrideScale;                                          // 0x0024   (0x0004)  
	float                                              DownhillStrideScale;                                        // 0x0028   (0x0004)  
	float                                              SidehillStrideScale;                                        // 0x002C   (0x0004)  
	float                                              SidehillPushOuterFeet;                                      // 0x0030   (0x0004)  
	bool                                               Lean;                                                       // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              UphillLean;                                                 // 0x0038   (0x0004)  
	float                                              DownhillLean;                                               // 0x003C   (0x0004)  
	float                                              SidehillLean;                                               // 0x0040   (0x0004)  
	bool                                               CounterLean;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	FName                                              CounterLeanBoneName;                                        // 0x0048   (0x0008)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0050   (0x0004)  MISSED
	float                                              UphillCounterLean;                                          // 0x0054   (0x0004)  
	float                                              DownhillCounterLean;                                        // 0x0058   (0x0004)  
	float                                              SidehillCounterLean;                                        // 0x005C   (0x0004)  
	bool                                               MoveRoot;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              UphillVertOffset;                                           // 0x0064   (0x0004)  
	float                                              UphillHorizOffset;                                          // 0x0068   (0x0004)  
	float                                              DownhillVertOffset;                                         // 0x006C   (0x0004)  
	float                                              DownhillHorizOffset;                                        // 0x0070   (0x0004)  
	float                                              SidehillHorizOffset;                                        // 0x0074   (0x0004)  
	float                                              SidehillVertOffset;                                         // 0x0078   (0x0004)  
	bool                                               RotateFootToGround;                                         // 0x007C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              PitchFootAmount;                                            // 0x0080   (0x0004)  
	float                                              RollFootAmount;                                             // 0x0084   (0x0004)  
	float                                              FootAngleDeltaSmoothSpeed;                                  // 0x0088   (0x0004)  
	bool                                               OffsetFeetPositions;                                        // 0x008C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	float                                              StaticFootOffset;                                           // 0x0090   (0x0004)  
};

/// Struct /Script/PowerIKRuntime.AnimNode_PowerIK_Ground
/// Size: 0x0390 (912 bytes) (0x0000C8 - 0x000390) align 8 MaxSize: 0x0390
struct FAnimNode_PowerIK_Ground : FAnimNode_SkeletalControlBase
{ 
	FName                                              CharacterRoot;                                              // 0x00C8   (0x0008)  
	FPowerIKBodyInertia                                BodyInertia;                                                // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FPowerIKGroundFoot>                         Feet;                                                       // 0x00E8   (0x0010)  
	float                                              FeetDeltaSmoothSpeed;                                       // 0x00F8   (0x0004)  
	float                                              RootRotationMultiplier;                                     // 0x00FC   (0x0004)  
	FPowerIKGroundCollision                            GroundCollision;                                            // 0x0100   (0x0014)  
	FPowerIKGroundSlope                                GroundSlope;                                                // 0x0114   (0x0094)  
	TArray<FPowerIKBoneBendDirection>                  BendDirections;                                             // 0x01A8   (0x0010)  
	TArray<FPowerIKExcludedBone>                       ExcludedBones;                                              // 0x01B8   (0x0010)  
	TArray<FPowerIKBoneLimit>                          JointLimits;                                                // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01D8   (0x0010)  MISSED
	int32_t                                            MaxSquashIterations;                                        // 0x01E8   (0x0004)  
	int32_t                                            MaxStretchIterations;                                       // 0x01EC   (0x0004)  
	int32_t                                            MaxFinalIterations;                                         // 0x01F0   (0x0004)  
	bool                                               AllowBoneTranslation;                                       // 0x01F4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x01F5   (0x0003)  MISSED
	float                                              SolverAlpha;                                                // 0x01F8   (0x0004)  
	float                                              DebugDrawSize;                                              // 0x01FC   (0x0004)  
	unsigned char                                      UnknownData03_7[0x190];                                     // 0x0200   (0x0190)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKWalkingLimb
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 16 MaxSize: 0x0130
struct FPowerIKWalkingLimb
{ 
	FName                                              StartBone;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FName                                              EndBone;                                                    // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	float                                              LimbMaxLengthMultiplier;                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	float                                              StepLengthMultiplier;                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	float                                              StepDuration;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	float                                              StepHeight;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<int32_t>                                    RelatedLimbs;                                               // 0x0040   (0x0010)  
	float                                              RotateFootToGround;                                         // 0x0050   (0x0004)  
	float                                              FootCollisionRadius;                                        // 0x0054   (0x0004)  
	unsigned char                                      UnknownData06_7[0xD8];                                      // 0x0058   (0x00D8)  MISSED
};

/// Struct /Script/PowerIKRuntime.AnimNode_PowerIK_Walk
/// Size: 0x0248 (584 bytes) (0x0000C8 - 0x000248) align 8 MaxSize: 0x0248
struct FAnimNode_PowerIK_Walk : FAnimNode_SkeletalControlBase
{ 
	FName                                              CharacterRoot;                                              // 0x00C8   (0x0008)  
	float                                              RootRotationMultiplier;                                     // 0x00D0   (0x0004)  
	FPowerIKBodyInertia                                BodyInertia;                                                // 0x00D4   (0x0014)  
	TArray<FPowerIKWalkingLimb>                        Limbs;                                                      // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00F8   (0x000C)  MISSED
	float                                              StepMaxReachDistance;                                       // 0x0104   (0x0004)  
	float                                              StepDurationMultiplier;                                     // 0x0108   (0x0004)  
	float                                              StepHeightMultiplier;                                       // 0x010C   (0x0004)  
	class UCurveFloat*                                 StepHeightCurve;                                            // 0x0110   (0x0008)  
	class UCurveFloat*                                 StepSpeedCurve;                                             // 0x0118   (0x0008)  
	float                                              TeleportDistance;                                           // 0x0120   (0x0004)  
	bool                                               PrintTeleportWarning;                                       // 0x0124   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                           // 0x0125   (0x0001)  
	bool                                               TraceComplex;                                               // 0x0126   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0127   (0x0001)  MISSED
	TArray<FPowerIKBoneBendDirection>                  BendDirections;                                             // 0x0128   (0x0010)  
	TArray<FPowerIKExcludedBone>                       ExcludedBones;                                              // 0x0138   (0x0010)  
	TArray<FPowerIKBoneLimit>                          JointLimits;                                                // 0x0148   (0x0010)  
	int32_t                                            MaxSquashIterations;                                        // 0x0158   (0x0004)  
	int32_t                                            MaxStretchIterations;                                       // 0x015C   (0x0004)  
	int32_t                                            MaxFinalIterations;                                         // 0x0160   (0x0004)  
	bool                                               AllowBoneTranslation;                                       // 0x0164   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	float                                              SolverAlpha;                                                // 0x0168   (0x0004)  
	float                                              DebugDrawSize;                                              // 0x016C   (0x0004)  
	unsigned char                                      UnknownData03_7[0xD8];                                      // 0x0170   (0x00D8)  MISSED
};

/// Struct /Script/PowerIKRuntime.PlaneConstraint
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPlaneConstraint
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKCore
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FPowerIKCore
{ 
	unsigned char                                      UnknownData00_2[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKRootData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPowerIKRootData
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKBoneData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPowerIKBoneData
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/PowerIKRuntime.PowerIKEffectorData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPowerIKEffectorData
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/PowerIKRuntime.RigUnit_PowerIK
/// Size: 0x0198 (408 bytes) (0x000068 - 0x000198) align 8 MaxSize: 0x0198
struct FRigUnit_PowerIK : FRigUnitMutable
{ 
	FName                                              CharacterRoot;                                              // 0x0068   (0x0008)  
	float                                              RootRotationMultiplier;                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FPowerIKEffector>                           Effectors;                                                  // 0x0078   (0x0010)  
	TArray<FPowerIKBoneBendDirection>                  BendDirections;                                             // 0x0088   (0x0010)  
	TArray<FPowerIKExcludedBone>                       ExcludedBones;                                              // 0x0098   (0x0010)  
	TArray<FPowerIKBoneLimit>                          JointLimits;                                                // 0x00A8   (0x0010)  
	FPowerIKCenterOfGravity                            CenterOfGravityConstraint;                                  // 0x00B8   (0x0010)  
	FPowerIKBodyInertia                                Inertia;                                                    // 0x00C8   (0x0014)  
	int32_t                                            MaxSquashIterations;                                        // 0x00DC   (0x0004)  
	int32_t                                            MaxStretchIterations;                                       // 0x00E0   (0x0004)  
	int32_t                                            MaxFinalIterations;                                         // 0x00E4   (0x0004)  
	bool                                               AllowBoneTranslation;                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              SolverAlpha;                                                // 0x00EC   (0x0004)  
	FPowerIKCore                                       Core;                                                       // 0x00F0   (0x00A8)  
};

#pragma pack(pop)


static_assert(sizeof(FPowerIKBodyInertia) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FPowerIKBoneBendDirection) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FPowerIKExcludedBone) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPowerIKBoneLimit) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FPowerIKSmoothing) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPowerIKPoleVector) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPowerIKEffector) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FPowerIKCenterOfGravity) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimNode_PowerIK) == 0x0208); // 520 bytes (0x0000C8 - 0x000208)
static_assert(sizeof(FPowerIKGroundFoot) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FPowerIKGroundCollision) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FPowerIKGroundSlope) == 0x0094); // 148 bytes (0x000000 - 0x000094)
static_assert(sizeof(FAnimNode_PowerIK_Ground) == 0x0390); // 912 bytes (0x0000C8 - 0x000390)
static_assert(sizeof(FPowerIKWalkingLimb) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FAnimNode_PowerIK_Walk) == 0x0248); // 584 bytes (0x0000C8 - 0x000248)
static_assert(sizeof(FPlaneConstraint) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPowerIKCore) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FPowerIKRootData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPowerIKBoneData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FPowerIKEffectorData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_PowerIK) == 0x0198); // 408 bytes (0x000068 - 0x000198)
static_assert(offsetof(FPowerIKBoneBendDirection, BoneName) == 0x0000);
static_assert(offsetof(FPowerIKBoneBendDirection, BendDirection) == 0x0008);
static_assert(offsetof(FPowerIKExcludedBone, BoneName) == 0x0000);
static_assert(offsetof(FPowerIKBoneLimit, BoneName) == 0x0000);
static_assert(offsetof(FPowerIKPoleVector, Mode) == 0x0000);
static_assert(offsetof(FPowerIKPoleVector, Position) == 0x0004);
static_assert(offsetof(FPowerIKPoleVector, BoneName) == 0x0010);
static_assert(offsetof(FPowerIKEffector, BoneName) == 0x0000);
static_assert(offsetof(FPowerIKEffector, Position) == 0x0008);
static_assert(offsetof(FPowerIKEffector, PositionSpace) == 0x0014);
static_assert(offsetof(FPowerIKEffector, Rotation) == 0x0018);
static_assert(offsetof(FPowerIKEffector, RotationSpace) == 0x0024);
static_assert(offsetof(FPowerIKEffector, PositivePullFactor) == 0x0030);
static_assert(offsetof(FPowerIKEffector, NegativePullFactor) == 0x003C);
static_assert(offsetof(FPowerIKEffector, Smoothing) == 0x0054);
static_assert(offsetof(FPowerIKEffector, PoleVector) == 0x006C);
static_assert(offsetof(FAnimNode_PowerIK, CharacterRoot) == 0x00C8);
static_assert(offsetof(FAnimNode_PowerIK, BodyInertia) == 0x00D4);
static_assert(offsetof(FAnimNode_PowerIK, BendDirections) == 0x00E8);
static_assert(offsetof(FAnimNode_PowerIK, ExcludedBones) == 0x00F8);
static_assert(offsetof(FAnimNode_PowerIK, JointLimits) == 0x0108);
static_assert(offsetof(FAnimNode_PowerIK, Effectors) == 0x0118);
static_assert(offsetof(FAnimNode_PowerIK, CenterOfGravityConstraint) == 0x0130);
static_assert(offsetof(FPowerIKGroundFoot, BoneName) == 0x0000);
static_assert(offsetof(FPowerIKGroundFoot, PositivePullFactor) == 0x0010);
static_assert(offsetof(FPowerIKGroundFoot, NegativePullFactor) == 0x001C);
static_assert(offsetof(FPowerIKGroundCollision, CollisionChannel) == 0x0000);
static_assert(offsetof(FPowerIKGroundSlope, StrideDirection) == 0x0000);
static_assert(offsetof(FPowerIKGroundSlope, CounterLeanBoneName) == 0x0048);
static_assert(offsetof(FAnimNode_PowerIK_Ground, CharacterRoot) == 0x00C8);
static_assert(offsetof(FAnimNode_PowerIK_Ground, BodyInertia) == 0x00D0);
static_assert(offsetof(FAnimNode_PowerIK_Ground, Feet) == 0x00E8);
static_assert(offsetof(FAnimNode_PowerIK_Ground, GroundCollision) == 0x0100);
static_assert(offsetof(FAnimNode_PowerIK_Ground, GroundSlope) == 0x0114);
static_assert(offsetof(FAnimNode_PowerIK_Ground, BendDirections) == 0x01A8);
static_assert(offsetof(FAnimNode_PowerIK_Ground, ExcludedBones) == 0x01B8);
static_assert(offsetof(FAnimNode_PowerIK_Ground, JointLimits) == 0x01C8);
static_assert(offsetof(FPowerIKWalkingLimb, StartBone) == 0x0000);
static_assert(offsetof(FPowerIKWalkingLimb, EndBone) == 0x0010);
static_assert(offsetof(FPowerIKWalkingLimb, RelatedLimbs) == 0x0040);
static_assert(offsetof(FAnimNode_PowerIK_Walk, CharacterRoot) == 0x00C8);
static_assert(offsetof(FAnimNode_PowerIK_Walk, BodyInertia) == 0x00D4);
static_assert(offsetof(FAnimNode_PowerIK_Walk, Limbs) == 0x00E8);
static_assert(offsetof(FAnimNode_PowerIK_Walk, StepHeightCurve) == 0x0110);
static_assert(offsetof(FAnimNode_PowerIK_Walk, StepSpeedCurve) == 0x0118);
static_assert(offsetof(FAnimNode_PowerIK_Walk, CollisionChannel) == 0x0125);
static_assert(offsetof(FAnimNode_PowerIK_Walk, BendDirections) == 0x0128);
static_assert(offsetof(FAnimNode_PowerIK_Walk, ExcludedBones) == 0x0138);
static_assert(offsetof(FAnimNode_PowerIK_Walk, JointLimits) == 0x0148);
static_assert(offsetof(FRigUnit_PowerIK, CharacterRoot) == 0x0068);
static_assert(offsetof(FRigUnit_PowerIK, Effectors) == 0x0078);
static_assert(offsetof(FRigUnit_PowerIK, BendDirections) == 0x0088);
static_assert(offsetof(FRigUnit_PowerIK, ExcludedBones) == 0x0098);
static_assert(offsetof(FRigUnit_PowerIK, JointLimits) == 0x00A8);
static_assert(offsetof(FRigUnit_PowerIK, CenterOfGravityConstraint) == 0x00B8);
static_assert(offsetof(FRigUnit_PowerIK, Inertia) == 0x00C8);
static_assert(offsetof(FRigUnit_PowerIK, Core) == 0x00F0);
