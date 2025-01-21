
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OEIValidation.AssetValidationCommandlet
/// Size: 0x0000 (0x000088 - 0x000088)
class UAssetValidationCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/OEIValidation.ValidationInfo
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FValidationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UObject*)                            ValidationObject                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   ObjectName                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ObjectType                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   PackagePath                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      TestResult                                                  OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TEnumAsByte<EValidationLevel>)             Level                                                       OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FString)                                   ReportType                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   OeiLinkEditor                                               OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   OeiLinkGame                                                 OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   LastModifiedBy                                              OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      WiP                                                         OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FString)                                   Tool                                                        OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
};

/// Enum /Script/OEIValidation.EValidationLevel
/// Size: 0x04
enum class EValidationLevel : uint8_t
{
	EValidationLevel__CriticalError                                                  = 0,
	EValidationLevel__Error                                                          = 1,
	EValidationLevel__Warning                                                        = 2,
	EValidationLevel__Info                                                           = 3
};

