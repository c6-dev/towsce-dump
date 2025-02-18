
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UClothConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UClothingSimulationFactory : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingInteractor
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UClothingInteractor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UClothingSimulationInteractor : public UObject
{ 
public:
	TMap<FName, class UClothingInteractor*>            ClothingInteractors;                                        // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0080   (0x0018)  MISSED


	/// Functions
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	// void SetNumSubsteps(int32_t NumSubsteps);                                                                                // [0x3104670] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	// void SetNumIterations(int32_t NumIterations);                                                                            // [0x31045e0] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	// void SetAnimDriveSpringStiffness(float InStiffness);                                                                     // [0x3104550] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// void PhysicsAssetUpdated();                                                                                              // [0x2a1d130] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	// float GetSimulationTime();                                                                                               // [0x3104530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	// int32_t GetNumSubsteps();                                                                                                // [0x3104510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	// int32_t GetNumKinematicParticles();                                                                                      // [0x31044f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	// int32_t GetNumIterations();                                                                                              // [0x31044d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	// int32_t GetNumDynamicParticles();                                                                                        // [0x31044b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	// int32_t GetNumCloths();                                                                                                  // [0x3104490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	// class UClothingInteractor* GetClothingInteractor(FString ClothingAssetName);                                             // [0x31043e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	// void EnableGravityOverride(FVector& InVector);                                                                           // [0x3104350] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	// void DisableGravityOverride();                                                                                           // [0xe19ac0] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// void ClothConfigUpdated();                                                                                               // [0xbb4720] Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UClothSharedSimConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UClothingAssetBase : public UObject
{ 
public:
	FString                                            ImportedFilePath;                                           // 0x0030   (0x0010)  
	FGuid                                              AssetGuid;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 MaxSize: 0x004C
struct FClothVertBoneData
{ 
	int32_t                                            NumInfluences;                                              // 0x0000   (0x0004)  
	uint16_t                                           BoneIndices[12];                                            // 0x0004   (0x0018)  
	float                                              BoneWeights[12];                                            // 0x001C   (0x0030)  
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
public:
	TArray<FVector>                                    Vertices;                                                   // 0x0030   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0040   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0050   (0x0010)  
	TArray<float>                                      InverseMasses;                                              // 0x0060   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0070   (0x0010)  
	int32_t                                            NumFixedVerts;                                              // 0x0080   (0x0004)  
	int32_t                                            MaxBoneWeights;                                             // 0x0084   (0x0004)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0098   (0x0050)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FClothCollisionPrim_Sphere
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	FVector                                            LocalPosition;                                              // 0x0008   (0x000C)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FClothCollisionPrim_SphereConnection
{ 
	int32_t                                            SphereIndices[2];                                           // 0x0000   (0x0008)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FClothCollisionPrim_ConvexFace
{ 
	FPlane                                             Plane;                                                      // 0x0000   (0x0010)  
	TArray<int32_t>                                    Indices;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FClothCollisionPrim_Convex
{ 
	TArray<FClothCollisionPrim_ConvexFace>             Faces;                                                      // 0x0000   (0x0010)  
	TArray<FVector>                                    SurfacePoints;                                              // 0x0010   (0x0010)  
	int32_t                                            BoneIndex;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FClothCollisionPrim_Box
{ 
	FVector                                            LocalPosition;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              LocalRotation;                                              // 0x0010   (0x0010)  
	FVector                                            HalfExtents;                                                // 0x0020   (0x000C)  
	int32_t                                            BoneIndex;                                                  // 0x002C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FClothCollisionData
{ 
	TArray<FClothCollisionPrim_Sphere>                 Spheres;                                                    // 0x0000   (0x0010)  
	TArray<FClothCollisionPrim_SphereConnection>       SphereConnections;                                          // 0x0010   (0x0010)  
	TArray<FClothCollisionPrim_Convex>                 Convexes;                                                   // 0x0020   (0x0010)  
	TArray<FClothCollisionPrim_Box>                    Boxes;                                                      // 0x0030   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UClothConfigBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UClothingSimulationFactory) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UClothingInteractor) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UClothingSimulationInteractor) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UClothSharedSimConfigBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UClothingAssetBase) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FClothVertBoneData) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(UClothPhysicalMeshDataBase_Legacy) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(FClothCollisionPrim_Sphere) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FClothCollisionPrim_SphereConnection) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FClothCollisionPrim_ConvexFace) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FClothCollisionPrim_Convex) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FClothCollisionPrim_Box) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FClothCollisionData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UClothingSimulationInteractor, ClothingInteractors) == 0x0030);
static_assert(offsetof(UClothingAssetBase, ImportedFilePath) == 0x0030);
static_assert(offsetof(UClothingAssetBase, AssetGuid) == 0x0040);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Vertices) == 0x0030);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Normals) == 0x0040);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Indices) == 0x0050);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, InverseMasses) == 0x0060);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, BoneData) == 0x0070);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices) == 0x0088);
static_assert(offsetof(FClothCollisionPrim_Sphere, LocalPosition) == 0x0008);
static_assert(offsetof(FClothCollisionPrim_ConvexFace, Plane) == 0x0000);
static_assert(offsetof(FClothCollisionPrim_ConvexFace, Indices) == 0x0010);
static_assert(offsetof(FClothCollisionPrim_Convex, Faces) == 0x0000);
static_assert(offsetof(FClothCollisionPrim_Convex, SurfacePoints) == 0x0010);
static_assert(offsetof(FClothCollisionPrim_Box, LocalPosition) == 0x0000);
static_assert(offsetof(FClothCollisionPrim_Box, LocalRotation) == 0x0010);
static_assert(offsetof(FClothCollisionPrim_Box, HalfExtents) == 0x0020);
static_assert(offsetof(FClothCollisionData, Spheres) == 0x0000);
static_assert(offsetof(FClothCollisionData, SphereConnections) == 0x0010);
static_assert(offsetof(FClothCollisionData, Convexes) == 0x0020);
static_assert(offsetof(FClothCollisionData, Boxes) == 0x0030);
