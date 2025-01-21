
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	// bool ApplyColorSpaceTransform(class UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget); // [0xe410f0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIOColorTransform
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UOpenColorIOColorTransform : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UOpenColorIOConfiguration*)          ConfigurationOwner                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FString)                                   SourceColorSpace                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DestinationColorSpace                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/OpenColorIO.OpenColorIOColorSpace
/// Size: 0x0028 (0x000000 - 0x000028)
class FOpenColorIOColorSpace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ColorSpaceName                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ColorSpaceIndex                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   FamilyName                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Class /Script/OpenColorIO.OpenColorIOConfiguration
/// Size: 0x0058 (0x000030 - 0x000088)
class UOpenColorIOConfiguration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FFilePath)                                 ConfigurationFile                                           OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FOpenColorIOColorSpace>)            DesiredColorSpaces                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UOpenColorIOColorTransform*>) ColorTransforms                                             OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
/// Size: 0x0010 (0x000030 - 0x000040)
class UOpenColorIODisplayExtensionWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	// void SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);                  // [0xe416c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	// void SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction);                            // [0xe415d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	// void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);                               // [0xe414b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	// void RemoveSceneExtension();                                                                                             // [0xe41490] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // [0xe412c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/OpenColorIO.OpenColorIOColorConversionSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FOpenColorIOColorConversionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UOpenColorIOConfiguration*)          ConfigurationSource                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FOpenColorIOColorSpace)                    SourceColorSpace                                            OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FOpenColorIOColorSpace)                    DestinationColorSpace                                       OFFSET(getStruct<T>, {0x30, 40, 0, 0})
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayConfiguration
/// Size: 0x0060 (0x000000 - 0x000060)
class FOpenColorIODisplayConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FOpenColorIOColorConversionSettings)       ColorConfiguration                                          OFFSET(getStruct<T>, {0x8, 88, 0, 0})
};

