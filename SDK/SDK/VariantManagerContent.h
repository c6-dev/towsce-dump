
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

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x01 (1 bytes)
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128
};

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class ULevelVariantSets : public UObject
{ 
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                              // 0x0030   (0x0008)  
	TArray<class UVariantSet*>                         VariantSets;                                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                          // [0xed3240] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                               // [0xed31a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                             // [0xed2d90] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0320 (800 bytes) (0x0002B8 - 0x000320) align 8 MaxSize: 0x0320
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x02B8   (0x0018)  
	TMap<class UBlueprintGeneratedClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;             // 0x02D0   (0x0050)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0xed3f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0xed3e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                        // [0xed36e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                // [0xed2c90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCapturedPropSegment
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x01C0 (448 bytes) (0x000030 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0030   (0x0060)  MISSED
	SDK_UNDEFINED(16,912) /* TArray<Properties> */     __um(Properties);                                           // 0x0090   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x00A0   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00B0   (0x0010)  
	FString                                            FullDisplayString;                                          // 0x00C0   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00D0   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x00D8   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0130   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0140   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0150   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6F];                                      // 0x0151   (0x006F)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                                  // [0xed3340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                              // [0xed2ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                          // [0xed2c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x02E0 (736 bytes) (0x0002B8 - 0x0002E0) align 8 MaxSize: 0x02E0
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x02B8   (0x0018)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x02D0   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x02DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                                  // [0xed33a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                             // [0xed2f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0xed2df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FVariantDependency
{ 
	TWeakObjectPtr<class UVariantSet*>                 VariantSet;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	TWeakObjectPtr<class UVariant*>                    Variant;                                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	bool                                               bEnabled;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0030   (0x0010)  
	FText                                              DisplayText;                                                // 0x0040   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0070   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                         // [0xed3e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0xed3d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xed3b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0xbb4890] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xed3770] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xed3540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0xed3430] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                         // [0xed3370] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0xed2fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                          // [0xed2e70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                            // [0xed2d60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                                  // [0xed2d30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xed2b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);               // [0xed2a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t Index);                                                                         // [0xed2960] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                              // [0xed28c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t Index);                                                                                    // [0xed2830] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0xed2760] Final|Native|Public|HasOutParms 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UVariantObjectBinding : public UObject
{ 
public:
	FString                                            CachedActorLabel;                                           // 0x0030   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0040   (0x0018)  
	TLazyObjectPtr<class UObject*>                     LazyObjectPtr;                                              // 0x0058   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0078   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0088   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UVariantSet : public UObject
{ 
public:
	FText                                              DisplayText;                                                // 0x0030   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0048   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0068   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0xed3de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xed3c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0xbb4890] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xed3970] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xed3610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                   // [0xed30a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                        // [0xed3000] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0xed2fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                    // [0xed2ea0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                                // [0xed2dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xed2bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(ULevelVariantSets) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(ALevelVariantSetsActor) == 0x0320); // 800 bytes (0x0002B8 - 0x000320)
static_assert(sizeof(ULevelVariantSetsFunctionDirector) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FCapturedPropSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPropertyValue) == 0x01C0); // 448 bytes (0x000030 - 0x0001C0)
static_assert(sizeof(UPropertyValueTransform) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(UPropertyValueVisibility) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(UPropertyValueColor) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(UPropertyValueMaterial) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(UPropertyValueOption) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(UPropertyValueSoftObject) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(ASwitchActor) == 0x02E0); // 736 bytes (0x0002B8 - 0x0002E0)
static_assert(sizeof(FVariantDependency) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UVariant) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(FFunctionCaller) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UVariantObjectBinding) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UVariantSet) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(offsetof(ULevelVariantSets, DirectorClass) == 0x0030);
static_assert(offsetof(ULevelVariantSets, VariantSets) == 0x0038);
static_assert(offsetof(ALevelVariantSetsActor, LevelVariantSets) == 0x02B8);
static_assert(offsetof(ALevelVariantSetsActor, DirectorInstances) == 0x02D0);
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x0000);
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x0018);
static_assert(offsetof(UPropertyValue, PropertyIndices) == 0x00A0);
static_assert(offsetof(UPropertyValue, CapturedPropSegments) == 0x00B0);
static_assert(offsetof(UPropertyValue, FullDisplayString) == 0x00C0);
static_assert(offsetof(UPropertyValue, PropertySetterName) == 0x00D0);
static_assert(offsetof(UPropertyValue, PropertySetterParameterDefaults) == 0x00D8);
static_assert(offsetof(UPropertyValue, LeafPropertyClass) == 0x0130);
static_assert(offsetof(UPropertyValue, ValueBytes) == 0x0140);
static_assert(offsetof(UPropertyValue, PropCategory) == 0x0150);
static_assert(offsetof(ASwitchActor, SceneComponent) == 0x02D0);
static_assert(offsetof(FVariantDependency, VariantSet) == 0x0000);
static_assert(offsetof(FVariantDependency, Variant) == 0x0028);
static_assert(offsetof(UVariant, Dependencies) == 0x0030);
static_assert(offsetof(UVariant, DisplayText) == 0x0040);
static_assert(offsetof(UVariant, ObjectBindings) == 0x0070);
static_assert(offsetof(UVariant, Thumbnail) == 0x0080);
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x0000);
static_assert(offsetof(UVariantObjectBinding, CachedActorLabel) == 0x0030);
static_assert(offsetof(UVariantObjectBinding, ObjectPtr) == 0x0040);
static_assert(offsetof(UVariantObjectBinding, LazyObjectPtr) == 0x0058);
static_assert(offsetof(UVariantObjectBinding, CapturedProperties) == 0x0078);
static_assert(offsetof(UVariantObjectBinding, FunctionCallers) == 0x0088);
static_assert(offsetof(UVariantSet, DisplayText) == 0x0030);
static_assert(offsetof(UVariantSet, Variants) == 0x0068);
static_assert(offsetof(UVariantSet, Thumbnail) == 0x0078);
