
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Class /Script/OEICommonRuntime.OEICommonProjectSettings
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UOEICommonProjectSettings : public UDeveloperSettings
{ 
public:
	TArray<FString>                                    Packages;                                                   // 0x0040   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UOEICommonProjectSettings) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(offsetof(UOEICommonProjectSettings, Packages) == 0x0040);
