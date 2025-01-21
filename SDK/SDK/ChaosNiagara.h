
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Niagara
/// dependency: NiagaraCore

#pragma pack(push, 0x1)

/// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum
/// Size: 0x01 (1 bytes)
enum class ELocationZToSpawnEnum : uint8_t
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None                        = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min                         = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max                         = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax                      = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum
/// Size: 0x01 (1 bytes)
enum class ELocationYToSpawnEnum : uint8_t
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None                        = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min                         = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max                         = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax                      = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum
/// Size: 0x01 (1 bytes)
enum class ELocationXToSpawnEnum : uint8_t
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None                        = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min                         = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max                         = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax                      = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum
/// Size: 0x01 (1 bytes)
enum class ELocationFilteringModeEnum : uint8_t
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive         = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive         = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max                                     = 2
};

/// Enum /Script/ChaosNiagara.EDataSourceTypeEnum
/// Size: 0x01 (1 bytes)
enum class EDataSourceTypeEnum : uint8_t
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision                       = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking                        = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing                        = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max                                            = 3
};

/// Enum /Script/ChaosNiagara.EDebugTypeEnum
/// Size: 0x01 (1 bytes)
enum class EDebugTypeEnum : uint8_t
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug                                   = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver                             = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex                      = 2,
	EDebugTypeEnum__ChaosNiagara_Max                                                 = 3
};

/// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum
/// Size: 0x01 (1 bytes)
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max                              = 3
};

/// Enum /Script/ChaosNiagara.EDataSortTypeEnum
/// Size: 0x01 (1 bytes)
enum class EDataSortTypeEnum : uint8_t
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting                           = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle                       = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin                  = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax                  = 3,
	EDataSortTypeEnum__ChaosNiagara_Max                                              = 4
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
/// Size: 0x0240 (576 bytes) (0x000040 - 0x000240) align 8 MaxSize: 0x0240
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(80,763) /* TSet<AChaosSolverActor*> */ __um(ChaosSolverActorSet);                                // 0x0040   (0x0050)  
	EDataSourceTypeEnum                                DataSourceType;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	int32_t                                            DataProcessFrequency;                                       // 0x0094   (0x0004)  
	int32_t                                            MaxNumberOfDataEntriesToSpawn;                              // 0x0098   (0x0004)  
	bool                                               DoSpawn;                                                    // 0x009C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	FVector2D                                          SpawnMultiplierMinMax;                                      // 0x00A0   (0x0008)  
	float                                              SpawnChance;                                                // 0x00A8   (0x0004)  
	FVector2D                                          ImpulseToSpawnMinMax;                                       // 0x00AC   (0x0008)  
	FVector2D                                          SpeedToSpawnMinMax;                                         // 0x00B4   (0x0008)  
	FVector2D                                          MassToSpawnMinMax;                                          // 0x00BC   (0x0008)  
	FVector2D                                          ExtentMinToSpawnMinMax;                                     // 0x00C4   (0x0008)  
	FVector2D                                          ExtentMaxToSpawnMinMax;                                     // 0x00CC   (0x0008)  
	FVector2D                                          VolumeToSpawnMinMax;                                        // 0x00D4   (0x0008)  
	FVector2D                                          SolverTimeToSpawnMinMax;                                    // 0x00DC   (0x0008)  
	int32_t                                            SurfaceTypeToSpawn;                                         // 0x00E4   (0x0004)  
	ELocationFilteringModeEnum                         LocationFilteringMode;                                      // 0x00E8   (0x0001)  
	ELocationXToSpawnEnum                              LocationXToSpawn;                                           // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00EA   (0x0002)  MISSED
	FVector2D                                          LocationXToSpawnMinMax;                                     // 0x00EC   (0x0008)  
	ELocationYToSpawnEnum                              LocationYToSpawn;                                           // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
	FVector2D                                          LocationYToSpawnMinMax;                                     // 0x00F8   (0x0008)  
	ELocationZToSpawnEnum                              LocationZToSpawn;                                           // 0x0100   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FVector2D                                          LocationZToSpawnMinMax;                                     // 0x0104   (0x0008)  
	EDataSortTypeEnum                                  DataSortingType;                                            // 0x010C   (0x0001)  
	bool                                               bGetExternalCollisionData;                                  // 0x010D   (0x0001)  
	bool                                               DoSpatialHash;                                              // 0x010E   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x010F   (0x0001)  MISSED
	FVector                                            SpatialHashVolumeMin;                                       // 0x0110   (0x000C)  
	FVector                                            SpatialHashVolumeMax;                                       // 0x011C   (0x000C)  
	FVector                                            SpatialHashVolumeCellSize;                                  // 0x0128   (0x000C)  
	int32_t                                            MaxDataPerCell;                                             // 0x0134   (0x0004)  
	bool                                               bApplyMaterialsFilter;                                      // 0x0138   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0139   (0x0007)  MISSED
	SDK_UNDEFINED(80,764) /* TSet<UPhysicalMaterial*> */ __um(ChaosBreakingMaterialSet);                           // 0x0140   (0x0050)  
	bool                                               bGetExternalBreakingData;                                   // 0x0190   (0x0001)  
	bool                                               bGetExternalTrailingData;                                   // 0x0191   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0192   (0x0002)  MISSED
	FVector2D                                          RandomPositionMagnitudeMinMax;                              // 0x0194   (0x0008)  
	float                                              InheritedVelocityMultiplier;                                // 0x019C   (0x0004)  
	ERandomVelocityGenerationTypeEnum                  RandomVelocityGenerationType;                               // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	FVector2D                                          RandomVelocityMagnitudeMinMax;                              // 0x01A4   (0x0008)  
	float                                              SpreadAngleMax;                                             // 0x01AC   (0x0004)  
	FVector                                            VelocityOffsetMin;                                          // 0x01B0   (0x000C)  
	FVector                                            VelocityOffsetMax;                                          // 0x01BC   (0x000C)  
	FVector2D                                          FinalVelocityMagnitudeMinMax;                               // 0x01C8   (0x0008)  
	float                                              MaxLatency;                                                 // 0x01D0   (0x0004)  
	EDebugTypeEnum                                     DebugType;                                                  // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x01D5   (0x0003)  MISSED
	int32_t                                            LastSpawnedPointID;                                         // 0x01D8   (0x0004)  
	float                                              LastSpawnTime;                                              // 0x01DC   (0x0004)  
	unsigned char                                      UnknownData10_6[0x10];                                      // 0x01E0   (0x0010)  MISSED
	float                                              SolverTime;                                                 // 0x01F0   (0x0004)  
	float                                              TimeStampOfLastProcessedData;                               // 0x01F4   (0x0004)  
	unsigned char                                      UnknownData11_7[0x48];                                      // 0x01F8   (0x0048)  MISSED
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfacePhysicsField
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{ 
public:
};

