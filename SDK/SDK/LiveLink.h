
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface
/// dependency: TimeManagement

#pragma pack(push, 0x1)

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x01 (1 bytes)
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04 (4 bytes)
enum class ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2
};

/// Class /Script/LiveLink.LiveLinkRetargetAsset
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULiveLinkRetargetAsset : public UObject
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
public:
	bool                                               bInterpolatePropertyValues;                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0031   (0x0017)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
public:
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0170 (368 bytes) (0x000168 - 0x000170) align 8 MaxSize: 0x0170
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_8[0x1];                                       // 0x0168   (0x0001)  MISSED
	bool                                               bAppendSubjectNameToBones;                                  // 0x0169   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x016A   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
public:
	ELiveLinkAxis                                      FrontAxis;                                                  // 0x0030   (0x0001)  
	ELiveLinkAxis                                      RightAxis;                                                  // 0x0031   (0x0001)  
	ELiveLinkAxis                                      UpAxis;                                                     // 0x0032   (0x0001)  
	bool                                               bUseOffsetPosition;                                         // 0x0033   (0x0001)  
	bool                                               bUseOffsetOrientation;                                      // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FVector                                            OffsetPosition;                                             // 0x0038   (0x000C)  
	FRotator                                           OffsetOrientation;                                          // 0x0044   (0x000C)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames
	// void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);                             // [0x10c75e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName
	// void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name);                                                  // [0x10c74c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	// void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled);                                           // [0x10c71e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	// bool RemoveSource(FLiveLinkSourceHandle& SourceHandle);                                                                  // [0x10c7100] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	// void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                             // [0x10c6e50] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	// int32_t NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle);                                                     // [0x10c6d70] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	// bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);                               // [0x10c6c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	// bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle);                                                            // [0x10c6ba0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	// bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName);                                                         // [0x10c6b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent
	// bool HasParent(FLiveLinkTransform& LiveLinkTransform);                                                                   // [0x10c6a40] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	// void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform); // [0x10c6890] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	// void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, FLiveLinkTransform& LiveLinkTransform); // [0x10c66e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	// class UClass* GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey);                                            // [0x10c6100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	// FText GetSourceType(FLiveLinkSourceHandle& SourceHandle);                                                                // [0x10c5fc0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	// FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle);                                                              // [0x10c5e80] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	// FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle);                                                         // [0x10c5d40] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	// void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);                   // [0x10c5be0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	// bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);                         // [0x10c58f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent
	// void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);                                       // [0x10c5790] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	// void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData);                                   // [0x10c55e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	// TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);              // [0x10c54d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	// class UClass* GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName);                                                  // [0x10c5440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	// TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);                                // [0x10c5370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves
	// void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);                                     // [0x10c5190] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren
	// void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);                           // [0x10c5000] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	// void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);             // [0x10c4e50] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	// bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData);  // [0x10c4a50] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	// bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData);    // [0x10c48a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	// bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, class UClass* Role, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0x10c0750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	// bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, class UClass* Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0x10c0570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	// bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, class UClass* Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0x10c0380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	// bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0x10c0240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	// void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                              // [0x10c45a0] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount
	// int32_t ChildCount(FLiveLinkTransform& LiveLinkTransform);                                                               // [0x10c44d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0190 (400 bytes) (0x000168 - 0x000190) align 8 MaxSize: 0x0190
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0168   (0x0028)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	// bool UpdateVirtualSubjectStaticData_Internal(FLiveLinkBaseStaticData& InStruct);                                         // [0x10c0a10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	// bool UpdateVirtualSubjectFrameData_Internal(FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);           // [0x10c08e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	// void OnUpdate();                                                                                                         // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	// void OnInitialize();                                                                                                     // [0x1c5deb0] Event|Public|BlueprintEvent 
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align 8 MaxSize: 0x0100
class ULiveLinkComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,829) /* FMulticastInlineDelegate */ __um(OnLiveLinkUpdated);                                  // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	// void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0x10c6520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	// void GetSubjectDataAtSceneTime(FName SubjectName, FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0x10c6320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	// void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);                         // [0x10c61b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	// void GetAvailableSubjectNames(TArray<FName>& SubjectNames);                                                              // [0x10c4da0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x00F8 (248 bytes) (0x0000E0 - 0x0000F8) align 8 MaxSize: 0x00F8
class ULiveLinkDrivenComponent : public UActorComponent
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x00E0   (0x0008)  
	FName                                              ActorTransformBone;                                         // 0x00E8   (0x0008)  
	bool                                               bModifyActorTransform;                                      // 0x00F0   (0x0001)  
	bool                                               bSetRelativeLocation;                                       // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00F2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkInstance
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align 16 MaxSize: 0x02D0
class ULiveLinkInstance : public UAnimInstance
{ 
public:
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/LiveLink.LiveLinkInstance.SetSubject
	// void SetSubject(FLiveLinkSubjectName SubjectName);                                                                       // [0x10c73c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkInstance.SetRetargetAsset
	// void SetRetargetAsset(class UClass* RetargetAsset);                                                                      // [0x10c72c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class ULiveLinkMessageBusFinder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	// void GetAvailableProviders(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders); // [0x10c4bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	// class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();                                                            // [0x10c4870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	// void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);                              // [0x10c4710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class ULiveLinkPreset : public UObject
{ 
public:
	TArray<FLiveLinkSourcePreset>                      Sources;                                                    // 0x0030   (0x0010)  
	TArray<FLiveLinkSubjectPreset>                     Subjects;                                                   // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	// void BuildFromClient();                                                                                                  // [0x10c44b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	// bool ApplyToClient();                                                                                                    // [0x10c4480] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	// bool AddToClient(bool bRecreatePresets);                                                                                 // [0x10c43e0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/LiveLink.LiveLinkRemapAsset
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0030   (0x00A0)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkRemapAsset.RemapCurveElements
	// void RemapCurveElements(TMap<FName, float>& CurveItems);                                                                 // [0x10c6fc0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	// FName GetRemappedCurveName(FName CurveName);                                                                             // [0x10c5b40] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
	// FName GetRemappedBoneName(FName BoneName);                                                                               // [0x10c5aa0] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLiveLinkRoleProjectSetting
{ 
	class UClass*                                      Role;                                                       // 0x0000   (0x0008)  
	class UClass*                                      SettingClass;                                               // 0x0008   (0x0008)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0010   (0x0008)  
	TArray<class UClass*>                              FramePreProcessors;                                         // 0x0018   (0x0010)  
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class ULiveLinkSettings : public UObject
{ 
public:
	TArray<FLiveLinkRoleProjectSetting>                DefaultRoleSettings;                                        // 0x0030   (0x0010)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0040   (0x0008)  
	TWeakObjectPtr<class ULiveLinkPreset*>             DefaultLiveLinkPreset;                                      // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED
	FDirectoryPath                                     PresetSaveDir;                                              // 0x0070   (0x0010)  
	float                                              ClockOffsetCorrectionStep;                                  // 0x0080   (0x0004)  
	ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                                // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	double                                             MessageBusPingRequestFrequency;                             // 0x0088   (0x0008)  
	double                                             MessageBusHeartbeatFrequency;                               // 0x0090   (0x0008)  
	double                                             MessageBusHeartbeatTimeout;                                 // 0x0098   (0x0008)  
	double                                             MessageBusTimeBeforeRemovingInactiveSource;                 // 0x00A0   (0x0008)  
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                      // 0x00A8   (0x0008)  
	FLinearColor                                       ValidColor;                                                 // 0x00B0   (0x0010)  
	FLinearColor                                       InvalidColor;                                               // 0x00C0   (0x0010)  
	char                                               TextSizeSource;                                             // 0x00D0   (0x0001)  
	char                                               TextSizeSubject;                                            // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x00D2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x00C8 (200 bytes) (0x000038 - 0x0000C8) align 8 MaxSize: 0x00C8
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
public:
	FLiveLinkSubjectKey                                SubjectKey;                                                 // 0x0038   (0x0018)  
	ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                                 // 0x0050   (0x0004)  
	bool                                               bOverrideFrameRate;                                         // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	FFrameRate                                         OverrideFrameRate;                                          // 0x0058   (0x0008)  
	int32_t                                            BufferSize;                                                 // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x64];                                      // 0x0064   (0x0064)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0040   (0x0048)  MISSED
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
public:
	FName                                              SourceName;                                                 // 0x00A8   (0x0008)  
};

/// Struct /Script/LiveLink.AnimNode_LiveLinkPose
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000050) align 8 MaxSize: 0x0050
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	FLiveLinkSubjectName                               LiveLinkSubjectName;                                        // 0x0020   (0x0008)  
	class UClass*                                      RetargetAsset;                                              // 0x0028   (0x0008)  
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Struct /Script/LiveLink.LiveLinkInstanceProxy
/// Size: 0x07C0 (1984 bytes) (0x000770 - 0x0007C0) align 16 MaxSize: 0x07C0
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{ 
	FAnimNode_LiveLinkPose                             PoseNode;                                                   // 0x0770   (0x0050)  
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FProviderPollResult
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            MachineName;                                                // 0x0020   (0x0010)  
	double                                             MachineTimeOffset;                                          // 0x0030   (0x0008)  
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLiveLinkRetargetAssetReference
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkRetargetAsset) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULiveLinkBasicFrameInterpolationProcessor) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(ULiveLinkAnimationRoleToTransform) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ULiveLinkAnimationVirtualSubject) == 0x0170); // 368 bytes (0x000168 - 0x000170)
static_assert(sizeof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(ULiveLinkBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULiveLinkBlueprintVirtualSubject) == 0x0190); // 400 bytes (0x000168 - 0x000190)
static_assert(sizeof(ULiveLinkComponent) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(ULiveLinkDrivenComponent) == 0x00F8); // 248 bytes (0x0000E0 - 0x0000F8)
static_assert(sizeof(ULiveLinkInstance) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(ULiveLinkMessageBusFinder) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(ULiveLinkMessageBusSourceFactory) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULiveLinkMessageBusSourceSettings) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(ULiveLinkPreset) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(ULiveLinkRemapAsset) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(FLiveLinkRoleProjectSetting) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(ULiveLinkSettings) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(ULiveLinkTimecodeProvider) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(sizeof(ULiveLinkTimeSynchronizationSource) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(ULiveLinkVirtualSubjectSourceSettings) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x0050); // 80 bytes (0x000010 - 0x000050)
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x07C0); // 1984 bytes (0x000770 - 0x0007C0)
static_assert(sizeof(FProviderPollResult) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLiveLinkRetargetAssetReference) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 0x0030);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, FrontAxis) == 0x0030);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, RightAxis) == 0x0031);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, UpAxis) == 0x0032);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetPosition) == 0x0038);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetOrientation) == 0x0044);
static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 0x00E0);
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 0x00E8);
static_assert(offsetof(ULiveLinkInstance, CurrentRetargetAsset) == 0x02C8);
static_assert(offsetof(ULiveLinkPreset, Sources) == 0x0030);
static_assert(offsetof(ULiveLinkPreset, Subjects) == 0x0040);
static_assert(offsetof(FLiveLinkRoleProjectSetting, Role) == 0x0000);
static_assert(offsetof(FLiveLinkRoleProjectSetting, SettingClass) == 0x0008);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor) == 0x0010);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FramePreProcessors) == 0x0018);
static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 0x0030);
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 0x0040);
static_assert(offsetof(ULiveLinkSettings, DefaultLiveLinkPreset) == 0x0048);
static_assert(offsetof(ULiveLinkSettings, PresetSaveDir) == 0x0070);
static_assert(offsetof(ULiveLinkSettings, DefaultMessageBusSourceMode) == 0x0084);
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 0x00B0);
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 0x00C0);
static_assert(offsetof(ULiveLinkTimecodeProvider, SubjectKey) == 0x0038);
static_assert(offsetof(ULiveLinkTimecodeProvider, Evaluation) == 0x0050);
static_assert(offsetof(ULiveLinkTimecodeProvider, OverrideFrameRate) == 0x0058);
static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 0x0038);
static_assert(offsetof(ULiveLinkVirtualSubjectSourceSettings, SourceName) == 0x00A8);
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 0x0020);
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x0028);
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x0030);
static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 0x0770);
static_assert(offsetof(FProviderPollResult, Name) == 0x0010);
static_assert(offsetof(FProviderPollResult, MachineName) == 0x0020);
