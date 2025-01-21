
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLink
/// dependency: LiveLinkInterface

#pragma pack(push, 0x1)

/// Enum /Script/OpenXRHandTracking.EQuatSwizzleAxisB
/// Size: 0x01 (1 bytes)
enum class EQuatSwizzleAxisB : uint8_t
{
	EQuatSwizzleAxisB__X                                                             = 0,
	EQuatSwizzleAxisB__Y                                                             = 1,
	EQuatSwizzleAxisB__Z                                                             = 2,
	EQuatSwizzleAxisB__W                                                             = 3,
	EQuatSwizzleAxisB__MinusX                                                        = 4,
	EQuatSwizzleAxisB__MinusY                                                        = 5,
	EQuatSwizzleAxisB__MinusZ                                                        = 6,
	EQuatSwizzleAxisB__MinusW                                                        = 7
};

/// Class /Script/OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
	bool                                               bHasMetacarpals;                                            // 0x0030   (0x0001)  
	bool                                               bRetargetRotationOnly;                                      // 0x0031   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleX;                                                   // 0x0032   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleY;                                                   // 0x0033   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleZ;                                                   // 0x0034   (0x0001)  
	EQuatSwizzleAxisB                                  SwizzleW;                                                   // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	TMap<FName, FName>                                 HandTrackingBoneNameMap;                                    // 0x0038   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkOpenXRHandTrackingSourceFactory) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UOpenXRHandTrackingLiveLinkRemapAsset) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleX) == 0x0032);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleY) == 0x0033);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleZ) == 0x0034);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleW) == 0x0035);
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, HandTrackingBoneNameMap) == 0x0038);