/// Struct /Script/ChaosNiagara.ChaosDestructionEvent
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FChaosDestructionEvent
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0018   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0024   (0x000C)  
	float                                              ExtentMin;                                                  // 0x0030   (0x0004)  
	float                                              ExtentMax;                                                  // 0x0034   (0x0004)  
	int32_t                                            ParticleID;                                                 // 0x0038   (0x0004)  
	float                                              Time;                                                       // 0x003C   (0x0004)  
	int32_t                                            Type;                                                       // 0x0040   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraDataInterfaceChaosDestruction) == 0x0240); // 576 bytes (0x000040 - 0x000240)
static_assert(sizeof(UNiagaraDataInterfacePhysicsField) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FChaosDestructionEvent) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSourceType) == 0x0090);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnMultiplierMinMax) == 0x00A0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ImpulseToSpawnMinMax) == 0x00AC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpeedToSpawnMinMax) == 0x00B4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MassToSpawnMinMax) == 0x00BC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMinToSpawnMinMax) == 0x00C4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMaxToSpawnMinMax) == 0x00CC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VolumeToSpawnMinMax) == 0x00D4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTimeToSpawnMinMax) == 0x00DC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationFilteringMode) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawn) == 0x00E9);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawnMinMax) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawn) == 0x00F4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawnMinMax) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawn) == 0x0100);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawnMinMax) == 0x0104);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSortingType) == 0x010C);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMin) == 0x0110);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMax) == 0x011C);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeCellSize) == 0x0128);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomPositionMagnitudeMinMax) == 0x0194);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityGenerationType) == 0x01A0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityMagnitudeMinMax) == 0x01A4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMin) == 0x01B0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMax) == 0x01BC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, FinalVelocityMagnitudeMinMax) == 0x01C8);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DebugType) == 0x01D4);
static_assert(offsetof(FChaosDestructionEvent, Position) == 0x0000);
static_assert(offsetof(FChaosDestructionEvent, Normal) == 0x000C);
static_assert(offsetof(FChaosDestructionEvent, Velocity) == 0x0018);
static_assert(offsetof(FChaosDestructionEvent, AngularVelocity) == 0x0024);
