
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000A0) align 16 MaxSize: 0x00A0
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0040   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0048   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0054   (0x000C)  
	FVector                                            Scale;                                                      // 0x0060   (0x000C)  
	bool                                               bAbsoluteScale;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x23];                                      // 0x006D   (0x0023)  MISSED
	bool                                               Attached : 1;                                               // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x0094   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x009C   (0x0004)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                            // [0xbbac40] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0038   (0x0008)  
	FName                                              SocketName;                                                 // 0x0040   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0048   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0054   (0x000C)  
	bool                                               bDestroyAtEnd;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);                                              // [0xbbaba0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x00B8 (184 bytes) (0x000068 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0068   (0x0050)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	// float GetNotifyProgress(class UMeshComponent* MeshComp);                                                                 // [0xbbab00] Final|Native|Public|BlueprintCallable|Const 
};

#pragma pack(pop)


static_assert(sizeof(UAnimNotify_PlayNiagaraEffect) == 0x00A0); // 160 bytes (0x000040 - 0x0000A0)
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffect) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffectAdvanced) == 0x00B8); // 184 bytes (0x000068 - 0x0000B8)
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Template) == 0x0040);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, LocationOffset) == 0x0048);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, RotationOffset) == 0x0054);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Scale) == 0x0060);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, SocketName) == 0x0094);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, Template) == 0x0038);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, SocketName) == 0x0040);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, LocationOffset) == 0x0048);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, RotationOffset) == 0x0054);
