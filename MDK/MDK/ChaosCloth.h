
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Struct /Script/ChaosCloth.ChaosClothWeightedValue
/// Size: 0x0008 (0x000000 - 0x000008)
class FChaosClothWeightedValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Low                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     High                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UChaosClothConfig : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(EClothMassMode)                            MassMode                                                    OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     UniformMass                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     TotalMass                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MinPerParticleMass                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     EdgeStiffness                                               OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     BendingStiffness                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bUseBendingElements                                         OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     AreaStiffness                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     VolumeStiffness                                             OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FChaosClothWeightedValue)                  TetherStiffness                                             OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	DMember(float)                                     LimitScale                                                  OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bUseGeodesicDistance                                        OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(float)                                     ShapeTargetStiffness                                        OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     FrictionCoefficient                                         OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bUseCCD                                                     OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bUseSelfCollisions                                          OFFSET(get<bool>, {0x75, 1, 0, 0})
	DMember(float)                                     SelfCollisionThickness                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bUseLegacyBackstop                                          OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(float)                                     DampingCoefficient                                          OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bUsePointBasedWindModel                                     OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(float)                                     DragCoefficient                                             OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     LiftCoefficient                                             OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FChaosClothWeightedValue)                  AnimDriveStiffness                                          OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  AnimDriveDamping                                            OFFSET(getStruct<T>, {0xAC, 8, 0, 0})
	SMember(FVector)                                   LinearVelocityScale                                         OFFSET(getStruct<T>, {0xB4, 12, 0, 0})
	DMember(float)                                     AngularVelocityScale                                        OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     FictitiousAngularScale                                      OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(bool)                                      bUseTetrahedralConstraints                                  OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bUseThinShellVolumeConstraints                              OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(bool)                                      bUseContinuousCollisionDetection                            OFFSET(get<bool>, {0xCA, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   IterationCount                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   SubdivisionCount                                            OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bUseLocalSpaceSimulation                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseXPBDConstraints                                         OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ChaosCloth.ChaosClothingInteractor
/// Size: 0x0010 (0x000038 - 0x000048)
class UChaosClothingInteractor : public UClothingInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	// void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);            // [0xf28600] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	// void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);                                // [0xf284e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	// void SetLongRangeAttachmentLinear(float TetherStiffness);                                                                // [0xf28460] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	// void SetLongRangeAttachment(FVector2D TetherStiffness);                                                                  // [0xf283e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetGravity
	// void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);                                 // [0xf282b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetDamping
	// void SetDamping(float DampingCoefficient);                                                                               // [0xf28230] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetCollision
	// void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);      // [0xf280c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	// void SetAnimDriveLinear(float AnimDriveStiffness);                                                                       // [0xf28040] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	// void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);                                             // [0xf27f80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	// void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);                                // [0xf27e60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
	// void ResetAndTeleport(bool bReset, bool bTeleport);                                                                      // [0xf27d90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x04
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x07
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveStiffness                                        = 4,
	EChaosWeightMapTarget__AnimDriveDamping                                          = 5,
	EChaosWeightMapTarget__TetherStiffness                                           = 6
};

