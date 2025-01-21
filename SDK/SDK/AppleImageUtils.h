
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

/// Enum /Script/AppleImageUtils.EAppleTextureType
/// Size: 0x01 (1 bytes)
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown                                                       = 0,
	EAppleTextureType__Image                                                         = 1,
	EAppleTextureType__PixelBuffer                                                   = 2,
	EAppleTextureType__Surface                                                       = 3,
	EAppleTextureType__MetalTexture                                                  = 4
};

/// Enum /Script/AppleImageUtils.ETextureRotationDirection
/// Size: 0x01 (1 bytes)
enum class ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None                                                  = 0,
	ETextureRotationDirection__Left                                                  = 1,
	ETextureRotationDirection__Right                                                 = 2,
	ETextureRotationDirection__Down                                                  = 3,
	ETextureRotationDirection__LeftMirrored                                          = 4,
	ETextureRotationDirection__RightMirrored                                         = 5,
	ETextureRotationDirection__DownMirrored                                          = 6,
	ETextureRotationDirection__UpMirrored                                            = 7
};

/// Struct /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAppleImageUtilsImageConversionResult
{ 
	FString                                            Error;                                                      // 0x0000   (0x0010)  
	TArray<char>                                       ImageData;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,316) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,317) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0058   (0x0010)  MISSED
	FAppleImageUtilsImageConversionResult              ConversionResult;                                           // 0x0068   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x1035750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x1035590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x10353b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
	// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x10351d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AppleImageUtils.AppleImageInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAppleImageInterface : public UInterface
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(FAppleImageUtilsImageConversionResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UAppleImageInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(offsetof(FAppleImageUtilsImageConversionResult, Error) == 0x0000);
static_assert(offsetof(FAppleImageUtilsImageConversionResult, ImageData) == 0x0010);
static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult) == 0x0068);
