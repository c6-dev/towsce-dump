
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

/// Class /Script/FacialAnimation.AudioCurveSourceComponent
/// Size: 0x0910 (2320 bytes) (0x0008D0 - 0x000910) align 16 MaxSize: 0x0910
class UAudioCurveSourceComponent : public UAudioComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x08D0   (0x0008)  MISSED
	FName                                              CurveSourceBindingName;                                     // 0x08D8   (0x0008)  
	float                                              CurveSyncOffset;                                            // 0x08E0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x2C];                                      // 0x08E4   (0x002C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioCurveSourceComponent) == 0x0910); // 2320 bytes (0x0008D0 - 0x000910)
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x08D8);
