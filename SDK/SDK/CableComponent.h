
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

/// Class /Script/CableComponent.CableActor
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 8 MaxSize: 0x02C0
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x02B8   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x05B0 (1456 bytes) (0x000520 - 0x0005B0) align 16 MaxSize: 0x05B0
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0520   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0521   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0522   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0528   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x0550   (0x0008)  
	FVector                                            EndLocation;                                                // 0x0558   (0x000C)  
	float                                              CableLength;                                                // 0x0564   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x0568   (0x0004)  
	float                                              SubstepTime;                                                // 0x056C   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x0570   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x0574   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x0575   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x0576   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x0577   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x0578   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0579   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x057C   (0x0004)  
	FVector                                            CableForce;                                                 // 0x0580   (0x000C)  
	float                                              CableGravityScale;                                          // 0x058C   (0x0004)  
	float                                              CableWidth;                                                 // 0x0590   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0594   (0x0004)  
	float                                              TileMaterial;                                               // 0x0598   (0x0004)  
	unsigned char                                      UnknownData02_7[0x14];                                      // 0x059C   (0x0014)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x103c870] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x103c760] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x103c6b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x103c680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x103c650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(ACableActor) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UCableComponent) == 0x05B0); // 1456 bytes (0x000520 - 0x0005B0)
static_assert(offsetof(ACableActor, CableComponent) == 0x02B8);
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x0528);
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x0550);
static_assert(offsetof(UCableComponent, EndLocation) == 0x0558);
static_assert(offsetof(UCableComponent, CableForce) == 0x0580);
