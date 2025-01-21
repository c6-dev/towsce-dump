
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AkAudio
/// dependency: AnimGraphRuntime
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FaceFX
/// dependency: Indiana
/// dependency: Materials
/// dependency: NavigationSystem
/// dependency: Niagara
/// dependency: UI

#pragma pack(push, 0x1)

/// Class /Game/Blueprints/AI/Navigation/IndianaAvoidanceManager_BP.IndianaAvoidanceManager_BP_C
/// Size: 0x0150 (336 bytes) (0x000150 - 0x000150) align 8 MaxSize: 0x0150
class UIndianaAvoidanceManager_BP_C : public UIndianaAvoidanceManager
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade_PlayerArmor.Spell_SkillUnlock_Persuade_PlayerArmor_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Persuade_PlayerArmor_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/MedicalForce/CE_MedicalForce.CE_MedicalForce_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_MedicalForce_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume4.Spell_BonusDamageOnConsume4_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_BonusDamageOnConsume4_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume3.Spell_BonusDamageOnConsume3_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_BonusDamageOnConsume3_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume2.Spell_BonusDamageOnConsume2_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_BonusDamageOnConsume2_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume1.Spell_BonusDamageOnConsume1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_BonusDamageOnConsume1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie_PlayerWeakSpot.Spell_SkillUnlock_Lie_PlayerWeakSpot_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lie_PlayerWeakSpot_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/InspirationArmor/CE_Inspiration40_Armor.CE_Inspiration40_Armor_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Inspiration40_Armor_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration40_Companion.Spell_SkillUnlock_Inspiration40_Companion_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Inspiration40_Companion_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination100_Companion.Spell_SkillUnlock_Determination100_Companion_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Determination100_Companion_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C
/// Size: 0x0200 (512 bytes) (0x0001B8 - 0x000200) align 8 MaxSize: 0x0200
class UCE_Stagger_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<FName>                                      Sockets;                                                    // 0x01C0   (0x0010)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01D0   (0x0010)  
	TArray<FParticleSysParam>                          NewVar;                                                     // 0x01E0   (0x0010)  
	TArray<FParticleSysParam>                          PS_Params;                                                  // 0x01F0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C.ExecuteUbergraph_CE_Stagger
	// void ExecuteUbergraph_CE_Stagger(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Pathing_Behavior.NavFilter_Pathing_Behavior_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UNavFilter_Pathing_Behavior_C : public UNPCNavigationQueryFilter_Pathing
{ 
public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Pathing.NavFilter_Pathing_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UNavFilter_Pathing_C : public UNPCNavigationQueryFilter_Pathing
{ 
public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_EQS.NavFilter_EQS_C
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_EQS_C : public UNPCNavigationQueryFilter_EQS
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/HitReact/CE_LightHitReact.CE_LightHitReact_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UCE_LightHitReact_C : public UDirectionalAnimDisableStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/HitReact/CE_HeavyHitReact.CE_HeavyHitReact_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UCE_HeavyHitReact_C : public UDirectionalAnimDisableStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/CHAR/NPC/IndianaAiController_BP.IndianaAiController_BP_C
/// Size: 0x04A8 (1192 bytes) (0x0004A8 - 0x0004A8) align 8 MaxSize: 0x04A8
class AIndianaAiController_BP_C : public AIndianaAiController
{ 
public:


	/// Functions
	// Function /Game/Blueprints/CHAR/NPC/IndianaAiController_BP.IndianaAiController_BP_C.GetFootstepAwarenessIncrease
	// float GetFootstepAwarenessIncrease(bool bIsStealthed, int32_t OwnerPerceptionSkill, int32_t TargetSneakSkill, EAlertState InAlertState, float BaseFootstepAwareness, float Distance, float SoundRadius); // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/CHAR/NPC/IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessDecreaseRate
	// float GetSightAwarenessDecreaseRate(bool bIsStealthed, int32_t OwnerPerceptionSkill, int32_t TargetSneakSkill, EAlertState InAlertState, bool bLost, bool bDeadBodyKiller); // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/CHAR/NPC/IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessIncreaseRate
	// float GetSightAwarenessIncreaseRate(bool bIsStealthed, int32_t OwnerPerceptionSkill, int32_t TargetSneakSkill, EAlertState InAlertState, float Distance, float SightRadius, bool bAllowTargeting); // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Blueprints/CHAR/NPC/Base_Ai_Character.Base_Ai_Character_C
/// Size: 0x0EB0 (3760 bytes) (0x000E60 - 0x000EB0) align 16 MaxSize: 0x0EB0
class ABase_Ai_Character_C : public AIndianaAiCharacter
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0E60   (0x0008)  
	class URpgStatComponent*                           RpgStat;                                                    // 0x0E68   (0x0008)  
	class UEquipmentComponent*                         Equipment;                                                  // 0x0E70   (0x0008)  
	class UAppearanceComponent*                        Appearance;                                                 // 0x0E78   (0x0008)  
	class UCharacterDeathComponent*                    CharacterDeath;                                             // 0x0E80   (0x0008)  
	class UTargetableComponent*                        Targetable;                                                 // 0x0E88   (0x0008)  
	class UHealthComponent*                            Health;                                                     // 0x0E90   (0x0008)  
	float                                              Scale;                                                      // 0x0E98   (0x0004)  
	bool                                               AlwaysUpdateFaceModifications;                              // 0x0E9C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0E9D   (0x0003)  MISSED
	class UFaceFXActor*                                FaceFXAsset;                                                // 0x0EA0   (0x0008)  
	class USkeletalMesh*                               FaceFXAuthoredSkeleton;                                     // 0x0EA8   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/CHAR/NPC/Base_Ai_Character.Base_Ai_Character_C.SetEmotion
	// void SetEmotion(EEmotion NewEmotion);                                                                                    // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/NPC/Base_Ai_Character.Base_Ai_Character_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1c5deb0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/NPC/Base_Ai_Character.Base_Ai_Character_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/NPC/Base_Ai_Character.Base_Ai_Character_C.ExecuteUbergraph_Base_Ai_Character
	// void ExecuteUbergraph_Base_Ai_Character(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C
/// Size: 0x0151 (337 bytes) (0x000120 - 0x000151) align 8 MaxSize: 0x0151
class UBaseCharacterDeath_C : public UDeathClass
{ 
public:
	TArray<FName>                                      QuadEmitters;                                               // 0x0120   (0x0010)  
	TArray<FName>                                      BipedEmitters;                                              // 0x0130   (0x0010)  
	TArray<FName>                                      TripedEmitters;                                             // 0x0140   (0x0010)  
	bool                                               PileSpawned;                                                // 0x0150   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.TriggerNiagaraDeathAOE
	// void TriggerNiagaraDeathAOE(class UNiagaraSystem* SystemTemplate);                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.TriggerNiagaraDeathParticles
	// void TriggerNiagaraDeathParticles(class UNiagaraSystem* SystemTemplate);                                                 // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.UpdatePileDissolve
	// void UpdatePileDissolve(float& CurrentTime, float DissolveDuration, class UMaterialInstanceDynamic* Material);           // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.UpdateTransitionCompletionDelay
	// void UpdateTransitionCompletionDelay(float Delta);                                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.CreateAshPile
	// void CreateAshPile(class UStaticMesh* LootablePile, class UMaterialInterface* LootablePileMaterial, class UMaterialInstanceDynamic*& Ash_MID); // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnSpine
	// void TriggerParticlesOnSpine(class UParticleSystem* EmitterTemplate);                                                    // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.CalcBodyTypeImpact
	// void CalcBodyTypeImpact();                                                                                               // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.FindAndPostAudioEvents
	// void FindAndPostAudioEvents();                                                                                           // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnBreakSockets
	// void TriggerParticlesOnBreakSockets(bool TriggerImpactSpray, FName AttachedSocket, FName DetachedSocket);                // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/BaseCharacterDeath.BaseCharacterDeath_C.ApplyDeathMaterials
	// void ApplyDeathMaterials();                                                                                              // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_BeverageTech.Spell_AptitudeEffect_BeverageTech_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_BeverageTech_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Bureaucrat.Spell_AptitudeEffect_Bureaucrat_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Bureaucrat_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Cashier.Spell_AptitudeEffect_Cashier_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Cashier_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Chef.Spell_AptitudeEffect_Chef_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Chef_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Construction.Spell_AptitudeEffect_Construction_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Construction_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Elevator.Spell_AptitudeEffect_Elevator_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Elevator_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Factory.Spell_AptitudeEffect_Factory_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Factory_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Farmer.Spell_AptitudeEffect_Farmer_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Farmer_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_FoodTester.Spell_AptitudeEffect_FoodTester_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_FoodTester_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Janitor.Spell_AptitudeEffect_Janitor_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Janitor_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Mascot.Spell_AptitudeEffect_Mascot_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Mascot_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_MedicalTech.Spell_AptitudeEffect_MedicalTech_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_MedicalTech_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_NoAptitude.Spell_AptitudeEffect_NoAptitude_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_NoAptitude_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_SafetyInspector.Spell_AptitudeEffect_SafetyInspector_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_SafetyInspector_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Scientist.Spell_AptitudeEffect_Scientist_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AptitudeEffect_Scientist_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Stagger/CE_Stagger_PerfectBlock.CE_Stagger_PerfectBlock_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UCE_Stagger_PerfectBlock_C : public UCE_Stagger_C
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block80.Spell_SkillUnlock_Block80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Block80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block60.Spell_SkillUnlock_Block60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Block60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block40.Spell_SkillUnlock_Block40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Block40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block20.Spell_SkillUnlock_Block20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Block20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block150.Spell_SkillUnlock_Block150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Block150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block100.Spell_SkillUnlock_Block100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Block100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Player_PassiveDTFromBlock.Spell_Player_PassiveDTFromBlock_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Player_PassiveDTFromBlock_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/DeterminationCritDmg/CE_Determination40_CritDmg.CE_Determination40_CritDmg_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Determination40_CritDmg_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination60.Spell_SkillUnlock_Determination60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Determination60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination40.Spell_SkillUnlock_Determination40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Determination40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination20.Spell_SkillUnlock_Determination20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Determination20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination150.Spell_SkillUnlock_Determination150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Determination150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination100.Spell_SkillUnlock_Determination100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Determination100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination80.Spell_SkillUnlock_Determination80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Determination80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/DodgeProtection/CE_DodgeProtection.CE_DodgeProtection_C
/// Size: 0x01A8 (424 bytes) (0x0001A8 - 0x0001A8) align 8 MaxSize: 0x01A8
class UCE_DodgeProtection_C : public UArmorStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge80.Spell_SkillUnlock_Dodge80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Dodge80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge60.Spell_SkillUnlock_Dodge60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Dodge60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge40.Spell_SkillUnlock_Dodge40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Dodge40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge20.Spell_SkillUnlock_Dodge20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Dodge20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge100.Spell_SkillUnlock_Dodge100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Dodge100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge150.Spell_SkillUnlock_Dodge150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Dodge150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering80.Spell_SkillUnlock_Engineering80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Engineering80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering60.Spell_SkillUnlock_Engineering60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Engineering60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering40.Spell_SkillUnlock_Engineering40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Engineering40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering20.Spell_SkillUnlock_Engineering20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Engineering20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering150.Spell_SkillUnlock_Engineering150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Engineering150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering100.Spell_SkillUnlock_Engineering100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Engineering100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack80.Spell_SkillUnlock_Hack80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Hack80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack60.Spell_SkillUnlock_Hack60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Hack60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack40.Spell_SkillUnlock_Hack40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Hack40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack20.Spell_SkillUnlock_Hack20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Hack20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack150.Spell_SkillUnlock_Hack150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Hack150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack100.Spell_SkillUnlock_Hack100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Hack100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns80.Spell_SkillUnlock_Handguns80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Handguns80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns60.Spell_SkillUnlock_Handguns60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Handguns60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns40.Spell_SkillUnlock_Handguns40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Handguns40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns20.Spell_SkillUnlock_Handguns20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Handguns20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns150.Spell_SkillUnlock_Handguns150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Handguns150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns100.Spell_SkillUnlock_Handguns100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Handguns100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Knockdown/CE_Knockdown.CE_Knockdown_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Knockdown_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee80.Spell_SkillUnlock_HvyMelee80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyMelee80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee60.Spell_SkillUnlock_HvyMelee60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyMelee60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee40.Spell_SkillUnlock_HvyMelee40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyMelee40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee20.Spell_SkillUnlock_HvyMelee20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyMelee20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee100.Spell_SkillUnlock_HvyMelee100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyMelee100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee150.Spell_SkillUnlock_HvyMelee150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyMelee150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons80.Spell_SkillUnlock_HvyWeapons80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyWeapons80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons60.Spell_SkillUnlock_HvyWeapons60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyWeapons60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons40.Spell_SkillUnlock_HvyWeapons40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyWeapons40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons20.Spell_SkillUnlock_HvyWeapons20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyWeapons20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons150.Spell_SkillUnlock_HvyWeapons150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyWeapons150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons100.Spell_SkillUnlock_HvyWeapons100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_HvyWeapons100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration80.Spell_SkillUnlock_Inspiration80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Inspiration80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration60.Spell_SkillUnlock_Inspiration60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Inspiration60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration40.Spell_SkillUnlock_Inspiration40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Inspiration40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration20.Spell_SkillUnlock_Inspiration20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Inspiration20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration150.Spell_SkillUnlock_Inspiration150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Inspiration150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration100.Spell_SkillUnlock_Inspiration100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Inspiration100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate_PlayerCrit.Spell_SkillUnlock_Intimidate_PlayerCrit_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Intimidate_PlayerCrit_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Terrify/CE_Terrify.CE_Terrify_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Terrify_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate80.Spell_SkillUnlock_Intimidate80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Intimidate80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate60.Spell_SkillUnlock_Intimidate60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Intimidate60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate40.Spell_SkillUnlock_Intimidate40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Intimidate40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate100.Spell_SkillUnlock_Intimidate100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Intimidate100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate20.Spell_SkillUnlock_Intimidate20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Intimidate20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate150.Spell_SkillUnlock_Intimidate150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Intimidate150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Scramble/CE_Scramble_ReapplyCD.CE_Scramble_ReapplyCD_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_Scramble_ReapplyCD_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Scramble/CE_Scramble.CE_Scramble_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Scramble_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie80.Spell_SkillUnlock_Lie80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lie80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie60.Spell_SkillUnlock_Lie60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lie60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie40.Spell_SkillUnlock_Lie40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lie40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie20.Spell_SkillUnlock_Lie20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lie20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie150.Spell_SkillUnlock_Lie150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lie150_C : public USpell_SkillUnlock_Lie20_C
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie100.Spell_SkillUnlock_Lie100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lie100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C
/// Size: 0x01E0 (480 bytes) (0x0001B8 - 0x0001E0) align 8 MaxSize: 0x01E0
class UCE_Stun_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<FName>                                      Sockets;                                                    // 0x01C0   (0x0010)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01D0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C.ExecuteUbergraph_CE_Stun
	// void ExecuteUbergraph_CE_Stun(int32_t EntryPoint);                                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee80.Spell_SkillUnlock_LtMelee80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LtMelee80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee60.Spell_SkillUnlock_LtMelee60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LtMelee60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee40.Spell_SkillUnlock_LtMelee40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LtMelee40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee20.Spell_SkillUnlock_LtMelee20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LtMelee20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee150.Spell_SkillUnlock_LtMelee150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LtMelee150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee100.Spell_SkillUnlock_LtMelee100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LtMelee100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick80.Spell_SkillUnlock_LockPick80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LockPick80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick60.Spell_SkillUnlock_LockPick60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LockPick60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick40.Spell_SkillUnlock_LockPick40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LockPick40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick20.Spell_SkillUnlock_LockPick20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LockPick20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lockpick150.Spell_SkillUnlock_Lockpick150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Lockpick150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick100.Spell_SkillUnlock_LockPick100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LockPick100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns80.Spell_SkillUnlock_LongGuns80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LongGuns80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns60.Spell_SkillUnlock_LongGuns60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LongGuns60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns40.Spell_SkillUnlock_LongGuns40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LongGuns40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns20.Spell_SkillUnlock_LongGuns20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LongGuns20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns150.Spell_SkillUnlock_LongGuns150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LongGuns150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns100.Spell_SkillUnlock_LongGuns100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_LongGuns100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical80.Spell_SkillUnlock_Medical80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Medical80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical60.Spell_SkillUnlock_Medical60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Medical60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical40.Spell_SkillUnlock_Medical40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Medical40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical20.Spell_SkillUnlock_Medical20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Medical20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical150.Spell_SkillUnlock_Medical150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Medical150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical100.Spell_SkillUnlock_Medical100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Medical100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Cower/CE_Cower_ReapplyCD.CE_Cower_ReapplyCD_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_Cower_ReapplyCD_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Cower/CE_Cower.CE_Cower_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Cower_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade80.Spell_SkillUnlock_Persuade80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Persuade80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade60.Spell_SkillUnlock_Persuade60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Persuade60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade40.Spell_SkillUnlock_Persuade40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Persuade40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade100.Spell_SkillUnlock_Persuade100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Persuade100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade20.Spell_SkillUnlock_Persuade20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Persuade20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade150.Spell_SkillUnlock_Persuade150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Persuade150_C : public USpell_SkillUnlock_Persuade20_C
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science80.Spell_SkillUnlock_Science80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Science80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science60.Spell_SkillUnlock_Science60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Science60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science40.Spell_SkillUnlock_Science40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Science40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science20.Spell_SkillUnlock_Science20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Science20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science150.Spell_SkillUnlock_Science150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Science150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science100.Spell_SkillUnlock_Science100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Science100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak80.Spell_SkillUnlock_Sneak80_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Sneak80_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak60.Spell_SkillUnlock_Sneak60_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Sneak60_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak40.Spell_SkillUnlock_Sneak40_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Sneak40_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak20.Spell_SkillUnlock_Sneak20_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Sneak20_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak150.Spell_SkillUnlock_Sneak150_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Sneak150_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak100.Spell_SkillUnlock_Sneak100_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_SkillUnlock_Sneak100_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Item/QuestItem/0701_CryoKey.0701_CryoKey_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class U0701_CryoKey_C : public UQuestItem
{ 
public:
};

/// Class /Game/Blueprints/Item/QuestItem/0701_ChairmanKey.0701_ChairmanKey_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class U0701_ChairmanKey_C : public UQuestItem
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Wits_Attribute.Wits_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UWits_Attribute_C : public UWitsAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Willpower_Attribute.Willpower_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UWillpower_Attribute_C : public UWillpowerAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Temperament_Attribute.Temperament_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UTemperament_Attribute_C : public UTemperamentAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Strength_Attribute.Strength_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UStrength_Attribute_C : public UStrengthAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Perception_Attribute.Perception_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UPerception_Attribute_C : public UPerceptionAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Intelligence_Attribute.Intelligence_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UIntelligence_Attribute_C : public UIntelligenceAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Endurance_Attribute.Endurance_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UEndurance_Attribute_C : public UEnduranceAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Dexterity_Attribute.Dexterity_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UDexterity_Attribute_C : public UDexterityAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/Charm_Attribute.Charm_Attribute_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UCharm_Attribute_C : public UCharmAttribute
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Sneak_Skill.Sneak_Skill_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class USneak_Skill_C : public USneakSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Science_Skill.Science_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UScience_Skill_C : public UScienceSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Persuade_Skill.Persuade_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UPersuade_Skill_C : public UPersuadeSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Medical_Skill.Medical_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMedical_Skill_C : public UMedicalSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/LongGuns_Skill.LongGuns_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class ULongGuns_Skill_C : public ULongGunsSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Lockpick_Skill.Lockpick_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class ULockpick_Skill_C : public ULockpickSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/LightMelee_Skill.LightMelee_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class ULightMelee_Skill_C : public ULightMeleeSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Lie_Skill.Lie_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class ULie_Skill_C : public ULieSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Intimidate_Skill.Intimidate_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UIntimidate_Skill_C : public UIntimidateSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Inspiration_Skill.Inspiration_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UInspiration_Skill_C : public UInspirationSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/HeavyWeapons_Skill.HeavyWeapons_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UHeavyWeapons_Skill_C : public UHeavyWeaponsSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/HeavyMelee_Skill.HeavyMelee_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UHeavyMelee_Skill_C : public UHeavyMeleeSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/HandGuns_Skill.HandGuns_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UHandGuns_Skill_C : public UHandGunsSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Hack_Skill.Hack_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UHack_Skill_C : public UHackSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Engineering_Skill.Engineering_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UEngineering_Skill_C : public UEngineeringSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Dodge_Skill.Dodge_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UDodge_Skill_C : public UDodgeSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Determination_Skill.Determination_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UDetermination_Skill_C : public UDeterminationSkill
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/Block_Skill.Block_Skill_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UBlock_Skill_C : public UBlockSkill
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Scientist.Aptitude_Scientist_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Scientist_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_SafetyInspector.Aptitude_SafetyInspector_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_SafetyInspector_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_NoAptitude.Aptitude_NoAptitude_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_NoAptitude_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_MedicalTech.Aptitude_MedicalTech_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_MedicalTech_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Mascot.Aptitude_Mascot_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Mascot_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Janitor.Aptitude_Janitor_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Janitor_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_FoodTester.Aptitude_FoodTester_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_FoodTester_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Farmer.Aptitude_Farmer_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Farmer_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Factory.Aptitude_Factory_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Factory_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Elevator.Aptitude_Elevator_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Elevator_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Construction.Aptitude_Construction_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Construction_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Chef.Aptitude_Chef_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Chef_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Cashier.Aptitude_Cashier_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Cashier_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Bureaucrat.Aptitude_Bureaucrat_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_Bureaucrat_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_BeverageTech.Aptitude_BeverageTech_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAptitude_BeverageTech_C : public UAptitude
{ 
public:
};

/// Class /Game/Blueprints/CHAR/Deaths/ShockCharacterDeath.ShockCharacterDeath_C
/// Size: 0x0161 (353 bytes) (0x000151 - 0x000161) align 8 MaxSize: 0x0161
class UShockCharacterDeath_C : public UBaseCharacterDeath_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0158   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0160   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/ShockCharacterDeath.ShockCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/ShockCharacterDeath.ShockCharacterDeath_C.Tick
	// void Tick(float Delta);                                                                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/ShockCharacterDeath.ShockCharacterDeath_C.ExecuteOnReload
	// void ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent);                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/ShockCharacterDeath.ShockCharacterDeath_C.ExecuteUbergraph_ShockCharacterDeath
	// void ExecuteUbergraph_ShockCharacterDeath(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/CHAR/Deaths/RagdollCharacterDeath.RagdollCharacterDeath_C
/// Size: 0x0170 (368 bytes) (0x000151 - 0x000170) align 8 MaxSize: 0x0170
class URagdollCharacterDeath_C : public UBaseCharacterDeath_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0158   (0x0008)  
	class UStaticMesh*                                 LootPile;                                                   // 0x0160   (0x0008)  
	class UMaterialInterface*                          LootPileMaterial;                                           // 0x0168   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/RagdollCharacterDeath.RagdollCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteOnReload
	// void ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent);                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteUbergraph_RagdollCharacterDeath
	// void ExecuteUbergraph_RagdollCharacterDeath(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/CHAR/Deaths/NRayCharacterDeath.NRayCharacterDeath_C
/// Size: 0x0192 (402 bytes) (0x000151 - 0x000192) align 8 MaxSize: 0x0192
class UNRayCharacterDeath_C : public UBaseCharacterDeath_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0158   (0x0008)  
	class UStaticMesh*                                 LootablePile;                                               // 0x0160   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            Eyes_Mouth;                                                 // 0x0168   (0x0010)  
	TArray<FName>                                      Mat_Slot_Names;                                             // 0x0178   (0x0010)  
	class UMaterialInterface*                          LootPileMaterial;                                           // 0x0188   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0190   (0x0001)  
	bool                                               UseNiagaraHit;                                              // 0x0191   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/NRayCharacterDeath.NRayCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/NRayCharacterDeath.NRayCharacterDeath_C.Tick
	// void Tick(float Delta);                                                                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/NRayCharacterDeath.NRayCharacterDeath_C.ExecuteOnReload
	// void ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent);                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/NRayCharacterDeath.NRayCharacterDeath_C.ExecuteUbergraph_NRayCharacterDeath
	// void ExecuteUbergraph_NRayCharacterDeath(int32_t EntryPoint);                                                            // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/CHAR/Deaths/GibCharacterDeath.GibCharacterDeath_C
/// Size: 0x0161 (353 bytes) (0x000151 - 0x000161) align 8 MaxSize: 0x0161
class UGibCharacterDeath_C : public UBaseCharacterDeath_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0158   (0x0008)  
	bool                                               Sentry;                                                     // 0x0160   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/GibCharacterDeath.GibCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/GibCharacterDeath.GibCharacterDeath_C.ExecuteUbergraph_GibCharacterDeath
	// void ExecuteUbergraph_GibCharacterDeath(int32_t EntryPoint);                                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/CHAR/Deaths/EnergyCharacterDeath.EnergyCharacterDeath_C
/// Size: 0x0191 (401 bytes) (0x000151 - 0x000191) align 8 MaxSize: 0x0191
class UEnergyCharacterDeath_C : public UBaseCharacterDeath_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0158   (0x0008)  
	class UStaticMesh*                                 LootablePile;                                               // 0x0160   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            Eyes_Mouth;                                                 // 0x0168   (0x0010)  
	TArray<FName>                                      Mat_Slot_Names;                                             // 0x0178   (0x0010)  
	class UMaterialInterface*                          LootPileMaterial;                                           // 0x0188   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0190   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/EnergyCharacterDeath.EnergyCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/EnergyCharacterDeath.EnergyCharacterDeath_C.Tick
	// void Tick(float Delta);                                                                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/EnergyCharacterDeath.EnergyCharacterDeath_C.ExecuteOnReload
	// void ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent);                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/EnergyCharacterDeath.EnergyCharacterDeath_C.ExecuteUbergraph_EnergyCharacterDeath
	// void ExecuteUbergraph_EnergyCharacterDeath(int32_t EntryPoint);                                                          // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/CHAR/Deaths/DismemberCharacterDeath.DismemberCharacterDeath_C
/// Size: 0x0160 (352 bytes) (0x000151 - 0x000160) align 8 MaxSize: 0x0160
class UDismemberCharacterDeath_C : public UBaseCharacterDeath_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0158   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/DismemberCharacterDeath.DismemberCharacterDeath_C.AddTorsoGibParticles
	// void AddTorsoGibParticles();                                                                                             // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/DismemberCharacterDeath.DismemberCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/DismemberCharacterDeath.DismemberCharacterDeath_C.ExecuteUbergraph_DismemberCharacterDeath
	// void ExecuteUbergraph_DismemberCharacterDeath(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/CHAR/Deaths/CorrosiveCharacterDeath.CorrosiveCharacterDeath_C
/// Size: 0x0161 (353 bytes) (0x000151 - 0x000161) align 8 MaxSize: 0x0161
class UCorrosiveCharacterDeath_C : public UBaseCharacterDeath_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x0151   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0158   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0160   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.Tick
	// void Tick(float Delta);                                                                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.ExecuteOnReload
	// void ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent);                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.ExecuteUbergraph_CorrosiveCharacterDeath
	// void ExecuteUbergraph_CorrosiveCharacterDeath(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/Ammos/Spell_Ammo_Ionized.Spell_Ammo_Ionized_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Ammo_Ionized_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Ammos/Spell_Ammo_Volatile.Spell_Ammo_Volatile_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Ammo_Volatile_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Bleed/CE_Bleed_PostProcess.CE_Bleed_PostProcess_C
/// Size: 0x0208 (520 bytes) (0x000208 - 0x000208) align 8 MaxSize: 0x0208
class UCE_Bleed_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C
/// Size: 0x01C0 (448 bytes) (0x0001B8 - 0x0001C0) align 8 MaxSize: 0x01C0
class UCE_Bleed_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C.ExecuteUbergraph_CE_Bleed
	// void ExecuteUbergraph_CE_Bleed(int32_t EntryPoint);                                                                      // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/Ammos/Spell_Ammo_Shredder.Spell_Ammo_Shredder_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Ammo_Shredder_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Ammos/Spell_Ammo_Heartseeker.Spell_Ammo_Heartseeker_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Ammo_Heartseeker_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/MatherFamily.MatherFamily_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UMatherFamily_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Spells/NRay/Spell_NRay_DeathAoE.Spell_NRay_DeathAoE_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_NRay_DeathAoE_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0000B0 - 0x0001B8) align 8 MaxSize: 0x01B8
class UBase_DamageType_C : public UIndianaDamageType
{ 
public:
	class UParticleSystem*                             ImpactFx;                                                   // 0x00B0   (0x0008)  
	TArray<FName>                                      CritEmitters;                                               // 0x00B8   (0x0010)  
	TArray<FName>                                      NormalEmitters;                                             // 0x00C8   (0x0010)  
	class UParticleSystem*                             ImpactFx_AOE;                                               // 0x00D8   (0x0008)  
	bool                                               IsNiagara_ImpactFX;                                         // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
	class UNiagaraSystem*                              Default_ImpactFX;                                           // 0x00E8   (0x0008)  
	bool                                               IsNiagara_MuzzleFlash;                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
	class UNiagaraSystem*                              Default_MuzzleFlash;                                        // 0x00F8   (0x0008)  
	TMap<ESkill, class UNiagaraSystem*>                MuzzleFlash_Systems;                                        // 0x0100   (0x0050)  
	class UNiagaraSystem*                              LingeringSmoke_Sytem;                                       // 0x0150   (0x0008)  
	SDK_UNDEFINED(80,761) /* TMap<TEnumAsByte<EPhysicalSurface>, class UNiagaraSystem*> */ __um(Surface_ImpactFX); // 0x0158   (0x0050)  
	float                                              MuzzleFlashAimedResize;                                     // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
	class UParticleSystem*                             MuzzleSpawnParticleSystem;                                  // 0x01B0   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C.TriggerMuzzleFx
	// void TriggerMuzzleFx(class USceneComponent* AttachComponent, bool IsFirstPerson);                                        // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C.SetupSecondaryImpactFx
	// void SetupSecondaryImpactFx(class UParticleSystemComponent* ParentEffect, bool bGraze, bool bCritical, bool bWeakSpot, bool bRadial, float Radius); // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C.SetupImpactFx
	// void SetupImpactFx(class UParticleSystemComponent* ParentEffect, bool bGraze, bool bCritical, bool bWeakSpot, bool bRadial, float Radius); // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_SmartDodge_NoCooldown.META_SmartDodge_NoCooldown_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMETA_SmartDodge_NoCooldown_C : public UDecisionTree_Dodge
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_PreEmptiveMeleeAction.META_PreEmptiveMeleeAction_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMETA_PreEmptiveMeleeAction_C : public UDecisionTree_PreEmptiveMeleeAction
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultRangeAttack.META_DefaultRangeAttack_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UMETA_DefaultRangeAttack_C : public UDecisionTree_DefaultRangeAttack
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_GainedAwareness.META_GainedAwareness_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMETA_GainedAwareness_C : public UDecisionTree_GainedAwareness
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultRangeAttackNewCover.META_DefaultRangeAttackNewCover_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UMETA_DefaultRangeAttackNewCover_C : public UDecisionTree_DefaultRangeAttack
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultMeleeAttack.META_DefaultMeleeAttack_C
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UMETA_DefaultMeleeAttack_C : public UDecisionTree_DefaultMeleeAttack
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultAttackNewCover.META_DefaultAttackNewCover_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMETA_DefaultAttackNewCover_C : public UDecisionTree_DefaultAttack
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_SmartDodge.META_SmartDodge_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMETA_SmartDodge_C : public UDecisionTree_Dodge
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_MeleeUnreachable.META_MeleeUnreachable_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMETA_MeleeUnreachable_C : public UDecisionTree_MeleeUnreachable
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_AvoidMeleeAttack.META_AvoidMeleeAttack_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMETA_AvoidMeleeAttack_C : public UDecisionTree_AvoidMeleeAttack
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DodgeRange.META_DodgeRange_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMETA_DodgeRange_C : public UDecisionTree_Dodge
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_Block.META_Block_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMETA_Block_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_ReactiveRangeAction.META_ReactiveRangeAction_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMETA_ReactiveRangeAction_C : public UDecisionTree_ReactiveRangeAction
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnReactiveRangeAction.OnReactiveRangeAction_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UOnReactiveRangeAction_C : public UDecisionTree
{ 
public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnReactiveRangeAction.OnReactiveRangeAction_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnNearbyMeleeAttack.OnNearbyMeleeAttack_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UOnNearbyMeleeAttack_C : public UDecisionTree
{ 
public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnNearbyMeleeAttack.OnNearbyMeleeAttack_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnMeleeUnreachable.OnMeleeUnreachable_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UOnMeleeUnreachable_C : public UDecisionTree_Combined
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/NewCover.NewCover_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNewCover_C : public UDecisionTree
{ 
public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/NewCover.NewCover_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/SearchComplete.SearchComplete_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class USearchComplete_C : public UDecisionTree_Combined
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_WeaponPreference_IgnoreCooldown.META_WeaponPreference_IgnoreCooldown_C
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMETA_WeaponPreference_IgnoreCooldown_C : public UDecisionTree_WeaponPreference
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_WeaponPreference.META_WeaponPreference_C
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMETA_WeaponPreference_C : public UDecisionTree_WeaponPreference
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultAttack.META_DefaultAttack_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMETA_DefaultAttack_C : public UDecisionTree_DefaultAttack
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/MeleeAttackComplete.MeleeAttackComplete_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMeleeAttackComplete_C : public UDecisionTree_Combined
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/LineOfFireBlocked.LineOfFireBlocked_C
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class ULineOfFireBlocked_C : public UDecisionTree_LineOfFireBlocked
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/LostTarget.LostTarget_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class ULostTarget_C : public UDecisionTree_LostTarget
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/SwitchToRangedWeaponPreferUnlimitedRange.SwitchToRangedWeaponPreferUnlimitedRange_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class USwitchToRangedWeaponPreferUnlimitedRange_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/SwitchTarget.SwitchTarget_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USwitchTarget_C : public UDecisionTree
{ 
public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/SwitchTarget.SwitchTarget_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/RepositionComplete.RepositionComplete_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URepositionComplete_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/TetherCancel.TetherCancel_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UTetherCancel_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/QueueBehavior.QueueBehavior_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UQueueBehavior_C : public UDecisionTree_QueueBehavior
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/OnCombatStateChange.OnCombatStateChange_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UOnCombatStateChange_C : public UDecisionTree_DefaultSwitchContext
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandSuppress.CompanionCommandSuppress_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCompanionCommandSuppress_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandReturn.CompanionCommandReturn_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCompanionCommandReturn_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandMoveTo.CompanionCommandMoveTo_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCompanionCommandMoveTo_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandHunkerDown.CompanionCommandHunkerDown_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCompanionCommandHunkerDown_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandFlank.CompanionCommandFlank_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCompanionCommandFlank_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandCalledShot.CompanionCommandCalledShot_C
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UCompanionCommandCalledShot_C : public UDecisionTree_CompanionCalledShot
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandAttack.CompanionCommandAttack_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCompanionCommandAttack_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Idle.Idle_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UIdle_C : public UDecisionTree
{ 
public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/Idle.Idle_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/ForceCompanionFollo.ForceCompanionFollo_C
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UForceCompanionFollo_C : public UDecisionTree_ForceCompanionFollow
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Death.Death_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDeath_C : public UDecisionTree
{ 
public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/Death.Death_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Conversation.Conversation_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UConversation_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Base_OnStatusEffectApplied.Base_OnStatusEffectApplied_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UBase_OnStatusEffectApplied_C : public UDecisionTree
{ 
public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/Base_OnStatusEffectApplied.Base_OnStatusEffectApplied_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/Unaware.Unaware_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UUnaware_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/Tether.Tether_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UTether_C : public UDecisionTree_CombinedRequests
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultPacifist.META_DefaultPacifist_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMETA_DefaultPacifist_C : public UDecisionTree_DefaultPacifist
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultOutOfCombat.META_DefaultOutOfCombat_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMETA_DefaultOutOfCombat_C : public UDecisionTree_DefaultOutOfCombat
{ 
public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/Default.Default_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDefault_C : public UDecisionTree_Base
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Board_T1.DIS_Board_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_Board_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Cleo_T1.DIS_Cleo_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_Cleo_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_CnPFactory_T1.DIS_CnPFactory_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_CnPFactory_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Fairfield_T1.DIS_Fairfield_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_Fairfield_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Hope_T1.DIS_Hope_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_Hope_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpUnitCommander_Base.Armor_CorpUnitCommander_Base_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpUnitCommander_Base_C : public UArmorSet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpUnitCommander_Base.Helmet_CorpUnitCommander_Base_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpUnitCommander_Base_C : public UHelmet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpUnitCommander_T1.Helmet_CorpUnitCommander_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpUnitCommander_T1_C : public UHelmet_CorpUnitCommander_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpUnitCommander_T1.Armor_CorpUnitCommander_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpUnitCommander_T1_C : public UArmor_CorpUnitCommander_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Armor_CorpUnitCommander_UDL_T1.Armor_CorpUnitCommander_UDL_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpUnitCommander_UDL_T1_C : public UArmor_CorpUnitCommander_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Helmet_CorpUnitCommander_UDL_T1.Helmet_CorpUnitCommander_UDL_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpUnitCommander_UDL_T1_C : public UHelmet_CorpUnitCommander_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_LabyrinthStationWorker_T1.DIS_LabyrinthStationWorker_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_LabyrinthStationWorker_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Helmet_CorpUnitCommander_UDL_Phy_T1.Helmet_CorpUnitCommander_UDL_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpUnitCommander_UDL_Phy_T1_C : public UHelmet_CorpUnitCommander_UDL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Armor_CorpUnitCommander_UDL_Phy_T1.Armor_CorpUnitCommander_UDL_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpUnitCommander_UDL_Phy_T1_C : public UArmor_CorpUnitCommander_UDL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Armor_Colonist_Base.Armor_Colonist_Base_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_Colonist_Base_C : public UArmorSet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Armor_Base.Spacer_Armor_Base_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class USpacer_Armor_Base_C : public UArmor_Colonist_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Helmet_Base.Spacer_Helmet_Base_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class USpacer_Helmet_Base_C : public UHelmet
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Mardet_T1.DIS_Mardet_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_Mardet_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Mardet_Helmet.Spacer_Mardet_Helmet_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class USpacer_Mardet_Helmet_C : public USpacer_Helmet_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Mardet_Armor.Spacer_Mardet_Armor_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class USpacer_Mardet_Armor_C : public USpacer_Armor_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpRecruit_Base.Armor_CorpRecruit_Base_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_Base_C : public UArmorSet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpRecruit_Base.Helmet_CorpRecruit_Base_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_Base_C : public UHelmet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Sublight/Armor_SublightSmuggler_Base.Armor_SublightSmuggler_Base_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_SublightSmuggler_Base_C : public UArmorSet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpRecruit_T1.Helmet_CorpRecruit_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_T1_C : public UHelmet_CorpRecruit_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Helmet_CorpRecruit_Cleo_T1.Helmet_CorpRecruit_Cleo_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_Cleo_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Variants/Helmet_CorpRecruit_Cleo_Phy_T1.Helmet_CorpRecruit_Cleo_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_Cleo_Phy_T1_C : public UHelmet_CorpRecruit_Cleo_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Helmet_CorpRecruit_CP_T1.Helmet_CorpRecruit_CP_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_CP_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Variants/Helmet_CorpRecruit_CP_Phy_T1.Helmet_CorpRecruit_CP_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_CP_Phy_T1_C : public UHelmet_CorpRecruit_CP_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Helmet_CorpRecruit_TL_T1.Helmet_CorpRecruit_TL_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_TL_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Helmet_CorpRecruit_TL_Phy_T1.Helmet_CorpRecruit_TL_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_TL_Phy_T1_C : public UHelmet_CorpRecruit_TL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpRecruit_T1.Armor_CorpRecruit_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_T1_C : public UArmor_CorpRecruit_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Armor_CorpRecruit_Cleo_T1.Armor_CorpRecruit_Cleo_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_Cleo_T1_C : public UArmor_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Variants/Armor_CorpRecruit_Cleo_Phy_T1.Armor_CorpRecruit_Cleo_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_Cleo_Phy_T1_C : public UArmor_CorpRecruit_Cleo_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Armor_CorpRecruit_CP_T1.Armor_CorpRecruit_CP_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_CP_T1_C : public UArmor_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Variants/Armor_CorpRecruit_CP_Phy_T1.Armor_CorpRecruit_CP_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_CP_Phy_T1_C : public UArmor_CorpRecruit_CP_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Armor_CorpRecruit_TL_T1.Armor_CorpRecruit_TL_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_TL_T1_C : public UArmor_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Armor_CorpRecruit_TL_Phy_T1.Armor_CorpRecruit_TL_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_TL_Phy_T1_C : public UArmor_CorpRecruit_TL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Armor_CorpRecruit_UDL_T1.Armor_CorpRecruit_UDL_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_UDL_T1_C : public UArmor_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Helmet_CorpRecruit_UDL_T1.Helmet_CorpRecruit_UDL_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_UDL_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_MSec_T1.DIS_MSec_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_MSec_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Helmet_CorpRecruit_UDL_Phy_T1.Helmet_CorpRecruit_UDL_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpRecruit_UDL_Phy_T1_C : public UHelmet_CorpRecruit_UDL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Armor_CorpRecruit_UDL_Phy_T1.Armor_CorpRecruit_UDL_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpRecruit_UDL_Phy_T1_C : public UArmor_CorpRecruit_UDL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Sublight/Armor_SublightSmuggler_T1.Armor_SublightSmuggler_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_SublightSmuggler_T1_C : public UArmor_SublightSmuggler_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_SubLight_T1.DIS_SubLight_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_SubLight_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_SyndicateBountyHunter_T1.DIS_SyndicateBountyHunter_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_SyndicateBountyHunter_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Sublight/Variants/Armor_SublightSmuggler_Phy_T1.Armor_SublightSmuggler_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_SublightSmuggler_Phy_T1_C : public UArmor_SublightSmuggler_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Item/MicroMods/Armor/Arm_MMod_None.Arm_MMod_None_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UArm_MMod_None_C : public UMicroMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_VisualNoStat.ArmorMod_Armor_VisualNoStat_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_VisualNoStat_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpTrooper_Base.Helmet_CorpTrooper_Base_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpTrooper_Base_C : public UHelmet
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_TartarusGuard_T1.DIS_TartarusGuard_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_TartarusGuard_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_TartarusPrisoner_T1.DIS_TartarusPrisoner_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_TartarusPrisoner_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Prison/Prison_01.Prison_01_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UPrison_01_C : public UArmorSet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpTrooper_T1.Helmet_CorpTrooper_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpTrooper_T1_C : public UHelmet_CorpTrooper_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Helmet_CorpTrooper_UDL_T1.Helmet_CorpTrooper_UDL_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpTrooper_UDL_T1_C : public UHelmet_CorpTrooper_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Helmet_CorpTrooper_UDL_Phy_T1.Helmet_CorpTrooper_UDL_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpTrooper_UDL_Phy_T1_C : public UHelmet_CorpTrooper_UDL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpTrooper_Base.Armor_CorpTrooper_Base_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpTrooper_Base_C : public UArmorSet
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpTrooper_T1.Armor_CorpTrooper_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpTrooper_T1_C : public UArmor_CorpTrooper_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Armor_CorpTrooper_UDL_T1.Armor_CorpTrooper_UDL_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpTrooper_UDL_T1_C : public UArmor_CorpTrooper_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Armor_CorpTrooper_UDL_Phy_T1.Armor_CorpTrooper_UDL_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpTrooper_UDL_Phy_T1_C : public UArmor_CorpTrooper_UDL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Armor_CorpTrooper_TL_T1.Armor_CorpTrooper_TL_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpTrooper_TL_T1_C : public UArmor_CorpTrooper_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Helmet_CorpTrooper_TL_T1.Helmet_CorpTrooper_TL_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpTrooper_TL_T1_C : public UHelmet_CorpTrooper_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_TnLDefenseContractor_T1.DIS_TnLDefenseContractor_T1_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDIS_TnLDefenseContractor_T1_C : public UDisguiseItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Helmet_CorpTrooper_TL_Phy_T1.Helmet_CorpTrooper_TL_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpTrooper_TL_Phy_T1_C : public UHelmet_CorpTrooper_TL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Armor_CorpTrooper_TL_Phy_T1.Armor_CorpTrooper_TL_Phy_T1_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UArmor_CorpTrooper_TL_Phy_T1_C : public UArmor_CorpTrooper_TL_T1_C
{ 
public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_NPC_Pathing.NavFilter_NPC_Pathing_C
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_NPC_Pathing_C : public UNavigationQueryFilter
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Food/CE_Meat.CE_Meat_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_Meat_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Food/CE_Carbs.CE_Carbs_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_Carbs_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Drink/CE_SugarDrink.CE_SugarDrink_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_SugarDrink_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Drink/CE_CaffeineDrink.CE_CaffeineDrink_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_CaffeineDrink_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Alcohol/CE_AlcoholBuff.CE_AlcoholBuff_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_AlcoholBuff_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse.CE_NRay_Pulse_C
/// Size: 0x0219 (537 bytes) (0x000210 - 0x000219) align 16 MaxSize: 0x0219
class UCE_NRay_Pulse_C : public UDamageStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0210   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0218   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse.CE_NRay_Pulse_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse.CE_NRay_Pulse_C.ExecuteUbergraph_CE_NRay_Pulse
	// void ExecuteUbergraph_CE_NRay_Pulse(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Armor/HeadGear/HeadGear_TopHat_Var01.HeadGear_TopHat_Var01_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHeadGear_TopHat_Var01_C : public UHelmet
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/EmptyStatusEffect.EmptyStatusEffect_C
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UEmptyStatusEffect_C : public UStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/UglyStickEffects/CE_UglyStick_GhostDebuff.CE_UglyStick_GhostDebuff_C
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UCE_UglyStick_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C
/// Size: 0x01C0 (448 bytes) (0x0001B8 - 0x0001C0) align 8 MaxSize: 0x01C0
class USE_GloopGunEffect_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C.ExecuteUbergraph_SE_GloopGunEffect
	// void ExecuteUbergraph_SE_GloopGunEffect(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Shrink/CE_Shrink_GhostDebuff.CE_Shrink_GhostDebuff_C
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UCE_Shrink_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/PrismaticHammer/CE_PrismaticHammer_GhostDebuff.CE_PrismaticHammer_GhostDebuff_C
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UCE_PrismaticHammer_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C
/// Size: 0x0191 (401 bytes) (0x000188 - 0x000191) align 8 MaxSize: 0x0191
class UCE_NRay_Pulse_Visual_C : public UStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0188   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0190   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C.ExecuteUbergraph_CE_NRay_Pulse_Visual
	// void ExecuteUbergraph_CE_NRay_Pulse_Visual(int32_t EntryPoint);                                                          // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C
/// Size: 0x0240 (576 bytes) (0x000208 - 0x000240) align 8 MaxSize: 0x0240
class UCE_NRay_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UParticleSystem*                             CascadeTemplate;                                            // 0x0210   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0219   (0x0007)  MISSED
	class UNiagaraSystem*                              NiagaraTemplate;                                            // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    CascadeFX;                                                  // 0x0228   (0x0008)  
	bool                                               EventDone;                                                  // 0x0230   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0231   (0x0007)  MISSED
	class UNiagaraComponent*                           NiagaraFX;                                                  // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C.ExecuteUbergraph_CE_NRay_PostProcess
	// void ExecuteUbergraph_CE_NRay_PostProcess(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/MindControl/CE_MindControl_GhostDebuff.CE_MindControl_GhostDebuff_C
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UCE_MindControl_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C
/// Size: 0x0240 (576 bytes) (0x000208 - 0x000240) align 8 MaxSize: 0x0240
class UCE_Electric_Hazard_PP_C : public UPostProcessStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	bool                                               EventDone;                                                  // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0211   (0x0007)  MISSED
	class UParticleSystem*                             CascadeTemplate;                                            // 0x0218   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	class UNiagaraSystem*                              NiagaraTemplate;                                            // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    CascadeFX;                                                  // 0x0230   (0x0008)  
	class UNiagaraComponent*                           NiagaraFX;                                                  // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C.ExecuteUbergraph_CE_Electric_Hazard_PP
	// void ExecuteUbergraph_CE_Electric_Hazard_PP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Armor/HeadGear/HeadGear_TopHat_Var01_Uni_Mon1.HeadGear_TopHat_Var01_Uni_Mon1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHeadGear_TopHat_Var01_Uni_Mon1_C : public UHeadGear_TopHat_Var01_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Named/TA_0202_Uni_CelesteSuit_Chimaera.TA_0202_Uni_CelesteSuit_Chimaera_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UTA_0202_Uni_CelesteSuit_Chimaera_C : public UArmorSet
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C
/// Size: 0x01C1 (449 bytes) (0x0001B8 - 0x0001C1) align 8 MaxSize: 0x01C1
class UCE_NRay_AoE_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x01C0   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C.ExecuteUbergraph_CE_NRay_AoE
	// void ExecuteUbergraph_CE_NRay_AoE(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/StatusEffects/TetherRegen/CE_Tether.CE_Tether_C
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UCE_Tether_C : public UHealStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Invulnerable/CE_Invulnerable.CE_Invulnerable_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Invulnerable_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/IdleDisable/CE_IdleDisable.CE_IdleDisable_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class UCE_IdleDisable_C : public UIdleDisableStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Companion_PassiveReceivedHostileEffectDuration.Spell_Companion_PassiveReceivedHostileEffectDuration_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Companion_PassiveReceivedHostileEffectDuration_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Tether.Spell_AI_Tether_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_Tether_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Teleport.Spell_AI_Teleport_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_Teleport_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Resurrect.Spell_AI_Resurrect_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_Resurrect_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_PostCombatReload.Spell_AI_PostCombatReload_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_PostCombatReload_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Jump.Spell_AI_Jump_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_Jump_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_GetUp.Spell_AI_GetUp_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_GetUp_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_ElevatorMove.Spell_AI_ElevatorMove_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_ElevatorMove_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_ConversationInvulnerability.Spell_AI_ConversationInvulnerability_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_ConversationInvulnerability_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_CalledShot.Spell_AI_CalledShot_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_CalledShot_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Hearing.NavFilter_Hearing_C
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_Hearing_C : public UNavigationQueryFilter
{ 
public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Companion_Pathing.NavFilter_Companion_Pathing_C
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_Companion_Pathing_C : public UNavigationQueryFilter
{ 
public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Companion_EQS.NavFilter_Companion_EQS_C
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_Companion_EQS_C : public UNavigationQueryFilter
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Calledshot_ShockTarget.Spell_Calledshot_ShockTarget_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Calledshot_ShockTarget_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Calledshot_ShockAOE.Spell_Calledshot_ShockAOE_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Calledshot_ShockAOE_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Thermal_DamageType.Thermal_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UThermal_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Swarm_DamageType.Swarm_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class USwarm_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Shock_DamageType.Shock_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UShock_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Physical_DamageType.Physical_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPhysical_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/NRay_DamageType.NRay_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UNRay_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Energy_DamageType.Energy_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UEnergy_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Corrosion_DamageType.Corrosion_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCorrosion_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/TheHope.TheHope_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UTheHope_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/TheBoard.TheBoard_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UTheBoard_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Tartarus_Workers.Tartarus_Workers_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UTartarus_Workers_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Tartarus_Prisoners.Tartarus_Prisoners_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UTartarus_Prisoners_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Tartarus_Military.Tartarus_Military_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UTartarus_Military_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Syndicate.Syndicate_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class USyndicate_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/StellarBayResidents.StellarBayResidents_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UStellarBayResidents_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Spacers.Spacers_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class USpacers_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/SLUG.SLUG_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class USLUG_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Roseway.Roseway_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class URoseway_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/MSI.MSI_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UMSI_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Marauders.Marauders_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UMarauders_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Keystone.Keystone_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UKeystone_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/InformationBroker.InformationBroker_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UInformationBroker_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Groundbreaker.Groundbreaker_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UGroundbreaker_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Fairfield.Fairfield_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UFairfield_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/EmeraldVale.EmeraldVale_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UEmeraldVale_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Deserters.Deserters_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UDeserters_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/CnPFactory.CnPFactory_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UCnPFactory_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/ByzantiumResidents.ByzantiumResidents_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UByzantiumResidents_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/Anarchists.Anarchists_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class UAnarchists_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Factions/0206_Midway.0206_Midway_C
/// Size: 0x0200 (512 bytes) (0x000200 - 0x000200) align 8 MaxSize: 0x0200
class U0206_Midway_C : public UFactionData
{ 
public:
};

/// Class /Game/Blueprints/Item/Resources/WeaponPart.WeaponPart_C
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000140) align 8 MaxSize: 0x0140
class UWeaponPart_C : public UResourceItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Resources/ArmorPart.ArmorPart_C
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000140) align 8 MaxSize: 0x0140
class UArmorPart_C : public UResourceItem
{ 
public:
};

/// Class /Game/Blueprints/Item/QuestItem/03_Ship/0301_HolographicShroud.0301_HolographicShroud_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class U0301_HolographicShroud_C : public UQuestItem
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_NeutralToAll.T_Generic_NeutralToAll_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Generic_NeutralToAll_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_Neutral.T_Generic_Neutral_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Generic_Neutral_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_Hostile.T_Generic_Hostile_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Generic_Hostile_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_Friendly.T_Generic_Friendly_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Generic_Friendly_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/PlayerTeams/T_Player.T_Player_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Player_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/GlobalTeams/T_Marauders.T_Marauders_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Marauders_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Sprat.T_Sprat_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Sprat_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Meta_Critters.T_Meta_Critters_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UT_Meta_Critters_C : public UMetaTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Mealgrub.T_Mealgrub_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Mealgrub_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_LeatherBoa.T_LeatherBoa_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_LeatherBoa_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_CystyPig.T_CystyPig_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_CystyPig_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Cow.T_Cow_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Cow_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Chicken.T_Chicken_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Chicken_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_BredWorm.T_BredWorm_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_BredWorm_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Tangler.T_Tangler_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Tangler_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Sprat_Rabid.T_Sprat_Rabid_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Sprat_Rabid_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Raptidon.T_Raptidon_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Raptidon_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Puffball.T_Puffball_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Puffball_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Pteroray.T_Pteroray_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Pteroray_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Parasite.T_Parasite_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Parasite_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Meta_Creatures.T_Meta_Creatures_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UT_Meta_Creatures_C : public UMetaTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_MantiFamily.T_MantiFamily_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_MantiFamily_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Gorillian.T_Gorillian_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Gorillian_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Canid.T_Canid_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Canid_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/BotTeams/T_Sentry_Bots.T_Sentry_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Sentry_Bots_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_Renegade_Scylla.T_Renegade_Scylla_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Renegade_Scylla_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_Relay_Frey_Bots.T_1004_Relay_Frey_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1004_Relay_Frey_Bots_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_Relay_Frey.T_1004_Relay_Frey_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1004_Relay_Frey_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_Relay_Bots.T_1004_Relay_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1004_Relay_Bots_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_OrpheusSentries.T_1004_OrpheusSentries_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1004_OrpheusSentries_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_OrpheusPeyton.T_1004_OrpheusPeyton_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1004_OrpheusPeyton_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_OrpheusMarauders.T_1004_OrpheusMarauders_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1004_OrpheusMarauders_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Vision_S.T_1003_VM_Vision_S_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1003_VM_Vision_S_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Vision_M.T_1003_VM_Vision_M_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1003_VM_Vision_M_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Vision_F.T_1003_VM_Vision_F_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1003_VM_Vision_F_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Hermit.T_1003_VM_Hermit_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1003_VM_Hermit_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1002_Board_Security_Troopers.T_1002_Board_Security_Troopers_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1002_Board_Security_Troopers_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1002_Board_Security_Bots.T_1002_Board_Security_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_1002_Board_Security_Bots_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/T_0903_Bots_Hope.T_0903_Bots_Hope_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0903_Bots_Hope_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/T_0903_Bots_Board.T_0903_Bots_Board_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0903_Bots_Board_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/T_0903_Board.T_0903_Board_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0903_Board_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Vaughn_Team.T_Vaughn_Team_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Vaughn_Team_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Sentry_Bots_Porter.T_Sentry_Bots_Porter_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Sentry_Bots_Porter_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Scientist_Town.T_Scientist_Town_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Scientist_Town_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_Lillian.T_Renegade_Lillian_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Renegade_Lillian_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_Covert.T_Renegade_Covert_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Renegade_Covert_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_Cassandra.T_Renegade_Cassandra_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Renegade_Cassandra_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_BackBays.T_Renegade_BackBays_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Renegade_BackBays_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Porter_Team.T_Porter_Team_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Porter_Team_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Orson_Team.T_Orson_Team_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Orson_Team_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Cleo_Security.T_Cleo_Security_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Cleo_Security_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Anton_Team.T_Anton_Team_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Anton_Team_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Anarchists.T_Anarchists_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Anarchists_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_0803_Raptidons_TankRoom.T_0803_Raptidons_TankRoom_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0803_Raptidons_TankRoom_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_0802_Raptidon_Neutral.T_0802_Raptidon_Neutral_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0802_Raptidon_Neutral_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_0802_Berke.T_0802_Berke_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0802_Berke_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0422_MSI_FactionBattle.T_0422_MSI_FactionBattle_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0422_MSI_FactionBattle_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0422_Iconoclasts_FactionBattle.T_0422_Iconoclasts_FactionBattle_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0422_Iconoclasts_FactionBattle_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_SentryBots.T_0411_CnPFactory_SentryBots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0411_CnPFactory_SentryBots_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Guards.T_0411_CnPFactory_Guards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0411_CnPFactory_Guards_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Exterior.T_0411_CnPFactory_Exterior_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0411_CnPFactory_Exterior_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Employees.T_0411_CnPFactory_Employees_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0411_CnPFactory_Employees_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Clive.T_0411_CnPFactory_Clive_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0411_CnPFactory_Clive_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0408_MantiQueen.T_0408_MantiQueen_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0408_MantiQueen_C : public UT_Generic_Hostile_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Sublight_Fallbrook.T_0407_Sublight_Fallbrook_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0407_Sublight_Fallbrook_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Quinn_Fallbrook.T_0407_Quinn_Fallbrook_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0407_Quinn_Fallbrook_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_CQ_VM_Convict.T_0407_CQ_VM_Convict_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0407_CQ_VM_Convict_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Catherine_Fallbrook.T_0407_Catherine_Fallbrook_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0407_Catherine_Fallbrook_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Bertrand_Sprats.T_0407_Bertrand_Sprats_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0407_Bertrand_Sprats_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Alice_Fallbrook.T_0407_Alice_Fallbrook_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0407_Alice_Fallbrook_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0404_Robochild_Bots.T_0404_Robochild_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0404_Robochild_Bots_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0404_Robochild.T_0404_Robochild_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0404_Robochild_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0404_CascadiaLab_Bots.T_0404_CascadiaLab_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0404_CascadiaLab_Bots_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0403_Zora.T_0403_Zora_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0403_Zora_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0403_Graham.T_0403_Graham_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0403_Graham_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0401_SyndicateThugs.T_0401_SyndicateThugs_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0401_SyndicateThugs_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0209_Forgotten_Lab/T_0209_Friends.T_0209_Friends_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0209_Friends_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_TA_0206_OgdanCoe.T_TA_0206_OgdanCoe_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_TA_0206_OgdanCoe_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_TA_0206_Marauders.T_TA_0206_Marauders_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_TA_0206_Marauders_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_TA_0206_Kat.T_TA_0206_Kat_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_TA_0206_Kat_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Whimbrel_Crew.T_0206_Whimbrel_Crew_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Whimbrel_Crew_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Trask.T_0206_Trask_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Trask_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_SpacersChoice_Guards.T_0206_SpacersChoice_Guards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_SpacersChoice_Guards_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Rosana.T_0206_Rosana_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Rosana_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Midway_Townies.T_0206_Midway_Townies_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Midway_Townies_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Midway_Security_Bots.T_0206_Midway_Security_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Midway_Security_Bots_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Midway_Security.T_0206_Midway_Security_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Midway_Security_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Insurance_Agency_Interior.T_0206_Insurance_Agency_Interior_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Insurance_Agency_Interior_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Harlow.T_0206_Harlow_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Harlow_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Hammer_Guards.T_0206_Hammer_Guards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Hammer_Guards_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Hammer_Bots.T_0206_Hammer_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Hammer_Bots_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Felix_Before_Party.T_0206_Felix_Before_Party_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Felix_Before_Party_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Bounty_Hunters.T_0206_Bounty_Hunters_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0206_Bounty_Hunters_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Underground.T_0205_TL_Underground_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0205_TL_Underground_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Security.T_0205_TL_Security_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0205_TL_Security_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Corporate.T_0205_TL_Corporate_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0205_TL_Corporate_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Civilians.T_0205_TL_Civilians_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0205_TL_Civilians_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0204_Keystone/T_0204_Keystone_Townie.T_0204_Keystone_Townie_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0204_Keystone_Townie_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0204_Keystone/T_0204_Keystone_Security.T_0204_Keystone_Security_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0204_Keystone_Security_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_TA0202_TailorShopGuards.T_TA0202_TailorShopGuards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_TA0202_TailorShopGuards_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_SQ0202_StashHouse.T_SQ0202_StashHouse_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_SQ0202_StashHouse_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_SQ0202_Alonzo.T_SQ0202_Alonzo_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_SQ0202_Alonzo_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_PQ0202Cartographer.T_PQ0202Cartographer_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_PQ0202Cartographer_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_PQ0202Assassin.T_PQ0202Assassin_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_PQ0202Assassin_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_MinisterGuards.T_MinisterGuards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_MinisterGuards_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_HHCRecords_Guards.T_HHCRecords_Guards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_HHCRecords_Guards_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_HHCRecords_Employees.T_HHCRecords_Employees_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_HHCRecords_Employees_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_FreightPortWorkers.T_FreightPortWorkers_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_FreightPortWorkers_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_FQ_0202_Chartrand_Guards.T_FQ_0202_Chartrand_Guards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_FQ_0202_Chartrand_Guards_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_FQ_0202_Chartrand.T_FQ_0202_Chartrand_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_FQ_0202_Chartrand_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_ExterminatorBots.T_ExterminatorBots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_ExterminatorBots_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_ByzWeaponShopOwner.T_ByzWeaponShopOwner_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_ByzWeaponShopOwner_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_ByzantiumGuards.T_ByzantiumGuards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_ByzantiumGuards_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_BureauOfficeWorkers.T_BureauOfficeWorkers_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_BureauOfficeWorkers_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0234_ER_KillBots.T_0234_ER_KillBots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0234_ER_KillBots_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0234_ER_CleaningBots.T_0234_ER_CleaningBots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0234_ER_CleaningBots_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0233_CameraBot.T_0233_CameraBot_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0233_CameraBot_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0233_Actors.T_0233_Actors_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0233_Actors_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0231_CryoCrazies.T_0231_CryoCrazies_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0231_CryoCrazies_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0231_BureauScientists.T_0231_BureauScientists_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0231_BureauScientists_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0230_ER_TunnelBots.T_0230_ER_TunnelBots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0230_ER_TunnelBots_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0202_Ellies_Parents.T_0202_Ellies_Parents_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0202_Ellies_Parents_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0202_ByzCivilians.T_0202_ByzCivilians_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0202_ByzCivilians_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0202_ByzBots.T_0202_ByzBots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0202_ByzBots_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Tug_Captain.T_0201_Tug_Captain_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0201_Tug_Captain_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Damaged_MedBot.T_0201_Damaged_MedBot_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0201_Damaged_MedBot_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Damaged_DartBot.T_0201_Damaged_DartBot_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0201_Damaged_DartBot_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Damaged_AdBot.T_0201_Damaged_AdBot_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0201_Damaged_AdBot_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Coastal_Marauders.T_0201_Coastal_Marauders_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0201_Coastal_Marauders_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Assassins.T_0201_Assassins_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0201_Assassins_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_AssassinRunAway.T_0201_AssassinRunAway_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_0201_AssassinRunAway_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_TennysonLoyalists.T_TennysonLoyalists_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_TennysonLoyalists_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_SpacerPirates.T_SpacerPirates_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_SpacerPirates_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_MardetGuards.T_MardetGuards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_MardetGuards_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Sickbay_Guard.T_Sickbay_Guard_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Sickbay_Guard_C : public UT_MardetGuards_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_LucasLoyalists.T_LucasLoyalists_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_LucasLoyalists_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_JunleiLoyalists.T_JunleiLoyalists_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_JunleiLoyalists_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_GroundbreakerSyndicate.T_GroundbreakerSyndicate_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_GroundbreakerSyndicate_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Groundbreaker_SC_Vendor.T_Groundbreaker_SC_Vendor_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Groundbreaker_SC_Vendor_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Groundbreaker_Civilians.T_Groundbreaker_Civilians_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Groundbreaker_Civilians_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Groundbreaker_Board.T_Groundbreaker_Board_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Groundbreaker_Board_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Ellie_OutofParty.T_Ellie_OutofParty_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Ellie_OutofParty_C : public UT_Generic_Neutral_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Sophia_Bots.T_Sophia_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Sophia_Bots_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_RobotScout.T_RobotScout_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_RobotScout_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Lab_CleanupCrew.T_Lab_CleanupCrew_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Lab_CleanupCrew_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Soldiers_Outside.T_Geothermal_Soldiers_Outside_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Geothermal_Soldiers_Outside_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Soldiers.T_Geothermal_Soldiers_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Geothermal_Soldiers_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Captain.T_Geothermal_Captain_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Geothermal_Captain_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Bots.T_Geothermal_Bots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_Geothermal_Bots_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Zoe.T_EV_Zoe_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_Zoe_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_TownResidents.T_EV_TownResidents_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_TownResidents_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_ShipMarauders.T_EV_ShipMarauders_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_ShipMarauders_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_ReedAndGuards.T_EV_ReedAndGuards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_ReedAndGuards_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Parvati.T_EV_Parvati_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_Parvati_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Max.T_EV_Max_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_Max_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_LudwigInEdgewater.T_EV_LudwigInEdgewater_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_LudwigInEdgewater_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_IntroGuards.T_EV_IntroGuards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_IntroGuards_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_IntroErnest.T_EV_IntroErnest_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_IntroErnest_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_GeneratorGuards.T_EV_GeneratorGuards_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_GeneratorGuards_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Deserters.T_EV_Deserters_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_Deserters_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_CaveGuard.T_EV_CaveGuard_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UT_EV_CaveGuard_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/09_SpacersChoice_StorageFacility.09_SpacersChoice_StorageFacility_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U09_SpacersChoice_StorageFacility_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Violette.0701_Violette_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Violette_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Unused_03.0701_Unused_03_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Unused_03_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Unused_02.0701_Unused_02_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Unused_02_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Unsued_05.0701_Unsued_05_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Unsued_05_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_TartarusCommOfficer.0701_TartarusCommOfficer_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_TartarusCommOfficer_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Syndicate_Allies.0701_Syndicate_Allies_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Syndicate_Allies_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_SubLightReinforcements.0701_SubLightReinforcements_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_SubLightReinforcements_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Solitary_Ally.0701_Ref_Solitary_Ally_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Ref_Solitary_Ally_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Prisoners_Hostile.0701_Ref_Prisoners_Hostile_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Ref_Prisoners_Hostile_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Prisoners_Allies.0701_Ref_Prisoners_Allies_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Ref_Prisoners_Allies_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Military_Neutral.0701_Ref_Military_Neutral_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Ref_Military_Neutral_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Military_Hostile.0701_Ref_Military_Hostile_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Ref_Military_Hostile_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Military_Allies.0701_Ref_Military_Allies_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Ref_Military_Allies_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Prisoners_Neutral.0701_Prisoners_Neutral_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Prisoners_Neutral_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Prisoners_Released.0701_Pit_Prisoners_Released_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Pit_Prisoners_Released_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Prisoners_Hostile.0701_Pit_Prisoners_Hostile_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Pit_Prisoners_Hostile_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Military_Released.0701_Pit_Military_Released_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Pit_Military_Released_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Military_Hostile.0701_Pit_Military_Hostile_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Pit_Military_Hostile_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Phineas.0701_Phineas_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Phineas_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_MSIReinforcements.0701_MSIReinforcements_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_MSIReinforcements_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_MardetReinforcements.0701_MardetReinforcements_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_MardetReinforcements_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Intake_Robots.0701_Intake_Robots_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Intake_Robots_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Intake_Military_Neutral.0701_Intake_Military_Neutral_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Intake_Military_Neutral_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Intake_Military_HOstile.0701_Intake_Military_Hostile_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Intake_Military_Hostile_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_IconoclastReinforcements.0701_IconoclastReinforcements_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_IconoclastReinforcements_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Docks_Military_Neutral.0701_Docks_Military_Neutral_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Docks_Military_Neutral_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Docks_Military_Hostile.0701_Docks_Military_Hostile_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Docks_Military_Hostile_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Chairman.0701_Chairman_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Chairman_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Adjutant.0701_Adjutant_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0701_Adjutant_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Sublight_Henchmen.04_Sublight_Henchmen_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_Sublight_Henchmen_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_StellarBay_Residents.04_StellarBay_Residents_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_StellarBay_Residents_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Nyoka_BeforeJoining_Party.04_Nyoka_BeforeJoining_Party_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_Nyoka_BeforeJoining_Party_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_MSI_Default.04_MSI_Default_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_MSI_Default_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Marauder_Default.04_Marauder_Default_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_Marauder_Default_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_IB_Compound_Sentries.04_IB_Compound_Sentries_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_IB_Compound_Sentries_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Hiram.04_Hiram_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_Hiram_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_C3_Crew_Scouts.04_C3_Crew_Scouts_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_C3_Crew_Scouts_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_C3_Crew_Base.04_C3_Crew_Base_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_C3_Crew_Base_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Berthold.04_Berthold_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_Berthold_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Bennett_SB.04_Bennett_SB_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_Bennett_SB_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Anarchists_Default.04_Anarchists_Default_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U04_Anarchists_Default_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0420_IconoclastScouts.0420_IconoclastScouts_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0420_IconoclastScouts_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0410_Archive_Sentries.0410_Archive_Sentries_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0410_Archive_Sentries_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0406_Marauders.0406_Marauders_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0406_Marauders_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0406_Anarchists_Huxley.0406_Anarchists_Huxley_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0406_Anarchists_Huxley_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0406_Anarchists.0406_Anarchists_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0406_Anarchists_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0403_Tucker.0403_Tucker_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0403_Tucker_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0403_Iconoclasts_PostMSIQuest.0403_Iconoclasts_PostMSIQuest_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0403_Iconoclasts_PostMSIQuest_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0403_Anarchists.0403_Anarchists_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0403_Anarchists_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0402_CannibalFamily.0402_CannibalFamily_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0402_CannibalFamily_C : public UTeamData
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Merchant_Sublight.0401_Merchant_SubLight_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0401_Merchant_SubLight_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Merchant_MSI.0401_Merchant_MSI_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0401_Merchant_MSI_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Merchant_Iconoclast.0401_Merchant_Iconoclast_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0401_Merchant_Iconoclast_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Marauders_Merchant_MSI.0401_Marauders_Merchant_MSI_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0401_Marauders_Merchant_MSI_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_DPStation_Marauders.0401_DPStation_Marauders_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0401_DPStation_Marauders_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Anarchists_Bridge.0401_Anarchists_Bridge_C
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class U0401_Anarchists_Bridge_C : public UT_Generic_Friendly_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Light_Standard_Ammo.Light_Standard_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class ULight_Standard_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Light_Hollowpoint_Ammo.Light_Hollowpoint_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class ULight_Hollowpoint_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Light_Heartseeker_Ammo.Light_Heartseeker_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class ULight_Heartseeker_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Heavy_Standard_Ammo.Heavy_Standard_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class UHeavy_Standard_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Heavy_Shredder_Ammo.Heavy_Shredder_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class UHeavy_Shredder_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Heavy_ArmorPiercing_Ammo.Heavy_ArmorPiercing_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class UHeavy_ArmorPiercing_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/ECell_Volatile_Ammo.ECell_Volatile_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class UECell_Volatile_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/ECell_Standard_Ammo.ECell_Standard_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class UECell_Standard_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Ammo/ECell_Ionized_Ammo.ECell_Ionized_Ammo_C
/// Size: 0x01A0 (416 bytes) (0x0001A0 - 0x0001A0) align 8 MaxSize: 0x01A0
class UECell_Ionized_Ammo_C : public UAmmo
{ 
public:
};

/// Class /Game/Blueprints/Stats/Skills/IndianaSkills_BP.IndianaSkills_BP_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UIndianaSkills_BP_C : public UIndianaSkills
{ 
public:
};

/// Class /Game/Blueprints/Stats/Attributes/IndianaAttributes_BP.IndianaAttributes_BP_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UIndianaAttributes_BP_C : public UIndianaAttributes
{ 
public:
};

/// Class /Game/Blueprints/Game/PointOfNoReturnRollback_BP.PointOfNoReturnRollback_BP_C
/// Size: 0x0110 (272 bytes) (0x000110 - 0x000110) align 8 MaxSize: 0x0110
class UPointOfNoReturnRollback_BP_C : public UPointOfNoReturnRollbackData
{ 
public:
};

/// Class /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C
/// Size: 0x0158 (344 bytes) (0x000158 - 0x000158) align 8 MaxSize: 0x0158
class UIndianaFormulas_BP_C : public UIndianaFormulas
{ 
public:


	/// Functions
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.GetOCLSkillCheckValue
	// void GetOCLSkillCheckValue(char OCLDifficulty, char& OCLSkillCheckValue);                                                // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.GetRespecCost
	// int32_t GetRespecCost(int32_t NumRespecs);                                                                               // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.VendorRepairCurrencyCost
	// int32_t VendorRepairCurrencyCost(float Durability, int32_t ItemLevel);                                                   // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.WorkbenchRepairPartCost
	// int32_t WorkbenchRepairPartCost(float Durability, int32_t ItemLevel, int32_t EngineerSkill);                             // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.FieldRepairPartCost
	// int32_t FieldRepairPartCost(float Durability, int32_t ItemLevel, int32_t EngineerSkill);                                 // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.BaseRepairPartCost
	// float BaseRepairPartCost(float Durability, int32_t ItemLevel);                                                           // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.CanUseOCL
	// bool CanUseOCL(int32_t Difficulty, int32_t PlayerSkill, int32_t MaxDelta);                                               // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.OCLToughness
	// char OCLToughness(int32_t Difficulty, int32_t PlayerSkill);                                                              // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackRobotTime
	// char HackRobotTime(char ExactHackDifficulty, int32_t PlayerHackSkill);                                                   // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.GetDisguiseDrainRate
	// float GetDisguiseDrainRate(int32_t StealthSkill, bool bMoving, bool bSprinting, bool bCrouching);                        // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationNearMissMaxOptions
	// int32_t ConversationNearMissMaxOptions();                                                                                // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationAttributeNearMissThreshold
	// int32_t ConversationAttributeNearMissThreshold();                                                                        // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillValueToRange
	// ECharacterSkillRange ComputeSkillValueToRange(int32_t SkillValue);                                                       // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationSkillNearMissThreshold
	// int32_t ConversationSkillNearMissThreshold();                                                                            // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.GetBribeAmount
	// int32_t GetBribeAmount(EBribeDifficulty BribeDifficulty, int32_t Level, int32_t MerchantSkill);                          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.GetInterrogationBribeAmount
	// int32_t GetInterrogationBribeAmount(ECrimeType CrimeType, bool bRestrictedArea, bool bDisguised, int32_t DisguiseInterrogationsPassed, int32_t PlayerLevel, int32_t MerchantSkill, int32_t StolenItemsValue); // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateMoraleAdjustment
	// float CalculateMoraleAdjustment(float AddedMoral, int32_t CharmAttribute, int32_t TemperamentAttribute);                 // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateIntialMorale
	// float CalculateIntialMorale(int32_t TemperamentAttribute);                                                               // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ShouldDrawFireSwitchCompanionTargets
	// bool ShouldDrawFireSwitchCompanionTargets(float OldHealth, float OldDTBody, float OldDTHead, float NewHealth, float NewDTBody, float NewDTHead); // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.PickPocketTime
	// float PickPocketTime(int32_t LockpickSkill, int32_t TargetPerception);                                                   // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeFallingDamagePercent
	// float ComputeFallingDamagePercent(float DistanceFallen);                                                                 // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForSecondaryAttribute
	// int32_t ComputeSkillPointsForSecondaryAttribute(char AttributeRank);                                                     // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForPrimaryAttribute
	// int32_t ComputeSkillPointsForPrimaryAttribute(char AttributeRank);                                                       // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.PlayerSneakEnemyDetectionRage
	// float PlayerSneakEnemyDetectionRage(bool bInterior, int32_t PlayerSneakSkill);                                           // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDamagePercent
	// float TrapDamagePercent(ETrapDifficulty TrapDifficulty);                                                                 // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyRange
	// float TrapDifficultyRange();                                                                                             // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyNumRanges
	// char TrapDifficultyNumRanges();                                                                                          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyFullRange
	// char TrapDifficultyFullRange();                                                                                          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactTrapDifficulty
	// char ComputeExactTrapDifficulty(ETrapDifficulty TrapDifficulty);                                                         // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.CanDisarm
	// bool CanDisarm(char ExactTrapDifficulty, int32_t PlayerEngineeringSkill);                                                // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.CanArm
	// bool CanArm(char ExactTrapDifficulty, int32_t PlayerEngineeringSkill);                                                   // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDisarmNoise
	// float TrapDisarmNoise(char ExactTrapDifficulty, int32_t PlayerEngineeringSkill);                                         // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.TrapArmNoise
	// float TrapArmNoise(char ExactTrapDifficulty, int32_t PlayerEngineeringSkill);                                            // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.DisarmTime
	// char DisarmTime(char ExactTrapDifficulty, int32_t PlayerEngineeringSkill);                                               // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ArmTime
	// char ArmTime(char ExactTrapDifficulty, int32_t PlayerEngineeringSkill);                                                  // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.TrapToughness
	// char TrapToughness(char ExactTrapDifficulty, int32_t PlayerEngineeringSkill);                                            // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.CanHack
	// bool CanHack(char ExactComputerDifficulty, int32_t PlayerHackSkill);                                                     // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactHackDifficulty
	// char ComputeExactHackDifficulty(EOCLDifficulty HackDifficulty);                                                          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyFullRange
	// char HackDifficultyFullRange();                                                                                          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyNumRanges
	// char HackDifficultyNumRanges();                                                                                          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyRange
	// float HackDifficultyRange();                                                                                             // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackNoise
	// float HackNoise(char ExactHackDifficulty, int32_t PlayerHackSkill);                                                      // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackTime
	// char HackTime(char ExactHackDifficulty, int32_t PlayerHackSkill);                                                        // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackNumResources
	// char HackNumResources(char ExactHackDifficulty, int32_t PlayerHackSkill);                                                // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.HackToughness
	// char HackToughness(char ExactHackDifficulty, int32_t PlayerHackSkill);                                                   // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactLockpickDifficulty
	// char ComputeExactLockpickDifficulty(EOCLDifficulty LockpickDifficulty);                                                  // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyRange
	// float LockpickDifficultyRange();                                                                                         // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyNumRanges
	// char LockpickDifficultyNumRanges();                                                                                      // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyFullRange
	// char LockpickDifficultyFullRange();                                                                                      // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.CanLockpick
	// bool CanLockpick(char ExactLockpickDifficulty, int32_t PlayerLockpickSkill);                                             // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNumResources
	// char LockpickNumResources(char ExactLockpickDifficulty, int32_t PlayerLockpickSkill, int32_t BasePlayerLockpickSkill);   // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNoise
	// float LockpickNoise(char ExactLockpickDifficulty, int32_t PlayerLockpickSkill);                                          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickTime
	// float LockpickTime(char ExactLockpickDifficulty, int32_t PlayerLockpickSkill, int32_t BasePlayerLockpickSkill);          // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickToughness
	// char LockpickToughness(char ExactLockpickDifficulty, int32_t PlayerLockpickSkill);                                       // [0x1c5deb0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/Item/Currency/Bit_Cartridge.Bit_Cartridge_C
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000140) align 8 MaxSize: 0x0140
class UBit_Cartridge_C : public UCurrencyItem
{ 
public:
};

/// Class /Game/Blueprints/Game/IndianaGlobals_BP.IndianaGlobals_BP_C
/// Size: 0x0278 (632 bytes) (0x000278 - 0x000278) align 8 MaxSize: 0x0278
class UIndianaGlobals_BP_C : public UIndianaGlobals
{ 
public:
};

/// Class /Game/Blueprints/Game/BP_TutorialManager.BP_TutorialManager_C
/// Size: 0x0280 (640 bytes) (0x000280 - 0x000280) align 8 MaxSize: 0x0280
class UBP_TutorialManager_C : public UTutorialManager
{ 
public:
};

/// Class /Game/Blueprints/Item/Pickup_Basic.Pickup_Basic_C
/// Size: 0x0630 (1584 bytes) (0x000630 - 0x000630) align 8 MaxSize: 0x0630
class APickup_Basic_C : public APickup
{ 
public:
};

/// Class /Game/Blueprints/Game/BP_AudioLogManager.BP_AudioLogManager_C
/// Size: 0x0178 (376 bytes) (0x000178 - 0x000178) align 8 MaxSize: 0x0178
class UBP_AudioLogManager_C : public UAudioLogManager
{ 
public:
};

/// Class /Game/Blueprints/Game/IndianaGameInstance_BP.IndianaGameInstance_BP_C
/// Size: 0x0D70 (3440 bytes) (0x000D70 - 0x000D70) align 16 MaxSize: 0x0D70
class UIndianaGameInstance_BP_C : public UIndianaGameInstance
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_AFewBitsMore.Spell_PerkEffect_AFewBitsMore_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_AFewBitsMore_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_TheNegotiator.Spell_PerkEffect_TheNegotiator_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_TheNegotiator_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_SnakeOilSalesman.Spell_PerkEffect_SnakeOilSalesman_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_SnakeOilSalesman_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/CHAR/WeaponAnimationsFPV_BP.WeaponAnimationsFPV_BP_C
/// Size: 0x0460 (1120 bytes) (0x000460 - 0x000460) align 8 MaxSize: 0x0460
class UWeaponAnimationsFPV_BP_C : public UWeaponAnimationsFPV
{ 
public:
};

/// Class /Game/Blueprints/Spells/PlayerPassives/Spell_Player_IgnoreMeleeDamageOnDodge.Spell_Player_IgnoreMeleeDamageOnDodge_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Player_IgnoreMeleeDamageOnDodge_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Player_CinematicPartyInvulnerability.Spell_Player_CinematicPartyInvulnerability_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Player_CinematicPartyInvulnerability_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_CalledShotIssued.Spell_AI_CalledShotIssued_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_AI_CalledShotIssued_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Player/PlayerCompanionCommandComponent.PlayerCompanionCommandComponent_C
/// Size: 0x03B8 (952 bytes) (0x0003B8 - 0x0003B8) align 8 MaxSize: 0x03B8
class UPlayerCompanionCommandComponent_C : public UCompanionCommandComponent
{ 
public:
};

/// Class /Game/Blueprints/Player/ConversationLighting_BP.ConversationLighting_BP_C
/// Size: 0x0378 (888 bytes) (0x000360 - 0x000378) align 8 MaxSize: 0x0378
class AConversationLighting_BP_C : public AConversationLighting
{ 
public:
	class USpotLightComponent*                         SpeakerLight;                                               // 0x0360   (0x0008)  
	class USpotLightComponent*                         SpeakerLight0;                                              // 0x0368   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0370   (0x0008)  
};

/// Class /Game/Blueprints/Game/IndianaGameModeFrontEnd.IndianaGameModeFrontEnd_C
/// Size: 0x03E0 (992 bytes) (0x0003D8 - 0x0003E0) align 8 MaxSize: 0x03E0
class AIndianaGameModeFrontEnd_C : public AIndianaGameMode
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x03D8   (0x0008)  
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictAlcohol.Spell_Flaw_AddictAlcohol_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_AddictAlcohol_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Unarmed/Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class UUnarmed_FPV_WeaponAnimations_C : public UWeaponAnimationsFPV_BP_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/WEAP/Unarmed/Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.TriggerEventBP
	// void TriggerEventBP(EWeaponEvent WeaponEvent, FEventEffectParams& Params);                                               // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/Unarmed/Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.LeaveStateBP
	// void LeaveStateBP(EWeaponState WeaponState);                                                                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/Unarmed/Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.EnterStateBP
	// void EnterStateBP(EWeaponState WeaponState, FEventEffectParams& Params);                                                 // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/Unarmed/Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.ExecuteUbergraph_Unarmed_FPV_WeaponAnimations
	// void ExecuteUbergraph_Unarmed_FPV_WeaponAnimations(int32_t EntryPoint);                                                  // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/WEAP/Hndgn/Hndgn_FPV_WeaponAnimations.Hndgn_FPV_WeaponAnimations_C
/// Size: 0x0460 (1120 bytes) (0x000460 - 0x000460) align 8 MaxSize: 0x0460
class UHndgn_FPV_WeaponAnimations_C : public UWeaponAnimationsFPV_BP_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple_Supernova.CE_LegCripple_Supernova_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_LegCripple_Supernova_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C
/// Size: 0x01E0 (480 bytes) (0x0001B8 - 0x0001E0) align 8 MaxSize: 0x01E0
class UCE_LegCripple_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01C0   (0x0010)  
	TArray<FName>                                      Sockets;                                                    // 0x01D0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C.ExecuteUbergraph_CE_LegCripple
	// void ExecuteUbergraph_CE_LegCripple(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictDrug.Spell_Flaw_AddictDrug_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_AddictDrug_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictFood.Spell_Flaw_AddictFood_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_AddictFood_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictSmoke.Spell_Flaw_AddictSmoke_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_AddictSmoke_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Drug/Spell_Consumable_SCAdreno.Spell_Consumable_SCAdreno_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Consumable_SCAdreno_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple_Flaw.CE_LegCripple_Flaw_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_LegCripple_Flaw_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple_PostProcess.CE_LegCripple_PostProcess_C
/// Size: 0x0208 (520 bytes) (0x000208 - 0x000208) align 8 MaxSize: 0x0208
class UCE_LegCripple_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C
/// Size: 0x01E0 (480 bytes) (0x0001B8 - 0x0001E0) align 8 MaxSize: 0x01E0
class UCE_FallCripple_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01C0   (0x0010)  
	TArray<FName>                                      Sockets;                                                    // 0x01D0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C.ExecuteUbergraph_CE_FallCripple
	// void ExecuteUbergraph_CE_FallCripple(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C
/// Size: 0x01A0 (416 bytes) (0x000188 - 0x0001A0) align 8 MaxSize: 0x01A0
class UCE_HackRobot_Visuals_C : public UStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0188   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            MIDs;                                                       // 0x0190   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ExecuteUbergraph_CE_HackRobot_Visuals
	// void ExecuteUbergraph_CE_HackRobot_Visuals(int32_t EntryPoint);                                                          // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/StatusEffects/Encumbrance/CE_Encumbrance.CE_Encumbrance_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Encumbrance_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T5.ThirstSpell_T5_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UThirstSpell_T5_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T4.ThirstSpell_T4_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UThirstSpell_T4_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T3.ThirstSpell_T3_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UThirstSpell_T3_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T2.ThirstSpell_T2_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UThirstSpell_T2_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T1.ThirstSpell_T1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UThirstSpell_T1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T5.HungerSpell_T5_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UHungerSpell_T5_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T4.HungerSpell_T4_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UHungerSpell_T4_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T3.HungerSpell_T3_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UHungerSpell_T3_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T2.HungerSpell_T2_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UHungerSpell_T2_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T1.HungerSpell_T1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UHungerSpell_T1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T5.ExhaustionSpell_T5_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UExhaustionSpell_T5_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T4.ExhaustionSpell_T4_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UExhaustionSpell_T4_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T3.ExhaustionSpell_T3_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UExhaustionSpell_T3_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T2.ExhaustionSpell_T2_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UExhaustionSpell_T2_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T1.ExhaustionSpell_T1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UExhaustionSpell_T1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Player/PlayerTTDComponent.PlayerTTDComponent_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UPlayerTTDComponent_C : public UTacticalTimeDilationComponent
{ 
public:
};

/// Class /Game/Blueprints/Player/PlayerKillCameraComponent.PlayerKillCameraComponent_C
/// Size: 0x0160 (352 bytes) (0x000160 - 0x000160) align 8 MaxSize: 0x0160
class UPlayerKillCameraComponent_C : public UKillCameraComponent
{ 
public:
};

/// Class /Game/Blueprints/Player/PlayerHighlightComponent.PlayerHighlightComponent_C
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UPlayerHighlightComponent_C : public UHighlightComponent
{ 
public:
};

/// Class /Game/Blueprints/Player/PlayerCalledShotCameraComponent.PlayerCalledShotCameraComponent_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPlayerCalledShotCameraComponent_C : public UCalledShotCameraComponent
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Drug/Drug_SC_Adreno.Drug_SC_Adreno_C
/// Size: 0x0230 (560 bytes) (0x000230 - 0x000230) align 8 MaxSize: 0x0230
class UDrug_SC_Adreno_C : public UConsumableItem
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictSmoke.Flaw_Sys_AddictSmoke_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_AddictSmoke_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictFood.Flaw_Sys_AddictFood_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_AddictFood_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictDrug.Flaw_Sys_AddictDrug_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_AddictDrug_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictAlcohol.Flaw_Sys_AddictAlcohol_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_AddictAlcohol_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot.CE_HackRobot_C
/// Size: 0x01C8 (456 bytes) (0x0001B8 - 0x0001C8) align 8 MaxSize: 0x01C8
class UCE_HackRobot_C : public UMultiStatusEffect
{ 
public:
	TArray<class UMaterialInstanceDynamic*>            MIDs;                                                       // 0x01B8   (0x0010)  
};

/// Class /Game/Blueprints/Spells/FallingDamage/Spell_Falling_FallCripple.Spell_Falling_FallCripple_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Falling_FallCripple_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C
/// Size: 0x462A (17962 bytes) (0x000600 - 0x00462A) align 16 MaxSize: 0x462A
class UFPV_AnimBP2_C : public UFPVAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0600   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0608   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0638   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x0680   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x06C8   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x07D0   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot1;                                        // 0x07F0   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot2;                                        // 0x0838   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0880   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x08A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x08D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x08F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0920   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0948   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0970   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0998   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x09C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x09E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x0A10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x0A38   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult14;                           // 0x0A60   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult15;                           // 0x0A88   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult16;                           // 0x0AB0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult17;                           // 0x0AD8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult18;                           // 0x0B00   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult19;                           // 0x0B28   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult20;                           // 0x0B50   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0B78   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0BF8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x0C28   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult22;                                // 0x0CA8   (0x0030)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0CD8   (0x0018)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult23;                                // 0x0CF0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer24;                             // 0x0D20   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0DA0   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer25;                             // 0x0E60   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult26;                                // 0x0EE0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer27;                             // 0x0F10   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer28;                             // 0x0F90   (0x0080)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x1010   (0x0198)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x11A8   (0x00A0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace29;                   // 0x1248   (0x0198)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult30;                                // 0x13E0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer31;                             // 0x1410   (0x0080)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive;                          // 0x1490   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer32;                             // 0x14C8   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1548   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer33;                             // 0x1610   (0x0080)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1690   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace34;                      // 0x16B0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone35;                                 // 0x16D0   (0x0108)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer36;                             // 0x17D8   (0x0080)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace37;                   // 0x1858   (0x0198)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool38;                            // 0x19F0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer39;                             // 0x1A90   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x1B10   (0x00D0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace40;                   // 0x1BE0   (0x0198)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult41;                                // 0x1D78   (0x0030)  
	FAnimNode_LocomotionPlay                           AnimGraphNode_LocomotionPlay;                               // 0x1DA8   (0x0090)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend42;                           // 0x1E38   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer43;                             // 0x1EF8   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive44;                              // 0x1F78   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer45;                             // 0x2040   (0x0080)  
	FAnimNode_MakeDynamicAdditive                      AnimGraphNode_MakeDynamicAdditive46;                        // 0x20C0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer47;                             // 0x20F8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult48;                                // 0x2178   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x21A8   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer49;                             // 0x2258   (0x0080)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive50;                              // 0x22D8   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer51;                             // 0x23A0   (0x0080)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace52;                   // 0x2420   (0x0198)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool53;                            // 0x25B8   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer54;                             // 0x2658   (0x0080)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive55;                     // 0x26D8   (0x00D0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace56;                   // 0x27A8   (0x0198)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult57;                                // 0x2940   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine58;                               // 0x2970   (0x00B0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult59;                           // 0x2A20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult60;                           // 0x2A48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult61;                           // 0x2A70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult62;                           // 0x2A98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult63;                           // 0x2AC0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult64;                           // 0x2AE8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult65;                           // 0x2B10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult66;                           // 0x2B38   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult67;                           // 0x2B60   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult68;                           // 0x2B88   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult69;                           // 0x2BB0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult70;                           // 0x2BD8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult71;                           // 0x2C00   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult72;                           // 0x2C28   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult73;                           // 0x2C50   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult74;                           // 0x2C78   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult75;                           // 0x2CA0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult76;                           // 0x2CC8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult77;                           // 0x2CF0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult78;                           // 0x2D18   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult79;                           // 0x2D40   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult80;                           // 0x2D68   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult81;                           // 0x2D90   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult82;                           // 0x2DB8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult83;                           // 0x2DE0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult84;                           // 0x2E08   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult85;                           // 0x2E30   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult86;                           // 0x2E58   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult87;                           // 0x2E80   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer88;                             // 0x2EA8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult89;                                // 0x2F28   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer90;                             // 0x2F58   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult91;                                // 0x2FD8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer92;                             // 0x3008   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult93;                                // 0x3088   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer94;                             // 0x30B8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult95;                                // 0x3138   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer96;                             // 0x3168   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult97;                                // 0x31E8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer98;                             // 0x3218   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult99;                                // 0x3298   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer100;                            // 0x32C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult101;                               // 0x3348   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer102;                            // 0x3378   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult103;                               // 0x33F8   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer104;                            // 0x3428   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult105;                               // 0x34A8   (0x0030)  
	FAnimNode_RefPose                                  AnimGraphNode_IdentityPose;                                 // 0x34D8   (0x0018)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult106;                               // 0x34F0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine107;                              // 0x3520   (0x00B0)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive108;                    // 0x35D0   (0x00D0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot109;                                      // 0x36A0   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult110;                          // 0x36E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult111;                          // 0x3710   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult112;                          // 0x3738   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult113;                          // 0x3760   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult114;                          // 0x3788   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult115;                          // 0x37B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult116;                          // 0x37D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult117;                          // 0x3800   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult118;                          // 0x3828   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult119;                          // 0x3850   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x3878   (0x00F0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult120;                               // 0x3968   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer121;                          // 0x3998   (0x00F0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult122;                               // 0x3A88   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer123;                          // 0x3AB8   (0x00F0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult124;                               // 0x3BA8   (0x0030)  
	FAnimNode_RefPose                                  AnimGraphNode_IdentityPose125;                              // 0x3BD8   (0x0018)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult126;                               // 0x3BF0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine127;                              // 0x3C20   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot128;                                      // 0x3CD0   (0x0048)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x3D18   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x3D20   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace129;                     // 0x3F00   (0x0020)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK130;                                 // 0x3F20   (0x01E0)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK131;                                 // 0x4100   (0x01E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace132;                     // 0x42E0   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone133;                                // 0x4300   (0x0108)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive134;                    // 0x4408   (0x00D0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace135;                     // 0x44D8   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot136;                                      // 0x44F8   (0x0048)  
	class UWeaponAnimationsFPV_BP_C*                   WeaponAnimationsBP;                                         // 0x4540   (0x0008)  
	class UWeaponAnimationsFPV_BP_C*                   OriginalWeaponAnimationsBP;                                 // 0x4548   (0x0008)  
	class UWeaponAnimationsFPV_BP_C*                   HolsteredWeaponAnimationsBP;                                // 0x4550   (0x0008)  
	bool                                               MovementStateIsInAir;                                       // 0x4558   (0x0001)  
	bool                                               MovementStateIsClimbing;                                    // 0x4559   (0x0001)  
	bool                                               MovementStateIsSprinting;                                   // 0x455A   (0x0001)  
	bool                                               FineAimingJumpTreeEnabled;                                  // 0x455B   (0x0001)  
	bool                                               BlockingJumpTreeEnabled;                                    // 0x455C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x455D   (0x0003)  MISSED
	FRotator                                           CameraBoneRotator;                                          // 0x4560   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x456C   (0x0004)  MISSED
	class UBlendSpaceBase*                             LocomotionBlendSpace;                                       // 0x4570   (0x0008)  
	class UBlendSpaceBase*                             FineAimLocomotionBlendSpace;                                // 0x4578   (0x0008)  
	class UBlendSpaceBase*                             BlockLocomotionBlendSpace;                                  // 0x4580   (0x0008)  
	class UAnimSequenceBase*                           SprintSequence;                                             // 0x4588   (0x0008)  
	class UAimOffsetBlendSpace*                        LookAimOffset;                                              // 0x4590   (0x0008)  
	class UAimOffsetBlendSpace*                        BlockLookAimOffset;                                         // 0x4598   (0x0008)  
	class UAimOffsetBlendSpace*                        FineAimLookAimOffset;                                       // 0x45A0   (0x0008)  
	bool                                               JumpStart;                                                  // 0x45A8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x45A9   (0x0007)  MISSED
	class UAnimSequenceBase*                           JumpStartSequence;                                          // 0x45B0   (0x0008)  
	class UAnimSequenceBase*                           FallingSequence;                                            // 0x45B8   (0x0008)  
	class UAnimSequenceBase*                           JumpEndSequence;                                            // 0x45C0   (0x0008)  
	class UAnimSequenceBase*                           FineAimJumpStartSequence;                                   // 0x45C8   (0x0008)  
	class UAnimSequenceBase*                           FineAimFallingSequence;                                     // 0x45D0   (0x0008)  
	class UAnimSequenceBase*                           FineAimJumpEndSequence;                                     // 0x45D8   (0x0008)  
	float                                              AdditiveJumpStrength;                                       // 0x45E0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x45E4   (0x0004)  MISSED
	class UAnimSequenceBase*                           BlockJumpStartSequence;                                     // 0x45E8   (0x0008)  
	class UAnimSequenceBase*                           BlockFallingSequence;                                       // 0x45F0   (0x0008)  
	class UAnimSequenceBase*                           BlockJumpEndSequence;                                       // 0x45F8   (0x0008)  
	bool                                               SprintStartIsValid;                                         // 0x4600   (0x0001)  
	bool                                               SprintEndIsValid;                                           // 0x4601   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x4602   (0x0002)  MISSED
	float                                              SmoothedTurnSpeed;                                          // 0x4604   (0x0004)  
	float                                              SmoothedLookUpSpeed;                                        // 0x4608   (0x0004)  
	float                                              LocomotionSpeed;                                            // 0x460C   (0x0004)  
	float                                              HobbledAddditveStrength;                                    // 0x4610   (0x0004)  
	bool                                               IsSprintBlocked;                                            // 0x4614   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x4615   (0x0003)  MISSED
	float                                              WalkAmplitudeSmoothed;                                      // 0x4618   (0x0004)  
	float                                              CameraBobActive;                                            // 0x461C   (0x0004)  
	class UBlendSpace*                                 HitReactSequence;                                           // 0x4620   (0x0008)  
	bool                                               IsTransitioningBetweenEquipement;                           // 0x4628   (0x0001)  
	bool                                               ValidSprintEnd;                                             // 0x4629   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1c5deb0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.IsPlayingMontageOnDeath
	// void IsPlayingMontageOnDeath(bool& Result);                                                                              // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.IsPlayingMontageOnFullyBody
	// void IsPlayingMontageOnFullyBody(bool& Result);                                                                          // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.UpdateWeaponAnimations
	// void UpdateWeaponAnimations();                                                                                           // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.UpdateVariables
	// void UpdateVariables(float Delta);                                                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_ModifyBone_92ECF0944465C24CD12526852F98C86F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_ModifyBone_92ECF0944465C24CD12526852F98C86F(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_C16E017D4032063B009869A89CC97F3B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_C16E017D4032063B009869A89CC97F3B(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_34C09A16446CAD108D2D18A4CDD4C6B2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_34C09A16446CAD108D2D18A4CDD4C6B2(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_A87EA53B4241AD8FB018EABA19D925BC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_A87EA53B4241AD8FB018EABA19D925BC(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_8D99D3404442856569F87FAC93FF519F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_8D99D3404442856569F87FAC93FF519F(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_BA43C67746C048D61862349365F4DF26
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_BA43C67746C048D61862349365F4DF26(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_D6A48A63436A54FF31E53BB2D5C1C100
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_D6A48A63436A54FF31E53BB2D5C1C100(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_3F9D194F4DA0ECDAF2E13EA148863A25
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_3F9D194F4DA0ECDAF2E13EA148863A25(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_DB3802D942E00737D748CAAAE07D1BC7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_DB3802D942E00737D748CAAAE07D1BC7(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_438867824E92E6A6126A1C999B7E6622
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_438867824E92E6A6126A1C999B7E6622(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_475B389544A2AE58A9C9C0BB7B43661F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_475B389544A2AE58A9C9C0BB7B43661F(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_EB0D7049426D41B2D8C815B69BF930D9
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_EB0D7049426D41B2D8C815B69BF930D9(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_744D66AD4264B2B3A2D923A82A5CC216
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_744D66AD4264B2B3A2D923A82A5CC216(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_6FEE0C0E4DCC01A75FE539ADF7E2A543
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_6FEE0C0E4DCC01A75FE539ADF7E2A543(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_5A48FE094EB2D486EB747BBBA5D0BEB2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_5A48FE094EB2D486EB747BBBA5D0BEB2(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_D4050A8149AACE25F4284489BEFFEE40
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_D4050A8149AACE25F4284489BEFFEE40(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_9F63D97B494933A39EB154986D74A53A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_9F63D97B494933A39EB154986D74A53A(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_BB67755249EB784741D586915A6A2638
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_BB67755249EB784741D586915A6A2638(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_70B3E24542E3D403D11C67BC1CCF7D03
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_70B3E24542E3D403D11C67BC1CCF7D03(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_A3DB140E4847E00472F7478BEF5BACB1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_A3DB140E4847E00472F7478BEF5BACB1(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_LayeredBoneBlend_C6D616EA433282CF9F287A8474513C2F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_LayeredBoneBlend_C6D616EA433282CF9F287A8474513C2F(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_A37382D748FA59995EFB9C9E59535F2D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_A37382D748FA59995EFB9C9E59535F2D(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_CA437A75462404B364BF5BB335072D3B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_CA437A75462404B364BF5BB335072D3B(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_FF847FC74D1FB979EDAB279968197FC3
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_FF847FC74D1FB979EDAB279968197FC3(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_011FBCB9470888D366327097D2C4622F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_011FBCB9470888D366327097D2C4622F(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_0D7D5146408A922B06762DBB9AAC008A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_0D7D5146408A922B06762DBB9AAC008A(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_1452710C488AF2AB4C8A168208ADB031
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_1452710C488AF2AB4C8A168208ADB031(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_ModifyBone_8C768CE6486F081FDDC89F870BF05669
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_ModifyBone_8C768CE6486F081FDDC89F870BF05669(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_79F906B042635C33C671639AA7359422
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_79F906B042635C33C671639AA7359422(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_970AC589472C3955744193AA9FEE4BA0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_970AC589472C3955744193AA9FEE4BA0(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_12BF9B7B480C92B19A4D0CA8FBDF9C90
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_12BF9B7B480C92B19A4D0CA8FBDF9C90(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_558B2A9043B0627DA0E543B0E6A2B300
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_558B2A9043B0627DA0E543B0E6A2B300(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_700F798D4CF1CE0090E113B77AC51F78
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_700F798D4CF1CE0090E113B77AC51F78(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_8DD794D343413FC836851E8147525ED0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_8DD794D343413FC836851E8147525ED0(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_5469D11B490CFD934EACD6ACDAC3C7C9
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_RotationOffsetBlendSpace_5469D11B490CFD934EACD6ACDAC3C7C9(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_E257E04645621D0B5AA855BB140E4EAC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_BlendListByBool_E257E04645621D0B5AA855BB140E4EAC(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_LayeredBoneBlend_CDDE03BF431D63B906681F9085DB2FF7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_LayeredBoneBlend_CDDE03BF431D63B906681F9085DB2FF7(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_C808514449864397697391AD712402F7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_C808514449864397697391AD712402F7(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_02297E7A46C7333EF5B2AF83448E7DDA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_SequencePlayer_02297E7A46C7333EF5B2AF83448E7DDA(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_FBE345234802265512F99DBA843CE40C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_FBE345234802265512F99DBA843CE40C(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_95F99F3845AC3F1A3EDD89AA5E70D42C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_95F99F3845AC3F1A3EDD89AA5E70D42C(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_744857BB4685E5589ADCBB971D2BEA7B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_AnimBP2_AnimGraphNode_TransitionResult_744857BB4685E5589ADCBB971D2BEA7B(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnJumped
	// void OnJumped();                                                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnLanded
	// void OnLanded(float FallDistance);                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnStartCrouch
	// void OnStartCrouch();                                                                                                    // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnStopCrouch
	// void OnStopCrouch();                                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnDodged
	// void OnDodged(EDodgeDirection DodgeDirection);                                                                           // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnBlockStart
	// void OnBlockStart();                                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnBlockEnd
	// void OnBlockEnd();                                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnNewWeaponAnimations
	// void OnNewWeaponAnimations(class UWeaponAnimations* NewWeaponAnimations);                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.OnBlockHit
	// void OnBlockHit(bool bBlockedMeleeAttack);                                                                               // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C.ExecuteUbergraph_FPV_AnimBP2
	// void ExecuteUbergraph_FPV_AnimBP2(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/CHAR/StatComponentBase.StatComponentBase_C
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UStatComponentBase_C : public URpgStatComponent
{ 
public:
};

/// Class /Game/Blueprints/Player/PlayerStatComponent.PlayerStatComponent_C
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPlayerStatComponent_C : public UStatComponentBase_C
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_AllForOne.Spell_PerkEffect_AllForOne_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_AllForOne_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Cheetah.Spell_PerkEffect_Cheetah_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Cheetah_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_LoneWolf.Spell_PerkEffect_LoneWolf_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_LoneWolf_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_MaintenanceMan.Spell_PerkEffect_MaintenanceMan_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_MaintenanceMan_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_PackMule.Spell_PerkEffect_PackMule_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_PackMule_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_QuickAndTheDead.Spell_PerkEffect_QuickAndTheDead_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_QuickAndTheDead_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Resilient.Spell_PerkEffect_Resilient_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Resilient_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_SlowTheWorld.Spell_PerkEffect_SlowTheWorld_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_SlowTheWorld_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Strider.Spell_PerkEffect_Strider_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Strider_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Toughness.Spell_PerkEffect_Toughness_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Toughness_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Traveler.Spell_PerkEffect_Traveler_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Traveler_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Harvester.Spell_PerkEffect_Harvester_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Harvester_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Hoarder.Spell_PerkEffect_Hoarder_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Hoarder_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_PackOfPackMules.Spell_PerkEffect_PackOfPackMules_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_PackOfPackMules_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_RollingThunder.Spell_PerkEffect_RollingThunder_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_RollingThunder_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_RunAndGun.Spell_PerkEffect_RunAndGun_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_RunAndGun_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Scanner.Spell_PerkEffect_Scanner_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Scanner_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Soliloquy.Spell_PerkEffect_Soliloquy_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Soliloquy_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_SpeedDemon.Spell_PerkEffect_SpeedDemon_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_SpeedDemon_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_TacticalAgility.Spell_PerkEffect_TacticalAgility_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_TacticalAgility_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_TheCollector.Spell_PerkEffect_TheCollector_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_TheCollector_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_TheReaper.Spell_PerkEffect_TheReaper_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_TheReaper_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_WeBandOfBrothers.Spell_PerkEffect_WeBandOfBrothers_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_WeBandOfBrothers_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_WeirdScience.Spell_PerkEffect_WeirdScience_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_WeirdScience_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ArmorMaster.Spell_PerkEffect_ArmorMaster_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_ArmorMaster_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_BoomHeadshot.Spell_PerkEffect_BoomHeadshot_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_BoomHeadshot_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_DontGoDyinOnMe.Spell_PerkEffect_DontGoDyinOnMe_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_DontGoDyinOnMe_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/PenetratingShots/CE_PenetratingShots.CE_PenetratingShots_C
/// Size: 0x01A8 (424 bytes) (0x0001A8 - 0x0001A8) align 8 MaxSize: 0x01A8
class UCE_PenetratingShots_C : public UArmorStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_PenetratingShots.Spell_PerkEffect_PenetratingShots_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_PenetratingShots_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_Revenge.Spell_PerkEffect_Revenge_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Revenge_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_SoloSneaker.Spell_PerkEffect_SoloSneaker_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_SoloSneaker_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_SteadyHand.Spell_PerkEffect_SteadyHand_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_SteadyHand_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_SuperPackMule.Spell_PerkEffect_SuperPackMule_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_SuperPackMule_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ThickSkin.Spell_PerkEffect_ThickSkin_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_ThickSkin_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_TitForTat.Spell_PerkEffect_TitForTat_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_TitForTat_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_WildScience.Spell_PerkEffect_WildScience_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_WildScience_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/NRay/Spell_NRay_TargetEffect.Spell_NRay_TargetEffect_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_NRay_TargetEffect_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_Scope.RangedMod_Sight_Scope_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Sight_Scope_C : public URangedSightMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_PostResistance.RangedMod_Sight_PostResistance_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Sight_PostResistance_C : public URangedSightMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_NRayDamage.RangedMod_Magazine_NRayDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Magazine_NRayDamage_C : public URangedMagazineMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_CorrodeDamage.RangedMod_Magazine_CorrodeDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Magazine_CorrodeDamage_C : public URangedMagazineMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_RateOfFire.RangedMod_Barrel_RateOfFire_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Barrel_RateOfFire_C : public URangedBarrelMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_Accuracy.RangedMod_Barrel_Accuracy_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Barrel_Accuracy_C : public URangedBarrelMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_CritChance.MeleeMod_Grip_CritChance_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Grip_CritChance_C : public UMeleeGripMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_ShockDamage.MeleeMod_Atk_ShockDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Atk_ShockDamage_C : public UMeleeAttackMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_NRayDamage.MeleeMod_Atk_NRayDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Atk_NRayDamage_C : public UMeleeAttackMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_ATK_CorrodeDamage.MeleeMod_ATK_CorrodeDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_ATK_CorrodeDamage_C : public UMeleeAttackMod
{ 
public:
};

/// Class /Game/Blueprints/Audio/Footsteps/__FootstepSFX_Global.__FootstepSFX_Global_C
/// Size: 0x0148 (328 bytes) (0x000148 - 0x000148) align 8 MaxSize: 0x0148
class U__FootstepSFX_Global_C : public UFootstepAudio
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Alcohol.CE_Withdrawal_Alcohol_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Withdrawal_Alcohol_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Drug.CE_Withdrawal_Drug_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Withdrawal_Drug_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Food.CE_Withdrawal_Food_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Withdrawal_Food_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Smoke.CE_Withdrawal_Smoke_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Withdrawal_Smoke_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_Range.RangedMod_Sight_Range_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Sight_Range_C : public URangedSightMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_Aim.RangedMod_Sight_Aim_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Sight_Aim_C : public URangedSightMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_ShockDamage.RangedMod_Magazine_ShockDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Magazine_ShockDamage_C : public URangedMagazineMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_MagSize.RangedMod_Magazine_MagSize_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Magazine_MagSize_C : public URangedMagazineMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_EnergyDamage.RangedMod_Magazine_EnergyDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Magazine_EnergyDamage_C : public URangedMagazineMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_Silencer.RangedMod_Barrel_Silencer_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Barrel_Silencer_C : public URangedBarrelMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_CritDamage.RangedMod_Barrel_CritDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class URangedMod_Barrel_CritDamage_C : public URangedBarrelMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_Toughness.MeleeMod_Grip_Toughness_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Grip_Toughness_C : public UMeleeGripMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_Atk_Speed.MeleeMod_Grip_Atk_Speed_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Grip_Atk_Speed_C : public UMeleeGripMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_PwrAtkDmg.MeleeMod_Atk_PwrAtkDmg_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Atk_PwrAtkDmg_C : public UMeleeAttackMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_PlasmaDamage.MeleeMod_Atk_PlasmaDamage_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Atk_PlasmaDamage_C : public UMeleeAttackMod
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Cold.ArmorMod_Armor_Cold_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Cold_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Cold_T2.ArmorMod_Armor_Cold_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Cold_T2_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Precision/CE_Precision.CE_Precision_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Precision_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Precision.Spell_PerkEffect_Precision_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Precision_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_Confidence.Spell_PerkEffect_Confidence_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Confidence_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_LastStand.Spell_PerkEffect_LastStand_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_LastStand_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_TacticalMaster.Spell_PerkEffect_TacticalMaster_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_TacticalMaster_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_Silencer.MeleeMod_Grip_Silencer_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMeleeMod_Grip_Silencer_C : public UMeleeGripMod
{ 
public:
};

/// Class /Game/Blueprints/Audio/Footsteps/_FootstepSFX_HumanSmall._FootstepSFX_HumanSmall_C
/// Size: 0x0148 (328 bytes) (0x000148 - 0x000148) align 8 MaxSize: 0x0148
class U_FootstepSFX_HumanSmall_C : public U__FootstepSFX_Global_C
{ 
public:
};

/// Class /Game/Blueprints/Audio/Footsteps/Pitched/FootstepSFX_Small+2.FootstepSFX_Small+2_C
/// Size: 0x0148 (328 bytes) (0x000148 - 0x000148) align 8 MaxSize: 0x0148
class UFootstepSFX_Small_2_C : public U_FootstepSFX_HumanSmall_C
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_WildScience.Perk_T3_WildScience_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_WildScience_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_TitForTat.Perk_T3_TitForTat_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_TitForTat_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ThickSkin.Perk_T3_ThickSkin_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_ThickSkin_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_TacticalMaster.Perk_T3_TacticalMaster_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_TacticalMaster_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_SuperPackMule.Perk_T3_SuperPackMule_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_SuperPackMule_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_SteadyHand.Perk_T3_SteadyHand_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_SteadyHand_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_SoloSneaker.Perk_T3_SoloSneaker_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_SoloSneaker_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_Revenge.Perk_T3_Revenge_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_Revenge_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_PenetratingShots.Perk_T3_PenetratingShots_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_PenetratingShots_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_LastStand.Perk_T3_LastStand_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_LastStand_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_DontGoDyinOnMe.Perk_T3_DontGoDyinOnMe_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_DontGoDyinOnMe_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_Confidence.Perk_T3_Confidence_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_Confidence_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_BoomHeadshot.Perk_T3_BoomHeadshot_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_BoomHeadshot_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ArmorMaster.Perk_T3_ArmorMaster_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_ArmorMaster_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_WeirdScience.Perk_T2_WeirdScience_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_WeirdScience_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_WeBandOfBrothers.Perk_T2_WeBandOfBrothers_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_WeBandOfBrothers_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_TheReaper.Perk_T2_TheReaper_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_TheReaper_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_TheCollector.Perk_T2_TheCollector_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_TheCollector_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_TacticalAgility.Perk_T2_TacticalAgility_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_TacticalAgility_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_SpeedDemon.Perk_T2_SpeedDemon_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_SpeedDemon_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Soliloquy.Perk_T2_Soliloquy_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_Soliloquy_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Scanner.Perk_T2_Scanner_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_Scanner_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_RunAndGun.Perk_T2_RunAndGun_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_RunAndGun_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_RollingThunder.Perk_T2_RollingThunder_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_RollingThunder_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_PackOfPackMules.Perk_T2_PackOfPackMules_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_PackOfPackMules_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Hoarder.Perk_T2_Hoarder_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_Hoarder_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Harvester.Perk_T2_Harvester_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_Harvester_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Traveler.Perk_T1_Traveler_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_Traveler_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Toughness.Perk_T1_Toughness_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_Toughness_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Strider.Perk_T1_Strider_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_Strider_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_SlowTheWorld.Perk_T1_SlowTheWorld_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_SlowTheWorld_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Resilient.Perk_T1_Resilient_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_Resilient_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_QuickAndTheDead.Perk_T1_QuickAndTheDead_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_QuickAndTheDead_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Precision.Perk_T1_Precision_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_Precision_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_PackMule.Perk_T1_PackMule_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_PackMule_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_MaintenanceMan.Perk_T1_MaintenanceMan_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_MaintenanceMan_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_LoneWolf.Perk_T1_LoneWolf_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_LoneWolf_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Cheetah.Perk_T1_Cheetah_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_Cheetah_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_AllForOne.Perk_T1_AllForOne_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_AllForOne_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/HackRobot/CE_DoubleHackRobot.CE_DoubleHackRobot_C
/// Size: 0x01C8 (456 bytes) (0x0001B8 - 0x0001C8) align 8 MaxSize: 0x01C8
class UCE_DoubleHackRobot_C : public UMultiStatusEffect
{ 
public:
	TArray<class UMaterialInstanceDynamic*>            MIDs;                                                       // 0x01B8   (0x0010)  
};

/// Class /Game/Blueprints/StatusEffects/Encumbrance/CE_Encumbrance_PermLegCripple.CE_Encumbrance_PermLegCripple_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Encumbrance_PermLegCripple_C : public UCE_Encumbrance_C
{ 
public:
};

/// Class /Game/Blueprints/Spells/EncumbranceEffects/Spell_Encumbrance.Spell_Encumbrance_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Encumbrance_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C
/// Size: 0x01A1 (417 bytes) (0x000188 - 0x0001A1) align 8 MaxSize: 0x01A1
class UPlayerTimeDilationComponent_C : public UTimeDilationComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0188   (0x0008)  
	bool                                               TTD;                                                        // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0191   (0x0003)  MISSED
	float                                              DefaultChromaticAberration;                                 // 0x0194   (0x0004)  
	class ABP_DynamicTOD_C*                            DynamicTOD;                                                 // 0x0198   (0x0008)  
	bool                                               bChromaticAberrationWasReset;                               // 0x01A0   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ResetChromaticAberration
	// void ResetChromaticAberration();                                                                                         // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.OnTimeDilationEnd
	// void OnTimeDilationEnd();                                                                                                // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_Start
	// void TTD_Start();                                                                                                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_End
	// void TTD_End(float Duration);                                                                                            // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ExecuteUbergraph_PlayerTimeDilationComponent
	// void ExecuteUbergraph_PlayerTimeDilationComponent(int32_t EntryPoint);                                                   // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C
/// Size: 0x03EC (1004 bytes) (0x0003A8 - 0x0003EC) align 8 MaxSize: 0x03EC
class UPC_Sound_C : public UIndianaPlayerAudioComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A8   (0x0008)  
	TArray<class UAkAudioBank*>                        ForceLoadBankArray;                                         // 0x03B0   (0x0010)  
	float                                              Vis_MaxRange;                                               // 0x03C0   (0x0004)  
	bool                                               Vis_CharacterEmitters;                                      // 0x03C4   (0x0001)  
	bool                                               Vis_AmbientEmitters;                                        // 0x03C5   (0x0001)  
	bool                                               Vis_EmitterNameData;                                        // 0x03C6   (0x0001)  
	bool                                               Vis_AssociatedEventData;                                    // 0x03C7   (0x0001)  
	bool                                               Vis_DistanceData;                                           // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x03C9   (0x0003)  MISSED
	FLinearColor                                       Vis_CharacterDataColor;                                     // 0x03CC   (0x0010)  
	FLinearColor                                       Vis_AmbientDataColor;                                       // 0x03DC   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.DebugDrawEmitterVisualization
	// void DebugDrawEmitterVisualization(class UAkComponent* EmitterToVisualize, FVector ListenerWorldLocation, FLinearColor DataColor); // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.DebugVisualizeEmitters
	// void DebugVisualizeEmitters();                                                                                           // [0x1c5deb0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_ShowAmbientEmitters
	// void AudioDebug_ShowAmbientEmitters(float MaxVisRange);                                                                  // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_HideAmbientEmitters
	// void AudioDebug_HideAmbientEmitters();                                                                                   // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_ShowCharacterEmitters
	// void AudioDebug_ShowCharacterEmitters(float MaxVisRange);                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_HideCharacterEmitters
	// void AudioDebug_HideCharacterEmitters();                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_SetVisParams
	// void AudioDebug_SetVisParams(bool ShowEmitterName, bool ShowAssociatedEvent, bool ShowDistance, float MaxVisRange);      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_SetMaxVisRange
	// void AudioDebug_SetMaxVisRange(float MaxVisRange);                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.Cuil
	// void Cuil(float CuilLevel);                                                                                              // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_SetCharacterDataColor
	// void AudioDebug_SetCharacterDataColor(float R, float G, float B);                                                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.AudioDebug_SetAmbientDataColor
	// void AudioDebug_SetAmbientDataColor(float R, float G, float B);                                                          // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Audio/Characters/PC_Sound.PC_Sound_C.ExecuteUbergraph_PC_Sound
	// void ExecuteUbergraph_PC_Sound(int32_t EntryPoint);                                                                      // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_SnakeOilSalesman.Perk_T2_SnakeOilSalesman_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_SnakeOilSalesman_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_TheNegotiator.Perk_T1_TheNegotiator_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_TheNegotiator_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_AFewBitsMore.Perk_T1_AFewBitsMore_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_AFewBitsMore_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/DamageTypes/Cold_DamageType.Cold_DamageType_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCold_DamageType_C : public UBase_DamageType_C
{ 
public:
};

/// Class /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C
/// Size: 0x1898 (6296 bytes) (0x0017C0 - 0x001898) align 16 MaxSize: 0x1898
class AIndianaPlayerCharacter_BP_C : public AIndianaPlayerCharacter
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x17C0   (0x0008)  
	class UForcedAnimationComponent*                   ForcedAnimation;                                            // 0x17C8   (0x0008)  
	class USphereComponent*                            QuickMeleeCollisionEnd;                                     // 0x17D0   (0x0008)  
	class USphereComponent*                            QuickMeleeCollisionStart;                                   // 0x17D8   (0x0008)  
	class UIdleCameraComponent*                        IdleCamera;                                                 // 0x17E0   (0x0008)  
	class UMedKitComponent*                            MedKit;                                                     // 0x17E8   (0x0008)  
	class UPlayerAppearanceComponent*                  PlayerAppearance;                                           // 0x17F0   (0x0008)  
	class UPlayerStatComponent_C*                      PlayerStatComponent;                                        // 0x17F8   (0x0008)  
	class UCompanionMoveToWC_3D_C*                     CompanionMoveToWC_3D;                                       // 0x1800   (0x0008)  
	class UCineCameraComponent*                        CinematicConversationCamera;                                // 0x1808   (0x0008)  
	class UEquipmentComponent*                         Equipment;                                                  // 0x1810   (0x0008)  
	class UEnemyScannerComponent*                      EnemyScanner;                                               // 0x1818   (0x0008)  
	class UPlayerShoutComponent*                       PlayerShout;                                                // 0x1820   (0x0008)  
	class UCapsuleComponent*                           CollisionLegs;                                              // 0x1828   (0x0008)  
	class UCapsuleComponent*                           CollisionChest;                                             // 0x1830   (0x0008)  
	class UCapsuleComponent*                           CollisionLeftArm;                                           // 0x1838   (0x0008)  
	class UCapsuleComponent*                           CollisionRightArm;                                          // 0x1840   (0x0008)  
	class USphereComponent*                            CollisionHead;                                              // 0x1848   (0x0008)  
	class UPlayerDeathComponent*                       PlayerDeath;                                                // 0x1850   (0x0008)  
	class UPlayerHealthComponent*                      PlayerHealth;                                               // 0x1858   (0x0008)  
	float                                              Flash;                                                      // 0x1860   (0x0004)  
	bool                                               Dead;                                                       // 0x1864   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x1865   (0x0003)  MISSED
	float                                              MPC_Value;                                                  // 0x1868   (0x0004)  
	float                                              Stealth_Transition;                                         // 0x186C   (0x0004)  
	class UMaterialInstanceDynamic*                    MID_Vignette;                                               // 0x1870   (0x0008)  
	FGlobalVariable                                    SpectrumVodkaVariables;                                     // 0x1878   (0x0010)  
	TArray<class UClass*>                              AllVodkaItems;                                              // 0x1888   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.CheckVodka
	// void CheckVodka();                                                                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature
	// void BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature(FCauseDamageInfo& CauseDamageInfo);    // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_2_NewStateOfBeingEvent__DelegateSignature
	// void BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_2_NewStateOfBeingEvent__DelegateSignature(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.PP_Update
	// void PP_Update();                                                                                                        // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.MPC_Update
	// void MPC_Update();                                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerStealthEnteredBP
	// void OnPlayerStealthEnteredBP();                                                                                         // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerStealthExitedBP
	// void OnPlayerStealthExitedBP();                                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerSoftCoverEnteredBP
	// void OnPlayerSoftCoverEnteredBP();                                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerSoftCoverExitedBP
	// void OnPlayerSoftCoverExitedBP();                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.Stealth
	// void Stealth();                                                                                                          // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.Stealth_Exit
	// void Stealth_Exit();                                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.PlayerCinematicChange
	// void PlayerCinematicChange(bool bCinematicMode);                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.ItemAcquired
	// void ItemAcquired(FItemStack& Item);                                                                                     // [0x1c5deb0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.VodkaItemBind
	// void VodkaItemBind();                                                                                                    // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.BndEvt__IndianaPlayerCharacter_BP_PlayerHealth_K2Node_ComponentBoundEvent_1_WarnPlayerLowHealthEvent__DelegateSignature
	// void BndEvt__IndianaPlayerCharacter_BP_PlayerHealth_K2Node_ComponentBoundEvent_1_WarnPlayerLowHealthEvent__DelegateSignature(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.ExecuteUbergraph_IndianaPlayerCharacter_BP
	// void ExecuteUbergraph_IndianaPlayerCharacter_BP(int32_t EntryPoint);                                                     // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_ThugKit.ArmorMod_Skill_ThugKit_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_ThugKit_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_TechKit.ArmorMod_Skill_TechKit_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_TechKit_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_SilverTongue.ArmorMod_Skill_SilverTongue_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_SilverTongue_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_HunterKit.ArmorMod_Skill_HunterKit_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_HunterKit_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Physical.ArmorMod_Armor_Physical_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Physical_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_SprintSTACost.ArmorMod_Utility_SprintSTACost_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Utility_SprintSTACost_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_NoiseReduction.ArmorMod_Utility_NoiseReduction_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Utility_NoiseReduction_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_Movement.ArmorMod_Utility_Movement_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Utility_Movement_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_StealthKit.ArmorMod_Skill_StealthKit_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_StealthKit_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Shock.ArmorMod_Armor_Shock_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Shock_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_NRay.ArmorMod_Armor_NRay_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_NRay_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Energy.ArmorMod_Armor_Energy_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Energy_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Corrosion.ArmorMod_Armor_Corrosion_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Corrosion_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_KnockedDownDuration.ArmorMod_Utility_KnockedDownDuration_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Utility_KnockedDownDuration_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_StealthKit_T2.ArmorMod_Skill_StealthKit_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_StealthKit_T2_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Shock_T2.ArmorMod_Armor_Shock_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Shock_T2_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_NRay_T2.ArmorMod_Armor_NRay_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_NRay_T2_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Energy_T2.ArmorMod_Armor_Energy_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Energy_T2_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Corrosion_T2.ArmorMod_Armor_Corrosion_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Corrosion_T2_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_AutoATPInjector.XFH_Spell_ModEffect_AutoATPInjector_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UXFH_Spell_ModEffect_AutoATPInjector_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_ElectroFlashLens.XFH_Spell_ModEffect_ElectroFlashLens_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UXFH_Spell_ModEffect_ElectroFlashLens_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_KineticPulse.XFH_Spell_ModEffect_KineticPulse_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UXFH_Spell_ModEffect_KineticPulse_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_ReflexPhobiaAmp.XFH_Spell_ModEffect_ReflexPhobiaAmp_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class UXFH_Spell_ModEffect_ReflexPhobiaAmp_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/ConcentratedFire/CE_ConcentratedFire.CE_ConcentratedFire_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_ConcentratedFire_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire_FakeBuff.Spell_PerkEffect_ConcentratedFire_FakeBuff_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_ConcentratedFire_FakeBuff_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire_ClearBonus.Spell_PerkEffect_ConcentratedFire_ClearBonus_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_ConcentratedFire_ClearBonus_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire_BonusDmgOnTarget.Spell_PerkEffect_ConcentratedFire_BonusDmgOnTarget_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_ConcentratedFire_BonusDmgOnTarget_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/HerniatedDisk/CE_HerniatedDisk.CE_HerniatedDisk_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_HerniatedDisk_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Herniated_Disk_P.Spell_Flaw_Herniated_Disk_P_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Herniated_Disk_P_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_ThugKit_T2.ArmorMod_Skill_ThugKit_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_ThugKit_T2_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_TechKit_T2.ArmorMod_Skill_TechKit_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_TechKit_T2_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_SilverTongue_T2.ArmorMod_Skill_SilverTongue_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_SilverTongue_T2_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_HunterKit_T2.ArmorMod_Skill_HunterKit_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Skill_HunterKit_T2_C : public UArmorModDampening
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Physical_T2.ArmorMod_Armor_Physical_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Armor_Physical_T2_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Paranoid/CE_Paranoid.CE_Paranoid_C
/// Size: 0x0240 (576 bytes) (0x000240 - 0x000240) align 8 MaxSize: 0x0240
class UCE_Paranoid_C : public UStatModifierStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Paranoid_RestrictedArea.Spell_Flaw_Paranoid_RestrictedArea_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Paranoid_RestrictedArea_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Paranoid_Crouch.Spell_Flaw_Paranoid_Crouch_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Paranoid_Crouch_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Drink/Spell_Consumable_Alcohol_Hangover.Spell_Consumable_Alcohol_Hangover_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Consumable_Alcohol_Hangover_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Alcohol/CE_Hangover.CE_Hangover_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Hangover_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_FieldAggregator.Spell_ModEffect_FieldAggregator_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_ModEffect_FieldAggregator_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_ElectroSurface.Spell_ModEffect_ElectroSurface_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_ModEffect_ElectroSurface_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_ShieldProjector.Spell_ModEffect_ShieldProjector_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_ModEffect_ShieldProjector_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_AdrenoStimulator.Spell_ModEffect_AdrenoStimulator_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_ModEffect_AdrenoStimulator_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Farsighted.Spell_Flaw_Farsighted_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Farsighted_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Nearsighted.Spell_Flaw_Nearsighted_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Nearsighted_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Paranoid.Spell_Flaw_Paranoid_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Paranoid_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C
/// Size: 0x0790 (1936 bytes) (0x000208 - 0x000790) align 16 MaxSize: 0x0790
class UCE_Blinding_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	float                                              Ratio;                                                      // 0x0210   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0214   (0x000C)  MISSED
	FPostProcessSettings                               Player_Default_PP_Settings;                                 // 0x0220   (0x0570)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C.ExecuteUbergraph_CE_Blinding_PostProcess
	// void ExecuteUbergraph_CE_Blinding_PostProcess(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermBlind.Spell_Flaw_PermBlind_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PermBlind_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C
/// Size: 0x01D0 (464 bytes) (0x0001B8 - 0x0001D0) align 8 MaxSize: 0x01D0
class UCE_Blinding_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01C0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C.ExecuteUbergraph_CE_Blinding
	// void ExecuteUbergraph_CE_Blinding(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C
/// Size: 0x0790 (1936 bytes) (0x000208 - 0x000790) align 16 MaxSize: 0x0790
class UCE_Concuss_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	float                                              Ratio;                                                      // 0x0210   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0214   (0x000C)  MISSED
	FPostProcessSettings                               Player_Default_PP_Settings;                                 // 0x0220   (0x0570)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C.ExecuteUbergraph_CE_Concuss_PostProcess
	// void ExecuteUbergraph_CE_Concuss_PostProcess(int32_t EntryPoint);                                                        // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermConcuss.Spell_Flaw_PermConcuss_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PermConcuss_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C
/// Size: 0x01D0 (464 bytes) (0x0001B8 - 0x0001D0) align 8 MaxSize: 0x01D0
class UCE_Concuss_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01C0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C.ExecuteUbergraph_CE_Concuss
	// void ExecuteUbergraph_CE_Concuss(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_Supernova.CE_Concuss_Supernova_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UCE_Concuss_Supernova_C : public UCE_Concuss_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_NoStats.CE_Concuss_NoStats_C
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UCE_Concuss_NoStats_C : public UCE_Concuss_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_GorillianLegCripple.CE_GorillianLegCripple_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_GorillianLegCripple_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermLegCripple.Spell_Flaw_PermLegCripple_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PermLegCripple_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C
/// Size: 0x01E0 (480 bytes) (0x0001B8 - 0x0001E0) align 8 MaxSize: 0x01E0
class UCE_Canid_LegCripple_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01C0   (0x0010)  
	TArray<FName>                                      Sockets;                                                    // 0x01D0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C.ExecuteUbergraph_CE_Canid_LegCripple
	// void ExecuteUbergraph_CE_Canid_LegCripple(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Maim/CE_Maim_Post_Process.CE_Maim_Post_Process_C
/// Size: 0x0208 (520 bytes) (0x000208 - 0x000208) align 8 MaxSize: 0x0208
class UCE_Maim_Post_Process_C : public UPostProcessStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermMaim.Spell_Flaw_PermMaim_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PermMaim_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Maim/CE_Maim_Supernova.CE_Maim_Supernova_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Maim_Supernova_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C
/// Size: 0x01E0 (480 bytes) (0x0001B8 - 0x0001E0) align 8 MaxSize: 0x01E0
class UCE_Maim_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<FName>                                      Sockets;                                                    // 0x01C0   (0x0010)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01D0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C.ExecuteUbergraph_CE_Maim
	// void ExecuteUbergraph_CE_Maim(int32_t EntryPoint);                                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaCanid.Spell_Flaw_PhobiaCanid_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PhobiaCanid_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaGorillian.Spell_Flaw_PhobiaGorillian_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PhobiaGorillian_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaHeights.Spell_Flaw_PhobiaHeights_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PhobiaHeights_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaInsect.Spell_Flaw_PhobiaInsect_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PhobiaInsect_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaManti.Spell_Flaw_PhobiaManti_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PhobiaManti_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaRaptidon.Spell_Flaw_PhobiaRaptidon_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PhobiaRaptidon_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaRobot.Spell_Flaw_PhobiaRobot_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_PhobiaRobot_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToCorrosion.Spell_Flaw_WeakToCorrosion_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_WeakToCorrosion_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToNRay.Spell_Flaw_WeakToNRay_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_WeakToNRay_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToPhysical.Spell_Flaw_WeakToPhysical_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_WeakToPhysical_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToShock.Spell_Flaw_WeakToShock_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_WeakToShock_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToThermal.Spell_Flaw_WeakToThermal_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_WeakToThermal_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Alcohol/CE_Hangover_Wait.CE_Hangover_Wait_C
/// Size: 0x0198 (408 bytes) (0x000198 - 0x000198) align 8 MaxSize: 0x0198
class UCE_Hangover_Wait_C : public UCastSpellStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Food/Spell_Consumable_AlcoholBuff.Spell_Consumable_AlcoholBuff_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Consumable_AlcoholBuff_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Chrono_Lethargy.Spell_Flaw_Chrono_Lethargy_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Chrono_Lethargy_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Chronophobia.Spell_Flaw_Chronophobia_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Chronophobia_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_CompulsiveSpender.Spell_Flaw_CompulsiveSpender_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_CompulsiveSpender_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Decidophobia.Spell_Flaw_Decidophobia_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Decidophobia_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Disposophobia.Spell_Flaw_Disposophobia_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Disposophobia_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_GuiltRidden.Spell_Flaw_GuiltRidden_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_GuiltRidden_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Herniated_Disk.Spell_Flaw_Herniated_Disk_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_Herniated_Disk_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToCold.Spell_Flaw_WeakToCold_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Flaw_WeakToCold_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Phobia/CE_Phobia.CE_Phobia_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Phobia_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Phobia/CE_Phobia_Disposophobia.CE_Phobia_Disposophobia_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Phobia_Disposophobia_C : public UCE_Phobia_C
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToThermal.Flaw_Sys_WeakToThermal_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_WeakToThermal_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToShock.Flaw_Sys_WeakToShock_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_WeakToShock_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToPhysical.Flaw_Sys_WeakToPhysical_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_WeakToPhysical_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToNRay.Flaw_Sys_WeakToNRay_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_WeakToNRay_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToCorrosion.Flaw_Sys_WeakToCorrosion_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_WeakToCorrosion_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToCold.Flaw_Sys_WeakToCold_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_WeakToCold_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaRobot.Flaw_Sys_PhobiaRobot_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PhobiaRobot_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaRaptidon.Flaw_Sys_PhobiaRaptidon_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PhobiaRaptidon_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaManti.Flaw_Sys_PhobiaManti_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PhobiaManti_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaInsect.Flaw_Sys_PhobiaInsect_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PhobiaInsect_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaHeights.Flaw_Sys_PhobiaHeights_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PhobiaHeights_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaGorillian.Flaw_Sys_PhobiaGorillian_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PhobiaGorillian_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaCanid.Flaw_Sys_PhobiaCanid_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PhobiaCanid_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermMaim.Flaw_Sys_PermMaim_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PermMaim_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermLegCripple.Flaw_Sys_PermLegCripple_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PermLegCripple_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermConcuss.Flaw_Sys_PermConcuss_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PermConcuss_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermBlind.Flaw_Sys_PermBlind_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Sys_PermBlind_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Paranoid.Flaw_Spec_Paranoid_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Paranoid_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Nearsighted.Flaw_Spec_Nearsighted_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Nearsighted_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Herniated_Disk.Flaw_Spec_Herniated_Disk_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Herniated_Disk_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_GuiltRidden.Flaw_Spec_GuiltRidden_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_GuiltRidden_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Farsighted.Flaw_Spec_Farsighted_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Farsighted_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Disposophobia.Flaw_Spec_Disposophobia_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Disposophobia_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Decidophobia.Flaw_Spec_Decidophobia_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Decidophobia_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_CompulsiveSpender.Flaw_Spec_CompulsiveSpender_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_CompulsiveSpender_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Chronophobia.Flaw_Spec_Chronophobia_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Chronophobia_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Chrono_Lethargy.Flaw_Spec_Chrono_Lethargy_C
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UFlaw_Spec_Chrono_Lethargy_C : public UFlaw
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_AppliedScience.Spell_PerkEffect_AppliedScience_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_AppliedScience_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_NietzschesReward.Spell_PerkEffect_NietzschesReward_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_NietzschesReward_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Assassin.Spell_PerkEffect_Assassin_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_Assassin_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_LoneMaster.Spell_PerkEffect_LoneMaster_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_LoneMaster_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire.Spell_PerkEffect_ConcentratedFire_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_ConcentratedFire_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ImprovisationWarrior.Spell_PerkEffect_ImprovisationWarrior_1_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_PerkEffect_ImprovisationWarrior_1_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_WalkSpeed.XFH_ArmorMod_Utility_WalkSpeed_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Utility_WalkSpeed_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_SprintSpeed.XFH_ArmorMod_Utility_SprintSpeed_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Utility_SprintSpeed_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_ArmorDegradation.XFH_ArmorMod_Utility_ArmorDegradation_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Utility_ArmorDegradation_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Armor_All.XFH_ArmorMod_Armor_All_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Armor_All_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_CompanionCooldown.XFH_ArmorMod_Utility_CompanionCooldown_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Utility_CompanionCooldown_C : public UArmorModUtility
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_ReflexPhobiaAmp.XFH_ArmorMod_Gadget_ReflexPhobiaAmp_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Gadget_ReflexPhobiaAmp_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_KineticPulse.XFH_ArmorMod_Gadget_KineticPulse_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Gadget_KineticPulse_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_ElectroFlashLens.XFH_ArmorMod_Gadget_ElectroFlashLens_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Gadget_ElectroFlashLens_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_AutoATPInjector.XFH_ArmorMod_Gadget_AutoATPInjector_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Gadget_AutoATPInjector_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Armor_All_T2.XFH_ArmorMod_Armor_All_T2_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UXFH_ArmorMod_Armor_All_T2_C : public UArmorModArmoring
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_SkelAdrenoStim.ArmorMod_Gadget_SkelAdrenoStim_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Gadget_SkelAdrenoStim_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_ReactShield.ArmorMod_Gadget_ReactShield_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Gadget_ReactShield_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_ElectroCharge.ArmorMod_Gadget_ElectroCharge_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Gadget_ElectroCharge_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_ChronoField.ArmorMod_Gadget_ChronoField_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UArmorMod_Gadget_ChronoField_C : public UArmorModResistance
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ImprovisationWarrior.Perk_T3_ImprovisationWarrior_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_ImprovisationWarrior_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ConcentratedFire.Perk_T3_ConcentratedFire_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T3_ConcentratedFire_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_LoneMaster.Perk_T2_LoneMaster_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_LoneMaster_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Assassin.Perk_T2_Assassin_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T2_Assassin_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_NietzschesReward.Perk_T1_NietzschesReward_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_NietzschesReward_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_AppliedScience.Perk_T1_AppliedScience_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UPerk_T1_AppliedScience_C : public UPerk
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Drink/Drink_Rizzo_SpectrumVodka.Drink_Rizzo_SpectrumVodka_C
/// Size: 0x0230 (560 bytes) (0x000230 - 0x000230) align 8 MaxSize: 0x0230
class UDrink_Rizzo_SpectrumVodka_C : public UConsumableItem
{ 
public:
};

/// Class /Game/Blueprints/Player/IndianaPlayerController_BP.IndianaPlayerController_BP_C
/// Size: 0x0680 (1664 bytes) (0x000680 - 0x000680) align 8 MaxSize: 0x0680
class AIndianaPlayerController_BP_C : public AIndianaPlayerController
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Bleed.Spell_WeaponCrit_Bleed_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Bleed_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/WEAP/MeleeHvy/AB_InfernoScythe/AB_InfernoScythe_Weapon_Base.AB_InfernoScythe_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UAB_InfernoScythe_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C
/// Size: 0x05D8 (1496 bytes) (0x0005D0 - 0x0005D8) align 8 MaxSize: 0x05D8
class USC_LightPistol_Weapon_Base_C : public UWeapon
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05D0   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ExecuteUbergraph_SC_LightPistol_Weapon_Base
	// void ExecuteUbergraph_SC_LightPistol_Weapon_Base(int32_t EntryPoint);                                                    // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Burn/CE_Burn_PostProcess.CE_Burn_PostProcess_C
/// Size: 0x0240 (576 bytes) (0x000208 - 0x000240) align 8 MaxSize: 0x0240
class UCE_Burn_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	bool                                               EventDone;                                                  // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0211   (0x0007)  MISSED
	class UParticleSystem*                             CascadeTemplate;                                            // 0x0218   (0x0008)  
	bool                                               UseNiagara;                                                 // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	class UNiagaraSystem*                              NiagaraTemplate;                                            // 0x0228   (0x0008)  
	class UNiagaraComponent*                           NiagaraFX;                                                  // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    CascadeFX;                                                  // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn_PostProcess.CE_Burn_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn_PostProcess.CE_Burn_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn_PostProcess.CE_Burn_PostProcess_C.ExecuteUbergraph_CE_Burn_PostProcess
	// void ExecuteUbergraph_CE_Burn_PostProcess(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C
/// Size: 0x01C0 (448 bytes) (0x0001B8 - 0x0001C0) align 8 MaxSize: 0x01C0
class UCE_Burn_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C.ExecuteUbergraph_CE_Burn
	// void ExecuteUbergraph_CE_Burn(int32_t EntryPoint);                                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Burn.Spell_WeaponCrit_Burn_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Burn_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Knockout.Spell_WeaponCrit_Knockout_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Knockout_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Revolver/Ham_TheVermin/Ham_TheVermin_Weapon_Base.Ham_TheVermin_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UHam_TheVermin_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C
/// Size: 0x05D8 (1496 bytes) (0x0005D0 - 0x0005D8) align 8 MaxSize: 0x05D8
class UJoch_Flamethrower_Weapon_Base_C : public UWeapon
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05D0   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ExecuteUbergraph_Joch_Flamethrower_Weapon_Base
	// void ExecuteUbergraph_Joch_Flamethrower_Weapon_Base(int32_t EntryPoint);                                                 // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Execute/CE_Execute_PostProcess.CE_Execute_PostProcess_C
/// Size: 0x0208 (520 bytes) (0x000208 - 0x000208) align 8 MaxSize: 0x0208
class UCE_Execute_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Execute/CE_Execute.CE_Execute_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Execute_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Execute.Spell_WeaponCrit_Execute_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Execute_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/MachineGun/Ham_HMG/Ham_HMG_Weapon_Base.Ham_HMG_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UHam_HMG_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/Ham_DeadEyeAR/Ham_DeadEyeAR_Weapon_Base.Ham_DeadEyeAR_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UHam_DeadEyeAR_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/SC_LightAssaultRifle/SC_LightAssaultRifle_Weapon_Base.SC_LightAssaultRifle_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class USC_LightAssaultRifle_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Stagger.Spell_WeaponCrit_Stagger_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Stagger_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_AssaultRifle/TL_AssaultRifle_Weapon_Base.TL_AssaultRifle_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UTL_AssaultRifle_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_HuntingRifle/TL_HuntingRifle_Weapon_Base.TL_HuntingRifle_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UTL_HuntingRifle_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Knockdown.Spell_WeaponCrit_Knockdown_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Knockdown_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/HitReact/CE_HeavyHitReactUseTimer.CE_HeavyHitReactUseTimer_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 8 MaxSize: 0x0190
class UCE_HeavyHitReactUseTimer_C : public UHitReactionStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Knockout/CE_Knockout.CE_Knockout_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Knockout_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Knockback/CE_Knockback.CE_Knockback_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Knockback_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Knockback.Spell_WeaponCrit_Knockback_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Knockback_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/FlechetteGun/SC_SawedOffFlechette/SC_SawedOffFlechette_Weapon_Base.SC_SawedOffFlechette_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class USC_SawedOffFlechette_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/SC_ImpactHammer/SC_ImpactHammer_Weapon_Base.SC_ImpactHammer_Weapon_Base_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class USC_ImpactHammer_Weapon_Base_C : public UWeapon
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C
/// Size: 0x0790 (1936 bytes) (0x000208 - 0x000790) align 16 MaxSize: 0x0790
class UCE_Weaken_PostProcess_C : public UPostProcessStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	float                                              Ratio;                                                      // 0x0210   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0214   (0x000C)  MISSED
	FPostProcessSettings                               Player_Default_PP_Settings;                                 // 0x0220   (0x0570)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ExecuteUbergraph_CE_Weaken_PostProcess
	// void ExecuteUbergraph_CE_Weaken_PostProcess(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C
/// Size: 0x01E0 (480 bytes) (0x0001B8 - 0x0001E0) align 8 MaxSize: 0x01E0
class UCE_Weaken_C : public UMultiStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01B8   (0x0008)  
	TArray<FName>                                      Sockets;                                                    // 0x01C0   (0x0010)  
	TArray<class UParticleSystemComponent*>            PSs;                                                        // 0x01D0   (0x0010)  


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C.ExecuteUbergraph_CE_Weaken
	// void ExecuteUbergraph_CE_Weaken(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Stagger.Spell_WeaponLoc_Stagger_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponLoc_Stagger_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Groin.Spell_WeaponLoc_Groin_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponLoc_Groin_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Maim.Spell_WeaponLoc_Maim_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponLoc_Maim_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_LegCripple.Spell_WeaponLoc_LegCripple_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponLoc_LegCripple_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Blind.Spell_WeaponLoc_Blind_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponLoc_Blind_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Item/MicroMods/Weapon/Ranged/Rang_MMod_None.Rang_MMod_None_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class URang_MMod_None_C : public UMicroMod
{ 
public:
};

/// Class /Game/Blueprints/Item/MicroMods/Weapon/Melee/Melee_MMod_None.Melee_MMod_None_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMelee_MMod_None_C : public UMicroMod
{ 
public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Stun.Spell_WeaponCrit_Stun_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_WeaponCrit_Stun_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C
/// Size: 0x05D8 (1496 bytes) (0x0005D0 - 0x0005D8) align 8 MaxSize: 0x05D8
class UTL_StunBaton_Weapon_Base_C : public UWeapon
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05D0   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ExecuteUbergraph_TL_StunBaton_Weapon_Base
	// void ExecuteUbergraph_TL_StunBaton_Weapon_Base(int32_t EntryPoint);                                                      // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Helmet_CorpUnitCommander_Cleo_T1.Helmet_CorpUnitCommander_Cleo_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpUnitCommander_Cleo_T1_C : public UHelmet_CorpUnitCommander_T1_C
{ 
public:
};

/// Class /Game/Blueprints/StatusEffects/Speedy/CE_Speedy.CE_Speedy_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UCE_Speedy_C : public UMultiStatusEffect
{ 
public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Drug/Spell_Consumable_Speedy.Spell_Consumable_Speedy_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class USpell_Consumable_Speedy_C : public USpell
{ 
public:
};

/// Class /Game/Blueprints/Item/Resources/Bypass_Kit.Bypass_Kit_C
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000140) align 8 MaxSize: 0x0140
class UBypass_Kit_C : public UResourceItem
{ 
public:
};

/// Class /Game/Blueprints/Item/Consumable/Drug/Drug_SC_DervishMist.Drug_SC_DervishMist_C
/// Size: 0x0230 (560 bytes) (0x000230 - 0x000230) align 8 MaxSize: 0x0230
class UDrug_SC_DervishMist_C : public UConsumableItem
{ 
public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Variants/Helmet_CorpUnitCommander_Cleo_Phy_T1.Helmet_CorpUnitCommander_Cleo_Phy_T1_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UHelmet_CorpUnitCommander_Cleo_Phy_T1_C : public UHelmet_CorpUnitCommander_Cleo_T1_C
{ 
public:
};

/// Class /Game/Blueprints/Armor/Colonist/Smuggler/SmugglerOutfit.SmugglerOutfit_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class USmugglerOutfit_C : public USpacer_Armor_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/Variants/TL_StunBaton_Weapon_T1.TL_StunBaton_Weapon_T1_C
/// Size: 0x05D8 (1496 bytes) (0x0005D8 - 0x0005D8) align 8 MaxSize: 0x05D8
class UTL_StunBaton_Weapon_T1_C : public UTL_StunBaton_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/SC_ImpactHammer/Variants/SC_ImpactHammer_Weapon_T1.SC_ImpactHammer_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class USC_ImpactHammer_Weapon_T1_C : public USC_ImpactHammer_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/FlechetteGun/SC_SawedOffFlechette/Variants/SC_SawedOffFlechette_Weapon_T1.SC_SawedOffFlechette_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class USC_SawedOffFlechette_Weapon_T1_C : public USC_SawedOffFlechette_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_HuntingRifle/Variants/TL_Weapon_HuntingRifle_T1.TL_Weapon_HuntingRifle_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UTL_Weapon_HuntingRifle_T1_C : public UTL_HuntingRifle_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_AssaultRifle/Variants/TL_AssaultRifle_Weapon_T1.TL_AssaultRifle_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UTL_AssaultRifle_Weapon_T1_C : public UTL_AssaultRifle_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/SC_LightAssaultRifle/Variants/SC_LightAssaultRifle_Weapon_T1.SC_LightAssaultRifle_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class USC_LightAssaultRifle_Weapon_T1_C : public USC_LightAssaultRifle_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/SC_LightAssaultRifle/Variants/SC_LightAssaultRifle_Uni_EV1_Bursty.SC_LightAssaultRifle_Uni_EV1_Bursty_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class USC_LightAssaultRifle_Uni_EV1_Bursty_C : public USC_LightAssaultRifle_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/Ham_DeadEyeAR/Variants/Ham_DeadEyeAR_Weapon_T1.Ham_DeadEyeAR_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UHam_DeadEyeAR_Weapon_T1_C : public UHam_DeadEyeAR_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/MachineGun/Ham_HMG/Variants/Ham_HMG_Weapon_T1.Ham_HMG_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UHam_HMG_Weapon_T1_C : public UHam_HMG_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Variants/Joch_Flamethrower_Weapon_T1.Joch_Flamethrower_Weapon_T1_C
/// Size: 0x05D8 (1496 bytes) (0x0005D8 - 0x0005D8) align 8 MaxSize: 0x05D8
class UJoch_Flamethrower_Weapon_T1_C : public UJoch_Flamethrower_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Revolver/Ham_TheVermin/Variants/Ham_TheVermin_Weapon_T1.Ham_TheVermin_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UHam_TheVermin_Weapon_T1_C : public UHam_TheVermin_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/Pistol_Variants/SC_LightPistol_Weapon_T1.SC_LightPistol_Weapon_T1_C
/// Size: 0x05D8 (1496 bytes) (0x0005D8 - 0x0005D8) align 8 MaxSize: 0x05D8
class USC_LightPistol_Weapon_T1_C : public USC_LightPistol_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/WEAP/MeleeHvy/AB_InfernoScythe/Variants/AB_InfernoScythe_Weapon_T1.AB_InfernoScythe_Weapon_T1_C
/// Size: 0x05D0 (1488 bytes) (0x0005D0 - 0x0005D0) align 8 MaxSize: 0x05D0
class UAB_InfernoScythe_Weapon_T1_C : public UAB_InfernoScythe_Weapon_Base_C
{ 
public:
};

/// Class /Game/Blueprints/Player/IndianaPlayerCharacter_BP_TestCharacter.IndianaPlayerCharacter_BP_TestCharacter_C
/// Size: 0x1E10 (7696 bytes) (0x001898 - 0x001E10) align 16 MaxSize: 0x1E10
class AIndianaPlayerCharacter_BP_TestCharacter_C : public AIndianaPlayerCharacter_BP_C
{ 
public:
	class UPostProcessComponent*                       PostProcessConversation;                                    // 0x1898   (0x0008)  
	FPostProcessSettings                               Default_PP_Settings;                                        // 0x18A0   (0x0570)  
};

/// Class /Game/Blueprints/Game/IndianaGameModeStandard.IndianaGameModeStandard_C
/// Size: 0x03E0 (992 bytes) (0x0003D8 - 0x0003E0) align 8 MaxSize: 0x03E0
class AIndianaGameModeStandard_C : public AIndianaGameMode
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x03D8   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UIndianaAvoidanceManager_BP_C) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(USpell_SkillUnlock_Persuade_PlayerArmor_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_MedicalForce_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_BonusDamageOnConsume4_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_BonusDamageOnConsume3_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_BonusDamageOnConsume2_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_BonusDamageOnConsume1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Lie_PlayerWeakSpot_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Inspiration40_Armor_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_SkillUnlock_Inspiration40_Companion_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Determination100_Companion_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Stagger_C) == 0x0200); // 512 bytes (0x0001B8 - 0x000200)
static_assert(sizeof(UNavFilter_Pathing_Behavior_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UNavFilter_Pathing_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UNavFilter_EQS_C) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UCE_LightHitReact_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(UCE_HeavyHitReact_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(AIndianaAiController_BP_C) == 0x04A8); // 1192 bytes (0x0004A8 - 0x0004A8)
static_assert(sizeof(ABase_Ai_Character_C) == 0x0EB0); // 3760 bytes (0x000E60 - 0x000EB0)
static_assert(sizeof(UBaseCharacterDeath_C) == 0x0151); // 337 bytes (0x000120 - 0x000151)
static_assert(sizeof(USpell_AptitudeEffect_BeverageTech_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Bureaucrat_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Cashier_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Chef_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Construction_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Elevator_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Factory_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Farmer_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_FoodTester_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Janitor_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Mascot_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_MedicalTech_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_NoAptitude_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_SafetyInspector_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AptitudeEffect_Scientist_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Stagger_PerfectBlock_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(USpell_SkillUnlock_Block80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Block60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Block40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Block20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Block150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Block100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Player_PassiveDTFromBlock_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Determination40_CritDmg_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_SkillUnlock_Determination60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Determination40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Determination20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Determination150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Determination100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Determination80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_DodgeProtection_C) == 0x01A8); // 424 bytes (0x0001A8 - 0x0001A8)
static_assert(sizeof(USpell_SkillUnlock_Dodge80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Dodge60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Dodge40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Dodge20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Dodge100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Dodge150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Engineering80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Engineering60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Engineering40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Engineering20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Engineering150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Engineering100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Hack80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Hack60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Hack40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Hack20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Hack150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Hack100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Handguns80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Handguns60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Handguns40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Handguns20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Handguns150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Handguns100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Knockdown_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_SkillUnlock_HvyMelee80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyMelee60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyMelee40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyMelee20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyMelee100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyMelee150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyWeapons80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyWeapons60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyWeapons40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyWeapons20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyWeapons150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_HvyWeapons100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Inspiration80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Inspiration60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Inspiration40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Inspiration20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Inspiration150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Inspiration100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Intimidate_PlayerCrit_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Terrify_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_SkillUnlock_Intimidate80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Intimidate60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Intimidate40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Intimidate100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Intimidate20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Intimidate150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Scramble_ReapplyCD_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(UCE_Scramble_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_SkillUnlock_Lie80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Lie60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Lie40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Lie20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Lie150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Lie100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Stun_C) == 0x01E0); // 480 bytes (0x0001B8 - 0x0001E0)
static_assert(sizeof(USpell_SkillUnlock_LtMelee80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LtMelee60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LtMelee40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LtMelee20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LtMelee150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LtMelee100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LockPick80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LockPick60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LockPick40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LockPick20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Lockpick150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LockPick100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LongGuns80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LongGuns60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LongGuns40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LongGuns20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LongGuns150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_LongGuns100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Medical80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Medical60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Medical40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Medical20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Medical150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Medical100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Cower_ReapplyCD_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(UCE_Cower_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_SkillUnlock_Persuade80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Persuade60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Persuade40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Persuade100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Persuade20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Persuade150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Science80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Science60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Science40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Science20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Science150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Science100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Sneak80_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Sneak60_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Sneak40_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Sneak20_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Sneak150_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_SkillUnlock_Sneak100_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(U0701_CryoKey_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(U0701_ChairmanKey_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UWits_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UWillpower_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UTemperament_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UStrength_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UPerception_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UIntelligence_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UEndurance_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UDexterity_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UCharm_Attribute_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(USneak_Skill_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UScience_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UPersuade_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMedical_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(ULongGuns_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(ULockpick_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(ULightMelee_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(ULie_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UIntimidate_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UInspiration_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UHeavyWeapons_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UHeavyMelee_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UHandGuns_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UHack_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UEngineering_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UDodge_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UDetermination_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UBlock_Skill_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAptitude_Scientist_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_SafetyInspector_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_NoAptitude_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_MedicalTech_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Mascot_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Janitor_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_FoodTester_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Farmer_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Factory_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Elevator_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Construction_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Chef_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Cashier_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_Bureaucrat_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UAptitude_BeverageTech_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UShockCharacterDeath_C) == 0x0161); // 353 bytes (0x000151 - 0x000161)
static_assert(sizeof(URagdollCharacterDeath_C) == 0x0170); // 368 bytes (0x000151 - 0x000170)
static_assert(sizeof(UNRayCharacterDeath_C) == 0x0192); // 402 bytes (0x000151 - 0x000192)
static_assert(sizeof(UGibCharacterDeath_C) == 0x0161); // 353 bytes (0x000151 - 0x000161)
static_assert(sizeof(UEnergyCharacterDeath_C) == 0x0191); // 401 bytes (0x000151 - 0x000191)
static_assert(sizeof(UDismemberCharacterDeath_C) == 0x0160); // 352 bytes (0x000151 - 0x000160)
static_assert(sizeof(UCorrosiveCharacterDeath_C) == 0x0161); // 353 bytes (0x000151 - 0x000161)
static_assert(sizeof(USpell_Ammo_Ionized_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Ammo_Volatile_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Bleed_PostProcess_C) == 0x0208); // 520 bytes (0x000208 - 0x000208)
static_assert(sizeof(UCE_Bleed_C) == 0x01C0); // 448 bytes (0x0001B8 - 0x0001C0)
static_assert(sizeof(USpell_Ammo_Shredder_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Ammo_Heartseeker_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UMatherFamily_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(USpell_NRay_DeathAoE_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UBase_DamageType_C) == 0x01B8); // 440 bytes (0x0000B0 - 0x0001B8)
static_assert(sizeof(UMETA_SmartDodge_NoCooldown_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMETA_PreEmptiveMeleeAction_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMETA_DefaultRangeAttack_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UMETA_GainedAwareness_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMETA_DefaultRangeAttackNewCover_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UMETA_DefaultMeleeAttack_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UMETA_DefaultAttackNewCover_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMETA_SmartDodge_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMETA_MeleeUnreachable_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMETA_AvoidMeleeAttack_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMETA_DodgeRange_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMETA_Block_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMETA_ReactiveRangeAction_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UOnReactiveRangeAction_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UOnNearbyMeleeAttack_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UOnMeleeUnreachable_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNewCover_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USearchComplete_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMETA_WeaponPreference_IgnoreCooldown_C) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMETA_WeaponPreference_C) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMETA_DefaultAttack_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMeleeAttackComplete_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(ULineOfFireBlocked_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(ULostTarget_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(USwitchToRangedWeaponPreferUnlimitedRange_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USwitchTarget_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URepositionComplete_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UTetherCancel_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UQueueBehavior_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UOnCombatStateChange_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCompanionCommandSuppress_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCompanionCommandReturn_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCompanionCommandMoveTo_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCompanionCommandHunkerDown_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCompanionCommandFlank_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCompanionCommandCalledShot_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UCompanionCommandAttack_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UIdle_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UForceCompanionFollo_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UDeath_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UConversation_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBase_OnStatusEffectApplied_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UUnaware_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UTether_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMETA_DefaultPacifist_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMETA_DefaultOutOfCombat_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UDefault_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDIS_Board_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UDIS_Cleo_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UDIS_CnPFactory_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UDIS_Fairfield_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UDIS_Hope_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UArmor_CorpUnitCommander_Base_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UHelmet_CorpUnitCommander_Base_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpUnitCommander_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UArmor_CorpUnitCommander_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpUnitCommander_UDL_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UHelmet_CorpUnitCommander_UDL_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UDIS_LabyrinthStationWorker_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UHelmet_CorpUnitCommander_UDL_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UArmor_CorpUnitCommander_UDL_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_Colonist_Base_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(USpacer_Armor_Base_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(USpacer_Helmet_Base_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UDIS_Mardet_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(USpacer_Mardet_Helmet_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(USpacer_Mardet_Armor_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_Base_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UHelmet_CorpRecruit_Base_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UArmor_SublightSmuggler_Base_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UHelmet_CorpRecruit_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpRecruit_Cleo_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpRecruit_Cleo_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpRecruit_CP_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpRecruit_CP_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpRecruit_TL_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpRecruit_TL_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UArmor_CorpRecruit_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_Cleo_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_Cleo_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_CP_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_CP_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_TL_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_TL_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpRecruit_UDL_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UHelmet_CorpRecruit_UDL_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UDIS_MSec_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UHelmet_CorpRecruit_UDL_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UArmor_CorpRecruit_UDL_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_SublightSmuggler_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UDIS_SubLight_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UDIS_SyndicateBountyHunter_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UArmor_SublightSmuggler_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArm_MMod_None_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UArmorMod_Armor_VisualNoStat_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UHelmet_CorpTrooper_Base_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UDIS_TartarusGuard_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UDIS_TartarusPrisoner_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UPrison_01_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UHelmet_CorpTrooper_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpTrooper_UDL_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UHelmet_CorpTrooper_UDL_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UArmor_CorpTrooper_Base_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpTrooper_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpTrooper_UDL_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpTrooper_UDL_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UArmor_CorpTrooper_TL_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UHelmet_CorpTrooper_TL_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UDIS_TnLDefenseContractor_T1_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UHelmet_CorpTrooper_TL_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UArmor_CorpTrooper_TL_Phy_T1_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UNavFilter_NPC_Pathing_C) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UCE_Meat_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(UCE_Carbs_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(UCE_SugarDrink_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(UCE_CaffeineDrink_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(UCE_AlcoholBuff_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_NRay_Pulse_C) == 0x0219); // 537 bytes (0x000210 - 0x000219)
static_assert(sizeof(UHeadGear_TopHat_Var01_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UEmptyStatusEffect_C) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(UCE_UglyStick_GhostDebuff_C) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(USE_GloopGunEffect_C) == 0x01C0); // 448 bytes (0x0001B8 - 0x0001C0)
static_assert(sizeof(UCE_Shrink_GhostDebuff_C) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(UCE_PrismaticHammer_GhostDebuff_C) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(UCE_NRay_Pulse_Visual_C) == 0x0191); // 401 bytes (0x000188 - 0x000191)
static_assert(sizeof(UCE_NRay_PostProcess_C) == 0x0240); // 576 bytes (0x000208 - 0x000240)
static_assert(sizeof(UCE_MindControl_GhostDebuff_C) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(UCE_Electric_Hazard_PP_C) == 0x0240); // 576 bytes (0x000208 - 0x000240)
static_assert(sizeof(UHeadGear_TopHat_Var01_Uni_Mon1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UTA_0202_Uni_CelesteSuit_Chimaera_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UCE_NRay_AoE_C) == 0x01C1); // 449 bytes (0x0001B8 - 0x0001C1)
static_assert(sizeof(UCE_Tether_C) == 0x01B0); // 432 bytes (0x0001B0 - 0x0001B0)
static_assert(sizeof(UCE_Invulnerable_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_IdleDisable_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(USpell_Companion_PassiveReceivedHostileEffectDuration_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_Tether_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_Teleport_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_Resurrect_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_PostCombatReload_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_Jump_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_GetUp_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_ElevatorMove_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_ConversationInvulnerability_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_CalledShot_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UNavFilter_Hearing_C) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavFilter_Companion_Pathing_C) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavFilter_Companion_EQS_C) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(USpell_Calledshot_ShockTarget_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Calledshot_ShockAOE_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UThermal_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USwarm_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UShock_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPhysical_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UNRay_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UEnergy_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCorrosion_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UTheHope_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UTheBoard_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UTartarus_Workers_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UTartarus_Prisoners_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UTartarus_Military_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(USyndicate_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UStellarBayResidents_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(USpacers_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(USLUG_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(URoseway_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UMSI_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UMarauders_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UKeystone_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UInformationBroker_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UGroundbreaker_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UFairfield_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UEmeraldVale_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UDeserters_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UCnPFactory_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UByzantiumResidents_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UAnarchists_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(U0206_Midway_C) == 0x0200); // 512 bytes (0x000200 - 0x000200)
static_assert(sizeof(UWeaponPart_C) == 0x0140); // 320 bytes (0x000140 - 0x000140)
static_assert(sizeof(UArmorPart_C) == 0x0140); // 320 bytes (0x000140 - 0x000140)
static_assert(sizeof(U0301_HolographicShroud_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UT_Generic_NeutralToAll_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Generic_Neutral_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Generic_Hostile_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Generic_Friendly_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Player_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Marauders_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Sprat_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Meta_Critters_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UT_Mealgrub_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_LeatherBoa_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_CystyPig_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Cow_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Chicken_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_BredWorm_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Tangler_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Sprat_Rabid_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Raptidon_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Puffball_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Pteroray_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Parasite_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Meta_Creatures_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UT_MantiFamily_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Gorillian_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Canid_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Sentry_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Renegade_Scylla_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1004_Relay_Frey_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1004_Relay_Frey_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1004_Relay_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1004_OrpheusSentries_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1004_OrpheusPeyton_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1004_OrpheusMarauders_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1003_VM_Vision_S_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1003_VM_Vision_M_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1003_VM_Vision_F_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1003_VM_Hermit_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1002_Board_Security_Troopers_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_1002_Board_Security_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0903_Bots_Hope_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0903_Bots_Board_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0903_Board_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Vaughn_Team_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Sentry_Bots_Porter_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Scientist_Town_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Renegade_Lillian_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Renegade_Covert_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Renegade_Cassandra_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Renegade_BackBays_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Porter_Team_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Orson_Team_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Cleo_Security_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Anton_Team_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Anarchists_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0803_Raptidons_TankRoom_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0802_Raptidon_Neutral_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0802_Berke_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0422_MSI_FactionBattle_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0422_Iconoclasts_FactionBattle_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0411_CnPFactory_SentryBots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0411_CnPFactory_Guards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0411_CnPFactory_Exterior_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0411_CnPFactory_Employees_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0411_CnPFactory_Clive_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0408_MantiQueen_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0407_Sublight_Fallbrook_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0407_Quinn_Fallbrook_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0407_CQ_VM_Convict_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0407_Catherine_Fallbrook_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0407_Bertrand_Sprats_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0407_Alice_Fallbrook_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0404_Robochild_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0404_Robochild_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0404_CascadiaLab_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0403_Zora_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0403_Graham_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0401_SyndicateThugs_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0209_Friends_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_TA_0206_OgdanCoe_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_TA_0206_Marauders_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_TA_0206_Kat_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Whimbrel_Crew_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Trask_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_SpacersChoice_Guards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Rosana_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Midway_Townies_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Midway_Security_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Midway_Security_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Insurance_Agency_Interior_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Harlow_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Hammer_Guards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Hammer_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Felix_Before_Party_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0206_Bounty_Hunters_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0205_TL_Underground_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0205_TL_Security_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0205_TL_Corporate_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0205_TL_Civilians_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0204_Keystone_Townie_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0204_Keystone_Security_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_TA0202_TailorShopGuards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_SQ0202_StashHouse_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_SQ0202_Alonzo_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_PQ0202Cartographer_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_PQ0202Assassin_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_MinisterGuards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_HHCRecords_Guards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_HHCRecords_Employees_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_FreightPortWorkers_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_FQ_0202_Chartrand_Guards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_FQ_0202_Chartrand_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_ExterminatorBots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_ByzWeaponShopOwner_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_ByzantiumGuards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_BureauOfficeWorkers_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0234_ER_KillBots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0234_ER_CleaningBots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0233_CameraBot_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0233_Actors_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0231_CryoCrazies_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0231_BureauScientists_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0230_ER_TunnelBots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0202_Ellies_Parents_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0202_ByzCivilians_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0202_ByzBots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0201_Tug_Captain_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0201_Damaged_MedBot_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0201_Damaged_DartBot_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0201_Damaged_AdBot_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0201_Coastal_Marauders_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0201_Assassins_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_0201_AssassinRunAway_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_TennysonLoyalists_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_SpacerPirates_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_MardetGuards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Sickbay_Guard_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_LucasLoyalists_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_JunleiLoyalists_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_GroundbreakerSyndicate_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Groundbreaker_SC_Vendor_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Groundbreaker_Civilians_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Groundbreaker_Board_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Ellie_OutofParty_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Sophia_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_RobotScout_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Lab_CleanupCrew_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Geothermal_Soldiers_Outside_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Geothermal_Soldiers_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Geothermal_Captain_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_Geothermal_Bots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_Zoe_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_TownResidents_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_ShipMarauders_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_ReedAndGuards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_Parvati_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_Max_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_LudwigInEdgewater_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_IntroGuards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_IntroErnest_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_GeneratorGuards_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_Deserters_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UT_EV_CaveGuard_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U09_SpacersChoice_StorageFacility_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Violette_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Unused_03_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Unused_02_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Unsued_05_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_TartarusCommOfficer_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Syndicate_Allies_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_SubLightReinforcements_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Ref_Solitary_Ally_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Ref_Prisoners_Hostile_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Ref_Prisoners_Allies_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Ref_Military_Neutral_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Ref_Military_Hostile_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Ref_Military_Allies_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Prisoners_Neutral_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Pit_Prisoners_Released_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Pit_Prisoners_Hostile_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Pit_Military_Released_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Pit_Military_Hostile_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Phineas_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_MSIReinforcements_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_MardetReinforcements_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Intake_Robots_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Intake_Military_Neutral_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Intake_Military_Hostile_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_IconoclastReinforcements_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Docks_Military_Neutral_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Docks_Military_Hostile_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Chairman_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0701_Adjutant_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_Sublight_Henchmen_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_StellarBay_Residents_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_Nyoka_BeforeJoining_Party_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_MSI_Default_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_Marauder_Default_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_IB_Compound_Sentries_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_Hiram_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_C3_Crew_Scouts_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_C3_Crew_Base_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_Berthold_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_Bennett_SB_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U04_Anarchists_Default_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0420_IconoclastScouts_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0410_Archive_Sentries_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0406_Marauders_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0406_Anarchists_Huxley_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0406_Anarchists_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0403_Tucker_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0403_Iconoclasts_PostMSIQuest_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0403_Anarchists_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0402_CannibalFamily_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0401_Merchant_SubLight_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0401_Merchant_MSI_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0401_Merchant_Iconoclast_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0401_Marauders_Merchant_MSI_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0401_DPStation_Marauders_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(U0401_Anarchists_Bridge_C) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(ULight_Standard_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(ULight_Hollowpoint_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(ULight_Heartseeker_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UHeavy_Standard_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UHeavy_Shredder_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UHeavy_ArmorPiercing_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UECell_Volatile_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UECell_Standard_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UECell_Ionized_Ammo_C) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UIndianaSkills_BP_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UIndianaAttributes_BP_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UPointOfNoReturnRollback_BP_C) == 0x0110); // 272 bytes (0x000110 - 0x000110)
static_assert(sizeof(UIndianaFormulas_BP_C) == 0x0158); // 344 bytes (0x000158 - 0x000158)
static_assert(sizeof(UBit_Cartridge_C) == 0x0140); // 320 bytes (0x000140 - 0x000140)
static_assert(sizeof(UIndianaGlobals_BP_C) == 0x0278); // 632 bytes (0x000278 - 0x000278)
static_assert(sizeof(UBP_TutorialManager_C) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(APickup_Basic_C) == 0x0630); // 1584 bytes (0x000630 - 0x000630)
static_assert(sizeof(UBP_AudioLogManager_C) == 0x0178); // 376 bytes (0x000178 - 0x000178)
static_assert(sizeof(UIndianaGameInstance_BP_C) == 0x0D70); // 3440 bytes (0x000D70 - 0x000D70)
static_assert(sizeof(USpell_PerkEffect_AFewBitsMore_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_TheNegotiator_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_SnakeOilSalesman_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UWeaponAnimationsFPV_BP_C) == 0x0460); // 1120 bytes (0x000460 - 0x000460)
static_assert(sizeof(USpell_Player_IgnoreMeleeDamageOnDodge_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Player_CinematicPartyInvulnerability_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_AI_CalledShotIssued_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UPlayerCompanionCommandComponent_C) == 0x03B8); // 952 bytes (0x0003B8 - 0x0003B8)
static_assert(sizeof(AConversationLighting_BP_C) == 0x0378); // 888 bytes (0x000360 - 0x000378)
static_assert(sizeof(AIndianaGameModeFrontEnd_C) == 0x03E0); // 992 bytes (0x0003D8 - 0x0003E0)
static_assert(sizeof(USpell_Flaw_AddictAlcohol_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UUnarmed_FPV_WeaponAnimations_C) == 0x0468); // 1128 bytes (0x000460 - 0x000468)
static_assert(sizeof(UHndgn_FPV_WeaponAnimations_C) == 0x0460); // 1120 bytes (0x000460 - 0x000460)
static_assert(sizeof(UCE_LegCripple_Supernova_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_LegCripple_C) == 0x01E0); // 480 bytes (0x0001B8 - 0x0001E0)
static_assert(sizeof(USpell_Flaw_AddictDrug_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_AddictFood_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_AddictSmoke_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Consumable_SCAdreno_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_LegCripple_Flaw_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_LegCripple_PostProcess_C) == 0x0208); // 520 bytes (0x000208 - 0x000208)
static_assert(sizeof(UCE_FallCripple_C) == 0x01E0); // 480 bytes (0x0001B8 - 0x0001E0)
static_assert(sizeof(UCE_HackRobot_Visuals_C) == 0x01A0); // 416 bytes (0x000188 - 0x0001A0)
static_assert(sizeof(UCE_Encumbrance_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UThirstSpell_T5_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UThirstSpell_T4_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UThirstSpell_T3_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UThirstSpell_T2_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UThirstSpell_T1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UHungerSpell_T5_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UHungerSpell_T4_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UHungerSpell_T3_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UHungerSpell_T2_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UHungerSpell_T1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UExhaustionSpell_T5_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UExhaustionSpell_T4_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UExhaustionSpell_T3_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UExhaustionSpell_T2_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UExhaustionSpell_T1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UPlayerTTDComponent_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UPlayerKillCameraComponent_C) == 0x0160); // 352 bytes (0x000160 - 0x000160)
static_assert(sizeof(UPlayerHighlightComponent_C) == 0x0138); // 312 bytes (0x000138 - 0x000138)
static_assert(sizeof(UPlayerCalledShotCameraComponent_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UDrug_SC_Adreno_C) == 0x0230); // 560 bytes (0x000230 - 0x000230)
static_assert(sizeof(UFlaw_Sys_AddictSmoke_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_AddictFood_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_AddictDrug_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_AddictAlcohol_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UCE_HackRobot_C) == 0x01C8); // 456 bytes (0x0001B8 - 0x0001C8)
static_assert(sizeof(USpell_Falling_FallCripple_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UFPV_AnimBP2_C) == 0x462A); // 17962 bytes (0x000600 - 0x00462A)
static_assert(sizeof(UStatComponentBase_C) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(UPlayerStatComponent_C) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(USpell_PerkEffect_AllForOne_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Cheetah_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_LoneWolf_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_MaintenanceMan_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_PackMule_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_QuickAndTheDead_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Resilient_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_SlowTheWorld_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Strider_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Toughness_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Traveler_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Harvester_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Hoarder_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_PackOfPackMules_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_RollingThunder_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_RunAndGun_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Scanner_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Soliloquy_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_SpeedDemon_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_TacticalAgility_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_TheCollector_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_TheReaper_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_WeBandOfBrothers_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_WeirdScience_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_ArmorMaster_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_BoomHeadshot_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_DontGoDyinOnMe_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_PenetratingShots_C) == 0x01A8); // 424 bytes (0x0001A8 - 0x0001A8)
static_assert(sizeof(USpell_PerkEffect_PenetratingShots_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Revenge_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_SoloSneaker_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_SteadyHand_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_SuperPackMule_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_ThickSkin_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_TitForTat_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_WildScience_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_NRay_TargetEffect_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(URangedMod_Sight_Scope_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Sight_PostResistance_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Magazine_NRayDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Magazine_CorrodeDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Barrel_RateOfFire_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Barrel_Accuracy_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_Grip_CritChance_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_Atk_ShockDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_Atk_NRayDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_ATK_CorrodeDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(U__FootstepSFX_Global_C) == 0x0148); // 328 bytes (0x000148 - 0x000148)
static_assert(sizeof(UCE_Withdrawal_Alcohol_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_Withdrawal_Drug_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_Withdrawal_Food_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_Withdrawal_Smoke_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(URangedMod_Sight_Range_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Sight_Aim_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Magazine_ShockDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Magazine_MagSize_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Magazine_EnergyDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Barrel_Silencer_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(URangedMod_Barrel_CritDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_Grip_Toughness_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_Grip_Atk_Speed_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_Atk_PwrAtkDmg_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UMeleeMod_Atk_PlasmaDamage_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UArmorMod_Armor_Cold_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Cold_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UCE_Precision_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_PerkEffect_Precision_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Confidence_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_LastStand_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_TacticalMaster_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UMeleeMod_Grip_Silencer_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(U_FootstepSFX_HumanSmall_C) == 0x0148); // 328 bytes (0x000148 - 0x000148)
static_assert(sizeof(UFootstepSFX_Small_2_C) == 0x0148); // 328 bytes (0x000148 - 0x000148)
static_assert(sizeof(UPerk_T3_WildScience_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_TitForTat_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_ThickSkin_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_TacticalMaster_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_SuperPackMule_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_SteadyHand_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_SoloSneaker_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_Revenge_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_PenetratingShots_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_LastStand_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_DontGoDyinOnMe_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_Confidence_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_BoomHeadshot_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_ArmorMaster_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_WeirdScience_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_WeBandOfBrothers_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_TheReaper_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_TheCollector_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_TacticalAgility_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_SpeedDemon_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_Soliloquy_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_Scanner_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_RunAndGun_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_RollingThunder_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_PackOfPackMules_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_Hoarder_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_Harvester_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_Traveler_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_Toughness_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_Strider_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_SlowTheWorld_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_Resilient_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_QuickAndTheDead_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_Precision_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_PackMule_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_MaintenanceMan_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_LoneWolf_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_Cheetah_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_AllForOne_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UCE_DoubleHackRobot_C) == 0x01C8); // 456 bytes (0x0001B8 - 0x0001C8)
static_assert(sizeof(UCE_Encumbrance_PermLegCripple_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_Encumbrance_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UPlayerTimeDilationComponent_C) == 0x01A1); // 417 bytes (0x000188 - 0x0001A1)
static_assert(sizeof(UPC_Sound_C) == 0x03EC); // 1004 bytes (0x0003A8 - 0x0003EC)
static_assert(sizeof(UPerk_T2_SnakeOilSalesman_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_TheNegotiator_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_AFewBitsMore_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UCold_DamageType_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(AIndianaPlayerCharacter_BP_C) == 0x1898); // 6296 bytes (0x0017C0 - 0x001898)
static_assert(sizeof(UArmorMod_Skill_ThugKit_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_TechKit_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_SilverTongue_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_HunterKit_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Physical_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Utility_SprintSTACost_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Utility_NoiseReduction_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Utility_Movement_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_StealthKit_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Shock_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_NRay_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Energy_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Corrosion_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Utility_KnockedDownDuration_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_StealthKit_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Shock_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_NRay_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Energy_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Corrosion_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_Spell_ModEffect_AutoATPInjector_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UXFH_Spell_ModEffect_ElectroFlashLens_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UXFH_Spell_ModEffect_KineticPulse_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UXFH_Spell_ModEffect_ReflexPhobiaAmp_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_ConcentratedFire_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(USpell_PerkEffect_ConcentratedFire_FakeBuff_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_ConcentratedFire_ClearBonus_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_ConcentratedFire_BonusDmgOnTarget_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_HerniatedDisk_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(USpell_Flaw_Herniated_Disk_P_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UArmorMod_Skill_ThugKit_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_TechKit_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_SilverTongue_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Skill_HunterKit_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Armor_Physical_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UCE_Paranoid_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(USpell_Flaw_Paranoid_RestrictedArea_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Paranoid_Crouch_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Consumable_Alcohol_Hangover_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Hangover_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_ModEffect_FieldAggregator_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_ModEffect_ElectroSurface_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_ModEffect_ShieldProjector_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_ModEffect_AdrenoStimulator_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Farsighted_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Nearsighted_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Paranoid_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Blinding_PostProcess_C) == 0x0790); // 1936 bytes (0x000208 - 0x000790)
static_assert(sizeof(USpell_Flaw_PermBlind_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Blinding_C) == 0x01D0); // 464 bytes (0x0001B8 - 0x0001D0)
static_assert(sizeof(UCE_Concuss_PostProcess_C) == 0x0790); // 1936 bytes (0x000208 - 0x000790)
static_assert(sizeof(USpell_Flaw_PermConcuss_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Concuss_C) == 0x01D0); // 464 bytes (0x0001B8 - 0x0001D0)
static_assert(sizeof(UCE_Concuss_Supernova_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UCE_Concuss_NoStats_C) == 0x01D0); // 464 bytes (0x0001D0 - 0x0001D0)
static_assert(sizeof(UCE_GorillianLegCripple_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_Flaw_PermLegCripple_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Canid_LegCripple_C) == 0x01E0); // 480 bytes (0x0001B8 - 0x0001E0)
static_assert(sizeof(UCE_Maim_Post_Process_C) == 0x0208); // 520 bytes (0x000208 - 0x000208)
static_assert(sizeof(USpell_Flaw_PermMaim_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Maim_Supernova_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_Maim_C) == 0x01E0); // 480 bytes (0x0001B8 - 0x0001E0)
static_assert(sizeof(USpell_Flaw_PhobiaCanid_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_PhobiaGorillian_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_PhobiaHeights_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_PhobiaInsect_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_PhobiaManti_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_PhobiaRaptidon_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_PhobiaRobot_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_WeakToCorrosion_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_WeakToNRay_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_WeakToPhysical_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_WeakToShock_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_WeakToThermal_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Hangover_Wait_C) == 0x0198); // 408 bytes (0x000198 - 0x000198)
static_assert(sizeof(USpell_Consumable_AlcoholBuff_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Chrono_Lethargy_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Chronophobia_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_CompulsiveSpender_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Decidophobia_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Disposophobia_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_GuiltRidden_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_Herniated_Disk_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_Flaw_WeakToCold_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Phobia_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_Phobia_Disposophobia_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UFlaw_Sys_WeakToThermal_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_WeakToShock_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_WeakToPhysical_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_WeakToNRay_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_WeakToCorrosion_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_WeakToCold_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PhobiaRobot_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PhobiaRaptidon_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PhobiaManti_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PhobiaInsect_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PhobiaHeights_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PhobiaGorillian_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PhobiaCanid_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PermMaim_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PermLegCripple_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PermConcuss_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Sys_PermBlind_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Paranoid_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Nearsighted_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Herniated_Disk_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_GuiltRidden_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Farsighted_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Disposophobia_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Decidophobia_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_CompulsiveSpender_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Chronophobia_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UFlaw_Spec_Chrono_Lethargy_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(USpell_PerkEffect_AppliedScience_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_NietzschesReward_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_Assassin_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_LoneMaster_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_ConcentratedFire_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_PerkEffect_ImprovisationWarrior_1_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UXFH_ArmorMod_Utility_WalkSpeed_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Utility_SprintSpeed_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Utility_ArmorDegradation_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Armor_All_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Utility_CompanionCooldown_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Gadget_ReflexPhobiaAmp_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Gadget_KineticPulse_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Gadget_ElectroFlashLens_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Gadget_AutoATPInjector_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UXFH_ArmorMod_Armor_All_T2_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Gadget_SkelAdrenoStim_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Gadget_ReactShield_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Gadget_ElectroCharge_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UArmorMod_Gadget_ChronoField_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UPerk_T3_ImprovisationWarrior_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T3_ConcentratedFire_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_LoneMaster_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T2_Assassin_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_NietzschesReward_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPerk_T1_AppliedScience_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UDrink_Rizzo_SpectrumVodka_C) == 0x0230); // 560 bytes (0x000230 - 0x000230)
static_assert(sizeof(AIndianaPlayerController_BP_C) == 0x0680); // 1664 bytes (0x000680 - 0x000680)
static_assert(sizeof(USpell_WeaponCrit_Bleed_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UAB_InfernoScythe_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USC_LightPistol_Weapon_Base_C) == 0x05D8); // 1496 bytes (0x0005D0 - 0x0005D8)
static_assert(sizeof(UCE_Burn_PostProcess_C) == 0x0240); // 576 bytes (0x000208 - 0x000240)
static_assert(sizeof(UCE_Burn_C) == 0x01C0); // 448 bytes (0x0001B8 - 0x0001C0)
static_assert(sizeof(USpell_WeaponCrit_Burn_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_WeaponCrit_Knockout_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UHam_TheVermin_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UJoch_Flamethrower_Weapon_Base_C) == 0x05D8); // 1496 bytes (0x0005D0 - 0x0005D8)
static_assert(sizeof(UCE_Execute_PostProcess_C) == 0x0208); // 520 bytes (0x000208 - 0x000208)
static_assert(sizeof(UCE_Execute_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_WeaponCrit_Execute_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UHam_HMG_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UHam_DeadEyeAR_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USC_LightAssaultRifle_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USpell_WeaponCrit_Stagger_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UTL_AssaultRifle_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UTL_HuntingRifle_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USpell_WeaponCrit_Knockdown_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_HeavyHitReactUseTimer_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCE_Knockout_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UCE_Knockback_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_WeaponCrit_Knockback_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USC_SawedOffFlechette_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USC_ImpactHammer_Weapon_Base_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UCE_Weaken_PostProcess_C) == 0x0790); // 1936 bytes (0x000208 - 0x000790)
static_assert(sizeof(UCE_Weaken_C) == 0x01E0); // 480 bytes (0x0001B8 - 0x0001E0)
static_assert(sizeof(USpell_WeaponLoc_Stagger_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_WeaponLoc_Groin_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_WeaponLoc_Maim_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_WeaponLoc_LegCripple_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(USpell_WeaponLoc_Blind_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(URang_MMod_None_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMelee_MMod_None_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(USpell_WeaponCrit_Stun_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UTL_StunBaton_Weapon_Base_C) == 0x05D8); // 1496 bytes (0x0005D0 - 0x0005D8)
static_assert(sizeof(UHelmet_CorpUnitCommander_Cleo_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(UCE_Speedy_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(USpell_Consumable_Speedy_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UBypass_Kit_C) == 0x0140); // 320 bytes (0x000140 - 0x000140)
static_assert(sizeof(UDrug_SC_DervishMist_C) == 0x0230); // 560 bytes (0x000230 - 0x000230)
static_assert(sizeof(UHelmet_CorpUnitCommander_Cleo_Phy_T1_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(USmugglerOutfit_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UTL_StunBaton_Weapon_T1_C) == 0x05D8); // 1496 bytes (0x0005D8 - 0x0005D8)
static_assert(sizeof(USC_ImpactHammer_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USC_SawedOffFlechette_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UTL_Weapon_HuntingRifle_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UTL_AssaultRifle_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USC_LightAssaultRifle_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USC_LightAssaultRifle_Uni_EV1_Bursty_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UHam_DeadEyeAR_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UHam_HMG_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(UJoch_Flamethrower_Weapon_T1_C) == 0x05D8); // 1496 bytes (0x0005D8 - 0x0005D8)
static_assert(sizeof(UHam_TheVermin_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(USC_LightPistol_Weapon_T1_C) == 0x05D8); // 1496 bytes (0x0005D8 - 0x0005D8)
static_assert(sizeof(UAB_InfernoScythe_Weapon_T1_C) == 0x05D0); // 1488 bytes (0x0005D0 - 0x0005D0)
static_assert(sizeof(AIndianaPlayerCharacter_BP_TestCharacter_C) == 0x1E10); // 7696 bytes (0x001898 - 0x001E10)
static_assert(sizeof(AIndianaGameModeStandard_C) == 0x03E0); // 992 bytes (0x0003D8 - 0x0003E0)
static_assert(offsetof(UCE_Stagger_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_Stagger_C, Sockets) == 0x01C0);
static_assert(offsetof(UCE_Stagger_C, PSs) == 0x01D0);
static_assert(offsetof(UCE_Stagger_C, NewVar) == 0x01E0);
static_assert(offsetof(UCE_Stagger_C, PS_Params) == 0x01F0);
static_assert(offsetof(ABase_Ai_Character_C, UberGraphFrame) == 0x0E60);
static_assert(offsetof(ABase_Ai_Character_C, RpgStat) == 0x0E68);
static_assert(offsetof(ABase_Ai_Character_C, Equipment) == 0x0E70);
static_assert(offsetof(ABase_Ai_Character_C, Appearance) == 0x0E78);
static_assert(offsetof(ABase_Ai_Character_C, CharacterDeath) == 0x0E80);
static_assert(offsetof(ABase_Ai_Character_C, Targetable) == 0x0E88);
static_assert(offsetof(ABase_Ai_Character_C, Health) == 0x0E90);
static_assert(offsetof(ABase_Ai_Character_C, FaceFXAsset) == 0x0EA0);
static_assert(offsetof(ABase_Ai_Character_C, FaceFXAuthoredSkeleton) == 0x0EA8);
static_assert(offsetof(UBaseCharacterDeath_C, QuadEmitters) == 0x0120);
static_assert(offsetof(UBaseCharacterDeath_C, BipedEmitters) == 0x0130);
static_assert(offsetof(UBaseCharacterDeath_C, TripedEmitters) == 0x0140);
static_assert(offsetof(UCE_Stun_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_Stun_C, Sockets) == 0x01C0);
static_assert(offsetof(UCE_Stun_C, PSs) == 0x01D0);
static_assert(offsetof(UShockCharacterDeath_C, UberGraphFrame) == 0x0158);
static_assert(offsetof(URagdollCharacterDeath_C, UberGraphFrame) == 0x0158);
static_assert(offsetof(URagdollCharacterDeath_C, LootPile) == 0x0160);
static_assert(offsetof(URagdollCharacterDeath_C, LootPileMaterial) == 0x0168);
static_assert(offsetof(UNRayCharacterDeath_C, UberGraphFrame) == 0x0158);
static_assert(offsetof(UNRayCharacterDeath_C, LootablePile) == 0x0160);
static_assert(offsetof(UNRayCharacterDeath_C, Eyes_Mouth) == 0x0168);
static_assert(offsetof(UNRayCharacterDeath_C, Mat_Slot_Names) == 0x0178);
static_assert(offsetof(UNRayCharacterDeath_C, LootPileMaterial) == 0x0188);
static_assert(offsetof(UGibCharacterDeath_C, UberGraphFrame) == 0x0158);
static_assert(offsetof(UEnergyCharacterDeath_C, UberGraphFrame) == 0x0158);
static_assert(offsetof(UEnergyCharacterDeath_C, LootablePile) == 0x0160);
static_assert(offsetof(UEnergyCharacterDeath_C, Eyes_Mouth) == 0x0168);
static_assert(offsetof(UEnergyCharacterDeath_C, Mat_Slot_Names) == 0x0178);
static_assert(offsetof(UEnergyCharacterDeath_C, LootPileMaterial) == 0x0188);
static_assert(offsetof(UDismemberCharacterDeath_C, UberGraphFrame) == 0x0158);
static_assert(offsetof(UCorrosiveCharacterDeath_C, UberGraphFrame) == 0x0158);
static_assert(offsetof(UCE_Bleed_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UBase_DamageType_C, ImpactFx) == 0x00B0);
static_assert(offsetof(UBase_DamageType_C, CritEmitters) == 0x00B8);
static_assert(offsetof(UBase_DamageType_C, NormalEmitters) == 0x00C8);
static_assert(offsetof(UBase_DamageType_C, ImpactFx_AOE) == 0x00D8);
static_assert(offsetof(UBase_DamageType_C, Default_ImpactFX) == 0x00E8);
static_assert(offsetof(UBase_DamageType_C, Default_MuzzleFlash) == 0x00F8);
static_assert(offsetof(UBase_DamageType_C, MuzzleFlash_Systems) == 0x0100);
static_assert(offsetof(UBase_DamageType_C, LingeringSmoke_Sytem) == 0x0150);
static_assert(offsetof(UBase_DamageType_C, MuzzleSpawnParticleSystem) == 0x01B0);
static_assert(offsetof(UCE_NRay_Pulse_C, UberGraphFrame) == 0x0210);
static_assert(offsetof(USE_GloopGunEffect_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_NRay_Pulse_Visual_C, UberGraphFrame) == 0x0188);
static_assert(offsetof(UCE_NRay_PostProcess_C, UberGraphFrame) == 0x0208);
static_assert(offsetof(UCE_NRay_PostProcess_C, CascadeTemplate) == 0x0210);
static_assert(offsetof(UCE_NRay_PostProcess_C, NiagaraTemplate) == 0x0220);
static_assert(offsetof(UCE_NRay_PostProcess_C, CascadeFX) == 0x0228);
static_assert(offsetof(UCE_NRay_PostProcess_C, NiagaraFX) == 0x0238);
static_assert(offsetof(UCE_Electric_Hazard_PP_C, UberGraphFrame) == 0x0208);
static_assert(offsetof(UCE_Electric_Hazard_PP_C, CascadeTemplate) == 0x0218);
static_assert(offsetof(UCE_Electric_Hazard_PP_C, NiagaraTemplate) == 0x0228);
static_assert(offsetof(UCE_Electric_Hazard_PP_C, CascadeFX) == 0x0230);
static_assert(offsetof(UCE_Electric_Hazard_PP_C, NiagaraFX) == 0x0238);
static_assert(offsetof(UCE_NRay_AoE_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(AConversationLighting_BP_C, SpeakerLight) == 0x0360);
static_assert(offsetof(AConversationLighting_BP_C, SpeakerLight0) == 0x0368);
static_assert(offsetof(AConversationLighting_BP_C, DefaultSceneRoot) == 0x0370);
static_assert(offsetof(AIndianaGameModeFrontEnd_C, DefaultSceneRoot) == 0x03D8);
static_assert(offsetof(UUnarmed_FPV_WeaponAnimations_C, UberGraphFrame) == 0x0460);
static_assert(offsetof(UCE_LegCripple_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_LegCripple_C, PSs) == 0x01C0);
static_assert(offsetof(UCE_LegCripple_C, Sockets) == 0x01D0);
static_assert(offsetof(UCE_FallCripple_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_FallCripple_C, PSs) == 0x01C0);
static_assert(offsetof(UCE_FallCripple_C, Sockets) == 0x01D0);
static_assert(offsetof(UCE_HackRobot_Visuals_C, UberGraphFrame) == 0x0188);
static_assert(offsetof(UCE_HackRobot_Visuals_C, MIDs) == 0x0190);
static_assert(offsetof(UCE_HackRobot_C, MIDs) == 0x01B8);
static_assert(offsetof(UFPV_AnimBP2_C, UberGraphFrame) == 0x0600);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Root) == 0x0608);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Slot) == 0x0638);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Slot0) == 0x0680);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ModifyBone) == 0x06C8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ComponentToLocalSpace) == 0x07D0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Slot1) == 0x07F0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Slot2) == 0x0838);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult) == 0x0880);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult3) == 0x08A8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult4) == 0x08D0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult5) == 0x08F8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult6) == 0x0920);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult7) == 0x0948);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult8) == 0x0970);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult9) == 0x0998);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult10) == 0x09C0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult11) == 0x09E8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult12) == 0x0A10);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult13) == 0x0A38);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult14) == 0x0A60);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult15) == 0x0A88);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult16) == 0x0AB0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult17) == 0x0AD8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult18) == 0x0B00);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult19) == 0x0B28);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult20) == 0x0B50);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer) == 0x0B78);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult) == 0x0BF8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer21) == 0x0C28);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult22) == 0x0CA8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_LocalRefPose) == 0x0CD8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult23) == 0x0CF0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer24) == 0x0D20);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_LayeredBoneBlend) == 0x0DA0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer25) == 0x0E60);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult26) == 0x0EE0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer27) == 0x0F10);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer28) == 0x0F90);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x1010);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_BlendListByBool) == 0x11A8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_RotationOffsetBlendSpace29) == 0x1248);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult30) == 0x13E0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer31) == 0x1410);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_MakeDynamicAdditive) == 0x1490);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer32) == 0x14C8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ApplyAdditive) == 0x1548);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer33) == 0x1610);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_LocalToComponentSpace) == 0x1690);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ComponentToLocalSpace34) == 0x16B0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ModifyBone35) == 0x16D0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer36) == 0x17D8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_RotationOffsetBlendSpace37) == 0x1858);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_BlendListByBool38) == 0x19F0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer39) == 0x1A90);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ApplyMeshSpaceAdditive) == 0x1B10);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_RotationOffsetBlendSpace40) == 0x1BE0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult41) == 0x1D78);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_LocomotionPlay) == 0x1DA8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_LayeredBoneBlend42) == 0x1E38);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer43) == 0x1EF8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ApplyAdditive44) == 0x1F78);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer45) == 0x2040);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_MakeDynamicAdditive46) == 0x20C0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer47) == 0x20F8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult48) == 0x2178);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateMachine) == 0x21A8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer49) == 0x2258);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ApplyAdditive50) == 0x22D8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer51) == 0x23A0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_RotationOffsetBlendSpace52) == 0x2420);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_BlendListByBool53) == 0x25B8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer54) == 0x2658);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ApplyMeshSpaceAdditive55) == 0x26D8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_RotationOffsetBlendSpace56) == 0x27A8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult57) == 0x2940);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateMachine58) == 0x2970);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult59) == 0x2A20);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult60) == 0x2A48);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult61) == 0x2A70);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult62) == 0x2A98);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult63) == 0x2AC0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult64) == 0x2AE8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult65) == 0x2B10);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult66) == 0x2B38);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult67) == 0x2B60);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult68) == 0x2B88);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult69) == 0x2BB0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult70) == 0x2BD8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult71) == 0x2C00);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult72) == 0x2C28);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult73) == 0x2C50);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult74) == 0x2C78);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult75) == 0x2CA0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult76) == 0x2CC8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult77) == 0x2CF0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult78) == 0x2D18);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult79) == 0x2D40);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult80) == 0x2D68);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult81) == 0x2D90);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult82) == 0x2DB8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult83) == 0x2DE0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult84) == 0x2E08);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult85) == 0x2E30);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult86) == 0x2E58);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult87) == 0x2E80);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer88) == 0x2EA8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult89) == 0x2F28);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer90) == 0x2F58);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult91) == 0x2FD8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer92) == 0x3008);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult93) == 0x3088);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer94) == 0x30B8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult95) == 0x3138);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer96) == 0x3168);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult97) == 0x31E8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer98) == 0x3218);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult99) == 0x3298);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer100) == 0x32C8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult101) == 0x3348);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer102) == 0x3378);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult103) == 0x33F8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_SequencePlayer104) == 0x3428);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult105) == 0x34A8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_IdentityPose) == 0x34D8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult106) == 0x34F0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateMachine107) == 0x3520);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ApplyMeshSpaceAdditive108) == 0x35D0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Slot109) == 0x36A0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult110) == 0x36E8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult111) == 0x3710);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult112) == 0x3738);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult113) == 0x3760);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult114) == 0x3788);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult115) == 0x37B0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult116) == 0x37D8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult117) == 0x3800);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult118) == 0x3828);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TransitionResult119) == 0x3850);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_BlendSpacePlayer) == 0x3878);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult120) == 0x3968);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_BlendSpacePlayer121) == 0x3998);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult122) == 0x3A88);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_BlendSpacePlayer123) == 0x3AB8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult124) == 0x3BA8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_IdentityPose125) == 0x3BD8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateResult126) == 0x3BF0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_StateMachine127) == 0x3C20);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Slot128) == 0x3CD0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TwoBoneIK) == 0x3D20);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_LocalToComponentSpace129) == 0x3F00);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TwoBoneIK130) == 0x3F20);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_TwoBoneIK131) == 0x4100);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_LocalToComponentSpace132) == 0x42E0);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ModifyBone133) == 0x4300);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ApplyMeshSpaceAdditive134) == 0x4408);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_ComponentToLocalSpace135) == 0x44D8);
static_assert(offsetof(UFPV_AnimBP2_C, AnimGraphNode_Slot136) == 0x44F8);
static_assert(offsetof(UFPV_AnimBP2_C, WeaponAnimationsBP) == 0x4540);
static_assert(offsetof(UFPV_AnimBP2_C, OriginalWeaponAnimationsBP) == 0x4548);
static_assert(offsetof(UFPV_AnimBP2_C, HolsteredWeaponAnimationsBP) == 0x4550);
static_assert(offsetof(UFPV_AnimBP2_C, CameraBoneRotator) == 0x4560);
static_assert(offsetof(UFPV_AnimBP2_C, LocomotionBlendSpace) == 0x4570);
static_assert(offsetof(UFPV_AnimBP2_C, FineAimLocomotionBlendSpace) == 0x4578);
static_assert(offsetof(UFPV_AnimBP2_C, BlockLocomotionBlendSpace) == 0x4580);
static_assert(offsetof(UFPV_AnimBP2_C, SprintSequence) == 0x4588);
static_assert(offsetof(UFPV_AnimBP2_C, LookAimOffset) == 0x4590);
static_assert(offsetof(UFPV_AnimBP2_C, BlockLookAimOffset) == 0x4598);
static_assert(offsetof(UFPV_AnimBP2_C, FineAimLookAimOffset) == 0x45A0);
static_assert(offsetof(UFPV_AnimBP2_C, JumpStartSequence) == 0x45B0);
static_assert(offsetof(UFPV_AnimBP2_C, FallingSequence) == 0x45B8);
static_assert(offsetof(UFPV_AnimBP2_C, JumpEndSequence) == 0x45C0);
static_assert(offsetof(UFPV_AnimBP2_C, FineAimJumpStartSequence) == 0x45C8);
static_assert(offsetof(UFPV_AnimBP2_C, FineAimFallingSequence) == 0x45D0);
static_assert(offsetof(UFPV_AnimBP2_C, FineAimJumpEndSequence) == 0x45D8);
static_assert(offsetof(UFPV_AnimBP2_C, BlockJumpStartSequence) == 0x45E8);
static_assert(offsetof(UFPV_AnimBP2_C, BlockFallingSequence) == 0x45F0);
static_assert(offsetof(UFPV_AnimBP2_C, BlockJumpEndSequence) == 0x45F8);
static_assert(offsetof(UFPV_AnimBP2_C, HitReactSequence) == 0x4620);
static_assert(offsetof(UCE_DoubleHackRobot_C, MIDs) == 0x01B8);
static_assert(offsetof(UPlayerTimeDilationComponent_C, UberGraphFrame) == 0x0188);
static_assert(offsetof(UPlayerTimeDilationComponent_C, DynamicTOD) == 0x0198);
static_assert(offsetof(UPC_Sound_C, UberGraphFrame) == 0x03A8);
static_assert(offsetof(UPC_Sound_C, ForceLoadBankArray) == 0x03B0);
static_assert(offsetof(UPC_Sound_C, Vis_CharacterDataColor) == 0x03CC);
static_assert(offsetof(UPC_Sound_C, Vis_AmbientDataColor) == 0x03DC);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, UberGraphFrame) == 0x17C0);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, ForcedAnimation) == 0x17C8);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, QuickMeleeCollisionEnd) == 0x17D0);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, QuickMeleeCollisionStart) == 0x17D8);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, IdleCamera) == 0x17E0);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, MedKit) == 0x17E8);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, PlayerAppearance) == 0x17F0);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, PlayerStatComponent) == 0x17F8);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, CompanionMoveToWC_3D) == 0x1800);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, CinematicConversationCamera) == 0x1808);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, Equipment) == 0x1810);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, EnemyScanner) == 0x1818);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, PlayerShout) == 0x1820);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, CollisionLegs) == 0x1828);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, CollisionChest) == 0x1830);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, CollisionLeftArm) == 0x1838);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, CollisionRightArm) == 0x1840);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, CollisionHead) == 0x1848);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, PlayerDeath) == 0x1850);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, PlayerHealth) == 0x1858);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, MID_Vignette) == 0x1870);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, SpectrumVodkaVariables) == 0x1878);
static_assert(offsetof(AIndianaPlayerCharacter_BP_C, AllVodkaItems) == 0x1888);
static_assert(offsetof(UCE_Blinding_PostProcess_C, UberGraphFrame) == 0x0208);
static_assert(offsetof(UCE_Blinding_PostProcess_C, Player_Default_PP_Settings) == 0x0220);
static_assert(offsetof(UCE_Blinding_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_Blinding_C, PSs) == 0x01C0);
static_assert(offsetof(UCE_Concuss_PostProcess_C, UberGraphFrame) == 0x0208);
static_assert(offsetof(UCE_Concuss_PostProcess_C, Player_Default_PP_Settings) == 0x0220);
static_assert(offsetof(UCE_Concuss_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_Concuss_C, PSs) == 0x01C0);
static_assert(offsetof(UCE_Canid_LegCripple_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_Canid_LegCripple_C, PSs) == 0x01C0);
static_assert(offsetof(UCE_Canid_LegCripple_C, Sockets) == 0x01D0);
static_assert(offsetof(UCE_Maim_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_Maim_C, Sockets) == 0x01C0);
static_assert(offsetof(UCE_Maim_C, PSs) == 0x01D0);
static_assert(offsetof(USC_LightPistol_Weapon_Base_C, UberGraphFrame) == 0x05D0);
static_assert(offsetof(UCE_Burn_PostProcess_C, UberGraphFrame) == 0x0208);
static_assert(offsetof(UCE_Burn_PostProcess_C, CascadeTemplate) == 0x0218);
static_assert(offsetof(UCE_Burn_PostProcess_C, NiagaraTemplate) == 0x0228);
static_assert(offsetof(UCE_Burn_PostProcess_C, NiagaraFX) == 0x0230);
static_assert(offsetof(UCE_Burn_PostProcess_C, CascadeFX) == 0x0238);
static_assert(offsetof(UCE_Burn_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UJoch_Flamethrower_Weapon_Base_C, UberGraphFrame) == 0x05D0);
static_assert(offsetof(UCE_Weaken_PostProcess_C, UberGraphFrame) == 0x0208);
static_assert(offsetof(UCE_Weaken_PostProcess_C, Player_Default_PP_Settings) == 0x0220);
static_assert(offsetof(UCE_Weaken_C, UberGraphFrame) == 0x01B8);
static_assert(offsetof(UCE_Weaken_C, Sockets) == 0x01C0);
static_assert(offsetof(UCE_Weaken_C, PSs) == 0x01D0);
static_assert(offsetof(UTL_StunBaton_Weapon_Base_C, UberGraphFrame) == 0x05D0);
static_assert(offsetof(AIndianaPlayerCharacter_BP_TestCharacter_C, PostProcessConversation) == 0x1898);
static_assert(offsetof(AIndianaPlayerCharacter_BP_TestCharacter_C, Default_PP_Settings) == 0x18A0);
static_assert(offsetof(AIndianaGameModeStandard_C, DefaultSceneRoot) == 0x03D8);
