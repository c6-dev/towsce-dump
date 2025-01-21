
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000030 - 0x000038)
class USlateWidgetStyleContainerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0050 (0x000030 - 0x000080)
class UFontBulkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UFontFaceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UFontProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000030 - 0x000030)
class USlateTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class USlateWidgetStyleAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class USlateWidgetStyleContainerBase*)     CustomStyle                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class USlateWidgetStyleContainerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
class FMargin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Left                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Top                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Right                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Bottom                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0028 (0x000000 - 0x000028)
class FSlateColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              SpecifiedColor                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<ESlateColorStylingMode>)       ColorUseRule                                                OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x0088 (0x000000 - 0x000088)
class FSlateBrush : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector2D)                                 ImageSize                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FSlateColor)                               TintColor                                                   OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	CMember(class UObject*)                            ResourceObject                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     ResourceName                                                OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FBox2D)                                    UVRegion                                                    OFFSET(getStruct<T>, {0x58, 20, 0, 0})
	CMember(TEnumAsByte<ESlateBrushDrawType>)          DrawAs                                                      OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushTileType>)          Tiling                                                      OFFSET(get<T>, {0x6D, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushMirrorType>)        Mirroring                                                   OFFSET(get<T>, {0x6E, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushImageType>)         ImageType                                                   OFFSET(get<T>, {0x6F, 1, 0, 0})
	DMember(bool)                                      bIsDynamicallyLoaded                                        OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bHasUObject                                                 OFFSET(get<bool>, {0x80, 1, 1, 1})
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FInputEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0058 (0x000018 - 0x000070)
class FPointerEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000018 - 0x000020)
class FCharacterEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0020 (0x000018 - 0x000038)
class FKeyEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000018 - 0x000020)
class FNavigationEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000038 - 0x000040)
class FAnalogInputEvent : public FKeyEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FFontOutlineSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   OutlineSize                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bSeparateFillAlpha                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bApplyOutlineToDropShadows                                  OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(class UObject*)                            OutlineMaterial                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              OutlineColor                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FSlateFontInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UObject*)                            FontObject                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            FontMaterial                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFontOutlineSettings)                      OutlineSettings                                             OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FName)                                     TypefaceFontName                                            OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   Size                                                        OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   LetterSpacing                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
class FSlateWidgetStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x07C0 (0x000008 - 0x0007C8)
class FTableRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	SMember(FSlateBrush)                               SelectorFocusedBrush                                        OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveHoveredBrush                                          OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveBrush                                                 OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveHoveredBrush                                        OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveBrush                                               OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundHoveredBrush                               OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundBrush                                      OFFSET(getStruct<T>, {0x338, 136, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundHoveredBrush                                OFFSET(getStruct<T>, {0x3C0, 136, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundBrush                                       OFFSET(getStruct<T>, {0x448, 136, 0, 0})
	SMember(FSlateColor)                               TextColor                                                   OFFSET(getStruct<T>, {0x4D0, 40, 0, 0})
	SMember(FSlateColor)                               SelectedTextColor                                           OFFSET(getStruct<T>, {0x4F8, 40, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Above                                         OFFSET(getStruct<T>, {0x520, 136, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Onto                                          OFFSET(getStruct<T>, {0x5A8, 136, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Below                                         OFFSET(getStruct<T>, {0x630, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveHighlightedBrush                                      OFFSET(getStruct<T>, {0x6B8, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveHighlightedBrush                                    OFFSET(getStruct<T>, {0x740, 136, 0, 0})
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (0x000000 - 0x000018)
class FSlateSound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            ResourceObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x0270 (0x000008 - 0x000278)
class FButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FSlateBrush)                               Normal                                                      OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               Hovered                                                     OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               Pressed                                                     OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               disabled                                                    OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FMargin)                                   NormalPadding                                               OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMargin)                                   PressedPadding                                              OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x248, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x260, 24, 0, 0})
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x03B0 (0x000008 - 0x0003B8)
class FComboButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0x280, 136, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x308, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FSlateBrush)                               MenuBorderBrush                                             OFFSET(getStruct<T>, {0x320, 136, 0, 0})
	SMember(FMargin)                                   MenuBorderPadding                                           OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x03E8 (0x000008 - 0x0003F0)
class FComboBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(getStruct<T>, {0x8, 952, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x3C0, 24, 0, 0})
	SMember(FSlateSound)                               SelectionChangeSlateSound                                   OFFSET(getStruct<T>, {0x3D8, 24, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x0218 (0x000008 - 0x000220)
class FEditableTextStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageSelected                                     OFFSET(getStruct<T>, {0x88, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageComposing                                    OFFSET(getStruct<T>, {0x110, 136, 0, 0})
	SMember(FSlateBrush)                               CaretImage                                                  OFFSET(getStruct<T>, {0x198, 136, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
class FScrollBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FSlateBrush)                               HorizontalBackgroundImage                                   OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               VerticalBackgroundImage                                     OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               VerticalTopSlotImage                                        OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               HorizontalTopSlotImage                                      OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               VerticalBottomSlotImage                                     OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateBrush)                               HorizontalBottomSlotImage                                   OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x338, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredThumbImage                                           OFFSET(getStruct<T>, {0x3C0, 136, 0, 0})
	SMember(FSlateBrush)                               DraggedThumbImage                                           OFFSET(getStruct<T>, {0x448, 136, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x07F0 (0x000008 - 0x0007F8)
class FEditableTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	SMember(FSlateBrush)                               BackgroundImageNormal                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageHovered                                      OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageFocused                                      OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageReadOnly                                     OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x238, 88, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x290, 40, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x2B8, 40, 0, 0})
	SMember(FSlateColor)                               ReadOnlyForegroundColor                                     OFFSET(getStruct<T>, {0x2E0, 40, 0, 0})
	SMember(FMargin)                                   HScrollBarPadding                                           OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMargin)                                   VScrollBarPadding                                           OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x328, 1232, 0, 0})
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0270 (0x000008 - 0x000278)
class FTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	DMember(bool)                                      bAllowManualColorChanging                                   OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x8C, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x94, 16, 0, 0})
	SMember(FSlateColor)                               SelectedBackgroundColor                                     OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FLinearColor)                              HighlightColor                                              OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FSlateBrush)                               HighlightShape                                              OFFSET(getStruct<T>, {0xE0, 136, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 OFFSET(getStruct<T>, {0x168, 136, 0, 0})
	SMember(FSlateBrush)                               UnderlineBrush                                              OFFSET(getStruct<T>, {0x1F0, 136, 0, 0})
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x02E0 (0x000008 - 0x0002E8)
class FSpinBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredBackgroundBrush                                      OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveFillBrush                                             OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveFillBrush                                           OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               ArrowsImage                                                 OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FMargin)                                   TextPadding                                                 OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFontData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FontFilename                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EFontHinting)                              Hinting                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EFontLoadingPolicy)                        LoadingPolicy                                               OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   SubFaceIndex                                                OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(class UObject*)                            FontFaceAsset                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FTypefaceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFontData)                                 Font                                                        OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
class FTypeface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTypefaceEntry>)                    Fonts                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
class FCompositeFallbackFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FTypeface)                                 Typeface                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ScalingFactor                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
class FCompositeSubFont : public FCompositeFallbackFont
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FInt32Range>)                       CharacterRanges                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Cultures                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (0x000000 - 0x000038)
class FCompositeFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FTypeface)                                 DefaultTypeface                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCompositeFallbackFont)                    FallbackTypeface                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TArray<FCompositeSubFont>)                 SubTypefaces                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0030 (0x000018 - 0x000048)
class FMotionEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureLostEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFocusEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1060 (0x000008 - 0x001068)
class FWindowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4200;

