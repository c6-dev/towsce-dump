
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

/// Enum /Script/OEIValidation.EValidationLevel
/// Size: 0x01 (1 bytes)
enum class EValidationLevel : uint8_t
{
	EValidationLevel__CriticalError                                                  = 0,
	EValidationLevel__Error                                                          = 1,
	EValidationLevel__Warning                                                        = 2,
	EValidationLevel__Info                                                           = 3
};

/// Class /Script/OEIValidation.AssetValidationCommandlet
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UAssetValidationCommandlet : public UCommandlet
{ 
public:
};

/// Struct /Script/OEIValidation.ValidationInfo
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FValidationInfo
{ 
	class UObject*                                     ValidationObject;                                           // 0x0000   (0x0008)  
	FString                                            ObjectName;                                                 // 0x0008   (0x0010)  
	FString                                            ObjectType;                                                 // 0x0018   (0x0010)  
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	FString                                            PackagePath;                                                // 0x0038   (0x0010)  
	bool                                               TestResult;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0050   (0x0010)  
	TEnumAsByte<EValidationLevel>                      Level;                                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            ReportType;                                                 // 0x0068   (0x0010)  
	TArray<FString>                                    Tags;                                                       // 0x0078   (0x0010)  
	FString                                            OeiLinkEditor;                                              // 0x0088   (0x0010)  
	FString                                            OeiLinkGame;                                                // 0x0098   (0x0010)  
	FString                                            LastModifiedBy;                                             // 0x00A8   (0x0010)  
	FString                                            Version;                                                    // 0x00B8   (0x0010)  
	bool                                               WiP;                                                        // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FString                                            Tool;                                                       // 0x00D0   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UAssetValidationCommandlet) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(FValidationInfo) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(offsetof(FValidationInfo, ValidationObject) == 0x0000);
static_assert(offsetof(FValidationInfo, ObjectName) == 0x0008);
static_assert(offsetof(FValidationInfo, ObjectType) == 0x0018);
static_assert(offsetof(FValidationInfo, Filename) == 0x0028);
static_assert(offsetof(FValidationInfo, PackagePath) == 0x0038);
static_assert(offsetof(FValidationInfo, Message) == 0x0050);
static_assert(offsetof(FValidationInfo, Level) == 0x0060);
static_assert(offsetof(FValidationInfo, ReportType) == 0x0068);
static_assert(offsetof(FValidationInfo, Tags) == 0x0078);
static_assert(offsetof(FValidationInfo, OeiLinkEditor) == 0x0088);
static_assert(offsetof(FValidationInfo, OeiLinkGame) == 0x0098);
static_assert(offsetof(FValidationInfo, LastModifiedBy) == 0x00A8);
static_assert(offsetof(FValidationInfo, Version) == 0x00B8);
static_assert(offsetof(FValidationInfo, Tool) == 0x00D0);
