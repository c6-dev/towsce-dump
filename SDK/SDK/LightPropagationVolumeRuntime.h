
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Renderer

#pragma pack(push, 0x1)

/// Class /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class ULightPropagationVolumeBlendable : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FLightPropagationVolumeSettings                    Settings;                                                   // 0x0038   (0x0040)  
	float                                              BlendWeight;                                                // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ULightPropagationVolumeBlendable) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(offsetof(ULightPropagationVolumeBlendable, Settings) == 0x0038);
