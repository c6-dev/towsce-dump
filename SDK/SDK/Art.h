
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayCameras
/// dependency: Indiana

#pragma pack(push, 0x1)

/// Enum /Game/Art/VFX/Blueprints/Enumerations/EN_Material_Parameters.EN_Material_Parameters
/// Size: 0x01 (1 bytes)
enum class EN_Material_Parameters : uint8_t
{
	EN_Material_Parameters__NewEnumerator0                                           = 0,
	EN_Material_Parameters__NewEnumerator1                                           = 1,
	EN_Material_Parameters__NewEnumerator2                                           = 2
};

/// Class /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UFL_VFX_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.Hit_Flash
	// void Hit_Flash(FEventEffectParams& Params, class UObject* __WorldContext, FLinearColor& SceneColorTint, float& Delay_Duration); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.Unlock_Doors
	// void Unlock_Doors(class UObject* __WorldContext);                                                                        // [0x1c5deb0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.Decal_Spawn
	// void Decal_Spawn(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, FVector Location, FVector Normal, float Decal_Size_Min, float Decal_Size_Max, float Decal_Life_Min, float Decal_Life_Max, float Decal_Fade_Delay_Min, float Decal_Fade_Delay_Max, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.MID_Creation_Static
	// void MID_Creation_Static(class AStaticMeshActor* Static_Mesh, TArray<FName>& Material_Slot_Name, bool Create_Child_MID, int32_t Child_Indices_Start, TArray<FName>& Child_Components_Tags, class UObject* __WorldContext, TArray<UMaterialInstanceDynamic*>& MIDs); // [0x1c5deb0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.MID_Creation_Skeletal
	// void MID_Creation_Skeletal(class USkeletalMeshComponent* Skeletal_Mesh, TArray<FName>& Material_Slot_Name, bool Create_Child_MID, int32_t Child_Indices_Start, TArray<FName>& Child_Components_Tags, class UObject* __WorldContext, TArray<UMaterialInstanceDynamic*>& MIDs); // [0x1c5deb0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.MID_Adjustments
	// void MID_Adjustments(TArray<UMaterialInstanceDynamic*>& MIDs, TArray<int32_t>& Mat_MID_Index, TArray<FName>& Mat_Slot_Params, TArray<FVector>& Mat_Slot_Floats, TArray<FLinearColor>& Mat_Colors_A, TArray<FLinearColor>& Mat_Colors_B, TArray<TEnumAsByte<EN_Material_Parameters>>& Mat_Param_Change, float Lerp_Alpha, TArray<float>& Edited_Scalars, TArray<FLinearColor>& Edited_Colors, bool Reset_Values, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.Tagged_Children
	// void Tagged_Children(class USceneComponent* Parent_Mesh, FName Child_Component_Tag, FName MaterialSlotName, class UObject* __WorldContext, class UMaterialInstanceDynamic*& Mid, TArray<UMaterialInstanceDynamic*>& MIDs); // [0x1c5deb0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.PS_Parameters
	// void PS_Parameters(TArray<UParticleSystemComponent*>& PS_Array, bool Set_Color, FName Color_Param, FLinearColor Color, bool Set_Float, FName Float_Param, float Float, bool Set_Vector, FName Vector_Param, FVector Vector, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.Emitter_Toggle
	// void Emitter_Toggle(TArray<FName>& Emitters, TArray<UParticleSystemComponent*>& Particle_Systems, bool Toggle, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/FunctionLibraries/FL_VFX.FL_VFX_C.Death_Materials
	// void Death_Materials(class USkeletalMeshComponent* Skeletal_Mesh, FLinearColor RevealEmissiveColor, float FadeOut, float LeadingEdgeBlend, float RevealAmount, float EmissiveLevel, float LeadingEdgeAmount, float RevealEdgeTightness, float EmissiveBaseValue, class UTexture* RevealRMEA, class UTexture* RevealNormal, class UTexture* RevealBaseColor, class AActor* Actor, class UObject* __WorldContext, bool& Start_Transition, TArray<UMaterialInstanceDynamic*>& Character_MIDs, class UMaterialInstanceDynamic*& Teeth_MID); // [0x1c5deb0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Art/VFX/Blueprints/Cinematics/PlayerDefaultHitReaction.PlayerDefaultHitReaction_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 16 MaxSize: 0x01B0
class UPlayerDefaultHitReaction_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Art/VFX/Blueprints/Cinematics/CompanionAbility_Camera_Shake.CompanionAbility_Camera_Shake_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 16 MaxSize: 0x01B0
class UCompanionAbility_Camera_Shake_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Art/VFX/Blueprints/Cinematics/CompanionAbility_Camera_Shake_light.CompanionAbility_Camera_Shake_light_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 16 MaxSize: 0x01B0
class UCompanionAbility_Camera_Shake_light_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Art/VFX/Blueprints/Cinematics/CompanionAbility_Camera_Shake_Wander.CompanionAbility_Camera_Shake_Wander_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 16 MaxSize: 0x01B0
class UCompanionAbility_Camera_Shake_Wander_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Art/VFX/Blueprints/Cinematics/BP_Camera_Shake_CompMelee_01.BP_Camera_Shake_CompMelee_01_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 16 MaxSize: 0x01B0
class UBP_Camera_Shake_CompMelee_01_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Art/VFX/Blueprints/Cinematics/DebugCameraShake.DebugCameraShake_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 16 MaxSize: 0x01B0
class UDebugCameraShake_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Art/VFX/Blueprints/Templates/BP_VF.BP_VF_C
/// Size: 0x02E0 (736 bytes) (0x0002B8 - 0x0002E0) align 8 MaxSize: 0x02E0
class ABP_VF_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UVectorFieldComponent*                       VectorField;                                                // 0x02C0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02C8   (0x0008)  
	float                                              VF_Intensity;                                               // 0x02D0   (0x0004)  
	FRotator                                           VF_Rotation;                                                // 0x02D4   (0x000C)  


	/// Functions
	// Function /Game/Art/VFX/Blueprints/Templates/BP_VF.BP_VF_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/Templates/BP_VF.BP_VF_C.Update
	// void Update();                                                                                                           // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Art/VFX/Blueprints/Templates/BP_VF.BP_VF_C.ExecuteUbergraph_BP_VF
	// void ExecuteUbergraph_BP_VF(int32_t EntryPoint);                                                                         // [0x1c5deb0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UFL_VFX_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UPlayerDefaultHitReaction_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(UCompanionAbility_Camera_Shake_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(UCompanionAbility_Camera_Shake_light_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(UCompanionAbility_Camera_Shake_Wander_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(UBP_Camera_Shake_CompMelee_01_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(UDebugCameraShake_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(ABP_VF_C) == 0x02E0); // 736 bytes (0x0002B8 - 0x0002E0)
static_assert(offsetof(ABP_VF_C, UberGraphFrame) == 0x02B8);
static_assert(offsetof(ABP_VF_C, VectorField) == 0x02C0);
static_assert(offsetof(ABP_VF_C, DefaultSceneRoot) == 0x02C8);
static_assert(offsetof(ABP_VF_C, VF_Rotation) == 0x02D4);
