
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USoundfieldEncodingSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USpatializationPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UReverbPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USoundModulatorBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USoundfieldEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USoundfieldEffectSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class USoundfieldEffectBase : public UObject
{ 
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                   // 0x0030   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(USoundfieldEncodingSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioEndpointSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDummyEndpointSettings) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USpatializationPluginSourceSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundModulatorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundfieldEndpointSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundfieldEffectSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundfieldEffectBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(offsetof(USoundfieldEffectBase, Settings) == 0x0030);
