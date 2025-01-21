
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/Overlay.Overlays
/// Size: 0x0000 (0x000030 - 0x000030)
class UOverlays : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0028 (0x000000 - 0x000028)
class FOverlayItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FTimespan)                                 StartTime                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FTimespan)                                 EndTime                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 Position                                                    OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0010 (0x000030 - 0x000040)
class UBasicOverlays : public UOverlays
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FOverlayItem>)                      Overlays                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0058 (0x000030 - 0x000088)
class ULocalizedOverlays : public UOverlays
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UBasicOverlays*)                     DefaultOverlays                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FString, class UBasicOverlays*>)      LocaleToOverlaysMap                                         OFFSET(get<T>, {0x38, 80, 0, 0})
};

