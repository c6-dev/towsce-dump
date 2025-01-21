
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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

/// Class /Game/Blueprints/AI/Navigation/IndianaAvoidanceManager_BP.IndianaAvoidanceManager_BP_C
/// Size: 0x0000 (0x000150 - 0x000150)
class UIndianaAvoidanceManager_BP_C : public UIndianaAvoidanceManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade_PlayerArmor.Spell_SkillUnlock_Persuade_PlayerArmor_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Persuade_PlayerArmor_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/MedicalForce/CE_MedicalForce.CE_MedicalForce_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_MedicalForce_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume4.Spell_BonusDamageOnConsume4_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_BonusDamageOnConsume4_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume3.Spell_BonusDamageOnConsume3_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_BonusDamageOnConsume3_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume2.Spell_BonusDamageOnConsume2_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_BonusDamageOnConsume2_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Skill/Spell_BonusDamageOnConsume1.Spell_BonusDamageOnConsume1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_BonusDamageOnConsume1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie_PlayerWeakSpot.Spell_SkillUnlock_Lie_PlayerWeakSpot_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lie_PlayerWeakSpot_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/InspirationArmor/CE_Inspiration40_Armor.CE_Inspiration40_Armor_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Inspiration40_Armor_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration40_Companion.Spell_SkillUnlock_Inspiration40_Companion_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Inspiration40_Companion_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination100_Companion.Spell_SkillUnlock_Determination100_Companion_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Determination100_Companion_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C
/// Size: 0x0048 (0x0001B8 - 0x000200)
class UCE_Stagger_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<FName>)                             Sockets                                                     OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1D0, 16, 0, 0})
	CMember(TArray<FParticleSysParam>)                 NewVar                                                      OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<FParticleSysParam>)                 PS_Params                                                   OFFSET(get<T>, {0x1F0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stagger/CE_Stagger.CE_Stagger_C.ExecuteUbergraph_CE_Stagger
	// void ExecuteUbergraph_CE_Stagger(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Pathing_Behavior.NavFilter_Pathing_Behavior_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UNavFilter_Pathing_Behavior_C : public UNPCNavigationQueryFilter_Pathing
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Pathing.NavFilter_Pathing_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UNavFilter_Pathing_C : public UNPCNavigationQueryFilter_Pathing
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_EQS.NavFilter_EQS_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavFilter_EQS_C : public UNPCNavigationQueryFilter_EQS
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Blueprints/StatusEffects/HitReact/CE_LightHitReact.CE_LightHitReact_C
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UCE_LightHitReact_C : public UDirectionalAnimDisableStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Game/Blueprints/StatusEffects/HitReact/CE_HeavyHitReact.CE_HeavyHitReact_C
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UCE_HeavyHitReact_C : public UDirectionalAnimDisableStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Game/Blueprints/CHAR/NPC/IndianaAiController_BP.IndianaAiController_BP_C
/// Size: 0x0000 (0x0004A8 - 0x0004A8)
class AIndianaAiController_BP_C : public AIndianaAiController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

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
/// Size: 0x0050 (0x000E60 - 0x000EB0)
class ABase_Ai_Character_C : public AIndianaAiCharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE60, 8, 0, 0})
	CMember(class URpgStatComponent*)                  RpgStat                                                     OFFSET(get<T>, {0xE68, 8, 0, 0})
	CMember(class UEquipmentComponent*)                Equipment                                                   OFFSET(get<T>, {0xE70, 8, 0, 0})
	CMember(class UAppearanceComponent*)               Appearance                                                  OFFSET(get<T>, {0xE78, 8, 0, 0})
	CMember(class UCharacterDeathComponent*)           CharacterDeath                                              OFFSET(get<T>, {0xE80, 8, 0, 0})
	CMember(class UTargetableComponent*)               Targetable                                                  OFFSET(get<T>, {0xE88, 8, 0, 0})
	CMember(class UHealthComponent*)                   Health                                                      OFFSET(get<T>, {0xE90, 8, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xE98, 4, 0, 0})
	DMember(bool)                                      AlwaysUpdateFaceModifications                               OFFSET(get<bool>, {0xE9C, 1, 0, 0})
	CMember(class UFaceFXActor*)                       FaceFXAsset                                                 OFFSET(get<T>, {0xEA0, 8, 0, 0})
	CMember(class USkeletalMesh*)                      FaceFXAuthoredSkeleton                                      OFFSET(get<T>, {0xEA8, 8, 0, 0})


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
/// Size: 0x0031 (0x000120 - 0x000151)
class UBaseCharacterDeath_C : public UDeathClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 337;

public:
	CMember(TArray<FName>)                             QuadEmitters                                                OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FName>)                             BipedEmitters                                               OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<FName>)                             TripedEmitters                                              OFFSET(get<T>, {0x140, 16, 0, 0})
	DMember(bool)                                      PileSpawned                                                 OFFSET(get<bool>, {0x150, 1, 0, 0})


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
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_BeverageTech_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Bureaucrat.Spell_AptitudeEffect_Bureaucrat_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Bureaucrat_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Cashier.Spell_AptitudeEffect_Cashier_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Cashier_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Chef.Spell_AptitudeEffect_Chef_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Chef_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Construction.Spell_AptitudeEffect_Construction_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Construction_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Elevator.Spell_AptitudeEffect_Elevator_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Elevator_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Factory.Spell_AptitudeEffect_Factory_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Factory_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Farmer.Spell_AptitudeEffect_Farmer_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Farmer_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_FoodTester.Spell_AptitudeEffect_FoodTester_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_FoodTester_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Janitor.Spell_AptitudeEffect_Janitor_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Janitor_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Mascot.Spell_AptitudeEffect_Mascot_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Mascot_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_MedicalTech.Spell_AptitudeEffect_MedicalTech_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_MedicalTech_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_NoAptitude.Spell_AptitudeEffect_NoAptitude_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_NoAptitude_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_SafetyInspector.Spell_AptitudeEffect_SafetyInspector_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_SafetyInspector_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AptitudeEffects/Spell_AptitudeEffect_Scientist.Spell_AptitudeEffect_Scientist_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AptitudeEffect_Scientist_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Stagger/CE_Stagger_PerfectBlock.CE_Stagger_PerfectBlock_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UCE_Stagger_PerfectBlock_C : public UCE_Stagger_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block80.Spell_SkillUnlock_Block80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Block80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block60.Spell_SkillUnlock_Block60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Block60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block40.Spell_SkillUnlock_Block40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Block40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block20.Spell_SkillUnlock_Block20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Block20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block150.Spell_SkillUnlock_Block150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Block150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Block100.Spell_SkillUnlock_Block100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Block100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Player_PassiveDTFromBlock.Spell_Player_PassiveDTFromBlock_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Player_PassiveDTFromBlock_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/DeterminationCritDmg/CE_Determination40_CritDmg.CE_Determination40_CritDmg_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Determination40_CritDmg_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination60.Spell_SkillUnlock_Determination60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Determination60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination40.Spell_SkillUnlock_Determination40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Determination40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination20.Spell_SkillUnlock_Determination20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Determination20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination150.Spell_SkillUnlock_Determination150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Determination150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination100.Spell_SkillUnlock_Determination100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Determination100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Determination80.Spell_SkillUnlock_Determination80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Determination80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/DodgeProtection/CE_DodgeProtection.CE_DodgeProtection_C
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UCE_DodgeProtection_C : public UArmorStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge80.Spell_SkillUnlock_Dodge80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Dodge80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge60.Spell_SkillUnlock_Dodge60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Dodge60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge40.Spell_SkillUnlock_Dodge40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Dodge40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge20.Spell_SkillUnlock_Dodge20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Dodge20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge100.Spell_SkillUnlock_Dodge100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Dodge100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Dodge150.Spell_SkillUnlock_Dodge150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Dodge150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering80.Spell_SkillUnlock_Engineering80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Engineering80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering60.Spell_SkillUnlock_Engineering60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Engineering60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering40.Spell_SkillUnlock_Engineering40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Engineering40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering20.Spell_SkillUnlock_Engineering20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Engineering20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering150.Spell_SkillUnlock_Engineering150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Engineering150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Engineering100.Spell_SkillUnlock_Engineering100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Engineering100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack80.Spell_SkillUnlock_Hack80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Hack80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack60.Spell_SkillUnlock_Hack60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Hack60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack40.Spell_SkillUnlock_Hack40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Hack40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack20.Spell_SkillUnlock_Hack20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Hack20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack150.Spell_SkillUnlock_Hack150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Hack150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Hack100.Spell_SkillUnlock_Hack100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Hack100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns80.Spell_SkillUnlock_Handguns80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Handguns80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns60.Spell_SkillUnlock_Handguns60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Handguns60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns40.Spell_SkillUnlock_Handguns40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Handguns40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns20.Spell_SkillUnlock_Handguns20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Handguns20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns150.Spell_SkillUnlock_Handguns150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Handguns150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Handguns100.Spell_SkillUnlock_Handguns100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Handguns100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Knockdown/CE_Knockdown.CE_Knockdown_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Knockdown_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee80.Spell_SkillUnlock_HvyMelee80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyMelee80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee60.Spell_SkillUnlock_HvyMelee60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyMelee60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee40.Spell_SkillUnlock_HvyMelee40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyMelee40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee20.Spell_SkillUnlock_HvyMelee20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyMelee20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee100.Spell_SkillUnlock_HvyMelee100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyMelee100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyMelee150.Spell_SkillUnlock_HvyMelee150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyMelee150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons80.Spell_SkillUnlock_HvyWeapons80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyWeapons80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons60.Spell_SkillUnlock_HvyWeapons60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyWeapons60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons40.Spell_SkillUnlock_HvyWeapons40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyWeapons40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons20.Spell_SkillUnlock_HvyWeapons20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyWeapons20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons150.Spell_SkillUnlock_HvyWeapons150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyWeapons150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_HvyWeapons100.Spell_SkillUnlock_HvyWeapons100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_HvyWeapons100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration80.Spell_SkillUnlock_Inspiration80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Inspiration80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration60.Spell_SkillUnlock_Inspiration60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Inspiration60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration40.Spell_SkillUnlock_Inspiration40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Inspiration40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration20.Spell_SkillUnlock_Inspiration20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Inspiration20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration150.Spell_SkillUnlock_Inspiration150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Inspiration150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Inspiration100.Spell_SkillUnlock_Inspiration100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Inspiration100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate_PlayerCrit.Spell_SkillUnlock_Intimidate_PlayerCrit_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Intimidate_PlayerCrit_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Terrify/CE_Terrify.CE_Terrify_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Terrify_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate80.Spell_SkillUnlock_Intimidate80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Intimidate80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate60.Spell_SkillUnlock_Intimidate60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Intimidate60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate40.Spell_SkillUnlock_Intimidate40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Intimidate40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate100.Spell_SkillUnlock_Intimidate100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Intimidate100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate20.Spell_SkillUnlock_Intimidate20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Intimidate20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Intimidate150.Spell_SkillUnlock_Intimidate150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Intimidate150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Scramble/CE_Scramble_ReapplyCD.CE_Scramble_ReapplyCD_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_Scramble_ReapplyCD_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/StatusEffects/Scramble/CE_Scramble.CE_Scramble_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Scramble_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie80.Spell_SkillUnlock_Lie80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lie80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie60.Spell_SkillUnlock_Lie60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lie60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie40.Spell_SkillUnlock_Lie40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lie40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie20.Spell_SkillUnlock_Lie20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lie20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie150.Spell_SkillUnlock_Lie150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lie150_C : public USpell_SkillUnlock_Lie20_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lie100.Spell_SkillUnlock_Lie100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lie100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C
/// Size: 0x0028 (0x0001B8 - 0x0001E0)
class UCE_Stun_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<FName>)                             Sockets                                                     OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Stun/CE_Stun.CE_Stun_C.ExecuteUbergraph_CE_Stun
	// void ExecuteUbergraph_CE_Stun(int32_t EntryPoint);                                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee80.Spell_SkillUnlock_LtMelee80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LtMelee80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee60.Spell_SkillUnlock_LtMelee60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LtMelee60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee40.Spell_SkillUnlock_LtMelee40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LtMelee40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee20.Spell_SkillUnlock_LtMelee20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LtMelee20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee150.Spell_SkillUnlock_LtMelee150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LtMelee150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LtMelee100.Spell_SkillUnlock_LtMelee100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LtMelee100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick80.Spell_SkillUnlock_LockPick80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LockPick80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick60.Spell_SkillUnlock_LockPick60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LockPick60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick40.Spell_SkillUnlock_LockPick40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LockPick40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick20.Spell_SkillUnlock_LockPick20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LockPick20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Lockpick150.Spell_SkillUnlock_Lockpick150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Lockpick150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LockPick100.Spell_SkillUnlock_LockPick100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LockPick100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns80.Spell_SkillUnlock_LongGuns80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LongGuns80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns60.Spell_SkillUnlock_LongGuns60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LongGuns60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns40.Spell_SkillUnlock_LongGuns40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LongGuns40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns20.Spell_SkillUnlock_LongGuns20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LongGuns20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns150.Spell_SkillUnlock_LongGuns150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LongGuns150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_LongGuns100.Spell_SkillUnlock_LongGuns100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_LongGuns100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical80.Spell_SkillUnlock_Medical80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Medical80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical60.Spell_SkillUnlock_Medical60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Medical60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical40.Spell_SkillUnlock_Medical40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Medical40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical20.Spell_SkillUnlock_Medical20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Medical20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical150.Spell_SkillUnlock_Medical150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Medical150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Medical100.Spell_SkillUnlock_Medical100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Medical100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Cower/CE_Cower_ReapplyCD.CE_Cower_ReapplyCD_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_Cower_ReapplyCD_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/StatusEffects/Cower/CE_Cower.CE_Cower_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Cower_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade80.Spell_SkillUnlock_Persuade80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Persuade80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade60.Spell_SkillUnlock_Persuade60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Persuade60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade40.Spell_SkillUnlock_Persuade40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Persuade40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade100.Spell_SkillUnlock_Persuade100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Persuade100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade20.Spell_SkillUnlock_Persuade20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Persuade20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Persuade150.Spell_SkillUnlock_Persuade150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Persuade150_C : public USpell_SkillUnlock_Persuade20_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science80.Spell_SkillUnlock_Science80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Science80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science60.Spell_SkillUnlock_Science60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Science60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science40.Spell_SkillUnlock_Science40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Science40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science20.Spell_SkillUnlock_Science20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Science20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science150.Spell_SkillUnlock_Science150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Science150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Science100.Spell_SkillUnlock_Science100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Science100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak80.Spell_SkillUnlock_Sneak80_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Sneak80_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak60.Spell_SkillUnlock_Sneak60_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Sneak60_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak40.Spell_SkillUnlock_Sneak40_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Sneak40_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak20.Spell_SkillUnlock_Sneak20_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Sneak20_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak150.Spell_SkillUnlock_Sneak150_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Sneak150_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/SkillUnlocks/Spell_SkillUnlock_Sneak100.Spell_SkillUnlock_Sneak100_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_SkillUnlock_Sneak100_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Item/QuestItem/0701_CryoKey.0701_CryoKey_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class U0701_CryoKey_C : public UQuestItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/QuestItem/0701_ChairmanKey.0701_ChairmanKey_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class U0701_ChairmanKey_C : public UQuestItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Wits_Attribute.Wits_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UWits_Attribute_C : public UWitsAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Willpower_Attribute.Willpower_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UWillpower_Attribute_C : public UWillpowerAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Temperament_Attribute.Temperament_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UTemperament_Attribute_C : public UTemperamentAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Strength_Attribute.Strength_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UStrength_Attribute_C : public UStrengthAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Perception_Attribute.Perception_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UPerception_Attribute_C : public UPerceptionAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Intelligence_Attribute.Intelligence_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UIntelligence_Attribute_C : public UIntelligenceAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Endurance_Attribute.Endurance_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UEndurance_Attribute_C : public UEnduranceAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Dexterity_Attribute.Dexterity_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UDexterity_Attribute_C : public UDexterityAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/Charm_Attribute.Charm_Attribute_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UCharm_Attribute_C : public UCharmAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Sneak_Skill.Sneak_Skill_C
