
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

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x2a1d300] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0xe129b0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x2a1d130] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0xe12780] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x2a1d100] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0xe19ac0] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x2a1cec0] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x02E0 (736 bytes) (0x000268 - 0x0002E0) align 16 MaxSize: 0x02E0
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,727) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                               // 0x0268   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0278   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0279   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x027A   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x027B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x027C   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0280   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0290   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x02A0   (0x0010)  
	float                                              UpdateInterval;                                             // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02B4   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x02C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x1c5deb0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x2a1cfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x2a1cf50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x05B0 (1456 bytes) (0x0004F8 - 0x0005B0) align 16 MaxSize: 0x05B0
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x04F8   (0x0010)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0508   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0510   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0518   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0519   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x051A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x051B   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0520   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0528   (0x0010)  
	unsigned char                                      UnknownData02_7[0x78];                                      // 0x0538   (0x0078)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0xd47710] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x2a1d270] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x2a1d1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x2a1d150] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x2a1d0c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x2a1d090] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x181fd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x181fa10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x2a1d070] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x2a1ce90] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMeshReconstructorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x02E0); // 736 bytes (0x000268 - 0x0002E0)
static_assert(sizeof(UMRMeshComponent) == 0x05B0); // 1456 bytes (0x0004F8 - 0x0005B0)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x027B);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0280);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0290);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x02A0);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x02B8);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0508);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0510);
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x0520);
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x0528);
