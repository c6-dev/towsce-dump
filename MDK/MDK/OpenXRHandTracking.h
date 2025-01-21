
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLink
/// dependency: LiveLinkInterface

/// Class /Script/OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory
/// Size: 0x0010 (0x000030 - 0x000040)
class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset
/// Size: 0x0058 (0x000030 - 0x000088)
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bHasMetacarpals                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bRetargetRotationOnly                                       OFFSET(get<bool>, {0x31, 1, 0, 0})
	CMember(EQuatSwizzleAxisB)                         SwizzleX                                                    OFFSET(get<T>, {0x32, 1, 0, 0})
	CMember(EQuatSwizzleAxisB)                         SwizzleY                                                    OFFSET(get<T>, {0x33, 1, 0, 0})
	CMember(EQuatSwizzleAxisB)                         SwizzleZ                                                    OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(EQuatSwizzleAxisB)                         SwizzleW                                                    OFFSET(get<T>, {0x35, 1, 0, 0})
	CMember(TMap<FName, FName>)                        HandTrackingBoneNameMap                                     OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Enum /Script/OpenXRHandTracking.EQuatSwizzleAxisB
/// Size: 0x08
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

