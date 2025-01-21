
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothConstraintSetupNv : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StiffnessMultiplier                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StretchLimit                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CompressionLimit                                            OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0118 (0x000030 - 0x000148)
class UClothConfigNv : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(EClothingWindMethodNv)                     ClothingWindMethod                                          OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FClothConstraintSetupNv)                   VerticalConstraint                                          OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   HorizontalConstraint                                        OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   BendConstraint                                              OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   ShearConstraint                                             OFFSET(getStruct<T>, {0x64, 16, 0, 0})
	DMember(float)                                     SelfCollisionRadius                                         OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     SelfCollisionStiffness                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     SelfCollisionCullScale                                      OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FVector)                                   Damping                                                     OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     WindDragCoefficient                                         OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     WindLiftCoefficient                                         OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FVector)                                   LinearDrag                                                  OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FVector)                                   AngularDrag                                                 OFFSET(getStruct<T>, {0xA4, 12, 0, 0})
	SMember(FVector)                                   LinearInertiaScale                                          OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	SMember(FVector)                                   AngularInertiaScale                                         OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	SMember(FVector)                                   CentrifugalInertiaScale                                     OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(float)                                     SolverFrequency                                             OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     StiffnessFrequency                                          OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0xDC, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(float)                                     TetherStiffness                                             OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     TetherLimit                                                 OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     AnimDriveSpringStiffness                                    OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     AnimDriveDamperStiffness                                    OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(EClothingWindMethod_Legacy)                WindMethod                                                  OFFSET(get<T>, {0x104, 1, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              VerticalConstraintConfig                                    OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              HorizontalConstraintConfig                                  OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              BendConstraintConfig                                        OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              ShearConstraintConfig                                       OFFSET(getStruct<T>, {0x138, 16, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0000 (0x000030 - 0x000030)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	// void SetAnimDriveDamperStiffness(float InStiffness);                                                                     // [0x3ac0e40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0040 (0x0000E8 - 0x000128)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<float>)                             MaxDistances                                                OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<float>)                             BackstopDistances                                           OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<float>)                             BackstopRadiuses                                            OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<float>)                             AnimDriveMultipliers                                        OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x02
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1
};

