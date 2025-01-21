
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Renderer

/// Class /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
/// Size: 0x0050 (0x000030 - 0x000080)
class ULightPropagationVolumeBlendable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FLightPropagationVolumeSettings)           Settings                                                    OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
};