public:
	SMember(FButtonStyle)                              MinimizeButtonStyle                                         OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FButtonStyle)                              MaximizeButtonStyle                                         OFFSET(getStruct<T>, {0x280, 632, 0, 0})
	SMember(FButtonStyle)                              RestoreButtonStyle                                          OFFSET(getStruct<T>, {0x4F8, 632, 0, 0})
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0x770, 632, 0, 0})
	SMember(FTextBlockStyle)                           TitleTextStyle                                              OFFSET(getStruct<T>, {0x9E8, 632, 0, 0})
	SMember(FSlateBrush)                               ActiveTitleBrush                                            OFFSET(getStruct<T>, {0xC60, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveTitleBrush                                          OFFSET(getStruct<T>, {0xCE8, 136, 0, 0})
	SMember(FSlateBrush)                               FlashTitleBrush                                             OFFSET(getStruct<T>, {0xD70, 136, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0xDF8, 40, 0, 0})
	SMember(FSlateBrush)                               OutlineBrush                                                OFFSET(getStruct<T>, {0xE20, 136, 0, 0})
	SMember(FSlateColor)                               OutlineColor                                                OFFSET(getStruct<T>, {0xEA8, 40, 0, 0})
	SMember(FSlateBrush)                               BorderBrush                                                 OFFSET(getStruct<T>, {0xED0, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0xF58, 136, 0, 0})
	SMember(FSlateBrush)                               ChildBackgroundBrush                                        OFFSET(getStruct<T>, {0xFE0, 136, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0110 (0x000008 - 0x000118)
class FScrollBorderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0x90, 136, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0220 (0x000008 - 0x000228)
class FScrollBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               LeftShadowBrush                                             OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               RightShadowBrush                                            OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x06F8 (0x000008 - 0x000700)
class FDockTabStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x280, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveBrush                                                 OFFSET(getStruct<T>, {0x308, 136, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayTabBrush                                        OFFSET(getStruct<T>, {0x390, 136, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayIconBrush                                       OFFSET(getStruct<T>, {0x418, 136, 0, 0})
	SMember(FSlateBrush)                               ForegroundBrush                                             OFFSET(getStruct<T>, {0x4A0, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x528, 136, 0, 0})
	SMember(FSlateBrush)                               ContentAreaBrush                                            OFFSET(getStruct<T>, {0x5B0, 136, 0, 0})
	SMember(FSlateBrush)                               TabWellBrush                                                OFFSET(getStruct<T>, {0x638, 136, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	DMember(float)                                     OverlapWidth                                                OFFSET(get<float>, {0x6D0, 4, 0, 0})
	SMember(FSlateColor)                               FlashColor                                                  OFFSET(getStruct<T>, {0x6D8, 40, 0, 0})
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
class FTableColumnHeaderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FSlateBrush)                               SortPrimaryAscendingImage                                   OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               SortPrimaryDescendingImage                                  OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryAscendingImage                                 OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryDescendingImage                                OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownImage                                           OFFSET(getStruct<T>, {0x338, 136, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownNormalBorderBrush                               OFFSET(getStruct<T>, {0x3C0, 136, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownHoveredBorderBrush                              OFFSET(getStruct<T>, {0x448, 136, 0, 0})
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0110 (0x000008 - 0x000118)
class FSplitterStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FSlateBrush)                               HandleNormalBrush                                           OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               HandleHighlightBrush                                        OFFSET(getStruct<T>, {0x90, 136, 0, 0})
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x0B68 (0x000008 - 0x000B70)
class FHeaderRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	SMember(FTableColumnHeaderStyle)                   ColumnStyle                                                 OFFSET(getStruct<T>, {0x8, 1232, 0, 0})
	SMember(FTableColumnHeaderStyle)                   LastColumnStyle                                             OFFSET(getStruct<T>, {0x4D8, 1232, 0, 0})
	SMember(FSplitterStyle)                            ColumnSplitterStyle                                         OFFSET(getStruct<T>, {0x9A8, 280, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0xAC0, 136, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0xB48, 40, 0, 0})
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x0090 (0x000008 - 0x000098)
class FInlineTextImageStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	DMember(int16_t)                                   Baseline                                                    OFFSET(get<int16_t>, {0x90, 2, 0, 0})
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0340 (0x000008 - 0x000348)
class FSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FSlateBrush)                               NormalBarImage                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredBarImage                                             OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               DisabledBarImage                                            OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredThumbImage                                           OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateBrush)                               DisabledThumbImage                                          OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	DMember(float)                                     BarThickness                                                OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     SliderIndentation                                           OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(bool)                                      bUseSliderIndentation                                       OFFSET(get<bool>, {0x340, 1, 0, 0})
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x05F0 (0x000008 - 0x0005F8)
class FVolumeControlStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 OFFSET(getStruct<T>, {0x8, 840, 0, 0})
	SMember(FSlateBrush)                               HighVolumeImage                                             OFFSET(getStruct<T>, {0x350, 136, 0, 0})
	SMember(FSlateBrush)                               MidVolumeImage                                              OFFSET(getStruct<T>, {0x3D8, 136, 0, 0})
	SMember(FSlateBrush)                               LowVolumeImage                                              OFFSET(getStruct<T>, {0x460, 136, 0, 0})
	SMember(FSlateBrush)                               NoVolumeImage                                               OFFSET(getStruct<T>, {0x4E8, 136, 0, 0})
	SMember(FSlateBrush)                               MutedImage                                                  OFFSET(getStruct<T>, {0x570, 136, 0, 0})
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x0A88 (0x000008 - 0x000A90)
class FSearchBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2704;

public:
	SMember(FEditableTextBoxStyle)                     TextBoxStyle                                                OFFSET(getStruct<T>, {0x8, 2040, 0, 0})
	SMember(FSlateFontInfo)                            ActiveFontInfo                                              OFFSET(getStruct<T>, {0x800, 88, 0, 0})
	SMember(FSlateBrush)                               UpArrowImage                                                OFFSET(getStruct<T>, {0x858, 136, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0x8E0, 136, 0, 0})
	SMember(FSlateBrush)                               GlassImage                                                  OFFSET(getStruct<T>, {0x968, 136, 0, 0})
	SMember(FSlateBrush)                               ClearImage                                                  OFFSET(getStruct<T>, {0x9F0, 136, 0, 0})
	SMember(FMargin)                                   ImagePadding                                                OFFSET(getStruct<T>, {0xA78, 16, 0, 0})
	DMember(bool)                                      bLeftAlignButtons                                           OFFSET(get<bool>, {0xA88, 1, 0, 0})
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0118 (0x000008 - 0x000120)
class FExpandableAreaStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FSlateBrush)                               CollapsedImage                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               ExpandedImage                                               OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	DMember(float)                                     RolloutAnimationSeconds                                     OFFSET(get<float>, {0x118, 4, 0, 0})
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FProgressBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               FillImage                                                   OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               MarqueeImage                                                OFFSET(getStruct<T>, {0x118, 136, 0, 0})
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x0A70 (0x000008 - 0x000A78)
class FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2680;

public:
	SMember(FEditableTextBoxStyle)                     EditableTextBoxStyle                                        OFFSET(getStruct<T>, {0x8, 2040, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x800, 632, 0, 0})
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0500 (0x000008 - 0x000508)
class FHyperlinkStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1288;

public:
	SMember(FButtonStyle)                              UnderlineStyle                                              OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x280, 632, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x4F8, 16, 0, 0})
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0578 (0x000008 - 0x000580)
class FCheckBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TEnumAsByte<ESlateCheckBoxType>)           CheckBoxType                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FSlateBrush)                               UncheckedImage                                              OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	SMember(FSlateBrush)                               UncheckedHoveredImage                                       OFFSET(getStruct<T>, {0x98, 136, 0, 0})
	SMember(FSlateBrush)                               UncheckedPressedImage                                       OFFSET(getStruct<T>, {0x120, 136, 0, 0})
	SMember(FSlateBrush)                               CheckedImage                                                OFFSET(getStruct<T>, {0x1A8, 136, 0, 0})
	SMember(FSlateBrush)                               CheckedHoveredImage                                         OFFSET(getStruct<T>, {0x230, 136, 0, 0})
	SMember(FSlateBrush)                               CheckedPressedImage                                         OFFSET(getStruct<T>, {0x2B8, 136, 0, 0})
	SMember(FSlateBrush)                               UndeterminedImage                                           OFFSET(getStruct<T>, {0x340, 136, 0, 0})
	SMember(FSlateBrush)                               UndeterminedHoveredImage                                    OFFSET(getStruct<T>, {0x3C8, 136, 0, 0})
	SMember(FSlateBrush)                               UndeterminedPressedImage                                    OFFSET(getStruct<T>, {0x450, 136, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x4D8, 16, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x4E8, 40, 0, 0})
	SMember(FSlateColor)                               BorderBackgroundColor                                       OFFSET(getStruct<T>, {0x510, 40, 0, 0})
	SMember(FSlateSound)                               CheckedSlateSound                                           OFFSET(getStruct<T>, {0x538, 24, 0, 0})
	SMember(FSlateSound)                               UncheckedSlateSound                                         OFFSET(getStruct<T>, {0x550, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x568, 24, 0, 0})
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x08
enum class EUINavigation : uint8_t
{
	EUINavigation__Left                                                              = 0,
	EUINavigation__Right                                                             = 1,
	EUINavigation__Up                                                                = 2,
	EUINavigation__Down                                                              = 3,
	EUINavigation__Next                                                              = 4,
	EUINavigation__Previous                                                          = 5,
	EUINavigation__Num                                                               = 6,
	EUINavigation__Invalid                                                           = 7
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x03
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked                                                        = 0,
	ECheckBoxState__Checked                                                          = 1,
	ECheckBoxState__Undetermined                                                     = 2
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x05
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit                                                         = 0,
	EWidgetClipping__ClipToBounds                                                    = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting                                 = 2,
	EWidgetClipping__ClipToBoundsAlways                                              = 3,
	EWidgetClipping__OnDemand                                                        = 4
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x03
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage                                                    = 0,
	ESlateBrushImageType__FullColor                                                  = 1,
	ESlateBrushImageType__Linear                                                     = 2
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x04
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror                                                  = 0,
	ESlateBrushMirrorType__Horizontal                                                = 1,
	ESlateBrushMirrorType__Vertical                                                  = 2,
	ESlateBrushMirrorType__Both                                                      = 3
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x04
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile                                                      = 0,
	ESlateBrushTileType__Horizontal                                                  = 1,
	ESlateBrushTileType__Vertical                                                    = 2,
	ESlateBrushTileType__Both                                                        = 3
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x04
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType                                                  = 0,
	ESlateBrushDrawType__Box                                                         = 1,
	ESlateBrushDrawType__Border                                                      = 2,
	ESlateBrushDrawType__Image                                                       = 3
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x04
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified                                       = 0,
	ESlateColorStylingMode__UseColor_Specified_Link                                  = 1,
	ESlateColorStylingMode__UseColor_Foreground                                      = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued                              = 3
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x07
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape                                                        = 0,
	EUINavigationRule__Explicit                                                      = 1,
	EUINavigationRule__Wrap                                                          = 2,
	EUINavigationRule__Stop                                                          = 3,
	EUINavigationRule__Custom                                                        = 4,
	EUINavigationRule__CustomBoundary                                                = 5,
	EUINavigationRule__Invalid                                                       = 6
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x04
enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit                                                = 0,
	EFlowDirectionPreference__Culture                                                = 1,
	EFlowDirectionPreference__LeftToRight                                            = 2,
	EFlowDirectionPreference__RightToLeft                                            = 3
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x04
enum class EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision                                             = 0,
	EColorVisionDeficiency__Deuteranope                                              = 1,
	EColorVisionDeficiency__Protanope                                                = 2,
	EColorVisionDeficiency__Tritanope                                                = 3
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x04
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress                                                          = 0,
	ESelectInfo__OnNavigation                                                        = 1,
	ESelectInfo__OnMouseClick                                                        = 2,
	ESelectInfo__Direct                                                              = 3
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x04
enum class ETextCommit : uint8_t
{
	ETextCommit__Default                                                             = 0,
	ETextCommit__OnEnter                                                             = 1,
	ETextCommit__OnUserMovedFocus                                                    = 2,
	ETextCommit__OnCleared                                                           = 3
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x03
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto                                                         = 0,
	ETextShapingMethod__KerningOnly                                                  = 1,
	ETextShapingMethod__FullShaping                                                  = 2
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x13
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor                                                        = 0,
	MenuPlacement_CenteredBelowAnchor                                                = 1,
	MenuPlacement_BelowRightAnchor                                                   = 2,
	MenuPlacement_ComboBox                                                           = 3,
	MenuPlacement_ComboBoxRight                                                      = 4,
	MenuPlacement_MenuRight                                                          = 5,
	MenuPlacement_AboveAnchor                                                        = 6,
	MenuPlacement_CenteredAboveAnchor                                                = 7,
	MenuPlacement_AboveRightAnchor                                                   = 8,
	MenuPlacement_MenuLeft                                                           = 9,
	MenuPlacement_Center                                                             = 10,
	MenuPlacement_RightLeftCenter                                                    = 11,
	MenuPlacement_MatchBottomLeft                                                    = 12
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x02
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics                                                       = 0,
	EFontLayoutMethod__BoundingBox                                                   = 1
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x03
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad                                                     = 0,
	EFontLoadingPolicy__Stream                                                       = 1,
	EFontLoadingPolicy__Inline                                                       = 2
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x05
enum class EFontHinting : uint8_t
{
	EFontHinting__Default                                                            = 0,
	EFontHinting__Auto                                                               = 1,
	EFontHinting__AutoLight                                                          = 2,
	EFontHinting__Monochrome                                                         = 3,
	EFontHinting__None                                                               = 4
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x06
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse                                                               = 0,
	EFocusCause__Navigation                                                          = 1,
	EFocusCause__SetDirectly                                                         = 2,
	EFocusCause__Cleared                                                             = 3,
	EFocusCause__OtherWidgetLostFocus                                                = 4,
	EFocusCause__WindowActivate                                                      = 5
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x03
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging                                         = 0,
	ESlateDebuggingFocusEvent__FocusLost                                             = 1,
	ESlateDebuggingFocusEvent__FocusReceived                                         = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x06
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown                                         = 0,
	ESlateDebuggingNavigationMethod__Explicit                                        = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound                             = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound                           = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious                                  = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid                                     = 5
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x02
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained                              = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost                                = 1
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x26
enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove                                             = 0,
	ESlateDebuggingInputEvent__MouseEnter                                            = 1,
	ESlateDebuggingInputEvent__MouseLeave                                            = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown                                = 3,
	ESlateDebuggingInputEvent__MouseButtonDown                                       = 4,
	ESlateDebuggingInputEvent__MouseButtonUp                                         = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick                                = 6,
	ESlateDebuggingInputEvent__MouseWheel                                            = 7,
	ESlateDebuggingInputEvent__TouchStart                                            = 8,
	ESlateDebuggingInputEvent__TouchEnd                                              = 9,
	ESlateDebuggingInputEvent__TouchForceChanged                                     = 10,
	ESlateDebuggingInputEvent__TouchFirstMove                                        = 11,
	ESlateDebuggingInputEvent__TouchMoved                                            = 12,
	ESlateDebuggingInputEvent__DragDetected                                          = 13,
	ESlateDebuggingInputEvent__DragEnter                                             = 14,
	ESlateDebuggingInputEvent__DragLeave                                             = 15,
	ESlateDebuggingInputEvent__DragOver                                              = 16,
	ESlateDebuggingInputEvent__DragDrop                                              = 17,
	ESlateDebuggingInputEvent__DropMessage                                           = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown                                        = 19,
	ESlateDebuggingInputEvent__KeyDown                                               = 20,
	ESlateDebuggingInputEvent__KeyUp                                                 = 21,
	ESlateDebuggingInputEvent__KeyChar                                               = 22,
	ESlateDebuggingInputEvent__AnalogInput                                           = 23,
	ESlateDebuggingInputEvent__TouchGesture                                          = 24,
	ESlateDebuggingInputEvent__MotionDetected                                        = 25
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x02
enum class EScrollDirection : uint8_t
{
	Scroll_Down                                                                      = 0,
	Scroll_Up                                                                        = 1
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x02
enum class EOrientation : uint8_t
{
	Orient_Horizontal                                                                = 0,
	Orient_Vertical                                                                  = 1
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x04
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                                                                      = 0,
	VAlign_Top                                                                       = 1,
	VAlign_Center                                                                    = 2,
	VAlign_Bottom                                                                    = 3
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x04
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                                                                      = 0,
	HAlign_Left                                                                      = 1,
	HAlign_Center                                                                    = 2,
	HAlign_Right                                                                     = 3
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x03
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard                                                     = 0,
	ENavigationGenesis__Controller                                                   = 1,
	ENavigationGenesis__User                                                         = 2
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x02
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget                                                 = 0,
	ENavigationSource__WidgetUnderCursor                                             = 1
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x04
enum class EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept                                                      = 0,
	EUINavigationAction__Back                                                        = 1,
	EUINavigationAction__Num                                                         = 2,
	EUINavigationAction__Invalid                                                     = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x03
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp                                                    = 0,
	EButtonPressMethod__ButtonPress                                                  = 1,
	EButtonPressMethod__ButtonRelease                                                = 2
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x03
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp                                                    = 0,
	EButtonTouchMethod__Down                                                         = 1,
	EButtonTouchMethod__PreciseTap                                                   = 2
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x04
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp                                                    = 0,
	EButtonClickMethod__MouseDown                                                    = 1,
	EButtonClickMethod__MouseUp                                                      = 2,
	EButtonClickMethod__PreciseClick                                                 = 3
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x02
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox                                                     = 0,
	ESlateCheckBoxType__ToggleButton                                                 = 1
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x02
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow                                     = 0,
	ESlateParentWindowSearchMethod__MainWindow                                       = 1
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x03
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible                                        = 0,
	EConsumeMouseWheel__Always                                                       = 1,
	EConsumeMouseWheel__Never                                                        = 2
};

