
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 8 MaxSize: 0x02C0
class AFieldSystemActor : public AActor
{ 
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x02B8   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UFieldSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/FieldSystemEngine.FieldObjectCommands
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FFieldObjectCommands
{ 
	TArray<FName>                                      TargetNames;                                                // 0x0000   (0x0010)  
	TArray<class UFieldNodeBase*>                      RootNodes;                                                  // 0x0010   (0x0010)  
	TArray<class UFieldSystemMetaData*>                MetaDatas;                                                  // 0x0020   (0x0010)  
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x05D0 (1488 bytes) (0x0004F8 - 0x0005D0) align 16 MaxSize: 0x05D0
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
	class UFieldSystem*                                FieldSystem;                                                // 0x04F8   (0x0008)  
	bool                                               bIsWorldField;                                              // 0x0500   (0x0001)  
	bool                                               bIsChaosField;                                              // 0x0501   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0502   (0x0006)  MISSED
	SDK_UNDEFINED(16,776) /* TArray<TWeakObjectPtr<AChaosSolverActor*>> */ __um(SupportedSolvers);                 // 0x0508   (0x0010)  
	FFieldObjectCommands                               ConstructionCommands;                                       // 0x0518   (0x0030)  
	FFieldObjectCommands                               BufferCommands;                                             // 0x0548   (0x0030)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x0578   (0x0058)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	// void ResetFieldSystem();                                                                                                 // [0x3c85b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	// void RemovePersistentFields();                                                                                           // [0x3c85b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	// void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);   // [0x3c859b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	// void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations);                // [0x3c857e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	// void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);                                                // [0x3c856b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	// void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);                       // [0x3c85520] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	// void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);                                                  // [0x3c853f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x3c85290] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	// void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);                                                 // [0x3c85160] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField
	// void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x3c85000] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	// void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x3c84ea0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UFieldSystemMetaData : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00E4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	// class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);                                           // [0x3c85fa0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	// class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x3c85f10] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldFilterType>                      FilterType;                                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
	// class UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType);                       // [0x3c85f10] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UFieldNodeBase : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UFieldNodeInt : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UFieldNodeFloat : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UFieldNodeVector : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UUniformInteger : public UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00E4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	// class UUniformInteger* SetUniformInteger(int32_t Magnitude);                                                             // [0x3c85fa0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align 8 MaxSize: 0x0100
class URadialIntMask : public UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00E0   (0x0004)  
	FVector                                            Position;                                                   // 0x00E4   (0x000C)  
	int32_t                                            InteriorValue;                                              // 0x00F0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00F4   (0x0004)  
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	// class URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x3c86820] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UUniformScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00E4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	// class UUniformScalar* SetUniformScalar(float Magnitude);                                                                 // [0x3c86af0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.WaveScalar
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align 8 MaxSize: 0x0100
class UWaveScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	FVector                                            Position;                                                   // 0x00E4   (0x000C)  
	float                                              WaveLength;                                                 // 0x00F0   (0x0004)  
	float                                              Period;                                                     // 0x00F4   (0x0004)  
	TEnumAsByte<EWaveFunctionType>                     Function;                                                   // 0x00F8   (0x0001)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00FA   (0x0006)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar
	// class UWaveScalar* SetWaveScalar(float Magnitude, FVector Position, float WaveLength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3c86c50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x0108 (264 bytes) (0x0000E0 - 0x000108) align 8 MaxSize: 0x0108
class URadialFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	float                                              MinRange;                                                   // 0x00E4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00E8   (0x0004)  
	float                                              Default;                                                    // 0x00EC   (0x0004)  
	float                                              Radius;                                                     // 0x00F0   (0x0004)  
	FVector                                            Position;                                                   // 0x00F4   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0101   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	// class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3c865d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x0110 (272 bytes) (0x0000E0 - 0x000110) align 8 MaxSize: 0x0110
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	float                                              MinRange;                                                   // 0x00E4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00E8   (0x0004)  
	float                                              Default;                                                    // 0x00EC   (0x0004)  
	float                                              Distance;                                                   // 0x00F0   (0x0004)  
	FVector                                            Position;                                                   // 0x00F4   (0x000C)  
	FVector                                            Normal;                                                     // 0x0100   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x010D   (0x0003)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	// class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3c86330] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0130 (304 bytes) (0x0000E0 - 0x000130) align 16 MaxSize: 0x0130
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	float                                              MinRange;                                                   // 0x00E4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00E8   (0x0004)  
	float                                              Default;                                                    // 0x00EC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00F0   (0x0030)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0121   (0x000F)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	// class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3c85bb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0120 (288 bytes) (0x0000E0 - 0x000120) align 16 MaxSize: 0x0120
class UNoiseField : public UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00E0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00E4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00F0   (0x0030)  


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	// class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);                                  // [0x3c86040] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x00F0 (240 bytes) (0x0000E0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UUniformVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	FVector                                            Direction;                                                  // 0x00E4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	// class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);                                              // [0x3c86a00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x00F0 (240 bytes) (0x0000E0 - 0x0000F0) align 8 MaxSize: 0x00F0
class URadialVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	FVector                                            Position;                                                   // 0x00E4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	// class URadialVector* SetRadialVector(float Magnitude, FVector Position);                                                 // [0x3c86a00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class URandomVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00E4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	// class URandomVector* SetRandomVector(float Magnitude);                                                                   // [0x3c86af0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align 8 MaxSize: 0x0100
class UOperatorField : public UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UFieldNodeBase*                              RightField;                                                 // 0x00E8   (0x0008)  
	class UFieldNodeBase*                              LeftField;                                                  // 0x00F0   (0x0008)  
	TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	// class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation); // [0x3c861d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UToIntegerField : public UFieldNodeInt
{ 
public:
	class UFieldNodeFloat*                             FloatField;                                                 // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	// class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);                                             // [0x3c86bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UToFloatField : public UFieldNodeFloat
{ 
public:
	class UFieldNodeInt*                               IntField;                                                   // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	// class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);                                                 // [0x3c86bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x00F8 (248 bytes) (0x0000E0 - 0x0000F8) align 8 MaxSize: 0x00F8
class UCullingField : public UFieldNodeBase
{ 
public:
	class UFieldNodeBase*                              Culling;                                                    // 0x00E0   (0x0008)  
	class UFieldNodeBase*                              Field;                                                      // 0x00E8   (0x0008)  
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	// class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x3c85e00] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:


	/// Functions
	// Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	// class UReturnResultsTerminal* SetReturnResultsTerminal();                                                                // [0x3c86b80] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(AFieldSystemActor) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UFieldSystem) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FFieldObjectCommands) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UFieldSystemComponent) == 0x05D0); // 1488 bytes (0x0004F8 - 0x0005D0)
static_assert(sizeof(UFieldSystemMetaData) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UFieldSystemMetaDataIteration) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UFieldSystemMetaDataProcessingResolution) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UFieldSystemMetaDataFilter) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UFieldNodeBase) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UFieldNodeInt) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UFieldNodeFloat) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UFieldNodeVector) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UUniformInteger) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(URadialIntMask) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UUniformScalar) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UWaveScalar) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(URadialFalloff) == 0x0108); // 264 bytes (0x0000E0 - 0x000108)
static_assert(sizeof(UPlaneFalloff) == 0x0110); // 272 bytes (0x0000E0 - 0x000110)
static_assert(sizeof(UBoxFalloff) == 0x0130); // 304 bytes (0x0000E0 - 0x000130)
static_assert(sizeof(UNoiseField) == 0x0120); // 288 bytes (0x0000E0 - 0x000120)
static_assert(sizeof(UUniformVector) == 0x00F0); // 240 bytes (0x0000E0 - 0x0000F0)
static_assert(sizeof(URadialVector) == 0x00F0); // 240 bytes (0x0000E0 - 0x0000F0)
static_assert(sizeof(URandomVector) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UOperatorField) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UToIntegerField) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UToFloatField) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UCullingField) == 0x00F8); // 248 bytes (0x0000E0 - 0x0000F8)
static_assert(sizeof(UReturnResultsTerminal) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x02B8);
static_assert(offsetof(FFieldObjectCommands, TargetNames) == 0x0000);
static_assert(offsetof(FFieldObjectCommands, RootNodes) == 0x0010);
static_assert(offsetof(FFieldObjectCommands, MetaDatas) == 0x0020);
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x04F8);
static_assert(offsetof(UFieldSystemComponent, ConstructionCommands) == 0x0518);
static_assert(offsetof(UFieldSystemComponent, BufferCommands) == 0x0548);
static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 0x00E0);
static_assert(offsetof(UFieldSystemMetaDataFilter, FilterType) == 0x00E0);
static_assert(offsetof(URadialIntMask, Position) == 0x00E4);
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 0x00F8);
static_assert(offsetof(UWaveScalar, Position) == 0x00E4);
static_assert(offsetof(UWaveScalar, Function) == 0x00F8);
static_assert(offsetof(UWaveScalar, Falloff) == 0x00F9);
static_assert(offsetof(URadialFalloff, Position) == 0x00F4);
static_assert(offsetof(URadialFalloff, Falloff) == 0x0100);
static_assert(offsetof(UPlaneFalloff, Position) == 0x00F4);
static_assert(offsetof(UPlaneFalloff, Normal) == 0x0100);
static_assert(offsetof(UPlaneFalloff, Falloff) == 0x010C);
static_assert(offsetof(UBoxFalloff, Transform) == 0x00F0);
static_assert(offsetof(UBoxFalloff, Falloff) == 0x0120);
static_assert(offsetof(UNoiseField, Transform) == 0x00F0);
static_assert(offsetof(UUniformVector, Direction) == 0x00E4);
static_assert(offsetof(URadialVector, Position) == 0x00E4);
static_assert(offsetof(UOperatorField, RightField) == 0x00E8);
static_assert(offsetof(UOperatorField, LeftField) == 0x00F0);
static_assert(offsetof(UOperatorField, Operation) == 0x00F8);
static_assert(offsetof(UToIntegerField, FloatField) == 0x00E0);
static_assert(offsetof(UToFloatField, IntField) == 0x00E0);
static_assert(offsetof(UCullingField, Culling) == 0x00E0);
static_assert(offsetof(UCullingField, Field) == 0x00E8);
static_assert(offsetof(UCullingField, Operation) == 0x00F0);