/// Size: 0x0000 (0x000080 - 0x000080)
class USneak_Skill_C : public USneakSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Science_Skill.Science_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UScience_Skill_C : public UScienceSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Persuade_Skill.Persuade_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UPersuade_Skill_C : public UPersuadeSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Medical_Skill.Medical_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UMedical_Skill_C : public UMedicalSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/LongGuns_Skill.LongGuns_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class ULongGuns_Skill_C : public ULongGunsSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Lockpick_Skill.Lockpick_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class ULockpick_Skill_C : public ULockpickSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/LightMelee_Skill.LightMelee_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class ULightMelee_Skill_C : public ULightMeleeSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Lie_Skill.Lie_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class ULie_Skill_C : public ULieSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Intimidate_Skill.Intimidate_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UIntimidate_Skill_C : public UIntimidateSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Inspiration_Skill.Inspiration_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UInspiration_Skill_C : public UInspirationSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/HeavyWeapons_Skill.HeavyWeapons_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UHeavyWeapons_Skill_C : public UHeavyWeaponsSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/HeavyMelee_Skill.HeavyMelee_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UHeavyMelee_Skill_C : public UHeavyMeleeSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/HandGuns_Skill.HandGuns_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UHandGuns_Skill_C : public UHandGunsSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Hack_Skill.Hack_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UHack_Skill_C : public UHackSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Engineering_Skill.Engineering_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UEngineering_Skill_C : public UEngineeringSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Dodge_Skill.Dodge_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UDodge_Skill_C : public UDodgeSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Determination_Skill.Determination_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UDetermination_Skill_C : public UDeterminationSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Stats/Skills/Block_Skill.Block_Skill_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UBlock_Skill_C : public UBlockSkill
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Scientist.Aptitude_Scientist_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Scientist_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_SafetyInspector.Aptitude_SafetyInspector_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_SafetyInspector_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_NoAptitude.Aptitude_NoAptitude_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_NoAptitude_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_MedicalTech.Aptitude_MedicalTech_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_MedicalTech_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Mascot.Aptitude_Mascot_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Mascot_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Janitor.Aptitude_Janitor_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Janitor_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_FoodTester.Aptitude_FoodTester_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_FoodTester_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Farmer.Aptitude_Farmer_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Farmer_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Factory.Aptitude_Factory_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Factory_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Elevator.Aptitude_Elevator_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Elevator_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Construction.Aptitude_Construction_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Construction_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Chef.Aptitude_Chef_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Chef_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Cashier.Aptitude_Cashier_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Cashier_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_Bureaucrat.Aptitude_Bureaucrat_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_Bureaucrat_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/Aptitudes/Aptitude_BeverageTech.Aptitude_BeverageTech_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAptitude_BeverageTech_C : public UAptitude
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Blueprints/CHAR/Deaths/ShockCharacterDeath.ShockCharacterDeath_C
/// Size: 0x0010 (0x000151 - 0x000161)
class UShockCharacterDeath_C : public UBaseCharacterDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 353;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x160, 1, 0, 0})


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
/// Size: 0x001F (0x000151 - 0x000170)
class URagdollCharacterDeath_C : public UBaseCharacterDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	CMember(class UStaticMesh*)                        LootPile                                                    OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LootPileMaterial                                            OFFSET(get<T>, {0x168, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/RagdollCharacterDeath.RagdollCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteOnReload
	// void ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent);                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/RagdollCharacterDeath.RagdollCharacterDeath_C.ExecuteUbergraph_RagdollCharacterDeath
	// void ExecuteUbergraph_RagdollCharacterDeath(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/CHAR/Deaths/NRayCharacterDeath.NRayCharacterDeath_C
/// Size: 0x0041 (0x000151 - 0x000192)
class UNRayCharacterDeath_C : public UBaseCharacterDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 402;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	CMember(class UStaticMesh*)                        LootablePile                                                OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   Eyes_Mouth                                                  OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<FName>)                             Mat_Slot_Names                                              OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(class UMaterialInterface*)                 LootPileMaterial                                            OFFSET(get<T>, {0x188, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      UseNiagaraHit                                               OFFSET(get<bool>, {0x191, 1, 0, 0})


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
/// Size: 0x0010 (0x000151 - 0x000161)
class UGibCharacterDeath_C : public UBaseCharacterDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 353;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      Sentry                                                      OFFSET(get<bool>, {0x160, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/GibCharacterDeath.GibCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/GibCharacterDeath.GibCharacterDeath_C.ExecuteUbergraph_GibCharacterDeath
	// void ExecuteUbergraph_GibCharacterDeath(int32_t EntryPoint);                                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/CHAR/Deaths/EnergyCharacterDeath.EnergyCharacterDeath_C
/// Size: 0x0040 (0x000151 - 0x000191)
class UEnergyCharacterDeath_C : public UBaseCharacterDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 401;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	CMember(class UStaticMesh*)                        LootablePile                                                OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   Eyes_Mouth                                                  OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<FName>)                             Mat_Slot_Names                                              OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(class UMaterialInterface*)                 LootPileMaterial                                            OFFSET(get<T>, {0x188, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x190, 1, 0, 0})


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
/// Size: 0x000F (0x000151 - 0x000160)
class UDismemberCharacterDeath_C : public UBaseCharacterDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x158, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/CHAR/Deaths/DismemberCharacterDeath.DismemberCharacterDeath_C.AddTorsoGibParticles
	// void AddTorsoGibParticles();                                                                                             // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/DismemberCharacterDeath.DismemberCharacterDeath_C.Execute
	// void Execute(class UCharacterDeathComponent* InDeathComponent);                                                          // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/CHAR/Deaths/DismemberCharacterDeath.DismemberCharacterDeath_C.ExecuteUbergraph_DismemberCharacterDeath
	// void ExecuteUbergraph_DismemberCharacterDeath(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/CHAR/Deaths/CorrosiveCharacterDeath.CorrosiveCharacterDeath_C
/// Size: 0x0010 (0x000151 - 0x000161)
class UCorrosiveCharacterDeath_C : public UBaseCharacterDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 353;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x160, 1, 0, 0})


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
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Ammo_Ionized_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Ammos/Spell_Ammo_Volatile.Spell_Ammo_Volatile_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Ammo_Volatile_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Bleed/CE_Bleed_PostProcess.CE_Bleed_PostProcess_C
/// Size: 0x0000 (0x000208 - 0x000208)
class UCE_Bleed_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
};

/// Class /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C
/// Size: 0x0008 (0x0001B8 - 0x0001C0)
class UCE_Bleed_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Bleed/CE_Bleed.CE_Bleed_C.ExecuteUbergraph_CE_Bleed
	// void ExecuteUbergraph_CE_Bleed(int32_t EntryPoint);                                                                      // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/Ammos/Spell_Ammo_Shredder.Spell_Ammo_Shredder_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Ammo_Shredder_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Ammos/Spell_Ammo_Heartseeker.Spell_Ammo_Heartseeker_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Ammo_Heartseeker_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Teams/Factions/MatherFamily.MatherFamily_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UMatherFamily_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Spells/NRay/Spell_NRay_DeathAoE.Spell_NRay_DeathAoE_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_NRay_DeathAoE_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C
/// Size: 0x0108 (0x0000B0 - 0x0001B8)
class UBase_DamageType_C : public UIndianaDamageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(class UParticleSystem*)                    ImpactFx                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<FName>)                             CritEmitters                                                OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FName>)                             NormalEmitters                                              OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UParticleSystem*)                    ImpactFx_AOE                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(bool)                                      IsNiagara_ImpactFX                                          OFFSET(get<bool>, {0xE0, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     Default_ImpactFX                                            OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      IsNiagara_MuzzleFlash                                       OFFSET(get<bool>, {0xF0, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     Default_MuzzleFlash                                         OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TMap<ESkill, class UNiagaraSystem*>)       MuzzleFlash_Systems                                         OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(class UNiagaraSystem*)                     LingeringSmoke_Sytem                                        OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(TMap<TEnumAsByte<EPhysicalSurface>, class UNiagaraSystem*>) Surface_ImpactFX                           OFFSET(get<T>, {0x158, 80, 0, 0})
	DMember(float)                                     MuzzleFlashAimedResize                                      OFFSET(get<float>, {0x1A8, 4, 0, 0})
	CMember(class UParticleSystem*)                    MuzzleSpawnParticleSystem                                   OFFSET(get<T>, {0x1B0, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C.TriggerMuzzleFx
	// void TriggerMuzzleFx(class USceneComponent* AttachComponent, bool IsFirstPerson);                                        // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C.SetupSecondaryImpactFx
	// void SetupSecondaryImpactFx(class UParticleSystemComponent* ParentEffect, bool bGraze, bool bCritical, bool bWeakSpot, bool bRadial, float Radius); // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/DamageTypes/Base_DamageType.Base_DamageType_C.SetupImpactFx
	// void SetupImpactFx(class UParticleSystemComponent* ParentEffect, bool bGraze, bool bCritical, bool bWeakSpot, bool bRadial, float Radius); // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_SmartDodge_NoCooldown.META_SmartDodge_NoCooldown_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UMETA_SmartDodge_NoCooldown_C : public UDecisionTree_Dodge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_PreEmptiveMeleeAction.META_PreEmptiveMeleeAction_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UMETA_PreEmptiveMeleeAction_C : public UDecisionTree_PreEmptiveMeleeAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultRangeAttack.META_DefaultRangeAttack_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UMETA_DefaultRangeAttack_C : public UDecisionTree_DefaultRangeAttack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_GainedAwareness.META_GainedAwareness_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UMETA_GainedAwareness_C : public UDecisionTree_GainedAwareness
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultRangeAttackNewCover.META_DefaultRangeAttackNewCover_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UMETA_DefaultRangeAttackNewCover_C : public UDecisionTree_DefaultRangeAttack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultMeleeAttack.META_DefaultMeleeAttack_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UMETA_DefaultMeleeAttack_C : public UDecisionTree_DefaultMeleeAttack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultAttackNewCover.META_DefaultAttackNewCover_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UMETA_DefaultAttackNewCover_C : public UDecisionTree_DefaultAttack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_SmartDodge.META_SmartDodge_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UMETA_SmartDodge_C : public UDecisionTree_Dodge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_MeleeUnreachable.META_MeleeUnreachable_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UMETA_MeleeUnreachable_C : public UDecisionTree_MeleeUnreachable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_AvoidMeleeAttack.META_AvoidMeleeAttack_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UMETA_AvoidMeleeAttack_C : public UDecisionTree_AvoidMeleeAttack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DodgeRange.META_DodgeRange_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UMETA_DodgeRange_C : public UDecisionTree_Dodge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_Block.META_Block_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UMETA_Block_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_ReactiveRangeAction.META_ReactiveRangeAction_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UMETA_ReactiveRangeAction_C : public UDecisionTree_ReactiveRangeAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnReactiveRangeAction.OnReactiveRangeAction_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UOnReactiveRangeAction_C : public UDecisionTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnReactiveRangeAction.OnReactiveRangeAction_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnNearbyMeleeAttack.OnNearbyMeleeAttack_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UOnNearbyMeleeAttack_C : public UDecisionTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnNearbyMeleeAttack.OnNearbyMeleeAttack_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/OnMeleeUnreachable.OnMeleeUnreachable_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UOnMeleeUnreachable_C : public UDecisionTree_Combined
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/NewCover.NewCover_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UNewCover_C : public UDecisionTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/NewCover.NewCover_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/SearchComplete.SearchComplete_C
/// Size: 0x0000 (0x000048 - 0x000048)
class USearchComplete_C : public UDecisionTree_Combined
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_WeaponPreference_IgnoreCooldown.META_WeaponPreference_IgnoreCooldown_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UMETA_WeaponPreference_IgnoreCooldown_C : public UDecisionTree_WeaponPreference
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_WeaponPreference.META_WeaponPreference_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UMETA_WeaponPreference_C : public UDecisionTree_WeaponPreference
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultAttack.META_DefaultAttack_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UMETA_DefaultAttack_C : public UDecisionTree_DefaultAttack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/MeleeAttackComplete.MeleeAttackComplete_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UMeleeAttackComplete_C : public UDecisionTree_Combined
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/LineOfFireBlocked.LineOfFireBlocked_C
/// Size: 0x0000 (0x000038 - 0x000038)
class ULineOfFireBlocked_C : public UDecisionTree_LineOfFireBlocked
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/LostTarget.LostTarget_C
/// Size: 0x0000 (0x000040 - 0x000040)
class ULostTarget_C : public UDecisionTree_LostTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/SwitchToRangedWeaponPreferUnlimitedRange.SwitchToRangedWeaponPreferUnlimitedRange_C
/// Size: 0x0000 (0x000048 - 0x000048)
class USwitchToRangedWeaponPreferUnlimitedRange_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/SwitchTarget.SwitchTarget_C
/// Size: 0x0000 (0x000030 - 0x000030)
class USwitchTarget_C : public UDecisionTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/SwitchTarget.SwitchTarget_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/RepositionComplete.RepositionComplete_C
/// Size: 0x0000 (0x000048 - 0x000048)
class URepositionComplete_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/TetherCancel.TetherCancel_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UTetherCancel_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/QueueBehavior.QueueBehavior_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UQueueBehavior_C : public UDecisionTree_QueueBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/OnCombatStateChange.OnCombatStateChange_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UOnCombatStateChange_C : public UDecisionTree_DefaultSwitchContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandSuppress.CompanionCommandSuppress_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UCompanionCommandSuppress_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandReturn.CompanionCommandReturn_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UCompanionCommandReturn_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandMoveTo.CompanionCommandMoveTo_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UCompanionCommandMoveTo_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandHunkerDown.CompanionCommandHunkerDown_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UCompanionCommandHunkerDown_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandFlank.CompanionCommandFlank_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UCompanionCommandFlank_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandCalledShot.CompanionCommandCalledShot_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UCompanionCommandCalledShot_C : public UDecisionTree_CompanionCalledShot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/CompanionCommandAttack.CompanionCommandAttack_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UCompanionCommandAttack_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Idle.Idle_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UIdle_C : public UDecisionTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/Idle.Idle_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/ForceCompanionFollo.ForceCompanionFollo_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UForceCompanionFollo_C : public UDecisionTree_ForceCompanionFollow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Death.Death_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UDeath_C : public UDecisionTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/Death.Death_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Conversation.Conversation_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UConversation_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/Base_OnStatusEffectApplied.Base_OnStatusEffectApplied_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBase_OnStatusEffectApplied_C : public UDecisionTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Blueprints/AI/DecisionTree/DecisionTrees/Base_OnStatusEffectApplied.Base_OnStatusEffectApplied_C.RunDecisionTree
	// TArray<UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority& OutPriority); // [0x1c5deb0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/Unaware.Unaware_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UUnaware_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/Tether.Tether_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UTether_C : public UDecisionTree_CombinedRequests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultPacifist.META_DefaultPacifist_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UMETA_DefaultPacifist_C : public UDecisionTree_DefaultPacifist
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/META_DefaultOutOfCombat.META_DefaultOutOfCombat_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UMETA_DefaultOutOfCombat_C : public UDecisionTree_DefaultOutOfCombat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Blueprints/AI/DecisionTree/DecisionTrees/META/Default.Default_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UDefault_C : public UDecisionTree_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Board_T1.DIS_Board_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_Board_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Cleo_T1.DIS_Cleo_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_Cleo_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_CnPFactory_T1.DIS_CnPFactory_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_CnPFactory_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Fairfield_T1.DIS_Fairfield_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_Fairfield_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Hope_T1.DIS_Hope_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_Hope_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpUnitCommander_Base.Armor_CorpUnitCommander_Base_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpUnitCommander_Base_C : public UArmorSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpUnitCommander_Base.Helmet_CorpUnitCommander_Base_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpUnitCommander_Base_C : public UHelmet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpUnitCommander_T1.Helmet_CorpUnitCommander_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpUnitCommander_T1_C : public UHelmet_CorpUnitCommander_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpUnitCommander_T1.Armor_CorpUnitCommander_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpUnitCommander_T1_C : public UArmor_CorpUnitCommander_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Armor_CorpUnitCommander_UDL_T1.Armor_CorpUnitCommander_UDL_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpUnitCommander_UDL_T1_C : public UArmor_CorpUnitCommander_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Helmet_CorpUnitCommander_UDL_T1.Helmet_CorpUnitCommander_UDL_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpUnitCommander_UDL_T1_C : public UHelmet_CorpUnitCommander_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_LabyrinthStationWorker_T1.DIS_LabyrinthStationWorker_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_LabyrinthStationWorker_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Helmet_CorpUnitCommander_UDL_Phy_T1.Helmet_CorpUnitCommander_UDL_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpUnitCommander_UDL_Phy_T1_C : public UHelmet_CorpUnitCommander_UDL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Armor_CorpUnitCommander_UDL_Phy_T1.Armor_CorpUnitCommander_UDL_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpUnitCommander_UDL_Phy_T1_C : public UArmor_CorpUnitCommander_UDL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Armor_Colonist_Base.Armor_Colonist_Base_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_Colonist_Base_C : public UArmorSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Armor_Base.Spacer_Armor_Base_C
/// Size: 0x0000 (0x000370 - 0x000370)
class USpacer_Armor_Base_C : public UArmor_Colonist_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Helmet_Base.Spacer_Helmet_Base_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class USpacer_Helmet_Base_C : public UHelmet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_Mardet_T1.DIS_Mardet_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_Mardet_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Mardet_Helmet.Spacer_Mardet_Helmet_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class USpacer_Mardet_Helmet_C : public USpacer_Helmet_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Spacer/Spacer_Mardet_Armor.Spacer_Mardet_Armor_C
/// Size: 0x0000 (0x000370 - 0x000370)
class USpacer_Mardet_Armor_C : public USpacer_Armor_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpRecruit_Base.Armor_CorpRecruit_Base_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_Base_C : public UArmorSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpRecruit_Base.Helmet_CorpRecruit_Base_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_Base_C : public UHelmet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Sublight/Armor_SublightSmuggler_Base.Armor_SublightSmuggler_Base_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_SublightSmuggler_Base_C : public UArmorSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpRecruit_T1.Helmet_CorpRecruit_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_T1_C : public UHelmet_CorpRecruit_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Helmet_CorpRecruit_Cleo_T1.Helmet_CorpRecruit_Cleo_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_Cleo_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Variants/Helmet_CorpRecruit_Cleo_Phy_T1.Helmet_CorpRecruit_Cleo_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_Cleo_Phy_T1_C : public UHelmet_CorpRecruit_Cleo_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Helmet_CorpRecruit_CP_T1.Helmet_CorpRecruit_CP_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_CP_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Variants/Helmet_CorpRecruit_CP_Phy_T1.Helmet_CorpRecruit_CP_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_CP_Phy_T1_C : public UHelmet_CorpRecruit_CP_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Helmet_CorpRecruit_TL_T1.Helmet_CorpRecruit_TL_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_TL_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Helmet_CorpRecruit_TL_Phy_T1.Helmet_CorpRecruit_TL_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_TL_Phy_T1_C : public UHelmet_CorpRecruit_TL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpRecruit_T1.Armor_CorpRecruit_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_T1_C : public UArmor_CorpRecruit_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Armor_CorpRecruit_Cleo_T1.Armor_CorpRecruit_Cleo_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_Cleo_T1_C : public UArmor_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Variants/Armor_CorpRecruit_Cleo_Phy_T1.Armor_CorpRecruit_Cleo_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_Cleo_Phy_T1_C : public UArmor_CorpRecruit_Cleo_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Armor_CorpRecruit_CP_T1.Armor_CorpRecruit_CP_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_CP_T1_C : public UArmor_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/CP/Variants/Armor_CorpRecruit_CP_Phy_T1.Armor_CorpRecruit_CP_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_CP_Phy_T1_C : public UArmor_CorpRecruit_CP_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Armor_CorpRecruit_TL_T1.Armor_CorpRecruit_TL_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_TL_T1_C : public UArmor_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Armor_CorpRecruit_TL_Phy_T1.Armor_CorpRecruit_TL_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_TL_Phy_T1_C : public UArmor_CorpRecruit_TL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Armor_CorpRecruit_UDL_T1.Armor_CorpRecruit_UDL_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_UDL_T1_C : public UArmor_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Helmet_CorpRecruit_UDL_T1.Helmet_CorpRecruit_UDL_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_UDL_T1_C : public UHelmet_CorpRecruit_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_MSec_T1.DIS_MSec_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_MSec_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Helmet_CorpRecruit_UDL_Phy_T1.Helmet_CorpRecruit_UDL_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpRecruit_UDL_Phy_T1_C : public UHelmet_CorpRecruit_UDL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Armor_CorpRecruit_UDL_Phy_T1.Armor_CorpRecruit_UDL_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpRecruit_UDL_Phy_T1_C : public UArmor_CorpRecruit_UDL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Sublight/Armor_SublightSmuggler_T1.Armor_SublightSmuggler_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_SublightSmuggler_T1_C : public UArmor_SublightSmuggler_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_SubLight_T1.DIS_SubLight_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_SubLight_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_SyndicateBountyHunter_T1.DIS_SyndicateBountyHunter_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_SyndicateBountyHunter_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Armor/Sublight/Variants/Armor_SublightSmuggler_Phy_T1.Armor_SublightSmuggler_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_SublightSmuggler_Phy_T1_C : public UArmor_SublightSmuggler_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Item/MicroMods/Armor/Arm_MMod_None.Arm_MMod_None_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UArm_MMod_None_C : public UMicroMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_VisualNoStat.ArmorMod_Armor_VisualNoStat_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_VisualNoStat_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpTrooper_Base.Helmet_CorpTrooper_Base_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpTrooper_Base_C : public UHelmet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_TartarusGuard_T1.DIS_TartarusGuard_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_TartarusGuard_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_TartarusPrisoner_T1.DIS_TartarusPrisoner_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_TartarusPrisoner_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Prison/Prison_01.Prison_01_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UPrison_01_C : public UArmorSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Helmet_CorpTrooper_T1.Helmet_CorpTrooper_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpTrooper_T1_C : public UHelmet_CorpTrooper_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Helmet_CorpTrooper_UDL_T1.Helmet_CorpTrooper_UDL_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpTrooper_UDL_T1_C : public UHelmet_CorpTrooper_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Helmet_CorpTrooper_UDL_Phy_T1.Helmet_CorpTrooper_UDL_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpTrooper_UDL_Phy_T1_C : public UHelmet_CorpTrooper_UDL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpTrooper_Base.Armor_CorpTrooper_Base_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpTrooper_Base_C : public UArmorSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/Armor_CorpTrooper_T1.Armor_CorpTrooper_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpTrooper_T1_C : public UArmor_CorpTrooper_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Armor_CorpTrooper_UDL_T1.Armor_CorpTrooper_UDL_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpTrooper_UDL_T1_C : public UArmor_CorpTrooper_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/UDL/Variants/Armor_CorpTrooper_UDL_Phy_T1.Armor_CorpTrooper_UDL_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpTrooper_UDL_Phy_T1_C : public UArmor_CorpTrooper_UDL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Armor_CorpTrooper_TL_T1.Armor_CorpTrooper_TL_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpTrooper_TL_T1_C : public UArmor_CorpTrooper_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Helmet_CorpTrooper_TL_T1.Helmet_CorpTrooper_TL_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpTrooper_TL_T1_C : public UHelmet_CorpTrooper_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Disguise/HumanDisguise/DIS_TnLDefenseContractor_T1.DIS_TnLDefenseContractor_T1_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UDIS_TnLDefenseContractor_T1_C : public UDisguiseItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Helmet_CorpTrooper_TL_Phy_T1.Helmet_CorpTrooper_TL_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpTrooper_TL_Phy_T1_C : public UHelmet_CorpTrooper_TL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/TL/Variants/Armor_CorpTrooper_TL_Phy_T1.Armor_CorpTrooper_TL_Phy_T1_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UArmor_CorpTrooper_TL_Phy_T1_C : public UArmor_CorpTrooper_TL_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_NPC_Pathing.NavFilter_NPC_Pathing_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavFilter_NPC_Pathing_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Blueprints/StatusEffects/Food/CE_Meat.CE_Meat_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_Meat_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/StatusEffects/Food/CE_Carbs.CE_Carbs_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_Carbs_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/StatusEffects/Drink/CE_SugarDrink.CE_SugarDrink_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_SugarDrink_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/StatusEffects/Drink/CE_CaffeineDrink.CE_CaffeineDrink_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_CaffeineDrink_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/StatusEffects/Alcohol/CE_AlcoholBuff.CE_AlcoholBuff_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_AlcoholBuff_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse.CE_NRay_Pulse_C
/// Size: 0x0009 (0x000210 - 0x000219)
class UCE_NRay_Pulse_C : public UDamageStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 537;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x210, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x218, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse.CE_NRay_Pulse_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse.CE_NRay_Pulse_C.ExecuteUbergraph_CE_NRay_Pulse
	// void ExecuteUbergraph_CE_NRay_Pulse(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Armor/HeadGear/HeadGear_TopHat_Var01.HeadGear_TopHat_Var01_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHeadGear_TopHat_Var01_C : public UHelmet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/StatusEffects/EmptyStatusEffect.EmptyStatusEffect_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UEmptyStatusEffect_C : public UStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Blueprints/StatusEffects/UglyStickEffects/CE_UglyStick_GhostDebuff.CE_UglyStick_GhostDebuff_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UCE_UglyStick_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C
/// Size: 0x0008 (0x0001B8 - 0x0001C0)
class USE_GloopGunEffect_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Test/SE_GloopGunEffect.SE_GloopGunEffect_C.ExecuteUbergraph_SE_GloopGunEffect
	// void ExecuteUbergraph_SE_GloopGunEffect(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Shrink/CE_Shrink_GhostDebuff.CE_Shrink_GhostDebuff_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UCE_Shrink_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Blueprints/StatusEffects/PrismaticHammer/CE_PrismaticHammer_GhostDebuff.CE_PrismaticHammer_GhostDebuff_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UCE_PrismaticHammer_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C
/// Size: 0x0009 (0x000188 - 0x000191)
class UCE_NRay_Pulse_Visual_C : public UStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 401;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x190, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C.ExecuteUbergraph_CE_NRay_Pulse_Visual
	// void ExecuteUbergraph_CE_NRay_Pulse_Visual(int32_t EntryPoint);                                                          // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C
/// Size: 0x0038 (0x000208 - 0x000240)
class UCE_NRay_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	CMember(class UParticleSystem*)                    CascadeTemplate                                             OFFSET(get<T>, {0x210, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x218, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     NiagaraTemplate                                             OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           CascadeFX                                                   OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(bool)                                      EventDone                                                   OFFSET(get<bool>, {0x230, 1, 0, 0})
	CMember(class UNiagaraComponent*)                  NiagaraFX                                                   OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_PostProcess.CE_NRay_PostProcess_C.ExecuteUbergraph_CE_NRay_PostProcess
	// void ExecuteUbergraph_CE_NRay_PostProcess(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/MindControl/CE_MindControl_GhostDebuff.CE_MindControl_GhostDebuff_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UCE_MindControl_GhostDebuff_C : public UEmptyStatusEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C
/// Size: 0x0038 (0x000208 - 0x000240)
class UCE_Electric_Hazard_PP_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	DMember(bool)                                      EventDone                                                   OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(class UParticleSystem*)                    CascadeTemplate                                             OFFSET(get<T>, {0x218, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     NiagaraTemplate                                             OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           CascadeFX                                                   OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NiagaraFX                                                   OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Hazards/Electricity/CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C.ExecuteUbergraph_CE_Electric_Hazard_PP
	// void ExecuteUbergraph_CE_Electric_Hazard_PP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Armor/HeadGear/HeadGear_TopHat_Var01_Uni_Mon1.HeadGear_TopHat_Var01_Uni_Mon1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHeadGear_TopHat_Var01_Uni_Mon1_C : public UHeadGear_TopHat_Var01_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Named/TA_0202_Uni_CelesteSuit_Chimaera.TA_0202_Uni_CelesteSuit_Chimaera_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UTA_0202_Uni_CelesteSuit_Chimaera_C : public UArmorSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C
/// Size: 0x0009 (0x0001B8 - 0x0001C1)
class UCE_NRay_AoE_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 449;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x1C0, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/NRay/CE_NRay_AoE.CE_NRay_AoE_C.ExecuteUbergraph_CE_NRay_AoE
	// void ExecuteUbergraph_CE_NRay_AoE(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/StatusEffects/TetherRegen/CE_Tether.CE_Tether_C
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UCE_Tether_C : public UHealStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Game/Blueprints/StatusEffects/Invulnerable/CE_Invulnerable.CE_Invulnerable_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Invulnerable_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/IdleDisable/CE_IdleDisable.CE_IdleDisable_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UCE_IdleDisable_C : public UIdleDisableStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Companion_PassiveReceivedHostileEffectDuration.Spell_Companion_PassiveReceivedHostileEffectDuration_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Companion_PassiveReceivedHostileEffectDuration_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Tether.Spell_AI_Tether_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_Tether_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Teleport.Spell_AI_Teleport_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_Teleport_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Resurrect.Spell_AI_Resurrect_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_Resurrect_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_PostCombatReload.Spell_AI_PostCombatReload_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_PostCombatReload_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_Jump.Spell_AI_Jump_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_Jump_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_GetUp.Spell_AI_GetUp_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_GetUp_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_ElevatorMove.Spell_AI_ElevatorMove_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_ElevatorMove_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_ConversationInvulnerability.Spell_AI_ConversationInvulnerability_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_ConversationInvulnerability_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_CalledShot.Spell_AI_CalledShot_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_CalledShot_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Hearing.NavFilter_Hearing_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavFilter_Hearing_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Companion_Pathing.NavFilter_Companion_Pathing_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavFilter_Companion_Pathing_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Blueprints/AI/Navigation/NavFilters/NavFilter_Companion_EQS.NavFilter_Companion_EQS_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavFilter_Companion_EQS_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Calledshot_ShockTarget.Spell_Calledshot_ShockTarget_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Calledshot_ShockTarget_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Calledshot_ShockAOE.Spell_Calledshot_ShockAOE_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Calledshot_ShockAOE_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/DamageTypes/Thermal_DamageType.Thermal_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UThermal_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/DamageTypes/Swarm_DamageType.Swarm_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class USwarm_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/DamageTypes/Shock_DamageType.Shock_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UShock_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/DamageTypes/Physical_DamageType.Physical_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPhysical_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/DamageTypes/NRay_DamageType.NRay_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UNRay_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/DamageTypes/Energy_DamageType.Energy_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UEnergy_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/DamageTypes/Corrosion_DamageType.Corrosion_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCorrosion_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Teams/Factions/TheHope.TheHope_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UTheHope_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/TheBoard.TheBoard_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UTheBoard_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Tartarus_Workers.Tartarus_Workers_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UTartarus_Workers_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Tartarus_Prisoners.Tartarus_Prisoners_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UTartarus_Prisoners_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Tartarus_Military.Tartarus_Military_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UTartarus_Military_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Syndicate.Syndicate_C
/// Size: 0x0000 (0x000200 - 0x000200)
class USyndicate_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/StellarBayResidents.StellarBayResidents_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UStellarBayResidents_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Spacers.Spacers_C
/// Size: 0x0000 (0x000200 - 0x000200)
class USpacers_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/SLUG.SLUG_C
/// Size: 0x0000 (0x000200 - 0x000200)
class USLUG_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Roseway.Roseway_C
/// Size: 0x0000 (0x000200 - 0x000200)
class URoseway_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/MSI.MSI_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UMSI_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Marauders.Marauders_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UMarauders_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Keystone.Keystone_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UKeystone_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/InformationBroker.InformationBroker_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UInformationBroker_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Groundbreaker.Groundbreaker_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UGroundbreaker_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Fairfield.Fairfield_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UFairfield_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/EmeraldVale.EmeraldVale_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UEmeraldVale_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Deserters.Deserters_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UDeserters_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/CnPFactory.CnPFactory_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UCnPFactory_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/ByzantiumResidents.ByzantiumResidents_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UByzantiumResidents_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/Anarchists.Anarchists_C
/// Size: 0x0000 (0x000200 - 0x000200)
class UAnarchists_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Teams/Factions/0206_Midway.0206_Midway_C
/// Size: 0x0000 (0x000200 - 0x000200)
class U0206_Midway_C : public UFactionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Game/Blueprints/Item/Resources/WeaponPart.WeaponPart_C
/// Size: 0x0000 (0x000140 - 0x000140)
class UWeaponPart_C : public UResourceItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Game/Blueprints/Item/Resources/ArmorPart.ArmorPart_C
/// Size: 0x0000 (0x000140 - 0x000140)
class UArmorPart_C : public UResourceItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Game/Blueprints/Item/QuestItem/03_Ship/0301_HolographicShroud.0301_HolographicShroud_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class U0301_HolographicShroud_C : public UQuestItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_NeutralToAll.T_Generic_NeutralToAll_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Generic_NeutralToAll_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_Neutral.T_Generic_Neutral_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Generic_Neutral_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_Hostile.T_Generic_Hostile_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Generic_Hostile_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/T_Generic_Friendly.T_Generic_Friendly_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Generic_Friendly_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/PlayerTeams/T_Player.T_Player_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Player_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/GlobalTeams/T_Marauders.T_Marauders_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Marauders_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Sprat.T_Sprat_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Sprat_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Meta_Critters.T_Meta_Critters_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UT_Meta_Critters_C : public UMetaTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Mealgrub.T_Mealgrub_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Mealgrub_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_LeatherBoa.T_LeatherBoa_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_LeatherBoa_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_CystyPig.T_CystyPig_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_CystyPig_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Cow.T_Cow_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Cow_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_Chicken.T_Chicken_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Chicken_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CritterTeams/T_BredWorm.T_BredWorm_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_BredWorm_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Tangler.T_Tangler_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Tangler_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Sprat_Rabid.T_Sprat_Rabid_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Sprat_Rabid_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Raptidon.T_Raptidon_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Raptidon_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Puffball.T_Puffball_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Puffball_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Pteroray.T_Pteroray_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Pteroray_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Parasite.T_Parasite_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Parasite_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Meta_Creatures.T_Meta_Creatures_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UT_Meta_Creatures_C : public UMetaTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_MantiFamily.T_MantiFamily_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_MantiFamily_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Gorillian.T_Gorillian_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Gorillian_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/CreatureTeams/T_Canid.T_Canid_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Canid_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/BotTeams/T_Sentry_Bots.T_Sentry_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Sentry_Bots_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_Renegade_Scylla.T_Renegade_Scylla_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Renegade_Scylla_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_Relay_Frey_Bots.T_1004_Relay_Frey_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1004_Relay_Frey_Bots_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_Relay_Frey.T_1004_Relay_Frey_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1004_Relay_Frey_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_Relay_Bots.T_1004_Relay_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1004_Relay_Bots_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_OrpheusSentries.T_1004_OrpheusSentries_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1004_OrpheusSentries_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_OrpheusPeyton.T_1004_OrpheusPeyton_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1004_OrpheusPeyton_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1004_OrpheusMarauders.T_1004_OrpheusMarauders_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1004_OrpheusMarauders_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Vision_S.T_1003_VM_Vision_S_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1003_VM_Vision_S_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Vision_M.T_1003_VM_Vision_M_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1003_VM_Vision_M_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Vision_F.T_1003_VM_Vision_F_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1003_VM_Vision_F_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1003_VM_Hermit.T_1003_VM_Hermit_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1003_VM_Hermit_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1002_Board_Security_Troopers.T_1002_Board_Security_Troopers_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1002_Board_Security_Troopers_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/10_Teams/T_1002_Board_Security_Bots.T_1002_Board_Security_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_1002_Board_Security_Bots_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/T_0903_Bots_Hope.T_0903_Bots_Hope_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0903_Bots_Hope_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/T_0903_Bots_Board.T_0903_Bots_Board_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0903_Bots_Board_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/T_0903_Board.T_0903_Board_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0903_Board_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Vaughn_Team.T_Vaughn_Team_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Vaughn_Team_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Sentry_Bots_Porter.T_Sentry_Bots_Porter_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Sentry_Bots_Porter_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Scientist_Town.T_Scientist_Town_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Scientist_Town_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_Lillian.T_Renegade_Lillian_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Renegade_Lillian_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_Covert.T_Renegade_Covert_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Renegade_Covert_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_Cassandra.T_Renegade_Cassandra_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Renegade_Cassandra_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Renegade_BackBays.T_Renegade_BackBays_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Renegade_BackBays_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Porter_Team.T_Porter_Team_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Porter_Team_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Orson_Team.T_Orson_Team_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Orson_Team_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Cleo_Security.T_Cleo_Security_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Cleo_Security_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Anton_Team.T_Anton_Team_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Anton_Team_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_Anarchists.T_Anarchists_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Anarchists_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_0803_Raptidons_TankRoom.T_0803_Raptidons_TankRoom_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0803_Raptidons_TankRoom_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_0802_Raptidon_Neutral.T_0802_Raptidon_Neutral_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0802_Raptidon_Neutral_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/08_Teams/T_0802_Berke.T_0802_Berke_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0802_Berke_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0422_MSI_FactionBattle.T_0422_MSI_FactionBattle_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0422_MSI_FactionBattle_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0422_Iconoclasts_FactionBattle.T_0422_Iconoclasts_FactionBattle_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0422_Iconoclasts_FactionBattle_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_SentryBots.T_0411_CnPFactory_SentryBots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0411_CnPFactory_SentryBots_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Guards.T_0411_CnPFactory_Guards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0411_CnPFactory_Guards_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Exterior.T_0411_CnPFactory_Exterior_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0411_CnPFactory_Exterior_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Employees.T_0411_CnPFactory_Employees_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0411_CnPFactory_Employees_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0411_CnPFactory_Clive.T_0411_CnPFactory_Clive_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0411_CnPFactory_Clive_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0408_MantiQueen.T_0408_MantiQueen_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0408_MantiQueen_C : public UT_Generic_Hostile_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Sublight_Fallbrook.T_0407_Sublight_Fallbrook_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0407_Sublight_Fallbrook_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Quinn_Fallbrook.T_0407_Quinn_Fallbrook_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0407_Quinn_Fallbrook_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_CQ_VM_Convict.T_0407_CQ_VM_Convict_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0407_CQ_VM_Convict_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Catherine_Fallbrook.T_0407_Catherine_Fallbrook_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0407_Catherine_Fallbrook_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Bertrand_Sprats.T_0407_Bertrand_Sprats_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0407_Bertrand_Sprats_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0407_Alice_Fallbrook.T_0407_Alice_Fallbrook_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0407_Alice_Fallbrook_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0404_Robochild_Bots.T_0404_Robochild_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0404_Robochild_Bots_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0404_Robochild.T_0404_Robochild_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0404_Robochild_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0404_CascadiaLab_Bots.T_0404_CascadiaLab_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0404_CascadiaLab_Bots_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0403_Zora.T_0403_Zora_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0403_Zora_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0403_Graham.T_0403_Graham_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0403_Graham_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/T_0401_SyndicateThugs.T_0401_SyndicateThugs_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0401_SyndicateThugs_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0209_Forgotten_Lab/T_0209_Friends.T_0209_Friends_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0209_Friends_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_TA_0206_OgdanCoe.T_TA_0206_OgdanCoe_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_TA_0206_OgdanCoe_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_TA_0206_Marauders.T_TA_0206_Marauders_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_TA_0206_Marauders_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_TA_0206_Kat.T_TA_0206_Kat_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_TA_0206_Kat_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Whimbrel_Crew.T_0206_Whimbrel_Crew_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Whimbrel_Crew_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Trask.T_0206_Trask_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Trask_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_SpacersChoice_Guards.T_0206_SpacersChoice_Guards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_SpacersChoice_Guards_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Rosana.T_0206_Rosana_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Rosana_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Midway_Townies.T_0206_Midway_Townies_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Midway_Townies_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Midway_Security_Bots.T_0206_Midway_Security_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Midway_Security_Bots_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Midway_Security.T_0206_Midway_Security_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Midway_Security_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Insurance_Agency_Interior.T_0206_Insurance_Agency_Interior_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Insurance_Agency_Interior_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Harlow.T_0206_Harlow_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Harlow_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Hammer_Guards.T_0206_Hammer_Guards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Hammer_Guards_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Hammer_Bots.T_0206_Hammer_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Hammer_Bots_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Felix_Before_Party.T_0206_Felix_Before_Party_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Felix_Before_Party_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0206_Midway/T_0206_Bounty_Hunters.T_0206_Bounty_Hunters_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0206_Bounty_Hunters_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Underground.T_0205_TL_Underground_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0205_TL_Underground_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Security.T_0205_TL_Security_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0205_TL_Security_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Corporate.T_0205_TL_Corporate_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0205_TL_Corporate_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0205_Fairfield/T_0205_TL_Civilians.T_0205_TL_Civilians_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0205_TL_Civilians_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0204_Keystone/T_0204_Keystone_Townie.T_0204_Keystone_Townie_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0204_Keystone_Townie_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0204_Keystone/T_0204_Keystone_Security.T_0204_Keystone_Security_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0204_Keystone_Security_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_TA0202_TailorShopGuards.T_TA0202_TailorShopGuards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_TA0202_TailorShopGuards_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_SQ0202_StashHouse.T_SQ0202_StashHouse_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_SQ0202_StashHouse_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_SQ0202_Alonzo.T_SQ0202_Alonzo_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_SQ0202_Alonzo_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_PQ0202Cartographer.T_PQ0202Cartographer_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_PQ0202Cartographer_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_PQ0202Assassin.T_PQ0202Assassin_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_PQ0202Assassin_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_MinisterGuards.T_MinisterGuards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_MinisterGuards_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_HHCRecords_Guards.T_HHCRecords_Guards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_HHCRecords_Guards_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_HHCRecords_Employees.T_HHCRecords_Employees_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_HHCRecords_Employees_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_FreightPortWorkers.T_FreightPortWorkers_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_FreightPortWorkers_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_FQ_0202_Chartrand_Guards.T_FQ_0202_Chartrand_Guards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_FQ_0202_Chartrand_Guards_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_FQ_0202_Chartrand.T_FQ_0202_Chartrand_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_FQ_0202_Chartrand_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_ExterminatorBots.T_ExterminatorBots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_ExterminatorBots_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_ByzWeaponShopOwner.T_ByzWeaponShopOwner_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_ByzWeaponShopOwner_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_ByzantiumGuards.T_ByzantiumGuards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_ByzantiumGuards_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_BureauOfficeWorkers.T_BureauOfficeWorkers_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_BureauOfficeWorkers_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0234_ER_KillBots.T_0234_ER_KillBots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0234_ER_KillBots_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0234_ER_CleaningBots.T_0234_ER_CleaningBots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0234_ER_CleaningBots_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0233_CameraBot.T_0233_CameraBot_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0233_CameraBot_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0233_Actors.T_0233_Actors_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0233_Actors_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0231_CryoCrazies.T_0231_CryoCrazies_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0231_CryoCrazies_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0231_BureauScientists.T_0231_BureauScientists_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0231_BureauScientists_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0230_ER_TunnelBots.T_0230_ER_TunnelBots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0230_ER_TunnelBots_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0202_Ellies_Parents.T_0202_Ellies_Parents_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0202_Ellies_Parents_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0202_ByzCivilians.T_0202_ByzCivilians_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0202_ByzCivilians_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0202_Byzantium/T_0202_ByzBots.T_0202_ByzBots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0202_ByzBots_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Tug_Captain.T_0201_Tug_Captain_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0201_Tug_Captain_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Damaged_MedBot.T_0201_Damaged_MedBot_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0201_Damaged_MedBot_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Damaged_DartBot.T_0201_Damaged_DartBot_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0201_Damaged_DartBot_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Damaged_AdBot.T_0201_Damaged_AdBot_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0201_Damaged_AdBot_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Coastal_Marauders.T_0201_Coastal_Marauders_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0201_Coastal_Marauders_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_Assassins.T_0201_Assassins_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0201_Assassins_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/02_Teams/0201_Terra_2_Overland/T_0201_AssassinRunAway.T_0201_AssassinRunAway_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_0201_AssassinRunAway_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_TennysonLoyalists.T_TennysonLoyalists_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_TennysonLoyalists_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_SpacerPirates.T_SpacerPirates_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_SpacerPirates_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_MardetGuards.T_MardetGuards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_MardetGuards_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Sickbay_Guard.T_Sickbay_Guard_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Sickbay_Guard_C : public UT_MardetGuards_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_LucasLoyalists.T_LucasLoyalists_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_LucasLoyalists_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_JunleiLoyalists.T_JunleiLoyalists_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_JunleiLoyalists_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_GroundbreakerSyndicate.T_GroundbreakerSyndicate_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_GroundbreakerSyndicate_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Groundbreaker_SC_Vendor.T_Groundbreaker_SC_Vendor_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Groundbreaker_SC_Vendor_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Groundbreaker_Civilians.T_Groundbreaker_Civilians_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Groundbreaker_Civilians_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Groundbreaker_Board.T_Groundbreaker_Board_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Groundbreaker_Board_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/01_Teams/T_Ellie_OutofParty.T_Ellie_OutofParty_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Ellie_OutofParty_C : public UT_Generic_Neutral_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Sophia_Bots.T_Sophia_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Sophia_Bots_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_RobotScout.T_RobotScout_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_RobotScout_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Lab_CleanupCrew.T_Lab_CleanupCrew_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Lab_CleanupCrew_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Soldiers_Outside.T_Geothermal_Soldiers_Outside_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Geothermal_Soldiers_Outside_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Soldiers.T_Geothermal_Soldiers_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Geothermal_Soldiers_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Captain.T_Geothermal_Captain_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Geothermal_Captain_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_Geothermal_Bots.T_Geothermal_Bots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_Geothermal_Bots_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Zoe.T_EV_Zoe_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_Zoe_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_TownResidents.T_EV_TownResidents_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_TownResidents_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_ShipMarauders.T_EV_ShipMarauders_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_ShipMarauders_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_ReedAndGuards.T_EV_ReedAndGuards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_ReedAndGuards_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Parvati.T_EV_Parvati_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_Parvati_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Max.T_EV_Max_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_Max_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_LudwigInEdgewater.T_EV_LudwigInEdgewater_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_LudwigInEdgewater_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_IntroGuards.T_EV_IntroGuards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_IntroGuards_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_IntroErnest.T_EV_IntroErnest_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_IntroErnest_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_GeneratorGuards.T_EV_GeneratorGuards_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_GeneratorGuards_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_Deserters.T_EV_Deserters_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_Deserters_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/00_Teams/T_EV_CaveGuard.T_EV_CaveGuard_C
/// Size: 0x0000 (0x000238 - 0x000238)
class UT_EV_CaveGuard_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/09_Teams/09_SpacersChoice_StorageFacility.09_SpacersChoice_StorageFacility_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U09_SpacersChoice_StorageFacility_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Violette.0701_Violette_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Violette_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Unused_03.0701_Unused_03_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Unused_03_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Unused_02.0701_Unused_02_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Unused_02_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Unsued_05.0701_Unsued_05_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Unsued_05_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_TartarusCommOfficer.0701_TartarusCommOfficer_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_TartarusCommOfficer_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Syndicate_Allies.0701_Syndicate_Allies_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Syndicate_Allies_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_SubLightReinforcements.0701_SubLightReinforcements_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_SubLightReinforcements_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Solitary_Ally.0701_Ref_Solitary_Ally_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Ref_Solitary_Ally_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Prisoners_Hostile.0701_Ref_Prisoners_Hostile_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Ref_Prisoners_Hostile_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Prisoners_Allies.0701_Ref_Prisoners_Allies_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Ref_Prisoners_Allies_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Military_Neutral.0701_Ref_Military_Neutral_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Ref_Military_Neutral_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Military_Hostile.0701_Ref_Military_Hostile_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Ref_Military_Hostile_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Ref_Military_Allies.0701_Ref_Military_Allies_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Ref_Military_Allies_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Prisoners_Neutral.0701_Prisoners_Neutral_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Prisoners_Neutral_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Prisoners_Released.0701_Pit_Prisoners_Released_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Pit_Prisoners_Released_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Prisoners_Hostile.0701_Pit_Prisoners_Hostile_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Pit_Prisoners_Hostile_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Military_Released.0701_Pit_Military_Released_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Pit_Military_Released_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Pit_Military_Hostile.0701_Pit_Military_Hostile_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Pit_Military_Hostile_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Phineas.0701_Phineas_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Phineas_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_MSIReinforcements.0701_MSIReinforcements_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_MSIReinforcements_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_MardetReinforcements.0701_MardetReinforcements_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_MardetReinforcements_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Intake_Robots.0701_Intake_Robots_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Intake_Robots_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Intake_Military_Neutral.0701_Intake_Military_Neutral_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Intake_Military_Neutral_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Intake_Military_HOstile.0701_Intake_Military_Hostile_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Intake_Military_Hostile_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_IconoclastReinforcements.0701_IconoclastReinforcements_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_IconoclastReinforcements_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Docks_Military_Neutral.0701_Docks_Military_Neutral_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Docks_Military_Neutral_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Docks_Military_Hostile.0701_Docks_Military_Hostile_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Docks_Military_Hostile_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Chairman.0701_Chairman_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Chairman_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/07_Teams/0701_Adjutant.0701_Adjutant_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0701_Adjutant_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Sublight_Henchmen.04_Sublight_Henchmen_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_Sublight_Henchmen_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_StellarBay_Residents.04_StellarBay_Residents_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_StellarBay_Residents_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Nyoka_BeforeJoining_Party.04_Nyoka_BeforeJoining_Party_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_Nyoka_BeforeJoining_Party_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_MSI_Default.04_MSI_Default_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_MSI_Default_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Marauder_Default.04_Marauder_Default_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_Marauder_Default_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_IB_Compound_Sentries.04_IB_Compound_Sentries_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_IB_Compound_Sentries_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Hiram.04_Hiram_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_Hiram_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_C3_Crew_Scouts.04_C3_Crew_Scouts_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_C3_Crew_Scouts_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_C3_Crew_Base.04_C3_Crew_Base_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_C3_Crew_Base_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Berthold.04_Berthold_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_Berthold_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Bennett_SB.04_Bennett_SB_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_Bennett_SB_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/04_Anarchists_Default.04_Anarchists_Default_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U04_Anarchists_Default_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0420_IconoclastScouts.0420_IconoclastScouts_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0420_IconoclastScouts_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0410_Archive_Sentries.0410_Archive_Sentries_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0410_Archive_Sentries_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0406_Marauders.0406_Marauders_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0406_Marauders_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0406_Anarchists_Huxley.0406_Anarchists_Huxley_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0406_Anarchists_Huxley_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0406_Anarchists.0406_Anarchists_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0406_Anarchists_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0403_Tucker.0403_Tucker_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0403_Tucker_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0403_Iconoclasts_PostMSIQuest.0403_Iconoclasts_PostMSIQuest_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0403_Iconoclasts_PostMSIQuest_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0403_Anarchists.0403_Anarchists_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0403_Anarchists_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0402_CannibalFamily.0402_CannibalFamily_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0402_CannibalFamily_C : public UTeamData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Merchant_Sublight.0401_Merchant_SubLight_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0401_Merchant_SubLight_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Merchant_MSI.0401_Merchant_MSI_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0401_Merchant_MSI_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Merchant_Iconoclast.0401_Merchant_Iconoclast_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0401_Merchant_Iconoclast_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Marauders_Merchant_MSI.0401_Marauders_Merchant_MSI_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0401_Marauders_Merchant_MSI_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_DPStation_Marauders.0401_DPStation_Marauders_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0401_DPStation_Marauders_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/Teams/Teams/04_Teams/0401_Anarchists_Bridge.0401_Anarchists_Bridge_C
/// Size: 0x0000 (0x000238 - 0x000238)
class U0401_Anarchists_Bridge_C : public UT_Generic_Friendly_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Light_Standard_Ammo.Light_Standard_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class ULight_Standard_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Light_Hollowpoint_Ammo.Light_Hollowpoint_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class ULight_Hollowpoint_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Light_Heartseeker_Ammo.Light_Heartseeker_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class ULight_Heartseeker_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Heavy_Standard_Ammo.Heavy_Standard_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UHeavy_Standard_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Heavy_Shredder_Ammo.Heavy_Shredder_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UHeavy_Shredder_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/Heavy_ArmorPiercing_Ammo.Heavy_ArmorPiercing_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UHeavy_ArmorPiercing_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/ECell_Volatile_Ammo.ECell_Volatile_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UECell_Volatile_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/ECell_Standard_Ammo.ECell_Standard_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UECell_Standard_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/WEAP/Ammo/ECell_Ionized_Ammo.ECell_Ionized_Ammo_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UECell_Ionized_Ammo_C : public UAmmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/Blueprints/Stats/Skills/IndianaSkills_BP.IndianaSkills_BP_C
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UIndianaSkills_BP_C : public UIndianaSkills
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Game/Blueprints/Stats/Attributes/IndianaAttributes_BP.IndianaAttributes_BP_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UIndianaAttributes_BP_C : public UIndianaAttributes
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Game/PointOfNoReturnRollback_BP.PointOfNoReturnRollback_BP_C
/// Size: 0x0000 (0x000110 - 0x000110)
class UPointOfNoReturnRollback_BP_C : public UPointOfNoReturnRollbackData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Game/Blueprints/Game/IndianaFormulas_BP.IndianaFormulas_BP_C
/// Size: 0x0000 (0x000158 - 0x000158)
class UIndianaFormulas_BP_C : public UIndianaFormulas
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

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
/// Size: 0x0000 (0x000140 - 0x000140)
class UBit_Cartridge_C : public UCurrencyItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Game/Blueprints/Game/IndianaGlobals_BP.IndianaGlobals_BP_C
/// Size: 0x0000 (0x000278 - 0x000278)
class UIndianaGlobals_BP_C : public UIndianaGlobals
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
};

/// Class /Game/Blueprints/Game/BP_TutorialManager.BP_TutorialManager_C
/// Size: 0x0000 (0x000280 - 0x000280)
class UBP_TutorialManager_C : public UTutorialManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Game/Blueprints/Item/Pickup_Basic.Pickup_Basic_C
/// Size: 0x0000 (0x000630 - 0x000630)
class APickup_Basic_C : public APickup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
};

/// Class /Game/Blueprints/Game/BP_AudioLogManager.BP_AudioLogManager_C
/// Size: 0x0000 (0x000178 - 0x000178)
class UBP_AudioLogManager_C : public UAudioLogManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Game/Blueprints/Game/IndianaGameInstance_BP.IndianaGameInstance_BP_C
/// Size: 0x0000 (0x000D70 - 0x000D70)
class UIndianaGameInstance_BP_C : public UIndianaGameInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3440;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_AFewBitsMore.Spell_PerkEffect_AFewBitsMore_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_AFewBitsMore_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_TheNegotiator.Spell_PerkEffect_TheNegotiator_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_TheNegotiator_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_SnakeOilSalesman.Spell_PerkEffect_SnakeOilSalesman_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_SnakeOilSalesman_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/CHAR/WeaponAnimationsFPV_BP.WeaponAnimationsFPV_BP_C
/// Size: 0x0000 (0x000460 - 0x000460)
class UWeaponAnimationsFPV_BP_C : public UWeaponAnimationsFPV
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
};

/// Class /Game/Blueprints/Spells/PlayerPassives/Spell_Player_IgnoreMeleeDamageOnDodge.Spell_Player_IgnoreMeleeDamageOnDodge_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Player_IgnoreMeleeDamageOnDodge_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_Player_CinematicPartyInvulnerability.Spell_Player_CinematicPartyInvulnerability_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Player_CinematicPartyInvulnerability_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/AI/Spell_AI_CalledShotIssued.Spell_AI_CalledShotIssued_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_AI_CalledShotIssued_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Player/PlayerCompanionCommandComponent.PlayerCompanionCommandComponent_C
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UPlayerCompanionCommandComponent_C : public UCompanionCommandComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Game/Blueprints/Player/ConversationLighting_BP.ConversationLighting_BP_C
/// Size: 0x0018 (0x000360 - 0x000378)
class AConversationLighting_BP_C : public AConversationLighting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class USpotLightComponent*)                SpeakerLight                                                OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpeakerLight1                                               OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Game/Blueprints/Game/IndianaGameModeFrontEnd.IndianaGameModeFrontEnd_C
/// Size: 0x0008 (0x0003D8 - 0x0003E0)
class AIndianaGameModeFrontEnd_C : public AIndianaGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictAlcohol.Spell_Flaw_AddictAlcohol_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_AddictAlcohol_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/WEAP/Unarmed/Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C
/// Size: 0x0008 (0x000460 - 0x000468)
class UUnarmed_FPV_WeaponAnimations_C : public UWeaponAnimationsFPV_BP_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x460, 8, 0, 0})


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
/// Size: 0x0000 (0x000460 - 0x000460)
class UHndgn_FPV_WeaponAnimations_C : public UWeaponAnimationsFPV_BP_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple_Supernova.CE_LegCripple_Supernova_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_LegCripple_Supernova_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C
/// Size: 0x0028 (0x0001B8 - 0x0001E0)
class UCE_LegCripple_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<FName>)                             Sockets                                                     OFFSET(get<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple.CE_LegCripple_C.ExecuteUbergraph_CE_LegCripple
	// void ExecuteUbergraph_CE_LegCripple(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictDrug.Spell_Flaw_AddictDrug_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_AddictDrug_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictFood.Spell_Flaw_AddictFood_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_AddictFood_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_AddictSmoke.Spell_Flaw_AddictSmoke_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_AddictSmoke_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Drug/Spell_Consumable_SCAdreno.Spell_Consumable_SCAdreno_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Consumable_SCAdreno_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple_Flaw.CE_LegCripple_Flaw_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_LegCripple_Flaw_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_LegCripple_PostProcess.CE_LegCripple_PostProcess_C
/// Size: 0x0000 (0x000208 - 0x000208)
class UCE_LegCripple_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C
/// Size: 0x0028 (0x0001B8 - 0x0001E0)
class UCE_FallCripple_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<FName>)                             Sockets                                                     OFFSET(get<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_FallCripple.CE_FallCripple_C.ExecuteUbergraph_CE_FallCripple
	// void ExecuteUbergraph_CE_FallCripple(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C
/// Size: 0x0018 (0x000188 - 0x0001A0)
class UCE_HackRobot_Visuals_C : public UStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   MIDs                                                        OFFSET(get<T>, {0x190, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ExecuteUbergraph_CE_HackRobot_Visuals
	// void ExecuteUbergraph_CE_HackRobot_Visuals(int32_t EntryPoint);                                                          // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/Blueprints/StatusEffects/Encumbrance/CE_Encumbrance.CE_Encumbrance_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Encumbrance_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T5.ThirstSpell_T5_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UThirstSpell_T5_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T4.ThirstSpell_T4_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UThirstSpell_T4_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T3.ThirstSpell_T3_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UThirstSpell_T3_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T2.ThirstSpell_T2_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UThirstSpell_T2_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ThirstSpell_T1.ThirstSpell_T1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UThirstSpell_T1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T5.HungerSpell_T5_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UHungerSpell_T5_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T4.HungerSpell_T4_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UHungerSpell_T4_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T3.HungerSpell_T3_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UHungerSpell_T3_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T2.HungerSpell_T2_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UHungerSpell_T2_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/HungerSpell_T1.HungerSpell_T1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UHungerSpell_T1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T5.ExhaustionSpell_T5_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UExhaustionSpell_T5_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T4.ExhaustionSpell_T4_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UExhaustionSpell_T4_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T3.ExhaustionSpell_T3_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UExhaustionSpell_T3_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T2.ExhaustionSpell_T2_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UExhaustionSpell_T2_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/Survival/ExhaustionSpell_T1.ExhaustionSpell_T1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UExhaustionSpell_T1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Player/PlayerTTDComponent.PlayerTTDComponent_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UPlayerTTDComponent_C : public UTacticalTimeDilationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Player/PlayerKillCameraComponent.PlayerKillCameraComponent_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UPlayerKillCameraComponent_C : public UKillCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Blueprints/Player/PlayerHighlightComponent.PlayerHighlightComponent_C
/// Size: 0x0000 (0x000138 - 0x000138)
class UPlayerHighlightComponent_C : public UHighlightComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Game/Blueprints/Player/PlayerCalledShotCameraComponent.PlayerCalledShotCameraComponent_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPlayerCalledShotCameraComponent_C : public UCalledShotCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Drug/Drug_SC_Adreno.Drug_SC_Adreno_C
/// Size: 0x0000 (0x000230 - 0x000230)
class UDrug_SC_Adreno_C : public UConsumableItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictSmoke.Flaw_Sys_AddictSmoke_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_AddictSmoke_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictFood.Flaw_Sys_AddictFood_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_AddictFood_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictDrug.Flaw_Sys_AddictDrug_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_AddictDrug_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_AddictAlcohol.Flaw_Sys_AddictAlcohol_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_AddictAlcohol_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/StatusEffects/HackRobot/CE_HackRobot.CE_HackRobot_C
/// Size: 0x0010 (0x0001B8 - 0x0001C8)
class UCE_HackRobot_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(TArray<class UMaterialInstanceDynamic*>)   MIDs                                                        OFFSET(get<T>, {0x1B8, 16, 0, 0})
};

/// Class /Game/Blueprints/Spells/FallingDamage/Spell_Falling_FallCripple.Spell_Falling_FallCripple_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Falling_FallCripple_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Player/FPV_AnimBP2.FPV_AnimBP2_C
/// Size: 0x402A (0x000600 - 0x00462A)
class UFPV_AnimBP2_C : public UFPVAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 17962;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x600, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x608, 48, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x638, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x680, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x6C8, 264, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x7D0, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot2                                         OFFSET(getStruct<T>, {0x7F0, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot3                                         OFFSET(getStruct<T>, {0x838, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x880, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x8A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x8D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x8F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x920, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x948, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x970, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x998, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x9C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x9E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xA10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xA38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xA60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xA88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xAB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0xAD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0xB00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0xB28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0xB50, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0xB78, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0xBF8, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0xC28, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xCA8, 48, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  OFFSET(getStruct<T>, {0xCD8, 24, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xCF0, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xD20, 128, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0xDA0, 192, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xE60, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0xEE0, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xF10, 128, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xF90, 128, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0x1010, 408, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x11A8, 160, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x1248, 408, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x13E0, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x1410, 128, 0, 0})
	SMember(FAnimNode_MakeDynamicAdditive)             AnimGraphNode_MakeDynamicAdditive                           OFFSET(getStruct<T>, {0x1490, 56, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x14C8, 128, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1548, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1610, 128, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x1690, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x16B0, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0x16D0, 264, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x17D8, 128, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace2                     OFFSET(getStruct<T>, {0x1858, 408, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x19F0, 160, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1A90, 128, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        OFFSET(getStruct<T>, {0x1B10, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace3                     OFFSET(getStruct<T>, {0x1BE0, 408, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x1D78, 48, 0, 0})
	SMember(FAnimNode_LocomotionPlay)                  AnimGraphNode_LocomotionPlay                                OFFSET(getStruct<T>, {0x1DA8, 144, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x1E38, 192, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1EF8, 128, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x1F78, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x2040, 128, 0, 0})
	SMember(FAnimNode_MakeDynamicAdditive)             AnimGraphNode_MakeDynamicAdditive1                          OFFSET(getStruct<T>, {0x20C0, 56, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x20F8, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x2178, 48, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x21A8, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x2258, 128, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x22D8, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x23A0, 128, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace4                     OFFSET(getStruct<T>, {0x2420, 408, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x25B8, 160, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2658, 128, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive1                       OFFSET(getStruct<T>, {0x26D8, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace5                     OFFSET(getStruct<T>, {0x27A8, 408, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x2940, 48, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x2970, 176, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x2A20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x2A48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x2A70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x2A98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x2AC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x2AE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x2B10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x2B38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2B60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x2B88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x2BB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x2BD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x2C00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x2C28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x2C50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x2C78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x2CA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x2CC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x2CF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x2D18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x2D40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x2D68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x2D90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x2DB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x2DE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x2E08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x2E30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x2E58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x2E80, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x2EA8, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x2F28, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x2F58, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x2FD8, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x3008, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x3088, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x30B8, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x3138, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x3168, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x31E8, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3218, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x3298, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x32C8, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x3348, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3378, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x33F8, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3428, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x34A8, 48, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x34D8, 24, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x34F0, 48, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x3520, 176, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive2                       OFFSET(getStruct<T>, {0x35D0, 208, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot4                                         OFFSET(getStruct<T>, {0x36A0, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x36E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3710, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3738, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3760, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3788, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x37B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x37D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3800, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x3828, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x3850, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x3878, 240, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x3968, 48, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x3998, 240, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3A88, 48, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x3AB8, 240, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3BA8, 48, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x3BD8, 24, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3BF0, 48, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x3C20, 176, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot5                                         OFFSET(getStruct<T>, {0x3CD0, 72, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK                                     OFFSET(getStruct<T>, {0x3D20, 480, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x3F00, 32, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK1                                    OFFSET(getStruct<T>, {0x3F20, 480, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK2                                    OFFSET(getStruct<T>, {0x4100, 480, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace2                        OFFSET(getStruct<T>, {0x42E0, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0x4300, 264, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive3                       OFFSET(getStruct<T>, {0x4408, 208, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace2                        OFFSET(getStruct<T>, {0x44D8, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot6                                         OFFSET(getStruct<T>, {0x44F8, 72, 0, 0})
	CMember(class UWeaponAnimationsFPV_BP_C*)          WeaponAnimationsBP                                          OFFSET(get<T>, {0x4540, 8, 0, 0})
	CMember(class UWeaponAnimationsFPV_BP_C*)          OriginalWeaponAnimationsBP                                  OFFSET(get<T>, {0x4548, 8, 0, 0})
	CMember(class UWeaponAnimationsFPV_BP_C*)          HolsteredWeaponAnimationsBP                                 OFFSET(get<T>, {0x4550, 8, 0, 0})
	DMember(bool)                                      MovementStateIsInAir                                        OFFSET(get<bool>, {0x4558, 1, 0, 0})
	DMember(bool)                                      MovementStateIsClimbing                                     OFFSET(get<bool>, {0x4559, 1, 0, 0})
	DMember(bool)                                      MovementStateIsSprinting                                    OFFSET(get<bool>, {0x455A, 1, 0, 0})
	DMember(bool)                                      FineAimingJumpTreeEnabled                                   OFFSET(get<bool>, {0x455B, 1, 0, 0})
	DMember(bool)                                      BlockingJumpTreeEnabled                                     OFFSET(get<bool>, {0x455C, 1, 0, 0})
	SMember(FRotator)                                  CameraBoneRotator                                           OFFSET(getStruct<T>, {0x4560, 12, 0, 0})
	CMember(class UBlendSpaceBase*)                    LocomotionBlendSpace                                        OFFSET(get<T>, {0x4570, 8, 0, 0})
	CMember(class UBlendSpaceBase*)                    FineAimLocomotionBlendSpace                                 OFFSET(get<T>, {0x4578, 8, 0, 0})
	CMember(class UBlendSpaceBase*)                    BlockLocomotionBlendSpace                                   OFFSET(get<T>, {0x4580, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  SprintSequence                                              OFFSET(get<T>, {0x4588, 8, 0, 0})
	CMember(class UAimOffsetBlendSpace*)               LookAimOffset                                               OFFSET(get<T>, {0x4590, 8, 0, 0})
	CMember(class UAimOffsetBlendSpace*)               BlockLookAimOffset                                          OFFSET(get<T>, {0x4598, 8, 0, 0})
	CMember(class UAimOffsetBlendSpace*)               FineAimLookAimOffset                                        OFFSET(get<T>, {0x45A0, 8, 0, 0})
	DMember(bool)                                      JumpStart                                                   OFFSET(get<bool>, {0x45A8, 1, 0, 0})
	CMember(class UAnimSequenceBase*)                  JumpStartSequence                                           OFFSET(get<T>, {0x45B0, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  FallingSequence                                             OFFSET(get<T>, {0x45B8, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  JumpEndSequence                                             OFFSET(get<T>, {0x45C0, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  FineAimJumpStartSequence                                    OFFSET(get<T>, {0x45C8, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  FineAimFallingSequence                                      OFFSET(get<T>, {0x45D0, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  FineAimJumpEndSequence                                      OFFSET(get<T>, {0x45D8, 8, 0, 0})
	DMember(float)                                     AdditiveJumpStrength                                        OFFSET(get<float>, {0x45E0, 4, 0, 0})
	CMember(class UAnimSequenceBase*)                  BlockJumpStartSequence                                      OFFSET(get<T>, {0x45E8, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  BlockFallingSequence                                        OFFSET(get<T>, {0x45F0, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  BlockJumpEndSequence                                        OFFSET(get<T>, {0x45F8, 8, 0, 0})
	DMember(bool)                                      SprintStartIsValid                                          OFFSET(get<bool>, {0x4600, 1, 0, 0})
	DMember(bool)                                      SprintEndIsValid                                            OFFSET(get<bool>, {0x4601, 1, 0, 0})
	DMember(float)                                     SmoothedTurnSpeed                                           OFFSET(get<float>, {0x4604, 4, 0, 0})
	DMember(float)                                     SmoothedLookUpSpeed                                         OFFSET(get<float>, {0x4608, 4, 0, 0})
	DMember(float)                                     LocomotionSpeed                                             OFFSET(get<float>, {0x460C, 4, 0, 0})
	DMember(float)                                     HobbledAddditveStrength                                     OFFSET(get<float>, {0x4610, 4, 0, 0})
	DMember(bool)                                      IsSprintBlocked                                             OFFSET(get<bool>, {0x4614, 1, 0, 0})
	DMember(float)                                     WalkAmplitudeSmoothed                                       OFFSET(get<float>, {0x4618, 4, 0, 0})
	DMember(float)                                     CameraBobActive                                             OFFSET(get<float>, {0x461C, 4, 0, 0})
	CMember(class UBlendSpace*)                        HitReactSequence                                            OFFSET(get<T>, {0x4620, 8, 0, 0})
	DMember(bool)                                      IsTransitioningBetweenEquipement                            OFFSET(get<bool>, {0x4628, 1, 0, 0})
	DMember(bool)                                      ValidSprintEnd                                              OFFSET(get<bool>, {0x4629, 1, 0, 0})


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
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UStatComponentBase_C : public URpgStatComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Game/Blueprints/Player/PlayerStatComponent.PlayerStatComponent_C
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPlayerStatComponent_C : public UStatComponentBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_AllForOne.Spell_PerkEffect_AllForOne_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_AllForOne_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Cheetah.Spell_PerkEffect_Cheetah_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Cheetah_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_LoneWolf.Spell_PerkEffect_LoneWolf_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_LoneWolf_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_MaintenanceMan.Spell_PerkEffect_MaintenanceMan_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_MaintenanceMan_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_PackMule.Spell_PerkEffect_PackMule_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_PackMule_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_QuickAndTheDead.Spell_PerkEffect_QuickAndTheDead_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_QuickAndTheDead_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Resilient.Spell_PerkEffect_Resilient_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Resilient_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_SlowTheWorld.Spell_PerkEffect_SlowTheWorld_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_SlowTheWorld_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Strider.Spell_PerkEffect_Strider_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Strider_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Toughness.Spell_PerkEffect_Toughness_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Toughness_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Traveler.Spell_PerkEffect_Traveler_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Traveler_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Harvester.Spell_PerkEffect_Harvester_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Harvester_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Hoarder.Spell_PerkEffect_Hoarder_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Hoarder_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_PackOfPackMules.Spell_PerkEffect_PackOfPackMules_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_PackOfPackMules_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_RollingThunder.Spell_PerkEffect_RollingThunder_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_RollingThunder_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_RunAndGun.Spell_PerkEffect_RunAndGun_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_RunAndGun_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Scanner.Spell_PerkEffect_Scanner_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Scanner_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Soliloquy.Spell_PerkEffect_Soliloquy_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Soliloquy_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_SpeedDemon.Spell_PerkEffect_SpeedDemon_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_SpeedDemon_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_TacticalAgility.Spell_PerkEffect_TacticalAgility_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_TacticalAgility_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_TheCollector.Spell_PerkEffect_TheCollector_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_TheCollector_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_TheReaper.Spell_PerkEffect_TheReaper_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_TheReaper_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_WeBandOfBrothers.Spell_PerkEffect_WeBandOfBrothers_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_WeBandOfBrothers_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_WeirdScience.Spell_PerkEffect_WeirdScience_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_WeirdScience_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ArmorMaster.Spell_PerkEffect_ArmorMaster_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_ArmorMaster_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_BoomHeadshot.Spell_PerkEffect_BoomHeadshot_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_BoomHeadshot_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_DontGoDyinOnMe.Spell_PerkEffect_DontGoDyinOnMe_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_DontGoDyinOnMe_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/PenetratingShots/CE_PenetratingShots.CE_PenetratingShots_C
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UCE_PenetratingShots_C : public UArmorStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_PenetratingShots.Spell_PerkEffect_PenetratingShots_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_PenetratingShots_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_Revenge.Spell_PerkEffect_Revenge_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Revenge_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_SoloSneaker.Spell_PerkEffect_SoloSneaker_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_SoloSneaker_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_SteadyHand.Spell_PerkEffect_SteadyHand_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_SteadyHand_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_SuperPackMule.Spell_PerkEffect_SuperPackMule_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_SuperPackMule_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ThickSkin.Spell_PerkEffect_ThickSkin_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_ThickSkin_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_TitForTat.Spell_PerkEffect_TitForTat_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_TitForTat_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_WildScience.Spell_PerkEffect_WildScience_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_WildScience_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/NRay/Spell_NRay_TargetEffect.Spell_NRay_TargetEffect_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_NRay_TargetEffect_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_Scope.RangedMod_Sight_Scope_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Sight_Scope_C : public URangedSightMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_PostResistance.RangedMod_Sight_PostResistance_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Sight_PostResistance_C : public URangedSightMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_NRayDamage.RangedMod_Magazine_NRayDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Magazine_NRayDamage_C : public URangedMagazineMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_CorrodeDamage.RangedMod_Magazine_CorrodeDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Magazine_CorrodeDamage_C : public URangedMagazineMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_RateOfFire.RangedMod_Barrel_RateOfFire_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Barrel_RateOfFire_C : public URangedBarrelMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_Accuracy.RangedMod_Barrel_Accuracy_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Barrel_Accuracy_C : public URangedBarrelMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_CritChance.MeleeMod_Grip_CritChance_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Grip_CritChance_C : public UMeleeGripMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_ShockDamage.MeleeMod_Atk_ShockDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Atk_ShockDamage_C : public UMeleeAttackMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_NRayDamage.MeleeMod_Atk_NRayDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Atk_NRayDamage_C : public UMeleeAttackMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_ATK_CorrodeDamage.MeleeMod_ATK_CorrodeDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_ATK_CorrodeDamage_C : public UMeleeAttackMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Audio/Footsteps/__FootstepSFX_Global.__FootstepSFX_Global_C
/// Size: 0x0000 (0x000148 - 0x000148)
class U__FootstepSFX_Global_C : public UFootstepAudio
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Alcohol.CE_Withdrawal_Alcohol_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Withdrawal_Alcohol_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Drug.CE_Withdrawal_Drug_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Withdrawal_Drug_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Food.CE_Withdrawal_Food_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Withdrawal_Food_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/Withdrawal/CE_Withdrawal_Smoke.CE_Withdrawal_Smoke_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Withdrawal_Smoke_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_Range.RangedMod_Sight_Range_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Sight_Range_C : public URangedSightMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Sight_Aim.RangedMod_Sight_Aim_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Sight_Aim_C : public URangedSightMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_ShockDamage.RangedMod_Magazine_ShockDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Magazine_ShockDamage_C : public URangedMagazineMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_MagSize.RangedMod_Magazine_MagSize_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Magazine_MagSize_C : public URangedMagazineMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Magazine_EnergyDamage.RangedMod_Magazine_EnergyDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Magazine_EnergyDamage_C : public URangedMagazineMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_Silencer.RangedMod_Barrel_Silencer_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Barrel_Silencer_C : public URangedBarrelMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Ranged/RangedMod_Barrel_CritDamage.RangedMod_Barrel_CritDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class URangedMod_Barrel_CritDamage_C : public URangedBarrelMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_Toughness.MeleeMod_Grip_Toughness_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Grip_Toughness_C : public UMeleeGripMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_Atk_Speed.MeleeMod_Grip_Atk_Speed_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Grip_Atk_Speed_C : public UMeleeGripMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_PwrAtkDmg.MeleeMod_Atk_PwrAtkDmg_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Atk_PwrAtkDmg_C : public UMeleeAttackMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Atk_PlasmaDamage.MeleeMod_Atk_PlasmaDamage_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Atk_PlasmaDamage_C : public UMeleeAttackMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Cold.ArmorMod_Armor_Cold_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Cold_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Cold_T2.ArmorMod_Armor_Cold_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Cold_T2_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/StatusEffects/Precision/CE_Precision.CE_Precision_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Precision_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_Precision.Spell_PerkEffect_Precision_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Precision_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_Confidence.Spell_PerkEffect_Confidence_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Confidence_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_LastStand.Spell_PerkEffect_LastStand_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_LastStand_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_TacticalMaster.Spell_PerkEffect_TacticalMaster_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_TacticalMaster_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Item/Mods/Melee/MeleeMod_Grip_Silencer.MeleeMod_Grip_Silencer_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UMeleeMod_Grip_Silencer_C : public UMeleeGripMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/Audio/Footsteps/_FootstepSFX_HumanSmall._FootstepSFX_HumanSmall_C
/// Size: 0x0000 (0x000148 - 0x000148)
class U_FootstepSFX_HumanSmall_C : public U__FootstepSFX_Global_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Game/Blueprints/Audio/Footsteps/Pitched/FootstepSFX_Small+2.FootstepSFX_Small+2_C
/// Size: 0x0000 (0x000148 - 0x000148)
class UFootstepSFX_Small_2_C : public U_FootstepSFX_HumanSmall_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_WildScience.Perk_T3_WildScience_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_WildScience_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_TitForTat.Perk_T3_TitForTat_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_TitForTat_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ThickSkin.Perk_T3_ThickSkin_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_ThickSkin_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_TacticalMaster.Perk_T3_TacticalMaster_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_TacticalMaster_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_SuperPackMule.Perk_T3_SuperPackMule_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_SuperPackMule_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_SteadyHand.Perk_T3_SteadyHand_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_SteadyHand_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_SoloSneaker.Perk_T3_SoloSneaker_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_SoloSneaker_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_Revenge.Perk_T3_Revenge_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_Revenge_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_PenetratingShots.Perk_T3_PenetratingShots_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_PenetratingShots_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_LastStand.Perk_T3_LastStand_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_LastStand_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_DontGoDyinOnMe.Perk_T3_DontGoDyinOnMe_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_DontGoDyinOnMe_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_Confidence.Perk_T3_Confidence_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_Confidence_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_BoomHeadshot.Perk_T3_BoomHeadshot_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_BoomHeadshot_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ArmorMaster.Perk_T3_ArmorMaster_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_ArmorMaster_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_WeirdScience.Perk_T2_WeirdScience_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_WeirdScience_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_WeBandOfBrothers.Perk_T2_WeBandOfBrothers_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_WeBandOfBrothers_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_TheReaper.Perk_T2_TheReaper_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_TheReaper_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_TheCollector.Perk_T2_TheCollector_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_TheCollector_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_TacticalAgility.Perk_T2_TacticalAgility_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_TacticalAgility_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_SpeedDemon.Perk_T2_SpeedDemon_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_SpeedDemon_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Soliloquy.Perk_T2_Soliloquy_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_Soliloquy_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Scanner.Perk_T2_Scanner_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_Scanner_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_RunAndGun.Perk_T2_RunAndGun_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_RunAndGun_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_RollingThunder.Perk_T2_RollingThunder_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_RollingThunder_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_PackOfPackMules.Perk_T2_PackOfPackMules_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_PackOfPackMules_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Hoarder.Perk_T2_Hoarder_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_Hoarder_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Harvester.Perk_T2_Harvester_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_Harvester_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Traveler.Perk_T1_Traveler_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_Traveler_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Toughness.Perk_T1_Toughness_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_Toughness_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Strider.Perk_T1_Strider_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_Strider_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_SlowTheWorld.Perk_T1_SlowTheWorld_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_SlowTheWorld_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Resilient.Perk_T1_Resilient_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_Resilient_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_QuickAndTheDead.Perk_T1_QuickAndTheDead_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_QuickAndTheDead_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Precision.Perk_T1_Precision_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_Precision_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_PackMule.Perk_T1_PackMule_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_PackMule_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_MaintenanceMan.Perk_T1_MaintenanceMan_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_MaintenanceMan_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_LoneWolf.Perk_T1_LoneWolf_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_LoneWolf_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_Cheetah.Perk_T1_Cheetah_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_Cheetah_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_AllForOne.Perk_T1_AllForOne_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_AllForOne_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/StatusEffects/HackRobot/CE_DoubleHackRobot.CE_DoubleHackRobot_C
/// Size: 0x0010 (0x0001B8 - 0x0001C8)
class UCE_DoubleHackRobot_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(TArray<class UMaterialInstanceDynamic*>)   MIDs                                                        OFFSET(get<T>, {0x1B8, 16, 0, 0})
};

/// Class /Game/Blueprints/StatusEffects/Encumbrance/CE_Encumbrance_PermLegCripple.CE_Encumbrance_PermLegCripple_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Encumbrance_PermLegCripple_C : public UCE_Encumbrance_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/EncumbranceEffects/Spell_Encumbrance.Spell_Encumbrance_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Encumbrance_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Player/PlayerTimeDilationComponent.PlayerTimeDilationComponent_C
/// Size: 0x0019 (0x000188 - 0x0001A1)
class UPlayerTimeDilationComponent_C : public UTimeDilationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 417;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	DMember(bool)                                      TTD                                                         OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(float)                                     DefaultChromaticAberration                                  OFFSET(get<float>, {0x194, 4, 0, 0})
	CMember(class ABP_DynamicTOD_C*)                   DynamicTOD                                                  OFFSET(get<T>, {0x198, 8, 0, 0})
	DMember(bool)                                      bChromaticAberrationWasReset                                OFFSET(get<bool>, {0x1A0, 1, 0, 0})


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
/// Size: 0x0044 (0x0003A8 - 0x0003EC)
class UPC_Sound_C : public UIndianaPlayerAudioComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1004;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3A8, 8, 0, 0})
	CMember(TArray<class UAkAudioBank*>)               ForceLoadBankArray                                          OFFSET(get<T>, {0x3B0, 16, 0, 0})
	DMember(float)                                     Vis_MaxRange                                                OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(bool)                                      Vis_CharacterEmitters                                       OFFSET(get<bool>, {0x3C4, 1, 0, 0})
	DMember(bool)                                      Vis_AmbientEmitters                                         OFFSET(get<bool>, {0x3C5, 1, 0, 0})
	DMember(bool)                                      Vis_EmitterNameData                                         OFFSET(get<bool>, {0x3C6, 1, 0, 0})
	DMember(bool)                                      Vis_AssociatedEventData                                     OFFSET(get<bool>, {0x3C7, 1, 0, 0})
	DMember(bool)                                      Vis_DistanceData                                            OFFSET(get<bool>, {0x3C8, 1, 0, 0})
	SMember(FLinearColor)                              Vis_CharacterDataColor                                      OFFSET(getStruct<T>, {0x3CC, 16, 0, 0})
	SMember(FLinearColor)                              Vis_AmbientDataColor                                        OFFSET(getStruct<T>, {0x3DC, 16, 0, 0})


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
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_SnakeOilSalesman_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_TheNegotiator.Perk_T1_TheNegotiator_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_TheNegotiator_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_AFewBitsMore.Perk_T1_AFewBitsMore_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_AFewBitsMore_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/DamageTypes/Cold_DamageType.Cold_DamageType_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCold_DamageType_C : public UBase_DamageType_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Player/IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C
/// Size: 0x00D8 (0x0017C0 - 0x001898)
class AIndianaPlayerCharacter_BP_C : public AIndianaPlayerCharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6296;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x17C0, 8, 0, 0})
	CMember(class UForcedAnimationComponent*)          ForcedAnimation                                             OFFSET(get<T>, {0x17C8, 8, 0, 0})
	CMember(class USphereComponent*)                   QuickMeleeCollisionEnd                                      OFFSET(get<T>, {0x17D0, 8, 0, 0})
	CMember(class USphereComponent*)                   QuickMeleeCollisionStart                                    OFFSET(get<T>, {0x17D8, 8, 0, 0})
	CMember(class UIdleCameraComponent*)               IdleCamera                                                  OFFSET(get<T>, {0x17E0, 8, 0, 0})
	CMember(class UMedKitComponent*)                   MedKit                                                      OFFSET(get<T>, {0x17E8, 8, 0, 0})
	CMember(class UPlayerAppearanceComponent*)         PlayerAppearance                                            OFFSET(get<T>, {0x17F0, 8, 0, 0})
	CMember(class UPlayerStatComponent_C*)             PlayerStatComponent                                         OFFSET(get<T>, {0x17F8, 8, 0, 0})
	CMember(class UCompanionMoveToWC_3D_C*)            CompanionMoveToWC_3D                                        OFFSET(get<T>, {0x1800, 8, 0, 0})
	CMember(class UCineCameraComponent*)               CinematicConversationCamera                                 OFFSET(get<T>, {0x1808, 8, 0, 0})
	CMember(class UEquipmentComponent*)                Equipment                                                   OFFSET(get<T>, {0x1810, 8, 0, 0})
	CMember(class UEnemyScannerComponent*)             EnemyScanner                                                OFFSET(get<T>, {0x1818, 8, 0, 0})
	CMember(class UPlayerShoutComponent*)              PlayerShout                                                 OFFSET(get<T>, {0x1820, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  CollisionLegs                                               OFFSET(get<T>, {0x1828, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  CollisionChest                                              OFFSET(get<T>, {0x1830, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  CollisionLeftArm                                            OFFSET(get<T>, {0x1838, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  CollisionRightArm                                           OFFSET(get<T>, {0x1840, 8, 0, 0})
	CMember(class USphereComponent*)                   CollisionHead                                               OFFSET(get<T>, {0x1848, 8, 0, 0})
	CMember(class UPlayerDeathComponent*)              PlayerDeath                                                 OFFSET(get<T>, {0x1850, 8, 0, 0})
	CMember(class UPlayerHealthComponent*)             PlayerHealth                                                OFFSET(get<T>, {0x1858, 8, 0, 0})
	DMember(float)                                     Flash                                                       OFFSET(get<float>, {0x1860, 4, 0, 0})
	DMember(bool)                                      Dead                                                        OFFSET(get<bool>, {0x1864, 1, 0, 0})
	DMember(float)                                     MPC_Value                                                   OFFSET(get<float>, {0x1868, 4, 0, 0})
	DMember(float)                                     Stealth_Transition                                          OFFSET(get<float>, {0x186C, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MID_Vignette                                                OFFSET(get<T>, {0x1870, 8, 0, 0})
	SMember(FGlobalVariable)                           SpectrumVodkaVariables                                      OFFSET(getStruct<T>, {0x1878, 16, 0, 0})
	CMember(TArray<class UClass*>)                     AllVodkaItems                                               OFFSET(get<T>, {0x1888, 16, 0, 0})


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
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_ThugKit_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_TechKit.ArmorMod_Skill_TechKit_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_TechKit_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_SilverTongue.ArmorMod_Skill_SilverTongue_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_SilverTongue_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_HunterKit.ArmorMod_Skill_HunterKit_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_HunterKit_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Physical.ArmorMod_Armor_Physical_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Physical_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_SprintSTACost.ArmorMod_Utility_SprintSTACost_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Utility_SprintSTACost_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_NoiseReduction.ArmorMod_Utility_NoiseReduction_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Utility_NoiseReduction_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_Movement.ArmorMod_Utility_Movement_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Utility_Movement_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_StealthKit.ArmorMod_Skill_StealthKit_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_StealthKit_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Shock.ArmorMod_Armor_Shock_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Shock_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_NRay.ArmorMod_Armor_NRay_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_NRay_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Energy.ArmorMod_Armor_Energy_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Energy_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Corrosion.ArmorMod_Armor_Corrosion_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Corrosion_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Utility_KnockedDownDuration.ArmorMod_Utility_KnockedDownDuration_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Utility_KnockedDownDuration_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_StealthKit_T2.ArmorMod_Skill_StealthKit_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_StealthKit_T2_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Shock_T2.ArmorMod_Armor_Shock_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Shock_T2_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_NRay_T2.ArmorMod_Armor_NRay_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_NRay_T2_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Energy_T2.ArmorMod_Armor_Energy_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Energy_T2_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Corrosion_T2.ArmorMod_Armor_Corrosion_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Corrosion_T2_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_AutoATPInjector.XFH_Spell_ModEffect_AutoATPInjector_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UXFH_Spell_ModEffect_AutoATPInjector_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_ElectroFlashLens.XFH_Spell_ModEffect_ElectroFlashLens_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UXFH_Spell_ModEffect_ElectroFlashLens_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_KineticPulse.XFH_Spell_ModEffect_KineticPulse_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UXFH_Spell_ModEffect_KineticPulse_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/XFH_Spell_ModEffect_ReflexPhobiaAmp.XFH_Spell_ModEffect_ReflexPhobiaAmp_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UXFH_Spell_ModEffect_ReflexPhobiaAmp_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/ConcentratedFire/CE_ConcentratedFire.CE_ConcentratedFire_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_ConcentratedFire_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire_FakeBuff.Spell_PerkEffect_ConcentratedFire_FakeBuff_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_ConcentratedFire_FakeBuff_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire_ClearBonus.Spell_PerkEffect_ConcentratedFire_ClearBonus_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_ConcentratedFire_ClearBonus_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire_BonusDmgOnTarget.Spell_PerkEffect_ConcentratedFire_BonusDmgOnTarget_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_ConcentratedFire_BonusDmgOnTarget_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/HerniatedDisk/CE_HerniatedDisk.CE_HerniatedDisk_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_HerniatedDisk_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Herniated_Disk_P.Spell_Flaw_Herniated_Disk_P_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Herniated_Disk_P_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_ThugKit_T2.ArmorMod_Skill_ThugKit_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_ThugKit_T2_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_TechKit_T2.ArmorMod_Skill_TechKit_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_TechKit_T2_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_SilverTongue_T2.ArmorMod_Skill_SilverTongue_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_SilverTongue_T2_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Skill_HunterKit_T2.ArmorMod_Skill_HunterKit_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Skill_HunterKit_T2_C : public UArmorModDampening
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Armor_Physical_T2.ArmorMod_Armor_Physical_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Armor_Physical_T2_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/StatusEffects/Paranoid/CE_Paranoid.CE_Paranoid_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UCE_Paranoid_C : public UStatModifierStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Paranoid_RestrictedArea.Spell_Flaw_Paranoid_RestrictedArea_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Paranoid_RestrictedArea_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Paranoid_Crouch.Spell_Flaw_Paranoid_Crouch_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Paranoid_Crouch_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Drink/Spell_Consumable_Alcohol_Hangover.Spell_Consumable_Alcohol_Hangover_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Consumable_Alcohol_Hangover_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Alcohol/CE_Hangover.CE_Hangover_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Hangover_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_FieldAggregator.Spell_ModEffect_FieldAggregator_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_ModEffect_FieldAggregator_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_ElectroSurface.Spell_ModEffect_ElectroSurface_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_ModEffect_ElectroSurface_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_ShieldProjector.Spell_ModEffect_ShieldProjector_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_ModEffect_ShieldProjector_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/ModEffects/Spell_ModEffect_AdrenoStimulator.Spell_ModEffect_AdrenoStimulator_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_ModEffect_AdrenoStimulator_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Farsighted.Spell_Flaw_Farsighted_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Farsighted_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Nearsighted.Spell_Flaw_Nearsighted_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Nearsighted_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Paranoid.Spell_Flaw_Paranoid_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Paranoid_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C
/// Size: 0x0588 (0x000208 - 0x000790)
class UCE_Blinding_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x210, 4, 0, 0})
	SMember(FPostProcessSettings)                      Player_Default_PP_Settings                                  OFFSET(getStruct<T>, {0x220, 1392, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding_PostProcess.CE_Blinding_PostProcess_C.ExecuteUbergraph_CE_Blinding_PostProcess
	// void ExecuteUbergraph_CE_Blinding_PostProcess(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermBlind.Spell_Flaw_PermBlind_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PermBlind_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C
/// Size: 0x0018 (0x0001B8 - 0x0001D0)
class UCE_Blinding_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Blind/CE_Blinding.CE_Blinding_C.ExecuteUbergraph_CE_Blinding
	// void ExecuteUbergraph_CE_Blinding(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C
/// Size: 0x0588 (0x000208 - 0x000790)
class UCE_Concuss_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x210, 4, 0, 0})
	SMember(FPostProcessSettings)                      Player_Default_PP_Settings                                  OFFSET(getStruct<T>, {0x220, 1392, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_PostProcess.CE_Concuss_PostProcess_C.ExecuteUbergraph_CE_Concuss_PostProcess
	// void ExecuteUbergraph_CE_Concuss_PostProcess(int32_t EntryPoint);                                                        // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermConcuss.Spell_Flaw_PermConcuss_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PermConcuss_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C
/// Size: 0x0018 (0x0001B8 - 0x0001D0)
class UCE_Concuss_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Concuss/CE_Concuss.CE_Concuss_C.ExecuteUbergraph_CE_Concuss
	// void ExecuteUbergraph_CE_Concuss(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_Supernova.CE_Concuss_Supernova_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UCE_Concuss_Supernova_C : public UCE_Concuss_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/StatusEffects/Concuss/CE_Concuss_NoStats.CE_Concuss_NoStats_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UCE_Concuss_NoStats_C : public UCE_Concuss_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_GorillianLegCripple.CE_GorillianLegCripple_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_GorillianLegCripple_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermLegCripple.Spell_Flaw_PermLegCripple_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PermLegCripple_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C
/// Size: 0x0028 (0x0001B8 - 0x0001E0)
class UCE_Canid_LegCripple_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<FName>)                             Sockets                                                     OFFSET(get<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/LegCripple/CE_Canid_LegCripple.CE_Canid_LegCripple_C.ExecuteUbergraph_CE_Canid_LegCripple
	// void ExecuteUbergraph_CE_Canid_LegCripple(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Maim/CE_Maim_Post_Process.CE_Maim_Post_Process_C
/// Size: 0x0000 (0x000208 - 0x000208)
class UCE_Maim_Post_Process_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PermMaim.Spell_Flaw_PermMaim_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PermMaim_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Maim/CE_Maim_Supernova.CE_Maim_Supernova_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Maim_Supernova_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C
/// Size: 0x0028 (0x0001B8 - 0x0001E0)
class UCE_Maim_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<FName>)                             Sockets                                                     OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Maim/CE_Maim.CE_Maim_C.ExecuteUbergraph_CE_Maim
	// void ExecuteUbergraph_CE_Maim(int32_t EntryPoint);                                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaCanid.Spell_Flaw_PhobiaCanid_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PhobiaCanid_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaGorillian.Spell_Flaw_PhobiaGorillian_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PhobiaGorillian_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaHeights.Spell_Flaw_PhobiaHeights_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PhobiaHeights_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaInsect.Spell_Flaw_PhobiaInsect_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PhobiaInsect_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaManti.Spell_Flaw_PhobiaManti_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PhobiaManti_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaRaptidon.Spell_Flaw_PhobiaRaptidon_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PhobiaRaptidon_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_PhobiaRobot.Spell_Flaw_PhobiaRobot_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_PhobiaRobot_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToCorrosion.Spell_Flaw_WeakToCorrosion_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_WeakToCorrosion_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToNRay.Spell_Flaw_WeakToNRay_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_WeakToNRay_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToPhysical.Spell_Flaw_WeakToPhysical_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_WeakToPhysical_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToShock.Spell_Flaw_WeakToShock_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_WeakToShock_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToThermal.Spell_Flaw_WeakToThermal_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_WeakToThermal_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Alcohol/CE_Hangover_Wait.CE_Hangover_Wait_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UCE_Hangover_Wait_C : public UCastSpellStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Food/Spell_Consumable_AlcoholBuff.Spell_Consumable_AlcoholBuff_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Consumable_AlcoholBuff_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Chrono_Lethargy.Spell_Flaw_Chrono_Lethargy_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Chrono_Lethargy_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Chronophobia.Spell_Flaw_Chronophobia_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Chronophobia_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_CompulsiveSpender.Spell_Flaw_CompulsiveSpender_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_CompulsiveSpender_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Decidophobia.Spell_Flaw_Decidophobia_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Decidophobia_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Disposophobia.Spell_Flaw_Disposophobia_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Disposophobia_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_GuiltRidden.Spell_Flaw_GuiltRidden_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_GuiltRidden_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Specific/Spell_Flaw_Herniated_Disk.Spell_Flaw_Herniated_Disk_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_Herniated_Disk_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/FlawEffects/Systemic/Spell_Flaw_WeakToCold.Spell_Flaw_WeakToCold_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Flaw_WeakToCold_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Phobia/CE_Phobia.CE_Phobia_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Phobia_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/Phobia/CE_Phobia_Disposophobia.CE_Phobia_Disposophobia_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Phobia_Disposophobia_C : public UCE_Phobia_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToThermal.Flaw_Sys_WeakToThermal_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_WeakToThermal_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToShock.Flaw_Sys_WeakToShock_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_WeakToShock_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToPhysical.Flaw_Sys_WeakToPhysical_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_WeakToPhysical_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToNRay.Flaw_Sys_WeakToNRay_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_WeakToNRay_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToCorrosion.Flaw_Sys_WeakToCorrosion_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_WeakToCorrosion_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_WeakToCold.Flaw_Sys_WeakToCold_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_WeakToCold_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaRobot.Flaw_Sys_PhobiaRobot_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PhobiaRobot_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaRaptidon.Flaw_Sys_PhobiaRaptidon_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PhobiaRaptidon_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaManti.Flaw_Sys_PhobiaManti_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PhobiaManti_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaInsect.Flaw_Sys_PhobiaInsect_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PhobiaInsect_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaHeights.Flaw_Sys_PhobiaHeights_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PhobiaHeights_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaGorillian.Flaw_Sys_PhobiaGorillian_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PhobiaGorillian_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PhobiaCanid.Flaw_Sys_PhobiaCanid_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PhobiaCanid_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermMaim.Flaw_Sys_PermMaim_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PermMaim_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermLegCripple.Flaw_Sys_PermLegCripple_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PermLegCripple_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermConcuss.Flaw_Sys_PermConcuss_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PermConcuss_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Systemic/Flaw_Sys_PermBlind.Flaw_Sys_PermBlind_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Sys_PermBlind_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Paranoid.Flaw_Spec_Paranoid_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Paranoid_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Nearsighted.Flaw_Spec_Nearsighted_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Nearsighted_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Herniated_Disk.Flaw_Spec_Herniated_Disk_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Herniated_Disk_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_GuiltRidden.Flaw_Spec_GuiltRidden_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_GuiltRidden_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Farsighted.Flaw_Spec_Farsighted_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Farsighted_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Disposophobia.Flaw_Spec_Disposophobia_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Disposophobia_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Decidophobia.Flaw_Spec_Decidophobia_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Decidophobia_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_CompulsiveSpender.Flaw_Spec_CompulsiveSpender_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_CompulsiveSpender_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Chronophobia.Flaw_Spec_Chronophobia_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Chronophobia_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Flaws/Specific/Flaw_Spec_Chrono_Lethargy.Flaw_Spec_Chrono_Lethargy_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UFlaw_Spec_Chrono_Lethargy_C : public UFlaw
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_AppliedScience.Spell_PerkEffect_AppliedScience_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_AppliedScience_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier1/Spell_PerkEffect_NietzschesReward.Spell_PerkEffect_NietzschesReward_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_NietzschesReward_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_Assassin.Spell_PerkEffect_Assassin_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_Assassin_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier2/Spell_PerkEffect_LoneMaster.Spell_PerkEffect_LoneMaster_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_LoneMaster_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ConcentratedFire.Spell_PerkEffect_ConcentratedFire_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_ConcentratedFire_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/PerkEffects/Tier3/Spell_PerkEffect_ImprovisationWarrior.Spell_PerkEffect_ImprovisationWarrior_1_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_PerkEffect_ImprovisationWarrior_1_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_WalkSpeed.XFH_ArmorMod_Utility_WalkSpeed_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Utility_WalkSpeed_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_SprintSpeed.XFH_ArmorMod_Utility_SprintSpeed_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Utility_SprintSpeed_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_ArmorDegradation.XFH_ArmorMod_Utility_ArmorDegradation_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Utility_ArmorDegradation_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Armor_All.XFH_ArmorMod_Armor_All_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Armor_All_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Utility_CompanionCooldown.XFH_ArmorMod_Utility_CompanionCooldown_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Utility_CompanionCooldown_C : public UArmorModUtility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_ReflexPhobiaAmp.XFH_ArmorMod_Gadget_ReflexPhobiaAmp_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Gadget_ReflexPhobiaAmp_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_KineticPulse.XFH_ArmorMod_Gadget_KineticPulse_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Gadget_KineticPulse_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_ElectroFlashLens.XFH_ArmorMod_Gadget_ElectroFlashLens_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Gadget_ElectroFlashLens_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Gadget_AutoATPInjector.XFH_ArmorMod_Gadget_AutoATPInjector_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Gadget_AutoATPInjector_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/XFH_ArmorMod_Armor_All_T2.XFH_ArmorMod_Armor_All_T2_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UXFH_ArmorMod_Armor_All_T2_C : public UArmorModArmoring
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_SkelAdrenoStim.ArmorMod_Gadget_SkelAdrenoStim_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Gadget_SkelAdrenoStim_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_ReactShield.ArmorMod_Gadget_ReactShield_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Gadget_ReactShield_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_ElectroCharge.ArmorMod_Gadget_ElectroCharge_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Gadget_ElectroCharge_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Item/Mods/Armor/ArmorMod_Gadget_ChronoField.ArmorMod_Gadget_ChronoField_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UArmorMod_Gadget_ChronoField_C : public UArmorModResistance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ImprovisationWarrior.Perk_T3_ImprovisationWarrior_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_ImprovisationWarrior_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier3/Perk_T3_ConcentratedFire.Perk_T3_ConcentratedFire_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T3_ConcentratedFire_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_LoneMaster.Perk_T2_LoneMaster_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_LoneMaster_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier2/Perk_T2_Assassin.Perk_T2_Assassin_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T2_Assassin_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_NietzschesReward.Perk_T1_NietzschesReward_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_NietzschesReward_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Perks/Tier1/Perk_T1_AppliedScience.Perk_T1_AppliedScience_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UPerk_T1_AppliedScience_C : public UPerk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Drink/Drink_Rizzo_SpectrumVodka.Drink_Rizzo_SpectrumVodka_C
/// Size: 0x0000 (0x000230 - 0x000230)
class UDrink_Rizzo_SpectrumVodka_C : public UConsumableItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Class /Game/Blueprints/Player/IndianaPlayerController_BP.IndianaPlayerController_BP_C
/// Size: 0x0000 (0x000680 - 0x000680)
class AIndianaPlayerController_BP_C : public AIndianaPlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Bleed.Spell_WeaponCrit_Bleed_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Bleed_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/WEAP/MeleeHvy/AB_InfernoScythe/AB_InfernoScythe_Weapon_Base.AB_InfernoScythe_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UAB_InfernoScythe_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C
/// Size: 0x0008 (0x0005D0 - 0x0005D8)
class USC_LightPistol_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5D0, 8, 0, 0})


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
/// Size: 0x0038 (0x000208 - 0x000240)
class UCE_Burn_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	DMember(bool)                                      EventDone                                                   OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(class UParticleSystem*)                    CascadeTemplate                                             OFFSET(get<T>, {0x218, 8, 0, 0})
	DMember(bool)                                      UseNiagara                                                  OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     NiagaraTemplate                                             OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NiagaraFX                                                   OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           CascadeFX                                                   OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn_PostProcess.CE_Burn_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn_PostProcess.CE_Burn_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn_PostProcess.CE_Burn_PostProcess_C.ExecuteUbergraph_CE_Burn_PostProcess
	// void ExecuteUbergraph_CE_Burn_PostProcess(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C
/// Size: 0x0008 (0x0001B8 - 0x0001C0)
class UCE_Burn_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Burn/CE_Burn.CE_Burn_C.ExecuteUbergraph_CE_Burn
	// void ExecuteUbergraph_CE_Burn(int32_t EntryPoint);                                                                       // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Burn.Spell_WeaponCrit_Burn_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Burn_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Knockout.Spell_WeaponCrit_Knockout_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Knockout_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Revolver/Ham_TheVermin/Ham_TheVermin_Weapon_Base.Ham_TheVermin_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UHam_TheVermin_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C
/// Size: 0x0008 (0x0005D0 - 0x0005D8)
class UJoch_Flamethrower_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5D0, 8, 0, 0})


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
/// Size: 0x0000 (0x000208 - 0x000208)
class UCE_Execute_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
};

/// Class /Game/Blueprints/StatusEffects/Execute/CE_Execute.CE_Execute_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Execute_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Execute.Spell_WeaponCrit_Execute_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Execute_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/MachineGun/Ham_HMG/Ham_HMG_Weapon_Base.Ham_HMG_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UHam_HMG_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/Ham_DeadEyeAR/Ham_DeadEyeAR_Weapon_Base.Ham_DeadEyeAR_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UHam_DeadEyeAR_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/SC_LightAssaultRifle/SC_LightAssaultRifle_Weapon_Base.SC_LightAssaultRifle_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class USC_LightAssaultRifle_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Stagger.Spell_WeaponCrit_Stagger_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Stagger_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_AssaultRifle/TL_AssaultRifle_Weapon_Base.TL_AssaultRifle_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UTL_AssaultRifle_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_HuntingRifle/TL_HuntingRifle_Weapon_Base.TL_HuntingRifle_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UTL_HuntingRifle_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Knockdown.Spell_WeaponCrit_Knockdown_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Knockdown_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/HitReact/CE_HeavyHitReactUseTimer.CE_HeavyHitReactUseTimer_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UCE_HeavyHitReactUseTimer_C : public UHitReactionStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/StatusEffects/Knockout/CE_Knockout.CE_Knockout_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Knockout_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/StatusEffects/Knockback/CE_Knockback.CE_Knockback_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Knockback_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Knockback.Spell_WeaponCrit_Knockback_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Knockback_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/FlechetteGun/SC_SawedOffFlechette/SC_SawedOffFlechette_Weapon_Base.SC_SawedOffFlechette_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class USC_SawedOffFlechette_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/SC_ImpactHammer/SC_ImpactHammer_Weapon_Base.SC_ImpactHammer_Weapon_Base_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class USC_ImpactHammer_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C
/// Size: 0x0588 (0x000208 - 0x000790)
class UCE_Weaken_PostProcess_C : public UPostProcessStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x210, 4, 0, 0})
	SMember(FPostProcessSettings)                      Player_Default_PP_Settings                                  OFFSET(getStruct<T>, {0x220, 1392, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ExecuteUbergraph_CE_Weaken_PostProcess
	// void ExecuteUbergraph_CE_Weaken_PostProcess(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C
/// Size: 0x0028 (0x0001B8 - 0x0001E0)
class UCE_Weaken_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<FName>)                             Sockets                                                     OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<class UParticleSystemComponent*>)   PSs                                                         OFFSET(get<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C.ReceiveApplyEffect
	// void ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C.ReceiveClearEffect
	// void ReceiveClearEffect(class AActor* Target);                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/StatusEffects/Weaken/CE_Weaken.CE_Weaken_C.ExecuteUbergraph_CE_Weaken
	// void ExecuteUbergraph_CE_Weaken(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final                
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Stagger.Spell_WeaponLoc_Stagger_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponLoc_Stagger_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Groin.Spell_WeaponLoc_Groin_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponLoc_Groin_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Maim.Spell_WeaponLoc_Maim_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponLoc_Maim_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_LegCripple.Spell_WeaponLoc_LegCripple_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponLoc_LegCripple_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Spells/WeaponLocEffects/Spell_WeaponLoc_Blind.Spell_WeaponLoc_Blind_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponLoc_Blind_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Item/MicroMods/Weapon/Ranged/Rang_MMod_None.Rang_MMod_None_C
/// Size: 0x0000 (0x000040 - 0x000040)
class URang_MMod_None_C : public UMicroMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Item/MicroMods/Weapon/Melee/Melee_MMod_None.Melee_MMod_None_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UMelee_MMod_None_C : public UMicroMod
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Spells/WeaponCrits/Spell_WeaponCrit_Stun.Spell_WeaponCrit_Stun_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_WeaponCrit_Stun_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C
/// Size: 0x0008 (0x0005D0 - 0x0005D8)
class UTL_StunBaton_Weapon_Base_C : public UWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5D0, 8, 0, 0})


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
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpUnitCommander_Cleo_T1_C : public UHelmet_CorpUnitCommander_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/StatusEffects/Speedy/CE_Speedy.CE_Speedy_C
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UCE_Speedy_C : public UMultiStatusEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Game/Blueprints/Spells/ConsumableEffects/Drug/Spell_Consumable_Speedy.Spell_Consumable_Speedy_C
/// Size: 0x0000 (0x000190 - 0x000190)
class USpell_Consumable_Speedy_C : public USpell
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Blueprints/Item/Resources/Bypass_Kit.Bypass_Kit_C
/// Size: 0x0000 (0x000140 - 0x000140)
class UBypass_Kit_C : public UResourceItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Game/Blueprints/Item/Consumable/Drug/Drug_SC_DervishMist.Drug_SC_DervishMist_C
/// Size: 0x0000 (0x000230 - 0x000230)
class UDrug_SC_DervishMist_C : public UConsumableItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Class /Game/Blueprints/Armor/Corporate/AuntieCleo/Variants/Helmet_CorpUnitCommander_Cleo_Phy_T1.Helmet_CorpUnitCommander_Cleo_Phy_T1_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UHelmet_CorpUnitCommander_Cleo_Phy_T1_C : public UHelmet_CorpUnitCommander_Cleo_T1_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Blueprints/Armor/Colonist/Smuggler/SmugglerOutfit.SmugglerOutfit_C
/// Size: 0x0000 (0x000370 - 0x000370)
class USmugglerOutfit_C : public USpacer_Armor_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/StunBaton/PD_StunBaton/Variants/TL_StunBaton_Weapon_T1.TL_StunBaton_Weapon_T1_C
/// Size: 0x0000 (0x0005D8 - 0x0005D8)
class UTL_StunBaton_Weapon_T1_C : public UTL_StunBaton_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
};

/// Class /Game/Blueprints/WEAP/MeleeLt/SC_ImpactHammer/Variants/SC_ImpactHammer_Weapon_T1.SC_ImpactHammer_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class USC_ImpactHammer_Weapon_T1_C : public USC_ImpactHammer_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/FlechetteGun/SC_SawedOffFlechette/Variants/SC_SawedOffFlechette_Weapon_T1.SC_SawedOffFlechette_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class USC_SawedOffFlechette_Weapon_T1_C : public USC_SawedOffFlechette_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_HuntingRifle/Variants/TL_Weapon_HuntingRifle_T1.TL_Weapon_HuntingRifle_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UTL_Weapon_HuntingRifle_T1_C : public UTL_HuntingRifle_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/TL_AssaultRifle/Variants/TL_AssaultRifle_Weapon_T1.TL_AssaultRifle_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UTL_AssaultRifle_Weapon_T1_C : public UTL_AssaultRifle_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/SC_LightAssaultRifle/Variants/SC_LightAssaultRifle_Weapon_T1.SC_LightAssaultRifle_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class USC_LightAssaultRifle_Weapon_T1_C : public USC_LightAssaultRifle_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/SC_LightAssaultRifle/Variants/SC_LightAssaultRifle_Uni_EV1_Bursty.SC_LightAssaultRifle_Uni_EV1_Bursty_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class USC_LightAssaultRifle_Uni_EV1_Bursty_C : public USC_LightAssaultRifle_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/LngGn/AssaultRifle/Ham_DeadEyeAR/Variants/Ham_DeadEyeAR_Weapon_T1.Ham_DeadEyeAR_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UHam_DeadEyeAR_Weapon_T1_C : public UHam_DeadEyeAR_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/MachineGun/Ham_HMG/Variants/Ham_HMG_Weapon_T1.Ham_HMG_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UHam_HMG_Weapon_T1_C : public UHam_HMG_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/HvyWpn/Emitter/Joch_Flamethrower/Variants/Joch_Flamethrower_Weapon_T1.Joch_Flamethrower_Weapon_T1_C
/// Size: 0x0000 (0x0005D8 - 0x0005D8)
class UJoch_Flamethrower_Weapon_T1_C : public UJoch_Flamethrower_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Revolver/Ham_TheVermin/Variants/Ham_TheVermin_Weapon_T1.Ham_TheVermin_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UHam_TheVermin_Weapon_T1_C : public UHam_TheVermin_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/WEAP/Hndgn/Pistol/SC_LightPistol/Pistol_Variants/SC_LightPistol_Weapon_T1.SC_LightPistol_Weapon_T1_C
/// Size: 0x0000 (0x0005D8 - 0x0005D8)
class USC_LightPistol_Weapon_T1_C : public USC_LightPistol_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
};

/// Class /Game/Blueprints/WEAP/MeleeHvy/AB_InfernoScythe/Variants/AB_InfernoScythe_Weapon_T1.AB_InfernoScythe_Weapon_T1_C
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UAB_InfernoScythe_Weapon_T1_C : public UAB_InfernoScythe_Weapon_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Game/Blueprints/Player/IndianaPlayerCharacter_BP_TestCharacter.IndianaPlayerCharacter_BP_TestCharacter_C
/// Size: 0x0578 (0x001898 - 0x001E10)
class AIndianaPlayerCharacter_BP_TestCharacter_C : public AIndianaPlayerCharacter_BP_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7696;

public:
	CMember(class UPostProcessComponent*)              PostProcessConversation                                     OFFSET(get<T>, {0x1898, 8, 0, 0})
	SMember(FPostProcessSettings)                      Default_PP_Settings                                         OFFSET(getStruct<T>, {0x18A0, 1392, 0, 0})
};

/// Class /Game/Blueprints/Game/IndianaGameModeStandard.IndianaGameModeStandard_C
/// Size: 0x0008 (0x0003D8 - 0x0003E0)
class AIndianaGameModeStandard_C : public AIndianaGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

