
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Indiana
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

/// Class /Game/UI/HUD/BeaconTag/BeaconTag_BP.BeaconTag_BP_C
/// Size: 0x0008 (0x000370 - 0x000378)
class UBeaconTag_BP_C : public UBeaconTagWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/BeaconTag/BeaconTag_BP.BeaconTag_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/BeaconTag/BeaconTag_BP.BeaconTag_BP_C.ExecuteUbergraph_BeaconTag_BP
	// void ExecuteUbergraph_BeaconTag_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/LoadingScreen/RenderThreadLoadingScreen_BP.RenderThreadLoadingScreen_BP_C
/// Size: 0x0008 (0x000438 - 0x000440)
class URenderThreadLoadingScreen_BP_C : public URenderThreadLoadingScreenWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UImage*)                             Background                                                  OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Game/UI/Library/Components/SquareCheckBox_BP.SquareCheckBox_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class USquareCheckBox_BP_C : public UCheckBoxWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/PresenterWrapperButton_BP.PresenterWrapperButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UPresenterWrapperButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuSubcategory_BP.SettingsMenuSubcategory_BP_C
/// Size: 0x0000 (0x000298 - 0x000298)
class USettingsMenuSubcategory_BP_C : public USettingsMenuSubcategoryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuSlot_BP.SettingsMenuSlot_BP_C
/// Size: 0x0008 (0x000350 - 0x000358)
class USettingsMenuSlot_BP_C : public USettingsMenuSlotWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuDisplaySubcategory_BP.SettingsMenuDisplaySubcategory_BP_C
/// Size: 0x0000 (0x000298 - 0x000298)
class USettingsMenuDisplaySubcategory_BP_C : public USettingsMenuSubcategoryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuCheckBox2_BP.SettingsMenuCheckBox2_BP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class USettingsMenuCheckBox2_BP_C : public USettingsMenuCheckBoxWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuButtonSlot_BP.SettingsMenuButtonSlot_BP_C
/// Size: 0x0000 (0x000350 - 0x000350)
class USettingsMenuButtonSlot_BP_C : public USettingsMenuButtonSlotWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
};

/// Class /Game/UI/HUD/General/DamageText/DamageTextActor_BP.DamageTextActor_BP_C
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class ADamageTextActor_BP_C : public ADamageTextActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Game/UI/HUD/StatusTag/StatusTagActor_BP.StatusTagActor_BP_C
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class AStatusTagActor_BP_C : public AStatusTagActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Game/UI/Conversation/HistoryMessage_BP.HistoryMessage_BP_C
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UHistoryMessage_BP_C : public UConversationMessageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Game/UI/Conversation/ConversationResponseButton_BP.ConversationResponseButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UConversationResponseButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Conversation/ConversationMessage_BP.ConversationMessage_BP_C
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UConversationMessage_BP_C : public UConversationMessageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Conversation/ConversationMessage_BP.ConversationMessage_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationMessage_BP.ConversationMessage_BP_C.ExecuteUbergraph_ConversationMessage_BP
	// void ExecuteUbergraph_ConversationMessage_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Conversation/ConversationHistory_BP.ConversationHistory_BP_C
/// Size: 0x0008 (0x0002A0 - 0x0002A8)
class UConversationHistory_BP_C : public UConversationHistoryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Game/UI/Conversation/ConversationHistoryButton_BP.ConversationHistoryButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UConversationHistoryButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/RadialContextMenu/TextContextSection_BP.TextContextSection_BP_C
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UTextContextSection_BP_C : public UTextSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Game/UI/IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UIndianaUserWidgetLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/UI/IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C.ContinueAnimationWithCallback
	// void ContinueAnimationWithCallback(class UUserWidget* Target, class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, FDelegateProperty& Event, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C.GetRelativePlaybackTime
	// float GetRelativePlaybackTime(class UUserWidget* UserWidget, class UWidgetAnimation* Animation, TEnumAsByte<EUMGSequencePlayMode> PlayMode, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C.PlayAnimationWithCallback
	// void PlayAnimationWithCallback(class UUserWidget* UserWidget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, FDelegateProperty& Event, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C.ContinueAnimation
	// void ContinueAnimation(class UUserWidget* Target, class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UObject* __WorldContext); // [0x1c5deb0] Static|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Subtitles/SubtitleEntryWidget_BP.SubtitleEntryWidget_BP_C
/// Size: 0x0000 (0x000308 - 0x000308)
class USubtitleEntryWidget_BP_C : public USubtitleEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
};

/// Class /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C
/// Size: 0x0030 (0x0002B8 - 0x0002E8)
class UItemCellDragContainerNoDrag_BP_C : public UDragContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Drop                                                        OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Flash                                                       OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UBorder*)                            DropBorder                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UBorder*)                            FlashBorder                                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UBorder*)                            PendingDropBorder                                           OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.StopAnimations
	// void StopAnimations();                                                                                                   // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.SetPendingDropAnimationEnabled
	// void SetPendingDropAnimationEnabled(bool Enabled);                                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                   // [0x1c5deb0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                 // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);                                       // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, class UDragDropOperation* Operation);                                  // [0x1c5deb0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupStarted
	// void OnDragGroupStarted(class UIndianaDragDropOperation* Operation);                                                     // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragConfirmDrop
	// void OnDragConfirmDrop(class UIndianaDragDropOperation* Operation);                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupCancelled
	// void OnDragGroupCancelled(class UIndianaDragDropOperation* Operation);                                                   // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupDrop
	// void OnDragGroupDrop(class UIndianaDragDropOperation* Operation);                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.ExecuteUbergraph_ItemCellDragContainerNoDrag_BP
	// void ExecuteUbergraph_ItemCellDragContainerNoDrag_BP(int32_t EntryPoint);                                                // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/General/PageAnchor2_BP.PageAnchor2_BP_C
/// Size: 0x0018 (0x000278 - 0x000290)
class UPageAnchor2_BP_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x288, 8, 0, 0})
};

/// Class /Game/UI/ItemViewer/ItemPageNoDrag_BP.ItemPageNoDrag_BP_C
/// Size: 0x0010 (0x000370 - 0x000380)
class UItemPageNoDrag_BP_C : public UItemViewerPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   CollapsePage                                                OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ItemViewer/ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.PlayCollapseAnimation
	// void PlayCollapseAnimation();                                                                                            // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.ExecuteUbergraph_ItemPageNoDrag_BP
	// void ExecuteUbergraph_ItemPageNoDrag_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/Navigation/Button_MoreCompanions_BP.Button_MoreCompanions_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UButton_MoreCompanions_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/General/Condition/ConditionButton_BP.ConditionButton_BP_C
/// Size: 0x0000 (0x000308 - 0x000308)
class UConditionButton_BP_C : public UItemConditionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
};

/// Class /Game/UI/EquipmentMods/EquipmentMods_BP.EquipmentMods_BP_C
/// Size: 0x0008 (0x0003F0 - 0x0003F8)
class UEquipmentMods_BP_C : public UEquipmentModsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	CMember(class UVerticalBox*)                       ModsVerticalBox                                             OFFSET(get<T>, {0x3F0, 8, 0, 0})
};

/// Class /Game/UI/General/ItemViewerScrollSelector/ItemViewerScrollSelectorButton_BP.ItemViewerScrollSelectorButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UItemViewerScrollSelectorButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/General/ItemViewerScrollSelector/ItemViewerScrollSelectorEntry_BP.ItemViewerScrollSelectorEntry_BP_C
/// Size: 0x0008 (0x000310 - 0x000318)
class UItemViewerScrollSelectorEntry_BP_C : public UItemViewerScrollSelectorEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/General/ItemViewerScrollSelector/ItemViewerScrollSelector_BP.ItemViewerScrollSelector_BP_C
/// Size: 0x0008 (0x000330 - 0x000338)
class UItemViewerScrollSelector_BP_C : public UItemViewerScrollSelector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UImage*)                             TopDivider                                                  OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Game/UI/ItemViewer/ItemPage_BP.ItemPage_BP_C
/// Size: 0x0010 (0x000370 - 0x000380)
class UItemPage_BP_C : public UItemViewerPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   CollapsePage                                                OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ItemViewer/ItemPage_BP.ItemPage_BP_C.PlayCollapseAnimation
	// void PlayCollapseAnimation();                                                                                            // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemPage_BP.ItemPage_BP_C.ExecuteUbergraph_ItemPage_BP
	// void ExecuteUbergraph_ItemPage_BP(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemViewer/ItemViewerIconButton.ItemViewerIconButton_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UItemViewerIconButton_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/ItemViewer/PaginatedButton_BP.PaginatedButton_BP_C
/// Size: 0x0000 (0x000288 - 0x000288)
class UPaginatedButton_BP_C : public UPaginatedButtonWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
};

/// Class /Game/UI/InputLabel/InputWidget_BP.InputWidget_BP_C
/// Size: 0x0008 (0x000378 - 0x000380)
class UInputWidget_BP_C : public UInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UImage*)                             KeyBackingIcon                                              OFFSET(get<T>, {0x378, 8, 0, 0})
};

/// Class /Game/UI/Inventory/Pages/Ammo_BP.Ammo_BP_C
/// Size: 0x0008 (0x000318 - 0x000320)
class UAmmo_BP_C : public UInventoryWeaponAmmoWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Inventory/Pages/Ammo_BP.Ammo_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_189_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_189_NoParamMCD__DelegateSignature();                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Inventory/Pages/Ammo_BP.Ammo_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_216_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_216_NoParamMCD__DelegateSignature();                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Inventory/Pages/Ammo_BP.Ammo_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_240_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_240_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/Ammo_BP.Ammo_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_264_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_264_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/Ammo_BP.Ammo_BP_C.ExecuteUbergraph_Ammo_BP
	// void ExecuteUbergraph_Ammo_BP(int32_t EntryPoint);                                                                       // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Drag/ItemCellDragVisuals_BP.ItemCellDragVisuals_BP_C
/// Size: 0x0008 (0x000280 - 0x000288)
class UItemCellDragVisuals_BP_C : public UItemCellVisualsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(class UImage*)                             CellImage                                                   OFFSET(get<T>, {0x280, 8, 0, 0})
};

/// Class /Game/UI/Drag/ItemCellDragDropOperation_BP.ItemCellDragDropOperation_BP_C
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UItemCellDragDropOperation_BP_C : public UIndianaDragDropOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C
/// Size: 0x0030 (0x0002B8 - 0x0002E8)
class UItemCellDragContainer_BP_C : public UDragContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Drop                                                        OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Flash                                                       OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UBorder*)                            DropBorder                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UBorder*)                            FlashBorder                                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UBorder*)                            PendingDropBorder                                           OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.StopAnimations
	// void StopAnimations();                                                                                                   // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.SetPendingDropAnimationEnabled
	// void SetPendingDropAnimationEnabled(bool Enabled);                                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                   // [0x1c5deb0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                 // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);                                       // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, class UDragDropOperation* Operation);                                  // [0x1c5deb0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragGroupStarted
	// void OnDragGroupStarted(class UIndianaDragDropOperation* Operation);                                                     // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragConfirmDrop
	// void OnDragConfirmDrop(class UIndianaDragDropOperation* Operation);                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragGroupCancelled
	// void OnDragGroupCancelled(class UIndianaDragDropOperation* Operation);                                                   // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragGroupDrop
	// void OnDragGroupDrop(class UIndianaDragDropOperation* Operation);                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.ExecuteUbergraph_ItemCellDragContainer_BP
	// void ExecuteUbergraph_ItemCellDragContainer_BP(int32_t EntryPoint);                                                      // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/ItemViewer/ItemViewerButton_BP.ItemViewerButton_BP_C
/// Size: 0x0000 (0x000BA0 - 0x000BA0)
class UItemViewerButton_BP_C : public UItemViewerButtonWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
};

/// Class /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C
/// Size: 0x0028 (0x000318 - 0x000340)
class UAmmoGroup_BP_C : public UInventoryWeaponAmmoGroupWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeBackground                                              OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UImage*)                             Background                                                  OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UTexture2D*)                         BackgroundTexture                                           OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UTexture2D*)                         AmmoTexture0                                                OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C.OnHighlightChange
	// void OnHighlightChange(bool bHighlight);                                                                                 // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C.ExecuteUbergraph_AmmoGroup_BP
	// void ExecuteUbergraph_AmmoGroup_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemStats/ItemStat_BP.ItemStat_BP_C
/// Size: 0x0000 (0x000348 - 0x000348)
class UItemStat_BP_C : public UItemStatEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Game/UI/InputLabel/InputLabelHold_BP.InputLabelHold_BP_C
/// Size: 0x0020 (0x0003B8 - 0x0003D8)
class UInputLabelHold_BP_C : public UInputLabelHoldWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3B8, 8, 0, 0})
	CMember(class UImage*)                             KeyBackingIcon                                              OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           GamepadRadialMaterial                                       OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           KeyRadialMaterial                                           OFFSET(get<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/InputLabel/InputLabelHold_BP.InputLabelHold_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/InputLabel/InputLabelHold_BP.InputLabelHold_BP_C.SetRadialFill
	// void SetRadialFill(float FillRatio, float Opacity);                                                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InputLabel/InputLabelHold_BP.InputLabelHold_BP_C.SetWidth
	// void SetWidth(float Width);                                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InputLabel/InputLabelHold_BP.InputLabelHold_BP_C.ExecuteUbergraph_InputLabelHold_BP
	// void ExecuteUbergraph_InputLabelHold_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/InputLabel/InputLabel_BP.InputLabel_BP_C
/// Size: 0x0008 (0x000370 - 0x000378)
class UInputLabel_BP_C : public UInputLabelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UMaterialInstanceDynamic*)           RadialMaterial                                              OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Game/UI/Library/Components/GlowButtonWithBacking_BP.GlowButtonWithBacking_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UGlowButtonWithBacking_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C
/// Size: 0x0030 (0x0003A0 - 0x0003D0)
class UTinkering_BP_C : public UTinkeringWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3A0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UImage*)                             BackingBot                                                  OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UImage*)                             BackingTop                                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UImage*)                             Frame                                                       OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackingBotInst                                              OFFSET(get<T>, {0x3C8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C.ExecuteUbergraph_Tinkering_BP
	// void ExecuteUbergraph_Tinkering_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/Workbench/RepairUpgradeInfo_BP.RepairUpgradeInfo_BP_C
/// Size: 0x0010 (0x000380 - 0x000390)
class URepairUpgradeInfo_BP_C : public URepairUpgradeInfoWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x388, 8, 0, 0})
};

/// Class /Game/UI/Inventory/Pages/Weapons_BP.Weapons_BP_C
/// Size: 0x0028 (0x000550 - 0x000578)
class UWeapons_BP_C : public UInventoryWeaponsPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item0                                                       OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item1                                                       OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item2                                                       OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item3                                                       OFFSET(get<T>, {0x570, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Inventory/Pages/Weapons_BP.Weapons_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/Weapons_BP.Weapons_BP_C.ExecuteUbergraph_Weapons_BP
	// void ExecuteUbergraph_Weapons_BP(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemViewer/ItemViewerNavigation_BP.ItemViewerNavigation_BP_C
/// Size: 0x0008 (0x000390 - 0x000398)
class UItemViewerNavigation_BP_C : public UItemViewerNavigationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UHorizontalBox*)                     TabsContainer                                               OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Game/UI/InputLabel/InputLabelGroup_BP.InputLabelGroup_BP_C
/// Size: 0x0010 (0x000370 - 0x000380)
class UInputLabelGroup_BP_C : public UInputLabelGroupWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UImage*)                             LeftFrame                                                   OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UImage*)                             RightFrame                                                  OFFSET(get<T>, {0x378, 8, 0, 0})
};

/// Class /Game/UI/General/FlavorText/FlavorTextWidget_BP.FlavorTextWidget_BP_C
/// Size: 0x0000 (0x000310 - 0x000310)
class UFlavorTextWidget_BP_C : public UFlavorTextWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Game/UI/Vendor/CartInfoWidget_BP.CartInfoWidget_BP_C
/// Size: 0x0018 (0x0003B0 - 0x0003C8)
class UCartInfoWidget_BP_C : public UCartInfoWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(class UInputLabel_BP_C*)                   ActionInputLabelBreakdown                                   OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UInputLabel_BP_C*)                   ActionInputLabelRepair                                      OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UInputLabel_BP_C*)                   ActionInputLabelTinker                                      OFFSET(get<T>, {0x3C0, 8, 0, 0})
};

/// Class /Game/UI/Inventory/Pages/Armor_BP.Armor_BP_C
/// Size: 0x0010 (0x000488 - 0x000498)
class UArmor_BP_C : public UInventoryArmorPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	CMember(class UInventoryItem_BP_C*)                Item0                                                       OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item1                                                       OFFSET(get<T>, {0x490, 8, 0, 0})
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBar_Thirst.SurvivalBar_Thirst_C
/// Size: 0x0000 (0x000338 - 0x000338)
class USurvivalBar_Thirst_C : public USurvivalBarWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBar_Sleep.SurvivalBar_Sleep_C
/// Size: 0x0000 (0x000338 - 0x000338)
class USurvivalBar_Sleep_C : public USurvivalBarWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBar_Hunger.SurvivalBar_Hunger_C
/// Size: 0x0000 (0x000338 - 0x000338)
class USurvivalBar_Hunger_C : public USurvivalBarWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/Workbench/WBUpgradePage_BP.WBUpgradePage_BP_C
/// Size: 0x0008 (0x000428 - 0x000430)
class UWBUpgradePage_BP_C : public UWBUpgradePageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class USizeBox*)                           PagesSizeBox                                                OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Game/UI/Workbench/WBRepairPage_BP.WBRepairPage_BP_C
/// Size: 0x0008 (0x000450 - 0x000458)
class UWBRepairPage_BP_C : public UWBRepairPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(class USizeBox*)                           PagesSizeBox                                                OFFSET(get<T>, {0x450, 8, 0, 0})
};

/// Class /Game/UI/Workbench/WBBreakdownPage_BP.WBBreakdownPage_BP_C
/// Size: 0x0008 (0x000418 - 0x000420)
class UWBBreakdownPage_BP_C : public UWBBreakdownPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(class USizeBox*)                           PagesSizeBox                                                OFFSET(get<T>, {0x418, 8, 0, 0})
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBarGroupWidget_BP.SurvivalBarGroupWidget_BP_C
/// Size: 0x0000 (0x000350 - 0x000350)
class USurvivalBarGroupWidget_BP_C : public USurvivalBarGroupWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
};

/// Class /Game/UI/General/PageAnchor1_BP.PageAnchor1_BP_C
/// Size: 0x0020 (0x000278 - 0x000298)
class UPageAnchor1_BP_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UImage*)                             Image3                                                      OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Game/UI/Navigation/NavigationBar_BP.NavigationBar_BP_C
/// Size: 0x0000 (0x000380 - 0x000380)
class UNavigationBar_BP_C : public UNavigationGroupWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/UI/Library/Components/Background1_BP.Background1_BP_C
/// Size: 0x0010 (0x000278 - 0x000288)
class UBackground1_BP_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(class UImage*)                             Grid                                                        OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UImage*)                             Halftone                                                    OFFSET(get<T>, {0x280, 8, 0, 0})
};

/// Class /Game/UI/Workbench/WorkbenchWidget_BP.WorkbenchWidget_BP_C
/// Size: 0x0030 (0x000358 - 0x000388)
class UWorkbenchWidget_BP_C : public UWorkbenchWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UBackground1_BP_C*)                  Background                                                  OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UPageAnchor1_BP_C*)                  PageAnchorLeft                                              OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UPageAnchor1_BP_C*)                  PageAnchorRight                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UImage*)                             Smoke                                                       OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UImage*)                             Smoke_Behind                                                OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class USurvivalBarGroupWidget_BP_C*)       SurvivalBar                                                 OFFSET(get<T>, {0x380, 8, 0, 0})
};

/// Class /Game/UI/Tutorial/TutorialPopupWidget_BP.TutorialPopupWidget_BP_C
/// Size: 0x0010 (0x000350 - 0x000360)
class UTutorialPopupWidget_BP_C : public UTutorialPopupWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UTutorialPopupStyle_Corporate_BP_C*) TutorialPopupStyle_Corporate_BP                             OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UTutorialPopupStyle_Simple_BP_C*)    TutorialPopupStyle_Simple_BP                                OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Game/UI/ToolTip/ToolTipContainer_BP.ToolTipContainer_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UToolTipContainer_BP_C : public UToolTipContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/Subtitles/SubtitleManager_BP.SubtitleManager_BP_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class USubtitleManager_BP_C : public USubtitleManagerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Game/UI/Slideshows/SlideshowWidget_BP.SlideshowWidget_BP_C
/// Size: 0x0000 (0x000428 - 0x000428)
class USlideshowWidget_BP_C : public USlideshowWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
};

/// Class /Game/UI/RadialContextMenu/RadialContextMenu_BP.RadialContextMenu_BP_C
/// Size: 0x001C (0x000338 - 0x000354)
class URadialContextMenu_BP_C : public URadialContextMenuWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 852;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Outro                                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(float)                                     PlaybackSpeed                                               OFFSET(get<float>, {0x350, 4, 0, 0})


	/// Functions
	// Function /Game/UI/RadialContextMenu/RadialContextMenu_BP.RadialContextMenu_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/RadialContextMenu/RadialContextMenu_BP.RadialContextMenu_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/RadialContextMenu/RadialContextMenu_BP.RadialContextMenu_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/RadialContextMenu/RadialContextMenu_BP.RadialContextMenu_BP_C.ExecuteUbergraph_RadialContextMenu_BP
	// void ExecuteUbergraph_RadialContextMenu_BP(int32_t EntryPoint);                                                          // [0x1c5deb0] Final                
};

/// Class /Game/UI/MoviePlayer/MoviePlayer_BP.MoviePlayer_BP_C
/// Size: 0x0020 (0x000370 - 0x000390)
class UMoviePlayer_BP_C : public UMoviePlayerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   SkipFadeOutIn                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background1_BP                                              OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UImage*)                             BlackBG                                                     OFFSET(get<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Game/UI/MoviePlayer/MoviePlayer_BP.MoviePlayer_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/MoviePlayer/MoviePlayer_BP.MoviePlayer_BP_C.InitiateFadeIn
	// void InitiateFadeIn();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/MoviePlayer/MoviePlayer_BP.MoviePlayer_BP_C.InitiateFadeOut
	// void InitiateFadeOut();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/MoviePlayer/MoviePlayer_BP.MoviePlayer_BP_C.ExecuteUbergraph_MoviePlayer_BP
	// void ExecuteUbergraph_MoviePlayer_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C
/// Size: 0x0082 (0x0003E0 - 0x000462)
class ULevelUpNotification_BP_C : public ULevelUpNotificationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1122;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3E0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInLevelUpReminder                                       OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   SecondaryFadeIn                                             OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   PrimaryTextGrow                                             OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   SunSpin                                                     OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   GlowFade                                                    OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   GlowBall                                                    OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   GlowGrow                                                    OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   GlowShrink                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   PrimaryFadeIn                                               OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UImage*)                             InputLabelBacking                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UImage*)                             ReminderBacking                                             OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           GlowMaterial                                                OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           LeftWingMaterial                                            OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RightWingMaterial                                           OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      CanStartWingIntro                                           OFFSET(get<bool>, {0x460, 1, 0, 0})
	DMember(bool)                                      CanStartWingOutro                                           OFFSET(get<bool>, {0x461, 1, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetLevelUpReminderAnimation
	// class UWidgetAnimation* GetLevelUpReminderAnimation();                                                                   // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowFadeAnimation
	// class UWidgetAnimation* GetGlowFadeAnimation();                                                                          // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowGrowAnimation
	// class UWidgetAnimation* GetGlowGrowAnimation();                                                                          // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowShrinkAnimation
	// class UWidgetAnimation* GetGlowShrinkAnimation();                                                                        // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetPrimaryTextAndSunFadeInAnimation
	// class UWidgetAnimation* GetPrimaryTextAndSunFadeInAnimation();                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetPrimaryTextGrowAnimation
	// class UWidgetAnimation* GetPrimaryTextGrowAnimation();                                                                   // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetSecondaryTextFadeInAnimation
	// class UWidgetAnimation* GetSecondaryTextFadeInAnimation();                                                               // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetSunSpinAnimation
	// class UWidgetAnimation* GetSunSpinAnimation();                                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetTextAndSunFadeOutAnimation
	// class UWidgetAnimation* GetTextAndSunFadeOutAnimation();                                                                 // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowballAnimation
	// class UWidgetAnimation* GetGlowballAnimation();                                                                          // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.OnLevelUpComplete
	// void OnLevelUpComplete();                                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/LevelUp/LevelUpNotification_BP.LevelUpNotification_BP_C.ExecuteUbergraph_LevelUpNotification_BP
	// void ExecuteUbergraph_LevelUpNotification_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final                
};

/// Class /Game/UI/Dialogs/DialogBoxRespec_BP.DialogBoxRespec_BP_C
/// Size: 0x0038 (0x0003D0 - 0x000408)
class UDialogBoxRespec_BP_C : public UDialogBoxRespecWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3D0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background1_BP                                              OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UImage*)                             BackingBot                                                  OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UImage*)                             BackingTop                                                  OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UImage*)                             Frame                                                       OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackingBotInst                                              OFFSET(get<T>, {0x400, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Dialogs/DialogBoxRespec_BP.DialogBoxRespec_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxRespec_BP.DialogBoxRespec_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxRespec_BP.DialogBoxRespec_BP_C.ExecuteUbergraph_DialogBoxRespec_BP
	// void ExecuteUbergraph_DialogBoxRespec_BP(int32_t EntryPoint);                                                            // [0x1c5deb0] Final                
};

/// Class /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C
/// Size: 0x0030 (0x0003B8 - 0x0003E8)
class UDialogBox1_BP_C : public UDialogBoxWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UImage*)                             BackingBot                                                  OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UImage*)                             BackingTop                                                  OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UImage*)                             Frame                                                       OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackingBotInst                                              OFFSET(get<T>, {0x3E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C.ExecuteUbergraph_DialogBox1_BP
	// void ExecuteUbergraph_DialogBox1_BP(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/UI/Debug/DebugOverlay.DebugOverlay_C
/// Size: 0x0000 (0x000310 - 0x000310)
class UDebugOverlay_C : public UDebugOverlayWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C
/// Size: 0x0068 (0x000520 - 0x000588)
class UConversationWidget_BP_C : public UConversationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x520, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutContent                                              OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInContent                                               OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UImage*)                             ConversationBackingBot                                      OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UImage*)                             ConversationBackingTop                                      OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UImage*)                             HistoryBackingBot                                           OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UImage*)                             HistoryBackingTop                                           OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(float)                                     PlaybackMultiplier                                          OFFSET(get<float>, {0x560, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ConversationBackingTopInst                                  OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ConversationBackingBotInst                                  OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           HistoryBackingTopInst                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           HistoryBackingBotInst                                       OFFSET(get<T>, {0x580, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C.Get_Line0_Visibility
	// ESlateVisibility Get_Line0_Visibility();                                                                                 // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C.Get_Line1_Visibility
	// ESlateVisibility Get_Line1_Visibility();                                                                                 // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C.SetConversationBackingFillRatio
	// void SetConversationBackingFillRatio(float DesiredOverlayHeight);                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C.SetHistoryBackingFillRatio
	// void SetHistoryBackingFillRatio(float DesiredHistoryHeight);                                                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C.ExecuteUbergraph_ConversationWidget_BP
	// void ExecuteUbergraph_ConversationWidget_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/UI/CinematicPlayer/CinematicPlayer_BP.CinematicPlayer_BP_C
/// Size: 0x0010 (0x000348 - 0x000358)
class UCinematicPlayer_BP_C : public UCinematicPlayerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x348, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   SkipFadeOutIn                                               OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Game/UI/CinematicPlayer/CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeIn
	// void InitiateFadeIn();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/CinematicPlayer/CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeOut
	// void InitiateFadeOut();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/CinematicPlayer/CinematicPlayer_BP.CinematicPlayer_BP_C.ExecuteUbergraph_CinematicPlayer_BP
	// void ExecuteUbergraph_CinematicPlayer_BP(int32_t EntryPoint);                                                            // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/StatusTag/StatusTagGenerator_BP.StatusTagGenerator_BP_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UStatusTagGenerator_BP_C : public UStatusTagGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Game/UI/HUD/PlayerHudEvents.PlayerHudEvents_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerHudEvents_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/UI/HUD/PlayerHudEvents.PlayerHudEvents_C.SetObjective
	// void SetObjective(class AActor* Objective, FString ObjectiveName);                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/HUD/General/DamageText/WorldSpaceTextGenerator_BP.WorldSpaceTextGenerator_BP_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UWorldSpaceTextGenerator_BP_C : public UWorldSpaceDamageTextGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Game/UI/General/OptionSlider/GenericSlider/GenericSlider_BP.GenericSlider_BP_C
/// Size: 0x0000 (0x000578 - 0x000578)
class UGenericSlider_BP_C : public USliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuSlider_BP.SettingsMenuSlider_BP_C
/// Size: 0x0000 (0x000338 - 0x000338)
class USettingsMenuSlider_BP_C : public USettingsMenuSliderWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/Menus/KeyBind/KeyBindMenu_BP.KeyBindMenu_BP_C
/// Size: 0x0030 (0x000B58 - 0x000B88)
class UKeyBindMenu_BP_C : public UKeyBindsMenuWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2952;

public:
	CMember(class UWidgetAnimation*)                   Outro                                                       OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(class UTextBlockBase*)                     Primary                                                     OFFSET(get<T>, {0xB70, 8, 0, 0})
	CMember(class UCanvasPanel*)                       RootCanvas                                                  OFFSET(get<T>, {0xB78, 8, 0, 0})
	CMember(class UTextBlockBase*)                     Secondary                                                   OFFSET(get<T>, {0xB80, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/KeyBind/KeyBindMenu_BP.KeyBindMenu_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/KeyBind/KeyBindMenu_BP.KeyBindMenu_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Library/Components/GlowButtonNoBacking_BP.GlowButtonNoBacking_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UGlowButtonNoBacking_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/General/LoadingBlocker/LoadingBlocker_BP.LoadingBlocker_BP_C
/// Size: 0x0008 (0x000278 - 0x000280)
class ULoadingBlocker_BP_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class UImage*)                             LoadingImage                                                OFFSET(get<T>, {0x278, 8, 0, 0})
};

/// Class /Game/UI/General/OptionSlider/GenericSlider/GenericSliderWidget_BP.GenericSliderWidget_BP_C
/// Size: 0x0010 (0x000338 - 0x000348)
class UGenericSliderWidget_BP_C : public UWaitTimeSliderWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Game/UI/Library/Components/BackgroundPanelWidget.BackgroundPanelWidget_C
/// Size: 0x0128 (0x000300 - 0x000428)
class UBackgroundPanelWidget_C : public UBackgroundPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x300, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOpacity                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FSlateBrush)                               OuterBrush                                                  OFFSET(getStruct<T>, {0x318, 136, 0, 0})
	SMember(FSlateBrush)                               InnerBrush                                                  OFFSET(getStruct<T>, {0x3A0, 136, 0, 0})


	/// Functions
	// Function /Game/UI/Library/Components/BackgroundPanelWidget.BackgroundPanelWidget_C.SetBackgroundFocused
	// void SetBackgroundFocused(bool bFocused);                                                                                // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundPanelWidget.BackgroundPanelWidget_C.OnInnerTextureLoaded
	// void OnInnerTextureLoaded(class UTexture2D* Texture);                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundPanelWidget.BackgroundPanelWidget_C.OnOuterTextureLoaded
	// void OnOuterTextureLoaded(class UTexture2D* Texture);                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundPanelWidget.BackgroundPanelWidget_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundPanelWidget.BackgroundPanelWidget_C.ExecuteUbergraph_BackgroundPanelWidget
	// void ExecuteUbergraph_BackgroundPanelWidget(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/UI/Inventory/BreakdownItemsGainedPopup_BP.BreakdownItemsGainedPopup_BP_C
/// Size: 0x0010 (0x000330 - 0x000340)
class UBreakdownItemsGainedPopup_BP_C : public UBreakdownPopupWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Game/UI/Menus/SaveLoadMenu/SaveLoadMenu_BP.SaveLoadMenu_BP_C
/// Size: 0x0018 (0x0003D8 - 0x0003F0)
class USaveLoadMenu_BP_C : public USaveLoadMenuWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(class UWidgetAnimation*)                   Outro                                                       OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Menus/PauseMenu.PauseMenu_C
/// Size: 0x0048 (0x000370 - 0x0003B8)
class UPauseMenu_C : public UPauseMenuWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x370, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background1_BP                                              OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UTextBlockBase*)                     LoadGameText                                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UTextBlockBase*)                     MainMenuText                                                OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UTextBlockBase*)                     QuitText                                                    OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ResumeText                                                  OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UTextBlockBase*)                     SaveGameText                                                OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class USavingWidget_BP_C*)                 SavingWidget_BP                                             OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UTextBlockBase*)                     SettingsText                                                OFFSET(get<T>, {0x3B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/PauseMenu.PauseMenu_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Menus/PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
	// void ExecuteUbergraph_PauseMenu(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/WaitTime/WaitTime_BP.WaitTime_BP_C
/// Size: 0x0010 (0x0003A0 - 0x0003B0)
class UWaitTime_BP_C : public UWaitTimeWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(class UBackground1_BP_C*)                  Background1_BP                                              OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Game/UI/IndianaUI_BP.IndianaUI_BP_C
/// Size: 0x0010 (0x000690 - 0x0006A0)
class AIndianaUI_BP_C : public AIndianaUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x690, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x698, 8, 0, 0})


	/// Functions
	// Function /Game/UI/IndianaUI_BP.IndianaUI_BP_C.SetObjective
	// void SetObjective(class AActor* Objective, FString ObjectiveName);                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/IndianaUI_BP.IndianaUI_BP_C.ExecuteUbergraph_IndianaUI_BP
	// void ExecuteUbergraph_IndianaUI_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/Saving/SavingWidget_BP.SavingWidget_BP_C
/// Size: 0x0028 (0x000320 - 0x000348)
class USavingWidget_BP_C : public USavingWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UImage*)                             SavingImageBacking                                          OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UImage*)                             SavingImageForeground                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UImage*)                             SavingImageRotating                                         OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Saving/SavingWidget_BP.SavingWidget_BP_C.OnMinimize
	// bool OnMinimize(FDelegateProperty& AnimationCompleteCallback);                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Saving/SavingWidget_BP.SavingWidget_BP_C.OnMaximize
	// bool OnMaximize(FDelegateProperty& AnimationCompleteCallback);                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Saving/SavingSpinnerWidget_BP.SavingSpinnerWidget_BP_C
/// Size: 0x0018 (0x000300 - 0x000318)
class USavingSpinnerWidget_BP_C : public UIndianaUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UImage*)                             SavingImageBacking                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UImage*)                             SavingImageForeground                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UImage*)                             SavingImageRotating                                         OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C
/// Size: 0x0050 (0x0003E0 - 0x000430)
class UMainOptions_BP_C : public UMainOptionsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3E0, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ChangeProfileText                                           OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ContinueText                                                OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UTextBlockBase*)                     CreditsText                                                 OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class UTextBlockBase*)                     DeliverablesText                                            OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ExtrasText                                                  OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UTextBlockBase*)                     LoadSaveText                                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UTextBlockBase*)                     NewGameText                                                 OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UTextBlockBase*)                     QuitText                                                    OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UTextBlockBase*)                     SettingsText                                                OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature
	// void BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature
	// void BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);     // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature
	// void BndEvt__NewGameButton_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);    // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature
	// void BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature
	// void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature
	// void BndEvt__QuitButton_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);       // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature
	// void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_8_ComponentEventMCD__DelegateSignature
	// void BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_8_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_9_ComponentEventMCD__DelegateSignature
	// void BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_9_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);     // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_ComponentEventMCD__DelegateSignature
	// void BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_11_ComponentEventMCD__DelegateSignature
	// void BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_11_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_12_ComponentEventMCD__DelegateSignature
	// void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_12_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_13_ComponentEventMCD__DelegateSignature
	// void BndEvt__QuitButton_K2Node_ComponentBoundEvent_13_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);      // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_14_ComponentEventMCD__DelegateSignature
	// void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_14_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature
	// void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_16_ComponentEventMCD__DelegateSignature
	// void BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_16_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_17_ComponentEventMCD__DelegateSignature
	// void BndEvt__DeliverablesButton_K2Node_ComponentBoundEvent_17_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_18_ComponentEventMCD__DelegateSignature
	// void BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_18_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);    // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_19_ComponentEventMCD__DelegateSignature
	// void BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_19_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);    // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature
	// void BndEvt__NewGameButton_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_21_ComponentEventMCD__DelegateSignature
	// void BndEvt__NewGameButton_K2Node_ComponentBoundEvent_21_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_22_ComponentEventMCD__DelegateSignature
	// void BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_22_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_23_ComponentEventMCD__DelegateSignature
	// void BndEvt__LoadSaveButton_K2Node_ComponentBoundEvent_23_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_24_ComponentEventMCD__DelegateSignature
	// void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_24_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_25_ComponentEventMCD__DelegateSignature
	// void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_25_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);  // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_26_ComponentEventMCD__DelegateSignature
	// void BndEvt__QuitButton_K2Node_ComponentBoundEvent_26_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);      // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_27_ComponentEventMCD__DelegateSignature
	// void BndEvt__QuitButton_K2Node_ComponentBoundEvent_27_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);      // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_28_ComponentEventMCD__DelegateSignature
	// void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_28_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_29_ComponentEventMCD__DelegateSignature
	// void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_29_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_30_ComponentEventMCD__DelegateSignature
	// void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_30_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_31_ComponentEventMCD__DelegateSignature
	// void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_31_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_40_ComponentEventMCD__DelegateSignature
	// void BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_40_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_41_ComponentEventMCD__DelegateSignature
	// void BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_41_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_42_ComponentEventMCD__DelegateSignature
	// void BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_42_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_43_ComponentEventMCD__DelegateSignature
	// void BndEvt__ChangeProfileButton_K2Node_ComponentBoundEvent_43_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C.ExecuteUbergraph_MainOptions_BP
	// void ExecuteUbergraph_MainOptions_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/LevelSelectOptions_BP.LevelSelectOptions_BP_C
/// Size: 0x0008 (0x000338 - 0x000340)
class ULevelSelectOptions_BP_C : public ULevelOptionsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UBorder*)                            OptionsContainer                                            OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Game/UI/Menus/GammaSelection/GammaSelection_BP.GammaSelection_BP_C
/// Size: 0x0028 (0x000370 - 0x000398)
class UGammaSelection_BP_C : public UGammaSelectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UWidgetAnimation*)                   Outro                                                       OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UImage*)                             GammaImage                                                  OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UCanvasPanel*)                       RootCanvas                                                  OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Game/UI/Library/Components/InvisibleButton_BP.InvisibleButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UInvisibleButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Library/Components/Button1_BP.Button1_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UButton1_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C
/// Size: 0x0068 (0x0003F8 - 0x000460)
class UMainMenu_C : public UMainMenuWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3F8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInGammaSelection                                        OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   AutosaveSplashAnimation                                     OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInKeyPress                                              OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInLogo                                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutLogo                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   KeyPressFadeLowAnim                                         OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutOptionsMenu                                          OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UImage*)                             LogoImage                                                   OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class USavingSpinnerWidget_BP_C*)          SavingSpinnerWidget                                         OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class USavingWidget_BP_C*)                 SavingWidget_BP                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UUserWidget*)                        NewVar                                                      OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.FadeInMenu
	// void FadeInMenu(bool Condition);                                                                                         // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnHideInterface
	// void OnHideInterface();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnShowInterface
	// void OnShowInterface(bool bShouldChangeLogo);                                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartHideAnyTextPrompt
	// void OnStartHideAnyTextPrompt();                                                                                         // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnPromptFadeInComplete
	// void OnPromptFadeInComplete();                                                                                           // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnShowAnyTextPrompt
	// void OnShowAnyTextPrompt();                                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.StartAutosaveSplash
	// void StartAutosaveSplash();                                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnAutosaveSplashCompleteEvent
	// void OnAutosaveSplashCompleteEvent();                                                                                    // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.FadeInKeyPressEvent
	// void FadeInKeyPressEvent();                                                                                              // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnShowLogo
	// void OnShowLogo();                                                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.FadeOutOptionsMenuFinished
	// void FadeOutOptionsMenuFinished();                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartShowMainOptionsComplete
	// void OnStartShowMainOptionsComplete();                                                                                   // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartHideGammaSelectionComplete
	// void OnStartHideGammaSelectionComplete();                                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnHideLogo
	// void OnHideLogo();                                                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartHideGammaSelection
	// void OnStartHideGammaSelection();                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartShowGammaSelection
	// void OnStartShowGammaSelection();                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartShowGammaComplete
	// void OnStartShowGammaComplete();                                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartHideAnyTextComplete
	// void OnStartHideAnyTextComplete();                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnStartShowMainOptions
	// void OnStartShowMainOptions();                                                                                           // [0x1c5deb0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.OnGammaSelectionFadeInComplete
	// void OnGammaSelectionFadeInComplete();                                                                                   // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	// void ExecuteUbergraph_MainMenu(int32_t EntryPoint);                                                                      // [0x1c5deb0] Final                
};

/// Class /Game/UI/InputLabel/InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C
/// Size: 0x0020 (0x0003B8 - 0x0003D8)
class UInputLabelHoldSmall_BP_C : public UInputLabelHoldWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3B8, 8, 0, 0})
	CMember(class UImage*)                             KeyBackingIcon                                              OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           GamepadRadialMaterial                                       OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           KeyRadialMaterial                                           OFFSET(get<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/InputLabel/InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/InputLabel/InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetRadialFill
	// void SetRadialFill(float FillRatio, float Opacity);                                                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InputLabel/InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetWidth
	// void SetWidth(float Width);                                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InputLabel/InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.ExecuteUbergraph_InputLabelHoldSmall_BP
	// void ExecuteUbergraph_InputLabelHoldSmall_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final                
};

/// Class /Game/UI/Companions/CompanionEquipmentBarWidget.CompanionEquipmentBarWidget_C
/// Size: 0x0020 (0x000470 - 0x000490)
class UCompanionEquipmentBarWidget_C : public UCompanionEquipmentBarWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(class UInventoryItem_BP_C*)                Item0                                                       OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item1                                                       OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item2                                                       OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UInventoryItem_BP_C*)                Item3                                                       OFFSET(get<T>, {0x488, 8, 0, 0})
};

/// Class /Game/UI/Perks/StatsPerkListRow_BP.StatsPerkListRow_BP_C
/// Size: 0x0008 (0x000428 - 0x000430)
class UStatsPerkListRow_BP_C : public UPerksListRowWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UImage*)                             PerkAnchor                                                  OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Game/UI/Perks/StatsPerkList_BP.StatsPerkList_BP_C
/// Size: 0x0028 (0x000360 - 0x000388)
class UStatsPerkList_BP_C : public UPerksListWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UImage*)                             PerkRowLineBreakFour                                        OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             PerkRowLineBreakOne                                         OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UImage*)                             PerkRowLineBreakThree                                       OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UImage*)                             PerkRowLineBreakTwo                                         OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UVerticalBox*)                       PerkVerticalBox                                             OFFSET(get<T>, {0x380, 8, 0, 0})
};

/// Class /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C
/// Size: 0x0008 (0x000318 - 0x000320)
class UStatsPerkSummaryEntry_BP1_C : public UPerkSummaryEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature();                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_1_NoParamMCD__DelegateSignature();                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C.ExecuteUbergraph_StatsPerkSummaryEntry_BP1
	// void ExecuteUbergraph_StatsPerkSummaryEntry_BP1(int32_t EntryPoint);                                                     // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Companions/CompanionOptionSelector_BP.CompanionOptionSelector_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UCompanionOptionSelector_BP_C : public UCompanionBehaviorOptionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummary_BP.StatsPerkSummary_BP_C
/// Size: 0x0000 (0x000328 - 0x000328)
class UStatsPerkSummary_BP_C : public UStatsPerkSummaryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Game/UI/Companions/CompanionStatusEffects_BP.CompanionStatusEffects_BP_C
/// Size: 0x0000 (0x000338 - 0x000338)
class UCompanionStatusEffects_BP_C : public UCharacterStatusEffectsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/Companions/CompanionBehaviors_BP.CompanionBehaviors_BP_C
/// Size: 0x0000 (0x000338 - 0x000338)
class UCompanionBehaviors_BP_C : public UCompanionBehaviorsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/Companions/CompanionDetails_BP.CompanionDetails_BP_C
/// Size: 0x0010 (0x000318 - 0x000328)
class UCompanionDetails_BP_C : public UCompanionDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UBackgroundSplitPanelWidget_C*)      BackgroundSplitPanelWidget                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UScrollBox*)                         BodyScrollBox                                               OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Game/UI/Companions/CompanionStats_BP.CompanionStats_BP_C
/// Size: 0x0010 (0x0003B0 - 0x0003C0)
class UCompanionStats_BP_C : public UCompanionStatsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget1                                      OFFSET(get<T>, {0x3B8, 8, 0, 0})
};

/// Class /Game/UI/Companions/CompanionPerks_BP.CompanionPerks_BP_C
/// Size: 0x0020 (0x0003B8 - 0x0003D8)
class UCompanionPerks_BP_C : public UCompanionPerksWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget1                                      OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UImage*)                             DynamicBacking                                              OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UImage*)                             StaticBacking                                               OFFSET(get<T>, {0x3D0, 8, 0, 0})
};

/// Class /Game/UI/Companions/CompanionEquipment_BP.CompanionEquipment_BP_C
/// Size: 0x0000 (0x000548 - 0x000548)
class UCompanionEquipment_BP_C : public UCompanionEquipmentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
};

/// Class /Game/UI/CodexJournal/TutorialList_BP.TutorialList_BP_C
/// Size: 0x0000 (0x000398 - 0x000398)
class UTutorialList_BP_C : public UTutorialList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
};

/// Class /Game/UI/CodexJournal/TutorialListContainer_BP.TutorialListContainer_BP_C
/// Size: 0x0000 (0x000328 - 0x000328)
class UTutorialListContainer_BP_C : public UTutorialListContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Game/UI/CodexJournal/SymbolList_BP.SymbolList_BP_C
/// Size: 0x0000 (0x000448 - 0x000448)
class USymbolList_BP_C : public USymbolList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
};

/// Class /Game/UI/QuestJournal/QuestList/QuestList_BP.QuestList_BP_C
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UQuestList_BP_C : public UQuestListWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Game/UI/QuestJournal/ObjectiveList/ObjectiveList_BP.ObjectiveList_BP_C
/// Size: 0x0000 (0x000328 - 0x000328)
class UObjectiveList_BP_C : public UObjectiveListWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Game/UI/Library/Components/BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C
/// Size: 0x0258 (0x000360 - 0x0005B8)
class UBackgroundSplitPanelWidget_C : public UBackgroundSplitPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOpacity                                                 OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UImage*)                             BorderBottom                                                OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UImage*)                             BorderInnerBottom                                           OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UImage*)                             BorderInnerTop                                              OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UImage*)                             BorderTop                                                   OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot                                                   OFFSET(get<T>, {0x390, 8, 0, 0})
	SMember(FSlateBrush)                               OuterTopBrush                                               OFFSET(getStruct<T>, {0x398, 136, 0, 0})
	SMember(FSlateBrush)                               InnerTopBrush                                               OFFSET(getStruct<T>, {0x420, 136, 0, 0})
	SMember(FSlateBrush)                               OuterBottomBrush                                            OFFSET(getStruct<T>, {0x4A8, 136, 0, 0})
	SMember(FSlateBrush)                               InnerBotttomBrush                                           OFFSET(getStruct<T>, {0x530, 136, 0, 0})


	/// Functions
	// Function /Game/UI/Library/Components/BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnOuterTopTextureLoaded
	// void OnOuterTopTextureLoaded(class UTexture2D* Texture);                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnOuterBottomTextureLoaded
	// void OnOuterBottomTextureLoaded(class UTexture2D* Texture);                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnInnerTopTextureLoaded
	// void OnInnerTopTextureLoaded(class UTexture2D* Texture);                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnInnerBottomTextureLoaded
	// void OnInnerBottomTextureLoaded(class UTexture2D* Texture);                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Library/Components/BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.ExecuteUbergraph_BackgroundSplitPanelWidget
	// void ExecuteUbergraph_BackgroundSplitPanelWidget(int32_t EntryPoint);                                                    // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C
/// Size: 0x0008 (0x000328 - 0x000330)
class UDerivedStat_BP_C : public UDerivedStatWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_78_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_78_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_106_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_106_NoParamMCD__DelegateSignature();                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_28_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_28_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CharacterDetails/DerivedStats/DerivedStat_BP.DerivedStat_BP_C.ExecuteUbergraph_DerivedStat_BP
	// void ExecuteUbergraph_DerivedStat_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Library/Components/GlowButtonNoBackingNoPress_BP.GlowButtonNoBackingNoPress_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UGlowButtonNoBackingNoPress_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C
/// Size: 0x0008 (0x000328 - 0x000330)
class UCharacterStatusEffectEntry_BP_C : public UStatusEffectEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature();                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_56_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_56_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C.ExecuteUbergraph_CharacterStatusEffectEntry_BP
	// void ExecuteUbergraph_CharacterStatusEffectEntry_BP(int32_t EntryPoint);                                                 // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C
/// Size: 0x0008 (0x000318 - 0x000320)
class UStatsFlawSummaryEntry_BP_C : public UFlawSummaryEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature();                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_62_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_62_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_86_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_86_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C.ExecuteUbergraph_StatsFlawSummaryEntry_BP
	// void ExecuteUbergraph_StatsFlawSummaryEntry_BP(int32_t EntryPoint);                                                      // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Stats/SummaryPage/Flaw/StatsFlawSummary_BP.StatsFlawSummary_BP_C
/// Size: 0x0000 (0x000310 - 0x000310)
class UStatsFlawSummary_BP_C : public UStatsFlawSummaryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffects_BP.CharacterStatusEffects_BP_C
/// Size: 0x0000 (0x000338 - 0x000338)
class UCharacterStatusEffects_BP_C : public UCharacterStatusEffectsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/CharacterDetails/DerivedStats/CharacterDerivedStats_BP.CharacterDerivedStats_BP_C
/// Size: 0x0008 (0x000378 - 0x000380)
class UCharacterDerivedStats_BP_C : public UCharacterDerivedStatsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UVerticalBox*)                       ContentVerticalBox                                          OFFSET(get<T>, {0x378, 8, 0, 0})
};

/// Class /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C
/// Size: 0x0011 (0x000298 - 0x0002A9)
class UReputationProgress_BP_C : public UReputationProgressWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 681;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x298, 8, 0, 0})
	CMember(class UTexture2D*)                         Fill                                                        OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(EIndianaUIColorType)                       IndianaColor                                                OFFSET(get<T>, {0x2A8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C.ExecuteUbergraph_ReputationProgress_BP
	// void ExecuteUbergraph_ReputationProgress_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Reputation/ReputationList_BP.ReputationList_BP_C
/// Size: 0x0000 (0x000328 - 0x000328)
class UReputationList_BP_C : public UReputationListWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C
/// Size: 0x0008 (0x000330 - 0x000338)
class UReputationEntry_BP1_C : public UReputationEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C.SetFocusChanged
	// void SetFocusChanged(bool IsFocused);                                                                                    // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C.ExecuteUbergraph_ReputationEntry_BP1
	// void ExecuteUbergraph_ReputationEntry_BP1(int32_t EntryPoint);                                                           // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Reputation/ReputationDetails_BP.ReputationDetails_BP_C
/// Size: 0x0018 (0x000360 - 0x000378)
class UReputationDetails_BP_C : public UReputationDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UTextBlockBase*)                     DescriptionTextBlock                                        OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UTextBlockBase*)                     EffectsTextBlock                                            OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UTextBlockBase*)                     TextBlockBase                                               OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Game/UI/Stats/SkillsPage/SkillAdjustment_BP.SkillAdjustment_BP_C
/// Size: 0x0000 (0x000340 - 0x000340)
class USkillAdjustment_BP_C : public USkillAdjustment
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Game/UI/Perks/StatsPerkListEntry_BP.StatsPerkListEntry_BP_C
/// Size: 0x0020 (0x000368 - 0x000388)
class UStatsPerkListEntry_BP_C : public UPerksListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x368, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Pip3Flashing                                                OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Pip2Flashing                                                OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Pip1Flashing                                                OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Perks/StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.UpdateButtonBrush
	// void UpdateButtonBrush(bool bPendingPurchase, bool bActuallyPurchased, bool bSuppressed);                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Perks/StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.ExecuteUbergraph_StatsPerkListEntry_BP
	// void ExecuteUbergraph_StatsPerkListEntry_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Perks/PlayerPerkListRow_BP.PlayerPerkListRow_BP_C
/// Size: 0x0008 (0x000428 - 0x000430)
class UPlayerPerkListRow_BP_C : public UPerksListRowWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UImage*)                             PerkAnchor                                                  OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Game/UI/Perks/PlayerPerkList_BP.PlayerPerkList_BP_C
/// Size: 0x0018 (0x000360 - 0x000378)
class UPlayerPerkList_BP_C : public UPerksListWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UImage*)                             PerkRowLineBreakOne                                         OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             PerkRowLineBreakTwo                                         OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UVerticalBox*)                       PerkVerticalBox                                             OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Game/UI/Stats/SkillsPage/CharacterDescriptionPanel_BP.CharacterDescriptionPanel_BP_C
/// Size: 0x0008 (0x000368 - 0x000370)
class UCharacterDescriptionPanel_BP_C : public UCharacterDescriptionPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UImage*)                             AttributeEffectImage                                        OFFSET(get<T>, {0x368, 8, 0, 0})
};

/// Class /Game/UI/Stats/SkillsPage/StatsSkillsPage_BP.StatsSkillsPage_BP_C
/// Size: 0x0010 (0x0004A0 - 0x0004B0)
class UStatsSkillsPage_BP_C : public UStatsSkillsPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget1                                      OFFSET(get<T>, {0x4A8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Stats/SkillsPage/StatsSkillsPage_BP.StatsSkillsPage_BP_C.Get_SkillGroupScrollBox_bIsEnabled
	// bool Get_SkillGroupScrollBox_bIsEnabled();                                                                               // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/UI/Stats/PerksPage/StatsPerksPage_BP.StatsPerksPage_BP_C
/// Size: 0x0018 (0x0003E8 - 0x000400)
class UStatsPerksPage_BP_C : public UStatsPerksPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget1                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UImage*)                             DynamicBacking                                              OFFSET(get<T>, {0x3F8, 8, 0, 0})
};

/// Class /Game/UI/Reputation/ReputationSummary_BP.ReputationSummary_BP_C
/// Size: 0x0000 (0x000340 - 0x000340)
class UReputationSummary_BP_C : public UReputationSummaryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Game/UI/CharacterDetails/CharacterDetails_BP.CharacterDetails_BP_C
/// Size: 0x0020 (0x000338 - 0x000358)
class UCharacterDetails_BP_C : public UCharacterDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget1                                      OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget2                                      OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget_C                                     OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/FloorIndicator/FloorLevel_BP.FloorLevel_BP_C
/// Size: 0x0000 (0x000288 - 0x000288)
class UFloorLevel_BP_C : public UFloorLevelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
};

/// Class /Game/UI/Map/LedgerMap/FloorIndicator/ChangeFloorButton_BP.ChangeFloorButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UChangeFloorButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PlayerEntry_BP.PlayerEntry_BP_C
/// Size: 0x0008 (0x000300 - 0x000308)
class UPlayerEntry_BP_C : public UBaseMapEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/FloorIndicator/FloorLevelIndicator_BP.FloorLevelIndicator_BP_C
/// Size: 0x0008 (0x0003C0 - 0x0003C8)
class UFloorLevelIndicator_BP_C : public UFloorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x3C0, 8, 0, 0})
};

/// Class /Game/UI/ItemStats/ToolTipArmorStat_BP.ToolTipArmorStat_BP_C
/// Size: 0x0000 (0x000348 - 0x000348)
class UToolTipArmorStat_BP_C : public UItemStatEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Game/UI/ItemStats/ItemStatCategory_BP.ItemStatCategory_BP_C
/// Size: 0x0000 (0x000318 - 0x000318)
class UItemStatCategory_BP_C : public UItemStatsCategoryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Game/UI/HUD/GenericNotifications/GeneralNotificationLabel_BP.GeneralNotificationLabel_BP_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UGeneralNotificationLabel_BP_C : public UInputLabelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C
/// Size: 0x0018 (0x000440 - 0x000458)
class UGenericNotificationEntry_BP_C : public UGenericNotificationEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x450, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.PrepareNewMessage
	// void PrepareNewMessage();                                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.OnFadeOutFinished
	// void OnFadeOutFinished();                                                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.PrepareNextMessage
	// void PrepareNextMessage();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.OnFadeInFinished
	// void OnFadeInFinished();                                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.ExecuteUbergraph_GenericNotificationEntry_BP
	// void ExecuteUbergraph_GenericNotificationEntry_BP(int32_t EntryPoint);                                                   // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/EnemyScanner/TTDStatusEffectsWidget_BP.TTDStatusEffectsWidget_BP_C
/// Size: 0x0008 (0x000318 - 0x000320)
class UTTDStatusEffectsWidget_BP_C : public UTTDStatusEffectsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UStatusEffectTagEntry_BP_C*)         StatusEffectTagEntry_BP                                     OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Game/UI/HUD/EnemyScanner/EnemyDifficulty_BP.EnemyDifficulty_BP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class UEnemyDifficulty_BP_C : public UEnemyDifficultyWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Game/UI/HUD/Reticle/GenericCrosshair_BP.GenericCrosshair_BP_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UGenericCrosshair_BP_C : public UCrosshairWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/UI/HUD/Reticle/CauseDamageReticle_BP.CauseDamageReticle_BP_C
/// Size: 0x0020 (0x000338 - 0x000358)
class UCauseDamageReticle_BP_C : public UCauseDamageReticleWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   KillAnim                                                    OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   WeakAnim                                                    OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   HitAnim                                                     OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/Reticle/CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowHitAnim
	// void ShowHitAnim();                                                                                                      // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowWeakAnim
	// void ShowWeakAnim();                                                                                                     // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowKillAnim
	// void ShowKillAnim();                                                                                                     // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/CauseDamageReticle_BP.CauseDamageReticle_BP_C.ExecuteUbergraph_CauseDamageReticle_BP
	// void ExecuteUbergraph_CauseDamageReticle_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/WeaponSelect/WeaponRadialSection_BP.WeaponRadialSection_BP_C
/// Size: 0x0008 (0x000298 - 0x0002A0)
class UWeaponRadialSection_BP_C : public UWeaponRadialSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/WeaponSelect/WeaponRadialSection_BP.WeaponRadialSection_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponRadialSection_BP.WeaponRadialSection_BP_C.ExecuteUbergraph_WeaponRadialSection_BP
	// void ExecuteUbergraph_WeaponRadialSection_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/WeaponSelect/AmmoRadialSection_BP.AmmoRadialSection_BP_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UAmmoRadialSection_BP_C : public UAmmoRadialSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/UI/HUD/StatusEffectOverview/StatusEffectTagEntry_BP.StatusEffectTagEntry_BP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class UStatusEffectTagEntry_BP_C : public UStatusEffectTagEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Game/UI/Library/Components/KeySelectorGlowButton_BP.KeySelectorGlowButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UKeySelectorGlowButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C
/// Size: 0x0068 (0x000480 - 0x0004E8)
class UDifficultySelect_BP_C : public UDifficultySelectWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x480, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Transition                                                  OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget_C                                     OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ConversationHeaderTextblock                                 OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UTextBlockBase*)                     DifficultyHeaderTextBlock                                   OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class USizeBox*)                           SelectDifficultyPanel_SizeBox                               OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class USizeBox*)                           SubtitleSettingsPanel_SizeBox                               OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UTextBlockBase*)                     TextBlockBase                                               OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UTextBlockBase*)                     TextBlockBase1                                              OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UTextBlockBase*)                     TextBlockBase2                                              OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UTextBlockBase*)                     TextBlockBase3                                              OFFSET(get<T>, {0x4E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);       // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature
	// void BndEvt__EasyButton_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);       // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature
	// void BndEvt__EasyButton_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);       // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature
	// void BndEvt__EasyButton_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);       // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__NormalButton_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature
	// void BndEvt__NormalButton_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);     // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__NormalButton_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature
	// void BndEvt__NormalButton_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);     // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__NormalButton_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature
	// void BndEvt__NormalButton_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);     // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__NormalButton_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature
	// void BndEvt__NormalButton_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);     // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_8_ComponentEventMCD__DelegateSignature
	// void BndEvt__HardButton_K2Node_ComponentBoundEvent_8_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);       // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_9_ComponentEventMCD__DelegateSignature
	// void BndEvt__HardButton_K2Node_ComponentBoundEvent_9_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);       // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_10_ComponentEventMCD__DelegateSignature
	// void BndEvt__HardButton_K2Node_ComponentBoundEvent_10_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);      // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_11_ComponentEventMCD__DelegateSignature
	// void BndEvt__HardButton_K2Node_ComponentBoundEvent_11_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);      // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_12_ComponentEventMCD__DelegateSignature
	// void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_12_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_13_ComponentEventMCD__DelegateSignature
	// void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_13_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_14_ComponentEventMCD__DelegateSignature
	// void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_14_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature
	// void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature(FComponentEvent& Event); // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.OnTransitionToSubtitleComplete
	// void OnTransitionToSubtitleComplete();                                                                                   // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.OnTransitionToDifficultyComplete
	// void OnTransitionToDifficultyComplete();                                                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.StartTransitionToDifficultyFromSubtitle
	// void StartTransitionToDifficultyFromSubtitle();                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.StartTransitionToSubtitleFromDifficulty
	// void StartTransitionToSubtitleFromDifficulty();                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C.ExecuteUbergraph_DifficultySelect_BP
	// void ExecuteUbergraph_DifficultySelect_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C
/// Size: 0x0010 (0x000360 - 0x000370)
class USettingsMenuKeyRebind_BP_C : public USettingsMenuKeyRebindWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.ExecuteUbergraph_SettingsMenuKeyRebind_BP
	// void ExecuteUbergraph_SettingsMenuKeyRebind_BP(int32_t EntryPoint);                                                      // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Library/Components/CheckBox1_BP.CheckBox1_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UCheckBox1_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/General/OptionPresenter/OptionPresenter_BP.OptionPresenter_BP_C
/// Size: 0x0000 (0x000380 - 0x000380)
class UOptionPresenter_BP_C : public UOptionPresenterWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuOptionPresenter_BP.SettingsMenuOptionPresenter_BP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class USettingsMenuOptionPresenter_BP_C : public USettingsMenuOptionPresenterWdgt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Game/UI/Ledger/Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C
/// Size: 0x0009 (0x0002B0 - 0x0002B9)
class UButton_Ledger_Header_SubContainer_BP_C : public UButtonBaseContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 697;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B0, 8, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x2B8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Ledger/Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Ledger/Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Ledger/Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C.ExecuteUbergraph_Button_Ledger_Header_SubContainer_BP
	// void ExecuteUbergraph_Button_Ledger_Header_SubContainer_BP(int32_t EntryPoint);                                          // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/ActorStage/HumanDummy_UI.HumanDummy_UI_C
/// Size: 0x0000 (0x000610 - 0x000610)
class AHumanDummy_UI_C : public AIndianaCharacterDummy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
};

/// Class /Game/UI/ActorStage/PlayerDummy_UI.PlayerDummy_UI_C
/// Size: 0x0000 (0x000610 - 0x000610)
class APlayerDummy_UI_C : public AHumanDummy_UI_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
};

/// Class /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C
/// Size: 0x0020 (0x000308 - 0x000328)
class UCompanionMoveTo_BP_C : public UCompanionMoveToWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x308, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   IntroOutro                                                  OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Idle                                                        OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UImage*)                             MoveToImage                                                 OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnAnimationEnd
	// void OnAnimationEnd();                                                                                                   // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnNewLocation
	// void OnNewLocation();                                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnMoveToCancelled
	// void OnMoveToCancelled();                                                                                                // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C.ExecuteUbergraph_CompanionMoveTo_BP
	// void ExecuteUbergraph_CompanionMoveTo_BP(int32_t EntryPoint);                                                            // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/StatusEffectOverview/StatusEffectTag_BP.StatusEffectTag_BP_C
/// Size: 0x0000 (0x000368 - 0x000368)
class UStatusEffectTag_BP_C : public UStatusEffectTagWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
};

/// Class /Game/UI/HUD/General/DamageText/DamageEffect.DamageEffect_C
/// Size: 0x0000 (0x000370 - 0x000370)
class UDamageEffect_C : public UDamageEffectWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C
/// Size: 0x0020 (0x000400 - 0x000420)
class UStatusTag_BP_C : public UStatusTagWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x400, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutTarget                                               OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInTarget                                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x418, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.OnSetPlayerTargeted
	// void OnSetPlayerTargeted(bool bIsTarget);                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.WidgetAnimationEvt_FadeOutTarget_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeOutTarget_K2Node_WidgetAnimationEvent();                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.WidgetAnimationEvt_FadeInTarget_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeInTarget_K2Node_WidgetAnimationEvent();                                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.WidgetAnimationEvt_FadeOutTarget_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeOutTarget_K2Node_WidgetAnimationEvent();                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.WidgetAnimationEvt_FadeInTarget_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeInTarget_K2Node_WidgetAnimationEvent();                                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.ExecuteUbergraph_StatusTag_BP
	// void ExecuteUbergraph_StatusTag_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/Subtitle/Subtitle_BP.Subtitle_BP_C
/// Size: 0x0020 (0x000470 - 0x000490)
class USubtitle_BP_C : public USubtitlesWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(class UMaterialInstanceDynamic*)           LeftTopImageInst                                            OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RightTopImageInst                                           OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           LeftBotImageInst                                            OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RightBotImageInst                                           OFFSET(get<T>, {0x488, 8, 0, 0})
};

/// Class /Game/UI/HUD/MapTransition/MapTransitionNotification_BP.MapTransitionNotification_BP_C
/// Size: 0x0010 (0x000318 - 0x000328)
class UMapTransitionNotification_BP_C : public UMapTransitionNotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   AreaNameFadeInOut                                           OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/MapTransition/MapTransitionNotification_BP.MapTransitionNotification_BP_C.StartAnimation
	// void StartAnimation();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/MapTransition/MapTransitionNotification_BP.MapTransitionNotification_BP_C.ExecuteUbergraph_MapTransitionNotification_BP
	// void ExecuteUbergraph_MapTransitionNotification_BP(int32_t EntryPoint);                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/RadialContextMenu/WeaponContextSection_BP.WeaponContextSection_BP_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UWeaponContextSection_BP_C : public UItemWeaponSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/UI/RadialContextMenu/RadialMenuGadgetSlot_BP.RadialMenuGadgetSlot_BP_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class URadialMenuGadgetSlot_BP_C : public UItemGadgetSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/UI/RadialContextMenu/RadialMenuDrugSlot_BP.RadialMenuDrugSlot_BP_C
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class URadialMenuDrugSlot_BP_C : public UItemDrugSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /Game/UI/Inventory/Pages/Modifications_BP.Modifications_BP_C
/// Size: 0x0000 (0x000430 - 0x000430)
class UModifications_BP_C : public UInventoryModificationsPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
};

/// Class /Game/UI/RadialContextMenu/MedKitContextSection_BP.MedKitContextSection_BP_C
/// Size: 0x0000 (0x000298 - 0x000298)
class UMedKitContextSection_BP_C : public UItemMedKitSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Game/UI/Inventory/Pages/Materials_BP.Materials_BP_C
/// Size: 0x0000 (0x000430 - 0x000430)
class UMaterials_BP_C : public UInventoryMaterialsPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
};

/// Class /Game/UI/Inventory/Pages/Junk_BP.Junk_BP_C
/// Size: 0x0000 (0x000430 - 0x000430)
class UJunk_BP_C : public UInventoryJunkPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
};

/// Class /Game/UI/Inventory/Pages/General_BP.General_BP_C
/// Size: 0x0000 (0x000430 - 0x000430)
class UGeneral_BP_C : public UInventoryPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
};

/// Class /Game/UI/ItemStats/ToolTipItemStat_BP.ToolTipItemStat_BP_C
/// Size: 0x0000 (0x000348 - 0x000348)
class UToolTipItemStat_BP_C : public UItemStatEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Game/UI/Inventory/StatSummary/SummaryEquipmentModWidget_BP.SummaryEquipmentModWidget_BP_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class USummaryEquipmentModWidget_BP_C : public UEquipmentModWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/UI/ItemStats/ItemStats_BP.ItemStats_BP_C
/// Size: 0x0000 (0x000418 - 0x000418)
class UItemStats_BP_C : public UItemStatsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
};

/// Class /Game/UI/CodexJournal/LedgerJournalWidget_BP.LedgerJournalWidget_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class ULedgerJournalWidget_BP_C : public ULedgerJournalWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/Companions/Companions_BP.Companions_BP_C
/// Size: 0x0000 (0x0003B0 - 0x0003B0)
class UCompanions_BP_C : public UCompanionsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
};

/// Class /Game/UI/Menus/SaveLoadMenu/NewSave_BP.NewSave_BP_C
/// Size: 0x0010 (0x000288 - 0x000298)
class UNewSave_BP_C : public UNewSaveWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x288, 8, 0, 0})
	CMember(class UBorder*)                            Border                                                      OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/SaveLoadMenu/NewSave_BP.NewSave_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/NewSave_BP.NewSave_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/NewSave_BP.NewSave_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/NewSave_BP.NewSave_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/NewSave_BP.NewSave_BP_C.ExecuteUbergraph_NewSave_BP
	// void ExecuteUbergraph_NewSave_BP(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/Radial/Radial_BP.Radial_BP_C
/// Size: 0x0010 (0x000440 - 0x000450)
class URadial_BP_C : public URadialWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(class UMaterialInstance*)                  DMI                                                         OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/Radial/Radial_BP.Radial_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Radial/Radial_BP.Radial_BP_C.ExecuteUbergraph_Radial_BP
	// void ExecuteUbergraph_Radial_BP(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final                
};

/// Class /Game/UI/RadialContextMenu/IconContextSection_BP.IconContextSection_BP_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UIconContextSection_BP_C : public UImageSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/UI/RadialContextMenu/RadialContainerWidget_BP.RadialContainerWidget_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class URadialContainerWidget_BP_C : public URadialContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C
/// Size: 0x0040 (0x0004C8 - 0x000508)
class UStackSplitting_BP_C : public UStackSplittingWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1288;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UImage*)                             BackingBot                                                  OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UImage*)                             BackingTop                                                  OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UImage*)                             Frame                                                       OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackingBotInst                                              OFFSET(get<T>, {0x500, 8, 0, 0})


	/// Functions
	// Function /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C.ExecuteUbergraph_StackSplitting_BP
	// void ExecuteUbergraph_StackSplitting_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C
/// Size: 0x0011 (0x0002B0 - 0x0002C1)
class UButton_Ledger_Header_Container_BP_C : public UButtonBaseContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 705;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B0, 8, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(float)                                     TextAlpha                                                   OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(bool)                                      bLastActivatable                                            OFFSET(get<bool>, {0x2C0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_96_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_132_ButtonEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_132_ButtonEventMCD__DelegateSignature(FButtonEvent& Event);               // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_157_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_157_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.OnActivatableChange
	// void OnActivatableChange(bool bActivatable);                                                                             // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C.ExecuteUbergraph_Button_Ledger_Header_Container_BP
	// void ExecuteUbergraph_Button_Ledger_Header_Container_BP(int32_t EntryPoint);                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Ledger/Button_LedgerHeader_BP.Button_LedgerHeader_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UButton_LedgerHeader_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/EquipmentMods/EquipmentMod_BP.EquipmentMod_BP_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UEquipmentMod_BP_C : public UEquipmentModWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/UI/ItemRepair/ItemRepair_BP.ItemRepair_BP_C
/// Size: 0x0008 (0x0003A8 - 0x0003B0)
class UItemRepair_BP_C : public UItemRepairWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(class UBackground1_BP_C*)                  Background                                                  OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Game/UI/InputLabel/InputLabelSmall_BP.InputLabelSmall_BP_C
/// Size: 0x0008 (0x000370 - 0x000378)
class UInputLabelSmall_BP_C : public UInputLabelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UMaterialInstanceDynamic*)           RadialMaterial                                              OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C
/// Size: 0x0028 (0x000650 - 0x000678)
class UItemViewer_BP_C : public UItemViewerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1656;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x650, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UImage*)                             Image3                                                      OFFSET(get<T>, {0x670, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C.ExecuteUbergraph_ItemViewer_BP
	// void ExecuteUbergraph_ItemViewer_BP(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Workbench/WBModificationPage_BP.WBModificationPage_BP_C
/// Size: 0x0018 (0x000428 - 0x000440)
class UWBModificationPage_BP_C : public UWBModificationPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UWidgetAnimation*)                   NewAnimation                                                OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UInputLabel_BP_C*)                   ActionInputLabelMod                                         OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class USizeBox*)                           PagesSizeBox                                                OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C
/// Size: 0x0018 (0x000348 - 0x000360)
class UPlayerStats_BP_C : public UPlayerStatsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x348, 8, 0, 0})
	CMember(class UImage*)                             XPBarFill                                                   OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           XPBarFillMat                                                OFFSET(get<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C.SetXPRatio
	// void SetXPRatio(float XPRatio);                                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C.ExecuteUbergraph_PlayerStats_BP
	// void ExecuteUbergraph_PlayerStats_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C
/// Size: 0x0011 (0x0002B0 - 0x0002C1)
class UButtonWorkbenchHeaderContainer_BP_C : public UButtonBaseContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 705;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B0, 8, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(float)                                     TextAlpha                                                   OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(bool)                                      bLastActivatable                                            OFFSET(get<bool>, {0x2C0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_96_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_132_ButtonEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_132_ButtonEventMCD__DelegateSignature(FButtonEvent& Event);               // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_157_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_157_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.OnActivatableChange
	// void OnActivatableChange(bool bActivatable);                                                                             // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C.ExecuteUbergraph_ButtonWorkbenchHeaderContainer_BP
	// void ExecuteUbergraph_ButtonWorkbenchHeaderContainer_BP(int32_t EntryPoint);                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C
/// Size: 0x0078 (0x000620 - 0x000698)
class UVendorWidget_BP_C : public UVendorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1688;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x620, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   PurchaseAnimation                                           OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FactionImageFadeIn                                          OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background                                                  OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(class UFlavorTextWidget_BP_C*)             FlavorTextWidget                                            OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(class UPageAnchor1_BP_C*)                  PageAnchorLeft                                              OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(class UPageAnchor2_BP_C*)                  PageAnchorRight                                             OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UImage*)                             PurchaseAnim1                                               OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(class UImage*)                             PurchaseAnim2                                               OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(class UImage*)                             Smoke                                                       OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(class UImage*)                             Smoke_Behind                                                OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class USurvivalBarGroupWidget_BP_C*)       SurvivalBar                                                 OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C.FadeInFactionImage
	// void FadeInFactionImage();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C.OnSetCurrentPage
	// void OnSetCurrentPage(EVendorPages Page, bool bAnimate);                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C.OnAnimationBoughtItem
	// void OnAnimationBoughtItem();                                                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C.OnAnimationRepairedItem
	// void OnAnimationRepairedItem();                                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldItem
	// void OnAnimationSoldItem();                                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldJunk
	// void OnAnimationSoldJunk();                                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Vendor/VendorWidget_BP.VendorWidget_BP_C.ExecuteUbergraph_VendorWidget_BP
	// void ExecuteUbergraph_VendorWidget_BP(int32_t EntryPoint);                                                               // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemTransfer/ItemTransfer_BP.ItemTransfer_BP_C
/// Size: 0x0020 (0x0003D0 - 0x0003F0)
class UItemTransfer_BP_C : public UItemTransferWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(class UBackground1_BP_C*)                  Background                                                  OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class URetainerBox*)                       RetainerBox                                                 OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class URetainerBox*)                       RetainerBox1                                                OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class USurvivalBarGroupWidget_BP_C*)       SurvivalBar                                                 OFFSET(get<T>, {0x3E8, 8, 0, 0})
};

/// Class /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C
/// Size: 0x01C8 (0x0004F8 - 0x0006C0)
class UItemToolTip_BP_C : public UItemToolTipWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4F8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UImage*)                             BorderBackerImage                                           OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UImage*)                             ConditionImage                                              OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UImage*)                             ValueImage                                                  OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UImage*)                             WeightImage                                                 OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FSlateBrush)                               ScienceBackerBrush                                          OFFSET(getStruct<T>, {0x528, 136, 0, 0})
	SMember(FSlateBrush)                               UniqueBackerBrush                                           OFFSET(getStruct<T>, {0x5B0, 136, 0, 0})
	SMember(FSlateBrush)                               NoBackerBrush                                               OFFSET(getStruct<T>, {0x638, 136, 0, 0})


	/// Functions
	// Function /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C.SetBackgroundBrush
	// void SetBackgroundBrush();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C.ExecuteUbergraph_ItemToolTip_BP
	// void ExecuteUbergraph_ItemToolTip_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Inventory/Inspector/ItemInspector_BP.ItemInspector_BP_C
/// Size: 0x0028 (0x000388 - 0x0003B0)
class UItemInspector_BP_C : public UItemInspectorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x388, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background                                                  OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UBorder*)                            ButtonBorder                                                OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UVerticalBox*)                       NameVerticalBox                                             OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Inventory/Inspector/ItemInspector_BP.ItemInspector_BP_C.ZoomToggled
	// void ZoomToggled(bool bFullZoom);                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/Inspector/ItemInspector_BP.ItemInspector_BP_C.ExecuteUbergraph_ItemInspector_BP
	// void ExecuteUbergraph_ItemInspector_BP(int32_t EntryPoint);                                                              // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C
/// Size: 0x0024 (0x000368 - 0x00038C)
class UItemContainer_BP_C : public UItemContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 908;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x368, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Outro                                                       OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     PlaybackMultiplier                                          OFFSET(get<float>, {0x388, 4, 0, 0})


	/// Functions
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.OnCancelShutdown
	// void OnCancelShutdown();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.ShowContainer
	// void ShowContainer();                                                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.HideContainer
	// void HideContainer();                                                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.OnIntroStart
	// void OnIntroStart();                                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.OnOutroEnd
	// void OnOutroEnd();                                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C.ExecuteUbergraph_ItemContainer_BP
	// void ExecuteUbergraph_ItemContainer_BP(int32_t EntryPoint);                                                              // [0x1c5deb0] Final                
};

/// Class /Game/UI/Inventory/InventoryMaster_BP.InventoryMaster_BP_C
/// Size: 0x0008 (0x0004B8 - 0x0004C0)
class UInventoryMaster_BP_C : public UInventoryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	CMember(class USizeBox*)                           PagesSizeBox                                                OFFSET(get<T>, {0x4B8, 8, 0, 0})
};

/// Class /Game/UI/Inventory/HealthKitTooltip_BP.HealthKitTooltip_BP_C
/// Size: 0x0010 (0x0003B0 - 0x0003C0)
class UHealthKitTooltip_BP_C : public UHealthKitTooltipWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UImage*)                             BrandImage                                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Inventory/HealthKitTooltip_BP.HealthKitTooltip_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Examinable/ExaminableWidget_BP.ExaminableWidget_BP_C
/// Size: 0x0010 (0x000350 - 0x000360)
class UExaminableWidget_BP_C : public UExaminableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UBackground1_BP_C*)                  Background1_BP                                              OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Game/UI/Dialogs/DialogBoxWarning_BP.DialogBoxWarning_BP_C
/// Size: 0x0020 (0x000368 - 0x000388)
class UDialogBoxWarning_BP_C : public UDialogWarningBoxWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x368, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background1_BP                                              OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Dialogs/DialogBoxWarning_BP.DialogBoxWarning_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxWarning_BP.DialogBoxWarning_BP_C.ExecuteUbergraph_DialogBoxWarning_BP
	// void ExecuteUbergraph_DialogBoxWarning_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/UI/Menus/DeathMenu.DeathMenu_C
/// Size: 0x0040 (0x000360 - 0x0003A0)
class UDeathMenu_C : public UDeathMenuWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background1_BP                                              OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ContinueText                                                OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UTextBlockBase*)                     LoadText                                                    OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UTextBlockBase*)                     MainMenuText                                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UTextBlockBase*)                     QuitText                                                    OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ResurrectText                                               OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UTextBlockBase*)                     SettingsText                                                OFFSET(get<T>, {0x398, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/DeathMenu.DeathMenu_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Menus/DeathMenu.DeathMenu_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Menus/DeathMenu.DeathMenu_C.ExecuteUbergraph_DeathMenu
	// void ExecuteUbergraph_DeathMenu(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Subtitles/ConversationSubtitleWidget_BP.ConversationSubtitleWidget_BP_C
/// Size: 0x0000 (0x000310 - 0x000310)
class UConversationSubtitleWidget_BP_C : public UConversationSubtitleWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveToWC_3D.CompanionMoveToWC_3D_C
/// Size: 0x0000 (0x000690 - 0x000690)
class UCompanionMoveToWC_3D_C : public UCompanionMoveToWidgetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
};

/// Class /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C
/// Size: 0x0009 (0x000330 - 0x000339)
class UGenericListEntryWidget_BP_C : public UGenericListEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 825;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 RightTextJustification                                      OFFSET(get<T>, {0x338, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_NoParamMCD__DelegateSignature();                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_3_NoParamMCD__DelegateSignature();                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C.ExecuteUbergraph_GenericListEntryWidget_BP
	// void ExecuteUbergraph_GenericListEntryWidget_BP(int32_t EntryPoint);                                                     // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Companions/CompanionStatSummary_BP.CompanionStatSummary_BP_C
/// Size: 0x0000 (0x000348 - 0x000348)
class UCompanionStatSummary_BP_C : public UCompanionStatSummary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Game/UI/Companions/CompanionSkillSummary.CompanionSkillSummary_C
/// Size: 0x0000 (0x000358 - 0x000358)
class UCompanionSkillSummary_C : public UCompanionSkillSummary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
};

/// Class /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C
/// Size: 0x0008 (0x0002A0 - 0x0002A8)
class UGenericListEntry_BP_C : public UGenericCollapsableListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C.SetFocusChanged
	// void SetFocusChanged(bool IsFocused);                                                                                    // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C.ExecuteUbergraph_GenericListEntry_BP
	// void ExecuteUbergraph_GenericListEntry_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/CodexJournal/LogList_BP.LogList_BP_C
/// Size: 0x0000 (0x000388 - 0x000388)
class ULogList_BP_C : public ULogList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
};

/// Class /Game/UI/CodexJournal/JournalDescriptionPanel_BP.JournalDescriptionPanel_BP_C
/// Size: 0x0000 (0x000338 - 0x000338)
class UJournalDescriptionPanel_BP_C : public UJournalDescriptionPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/QuestJournal/QuestObjective/QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UQuestObjectiveTitle_BP_C : public UQuestObjectiveTitleWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.OnObjectiveStatusChange
	// void OnObjectiveStatusChange(ECompletionStatus ObjectiveStatus);                                                         // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.ExecuteUbergraph_QuestObjectiveTitle_BP
	// void ExecuteUbergraph_QuestObjectiveTitle_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Perks/StatsPerkEntryButton_BP.StatsPerkEntryButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UStatsPerkEntryButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Stats/SkillsPage/SkillGroupDetail_BP.SkillGroupDetail_BP_C
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class USkillGroupDetail_BP_C : public USkillGroupDetailWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   SelectedAnimation3                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   SelectedAnimation2                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Stats/SkillsPage/SkillGroupDetail_BP.SkillGroupDetail_BP_C.OnSkillSelected
	// void OnSkillSelected();                                                                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Stats/SkillsPage/SkillGroupDetail_BP.SkillGroupDetail_BP_C.ExecuteUbergraph_SkillGroupDetail_BP
	// void ExecuteUbergraph_SkillGroupDetail_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelButton_BP.FastTravelButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UFastTravelButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PointOfInterest/PointOfInterestTooltip_BP.PointOfInterestTooltip_BP_C
/// Size: 0x0008 (0x000308 - 0x000310)
class UPointOfInterestTooltip_BP_C : public UPointOfInterestTooltipWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UBorder*)                            FrameBorder                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PointOfInterest/PointOfInterestButton_BP.PointOfInterestButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UPointOfInterestButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PointOfInterest/PointOfInterest_BP.PointOfInterest_BP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class UPointOfInterest_BP_C : public UMapPointOfInterestWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/MultiFastTravelSelection_BP.MultiFastTravelSelection_BP_C
/// Size: 0x0000 (0x000340 - 0x000340)
class UMultiFastTravelSelection_BP_C : public UMFTSelectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/MapTextEntry_BP.MapTextEntry_BP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class UMapTextEntry_BP_C : public UMapTextEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelTooltip_BP.FastTravelTooltip_BP_C
/// Size: 0x0008 (0x000310 - 0x000318)
class UFastTravelTooltip_BP_C : public UFastTravelTooltipWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UBorder*)                            FrameBorder                                                 OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/AreaBeaconEntry_BP.AreaBeaconEntry_BP_C
/// Size: 0x0000 (0x000288 - 0x000288)
class UAreaBeaconEntry_BP_C : public UMapAreaBeaconWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
};

/// Class /Game/UI/ItemContainer/ItemContainerEntry_BP.ItemContainerEntry_BP_C
/// Size: 0x0000 (0x000368 - 0x000368)
class UItemContainerEntry_BP_C : public UItemContainerEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
};

/// Class /Game/UI/ItemContainer/ItemContainerSlider_BP.ItemContainerSlider_BP_C
/// Size: 0x0000 (0x000578 - 0x000578)
class UItemContainerSlider_BP_C : public USliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
};

/// Class /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C
/// Size: 0x0020 (0x000318 - 0x000338)
class USelectedNotificationWidget_BP_C : public USelectedNotificationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   InstantFadeIn                                               OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeRight                                                   OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C.PlayNotificationAnimation
	// void PlayNotificationAnimation();                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C.PlayFadeOutAnimation
	// void PlayFadeOutAnimation();                                                                                             // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C.StopFadeOutAnimation
	// void StopFadeOutAnimation();                                                                                             // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C.OnFadeRightAnimationFinished
	// void OnFadeRightAnimationFinished();                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C.OnFadeOutAnimationFinished
	// void OnFadeOutAnimationFinished();                                                                                       // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C.ExecuteUbergraph_SelectedNotificationWidget_BP
	// void ExecuteUbergraph_SelectedNotificationWidget_BP(int32_t EntryPoint);                                                 // [0x1c5deb0] Final                
};

/// Class /Game/UI/ActorStage/ActorStage_BP_Base.ActorStage_BP_Base_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AActorStage_BP_Base_C : public AActorStage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UStaticMeshComponent*)               VisualizerCamera                                            OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               VisualizerAttachPoint                                       OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Chroma                                                      OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Game/UI/ActorStage/ItemStage_BP.ItemStage_BP_C
/// Size: 0x0038 (0x000398 - 0x0003D0)
class AItemStage_BP_C : public AActorStage_BP_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class USpotLightComponent*)                SpotLight                                                   OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UPointLightComponent*)               PointLight                                                  OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UBoxComponent*)                      Box                                                         OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLightLeft                                               OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLightRight                                              OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLightRear                                               OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class USceneComponent*)                    LightingVolume                                              OFFSET(get<T>, {0x3C8, 8, 0, 0})
};

/// Class /Game/UI/Stats/SkillsPage/SkillButtonEntry_BP.SkillButtonEntry_BP_C
/// Size: 0x0000 (0x000490 - 0x000490)
class USkillButtonEntry_BP_C : public USkillButtonEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Game/UI/Stats/SkillsPage/CategoryButtonEntry_BP.CategoryButtonEntry_BP_C
/// Size: 0x0000 (0x000498 - 0x000498)
class UCategoryButtonEntry_BP_C : public UCategoryButtonEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
};

/// Class /Game/UI/HUD/AbilityOverview/AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C
/// Size: 0x0020 (0x000400 - 0x000420)
class UAbilityOverDetail_Ability_BP_C : public UAbilityOverviewDetailWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x400, 8, 0, 0})
	CMember(class UImage*)                             HoldArtGamepad                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UImage*)                             HoldArtPC                                                   OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RadialMaterial                                              OFFSET(get<T>, {0x418, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.ExecuteUbergraph_AbilityOverDetail_Ability_BP
	// void ExecuteUbergraph_AbilityOverDetail_Ability_BP(int32_t EntryPoint);                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelSelectionButton_BP.FastTravelSelectionButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UFastTravelSelectionButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/MFTSelectionEntry_BP.MFTSelectionEntry_BP_C
/// Size: 0x0000 (0x000310 - 0x000310)
class UMFTSelectionEntry_BP_C : public UMFTSelectionEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Game/UI/HUD/AbilityOverview/CharacterMedKit_BP.CharacterMedKit_BP_C
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UCharacterMedKit_BP_C : public UCharacterMedKitWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Game/UI/QuestJournal/QuestObjective/QuestObjective_BP.QuestObjective_BP_C
/// Size: 0x0008 (0x000290 - 0x000298)
class UQuestObjective_BP_C : public UQuestObjectiveWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjective_BP.QuestObjective_BP_C.OnObjectiveStatusChange
	// void OnObjectiveStatusChange(ECompletionStatus ObjectiveStatus);                                                         // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjective_BP.QuestObjective_BP_C.ExecuteUbergraph_QuestObjective_BP
	// void ExecuteUbergraph_QuestObjective_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C
/// Size: 0x0020 (0x000320 - 0x000340)
class UStatusEffectBarEntry_BP_C : public UStatusEffectBarEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   AnimateContentsOut                                          OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   AnimateContentsIn                                           OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UVerticalBox*)                       DisplayParent                                               OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.AnimateIn
	// void AnimateIn();                                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ResetWidgetState
	// void ResetWidgetState(float DesiredRenderOpacity);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.AnimateOut
	// void AnimateOut();                                                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.WidgetAnimationEvt_AnimateContentsIn_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_AnimateContentsIn_K2Node_WidgetAnimationEvent();                                                 // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.WidgetAnimationEvt_AnimateContentsOut_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_AnimateContentsOut_K2Node_WidgetAnimationEvent();                                                // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ExecuteUbergraph_StatusEffectBarEntry_BP
	// void ExecuteUbergraph_StatusEffectBarEntry_BP(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/StatusEffectOverview/StatusEffectBar_BP.StatusEffectBar_BP_C
/// Size: 0x0008 (0x000398 - 0x0003A0)
class UStatusEffectBar_BP_C : public UStatusEffectBarWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(class UImage*)                             StatusBarImage                                              OFFSET(get<T>, {0x398, 8, 0, 0})
};

/// Class /Game/UI/HUD/Compass/CompassEntries/CompassEntry_BP.CompassEntry_BP_C
/// Size: 0x001C (0x0002A0 - 0x0002BC)
class UCompassEntry_BP_C : public UCompassEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 700;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A0, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(float)                                     AbsoluteOrientation                                         OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     SignMultiplier                                              OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     AdjustedOrientation                                         OFFSET(get<float>, {0x2B8, 4, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/Compass/CompassEntries/CompassEntry_BP.CompassEntry_BP_C.SetDistanceValue
	// void SetDistanceValue();                                                                                                 // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/Compass/CompassEntries/CompassEntry_BP.CompassEntry_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Compass/CompassEntries/CompassEntry_BP.CompassEntry_BP_C.InitProperties
	// void InitProperties(FEntryData& EntryData);                                                                              // [0x1c5deb0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/HUD/Compass/CompassEntries/CompassEntry_BP.CompassEntry_BP_C.ExecuteUbergraph_CompassEntry_BP
	// void ExecuteUbergraph_CompassEntry_BP(int32_t EntryPoint);                                                               // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/ItemDegradationAlert/ItemDegradationEntry_BP.ItemDegradationEntry_BP_C
/// Size: 0x0028 (0x000320 - 0x000348)
class UItemDegradationEntry_BP_C : public UItemDegradationEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   SevereDamgeAnim                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   IntroDamagedAnim                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UImage*)                             InnerCircle                                                 OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UImage*)                             OuterCircle                                                 OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/ItemDegradationAlert/ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.PlayIntroDamagedAnim
	// void PlayIntroDamagedAnim();                                                                                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/ItemDegradationAlert/ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.PlaySevereDamageAnim
	// void PlaySevereDamageAnim();                                                                                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/ItemDegradationAlert/ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.KillAllAnims
	// void KillAllAnims();                                                                                                     // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/ItemDegradationAlert/ItemDegradationEntry_BP.ItemDegradationEntry_BP_C.ExecuteUbergraph_ItemDegradationEntry_BP
	// void ExecuteUbergraph_ItemDegradationEntry_BP(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C
/// Size: 0x0030 (0x000338 - 0x000368)
class UQuestLogObjectiveEntry_BP_C : public UQuestObjectiveEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   OutroAnim                                                   OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   IntroAnim                                                   OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   OnObjectiveFailed                                           OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   OnObjectiveCompleted                                        OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UImage*)                             ObjectiveFailedImage                                        OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.StartCompleteAnim
	// void StartCompleteAnim();                                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.StartFailAnim
	// void StartFailAnim();                                                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.OnIntroAnim
	// void OnIntroAnim();                                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.OnOutroAnim
	// void OnOutroAnim();                                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.OnFailedAnim
	// void OnFailedAnim();                                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.OnCompletedAnim
	// void OnCompletedAnim();                                                                                                  // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.OnObjectiveMadeActive
	// void OnObjectiveMadeActive();                                                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.OnObjectiveMadeInactive
	// void OnObjectiveMadeInactive();                                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C.ExecuteUbergraph_QuestLogObjectiveEntry_BP
	// void ExecuteUbergraph_QuestLogObjectiveEntry_BP(int32_t EntryPoint);                                                     // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C
/// Size: 0x0030 (0x000330 - 0x000360)
class UQuestLogEntry_BP_C : public UQuestLogEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   QuestUpdated                                                OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutQuestName                                            OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInQuestName                                             OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   QuestFail                                                   OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   QuestComplete                                               OFFSET(get<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.QuestAnimComplete
	// void QuestAnimComplete();                                                                                                // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.OnQuestCompleted
	// void OnQuestCompleted();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.OnQuestFailed
	// void OnQuestFailed();                                                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.FadeInQuestText
	// void FadeInQuestText();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.FadeOutQuestText
	// void FadeOutQuestText();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.FadeOutTextAnimComplete
	// void FadeOutTextAnimComplete();                                                                                          // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.FadeInTextAnimComplete
	// void FadeInTextAnimComplete();                                                                                           // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.OnQuestUpdated
	// void OnQuestUpdated();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.OnQuestUpdateComplete
	// void OnQuestUpdateComplete();                                                                                            // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLogEntry_BP.QuestLogEntry_BP_C.ExecuteUbergraph_QuestLogEntry_BP
	// void ExecuteUbergraph_QuestLogEntry_BP(int32_t EntryPoint);                                                              // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/Radial/WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C
/// Size: 0x0010 (0x000320 - 0x000330)
class UWeaponRadialBackgroundSection_BP_C : public URadialBackgroundSectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutHighlight                                            OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/Radial/WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Deselect
	// void Deselect();                                                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/Radial/WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Select
	// void Select();                                                                                                           // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/Radial/WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.ExecuteUbergraph_WeaponRadialBackgroundSection_BP
	// void ExecuteUbergraph_WeaponRadialBackgroundSection_BP(int32_t EntryPoint);                                              // [0x1c5deb0] Final                
};

/// Class /Game/UI/QuestJournal/AddendumButton_BP.AddendumButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UAddendumButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/QuestJournal/QuestObjective/QuestAddendum/QuestAddendum_BP.QuestAddendum_BP_C
/// Size: 0x0010 (0x000308 - 0x000318)
class UQuestAddendum_BP_C : public UQuestAddendumWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x308, 8, 0, 0})
	CMember(class UAddendumButton_BP_C*)               Button                                                      OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Game/UI/QuestJournal/QuestObjective/QuestAddendum/QuestAddendum_BP.QuestAddendum_BP_C.OnObjectiveStatusChange
	// void OnObjectiveStatusChange(ECompletionStatus ObjectiveCompletion);                                                     // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestObjective/QuestAddendum/QuestAddendum_BP.QuestAddendum_BP_C.ExecuteUbergraph_QuestAddendum_BP
	// void ExecuteUbergraph_QuestAddendum_BP(int32_t EntryPoint);                                                              // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C
/// Size: 0x1158 (0x000580 - 0x0016D8)
class UHumanDummy_UI_Animation_C : public UPreviewCharacterAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x580, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x588, 48, 0, 0})
	SMember(FAnimNode_RandomSequenceNamed)             AnimGraphNode_RandomSequenceNamed                           OFFSET(getStruct<T>, {0x5B8, 136, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x640, 32, 0, 0})
	SMember(FAnimNode_RandomSequenceNamed)             AnimGraphNode_RandomSequenceNamed1                          OFFSET(getStruct<T>, {0x660, 136, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x6E8, 160, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x788, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x7A8, 72, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK                                     OFFSET(getStruct<T>, {0x7F0, 480, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x9D0, 248, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK1                                    OFFSET(getStruct<T>, {0xAD0, 480, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK2                                    OFFSET(getStruct<T>, {0xCB0, 480, 0, 0})
	SMember(FAnimNode_BatchJointDriver)                AnimGraphNode_BatchJointDriver                              OFFSET(getStruct<T>, {0xE90, 480, 0, 0})
	SMember(FAnimNode_BatchModify)                     AnimGraphNode_BatchModify                                   OFFSET(getStruct<T>, {0x1070, 216, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x1148, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x1170, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x1198, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x11C0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x11E8, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x1268, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x1298, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x1318, 48, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x1348, 128, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0x13C8, 48, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x13F8, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x14A8, 344, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x1600, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               OFFSET(getStruct<T>, {0x1628, 176, 0, 0})


	/// Functions
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1c5deb0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_SequencePlayer_C6950AEC46E7B28CD017E6A9F3858605
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_SequencePlayer_C6950AEC46E7B28CD017E6A9F3858605(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_SequencePlayer_B24C9C0A43C943C7EC13BE86060807C8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_SequencePlayer_B24C9C0A43C943C7EC13BE86060807C8(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_SequencePlayer_4503926B4668B1C18AC8D9A7D983D6F1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_SequencePlayer_4503926B4668B1C18AC8D9A7D983D6F1(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_TransitionResult_1644307246BF863ADB174885D2A5AF89
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_TransitionResult_1644307246BF863ADB174885D2A5AF89(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_TransitionResult_7845FE2F4A175870A5356FBA34251810
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_TransitionResult_7845FE2F4A175870A5356FBA34251810(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_TransitionResult_A228801F4CE1186319E3F383A9F7387C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_HumanDummy_UI_Animation_AnimGraphNode_TransitionResult_A228801F4CE1186319E3F383A9F7387C(); // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_EnableLeftHandIK
	// void AnimNotify_EnableLeftHandIK();                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_DisableLeftHandIK
	// void AnimNotify_DisableLeftHandIK();                                                                                     // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_EnterLoop
	// void AnimNotify_EnterLoop();                                                                                             // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.AnimNotify_ExitSelection
	// void AnimNotify_ExitSelection();                                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C.ExecuteUbergraph_HumanDummy_UI_Animation
	// void ExecuteUbergraph_HumanDummy_UI_Animation(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/AbilityOverview/MedKitHUDDrugSlot_BP.MedKitHUDDrugSlot_BP_C
/// Size: 0x0000 (0x000318 - 0x000318)
class UMedKitHUDDrugSlot_BP_C : public UMedKitDrugSlotWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Game/UI/HUD/AbilityOverview/MedKitHUDAdrenoSlot_BP.MedKitHUDAdrenoSlot_BP_C
/// Size: 0x0000 (0x000318 - 0x000318)
class UMedKitHUDAdrenoSlot_BP_C : public UMedKitDrugSlotWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UStatusTagAwarenessWidget_BP_C : public UStatusTagAwarenessWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MaterialInstance                                            OFFSET(get<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.SetTextures
	// void SetTextures(class UTexture2D* BackingTexture, class UTexture2D* FillTexture);                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.ExecuteUbergraph_StatusTagAwarenessWidget_BP
	// void ExecuteUbergraph_StatusTagAwarenessWidget_BP(int32_t EntryPoint);                                                   // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C
/// Size: 0x00B4 (0x000490 - 0x000544)
class UWeaponSelect_BP_C : public UWeaponSelectWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1348;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x490, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutAmmoBackground                                       OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutWeaponBackground                                     OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   IntroOutro                                                  OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UImage*)                             AmmoBackground                                              OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UImage*)                             Background                                                  OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UBorder*)                            Border                                                      OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UImage*)                             BulbOff                                                     OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UImage*)                             BulbOn                                                      OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UImage*)                             InnerCircle                                                 OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UImage*)                             InnerCircle2                                                OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class UVerticalBox*)                       OrientatorVerticalBox                                       OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class UImage*)                             WeaponBackground                                            OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UImage*)                             WeaponHighlight                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(TArray<class UWeaponRadialBackgroundSection_BP_C*>) BackgroundSections                                 OFFSET(get<T>, {0x508, 16, 0, 0})
	CMember(TArray<class UWeaponRadialBackgroundSection_BP_C*>) WeaponBackgroundSections                           OFFSET(get<T>, {0x518, 16, 0, 0})
	DMember(float)                                     BackgroundFadeSpeed                                         OFFSET(get<float>, {0x528, 4, 0, 0})
	CMember(TArray<class UWeaponRadialBackgroundSection_BP_C*>) AmmoBackgroundSections                             OFFSET(get<T>, {0x530, 16, 0, 0})
	DMember(float)                                     OrientatorClamped                                           OFFSET(get<float>, {0x540, 4, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.SetBackgroundVisibility
	// void SetBackgroundVisibility(TArray<UWeaponRadialBackgroundSection_BP_C*>& Array, int32_t Index, bool Enabled);          // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.UpdateBackgroundVisibility
	// void UpdateBackgroundVisibility(TArray<UWeaponRadialBackgroundSection_BP_C*>& TargetArray, int32_t IndexToTest);         // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.GetBackgroundSection
	// void GetBackgroundSection(class UObject* Object, class UWeaponRadialBackgroundSection_BP_C*& AsHUDRadial Section BP);    // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.OnSetWeaponEquippedDelegate_Event
	// void OnSetWeaponEquippedDelegate_Event(int32_t WeaponIndex);                                                             // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.OnSetAmmoEquippedDelegate_Event
	// void OnSetAmmoEquippedDelegate_Event(bool bEquipped, int32_t AmmoIndex);                                                 // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.OnSectionSelected
	// void OnSectionSelected(int32_t Index);                                                                                   // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature
	// void BndEvt__Radial_K2Node_ComponentBoundEvent_1_SectionSelectedSignature__DelegateSignature(int32_t Index);             // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.ExecuteUbergraph_WeaponSelect_BP
	// void ExecuteUbergraph_WeaponSelect_BP(int32_t EntryPoint);                                                               // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/Reticle/Reticle_BP.Reticle_BP_C
/// Size: 0x0050 (0x0003A0 - 0x0003F0)
class UReticle_BP_C : public UReticleWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3A0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ShrinkInnards                                               OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   GrowInnards                                                 OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox1                                            OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UImage*)                             TTDFill                                                     OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           TTDFillMat                                                  OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RezCooldownMat                                              OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/Reticle/Reticle_BP.Reticle_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/Reticle_BP.Reticle_BP_C.ExpandTTDRotator
	// void ExpandTTDRotator();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/Reticle_BP.Reticle_BP_C.ShrinkTTDRotator
	// void ShrinkTTDRotator();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/Reticle_BP.Reticle_BP_C.SetTTDProgressRatio
	// void SetTTDProgressRatio(float NewTTDRatio);                                                                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/Reticle_BP.Reticle_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Reticle/Reticle_BP.Reticle_BP_C.ExecuteUbergraph_Reticle_BP
	// void ExecuteUbergraph_Reticle_BP(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/QuestLog/QuestLog_BP.QuestLog_BP_C
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UQuestLog_BP_C : public UQuestLogWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ContentBorderMat                                            OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/QuestLog/QuestLog_BP.QuestLog_BP_C.FadeOutContents
	// void FadeOutContents();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLog_BP.QuestLog_BP_C.FadeInContents
	// void FadeInContents();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/QuestLog/QuestLog_BP.QuestLog_BP_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent();                                                            // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/QuestLog/QuestLog_BP.QuestLog_BP_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent();                                                           // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/QuestLog/QuestLog_BP.QuestLog_BP_C.ExecuteUbergraph_QuestLog_BP
	// void ExecuteUbergraph_QuestLog_BP(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/ItemDegradationAlert/ItemDegradationAlert_BP.ItemDegradationAlert_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UItemDegradationAlert_BP_C : public UItemDegradationAlertWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/HUD/InteractionGuide/InputGuide_BP.InputGuide_BP_C
/// Size: 0x0078 (0x000478 - 0x0004F0)
class UInputGuide_BP_C : public UInputGuideWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x478, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   LittleRedCircleCounterClockwise                             OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   RedCircleClockwise                                          OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   IntroOutro                                                  OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UImage*)                             Arrow13_Mid                                                 OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UImage*)                             Arrow2_Left                                                 OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UImage*)                             Arrow2_Right                                                OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UImage*)                             Arrow3_Left                                                 OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UImage*)                             Arrow3_Right                                                OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UBorder*)                            RootBorder                                                  OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UImage*)                             RotatingLittleRedCircle                                     OFFSET(get<T>, {0x4D0, 8, 0, 0})
	DMember(float)                                     IntroOutroMultiplier                                        OFFSET(get<float>, {0x4D8, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           InteractionMat                                              OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RadialMaterial                                              OFFSET(get<T>, {0x4E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/InteractionGuide/InputGuide_BP.InputGuide_BP_C.InteractChanged
	// void InteractChanged(bool bVisible);                                                                                     // [0x1c5deb0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/InteractionGuide/InputGuide_BP.InputGuide_BP_C.OnInteractionProgressChange
	// void OnInteractionProgressChange(float CurrentProgressRatio);                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/InteractionGuide/InputGuide_BP.InputGuide_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/InteractionGuide/InputGuide_BP.InputGuide_BP_C.ExecuteUbergraph_InputGuide_BP
	// void ExecuteUbergraph_InputGuide_BP(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C
/// Size: 0x0028 (0x000460 - 0x000488)
class UGenericNotification_BP_C : public UGenericNotificationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x460, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UBorder*)                            ContentContainer                                            OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ContentContainerMat                                         OFFSET(get<T>, {0x480, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C.TriggerFadeIn
	// void TriggerFadeIn();                                                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C.TriggerFadeOut
	// void TriggerFadeOut();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C.SetBackingMaterialHeight
	// void SetBackingMaterialHeight(float NewHeight);                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent();                                                            // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent();                                                           // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/GenericNotifications/GenericNotification_BP.GenericNotification_BP_C.ExecuteUbergraph_GenericNotification_BP
	// void ExecuteUbergraph_GenericNotification_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C
/// Size: 0x0068 (0x000430 - 0x000498)
class UDisguiseWidget_BP_C : public UDisguiseMeterWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x430, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutTip                                                  OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInTip                                                   OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   OnImageLoaded                                               OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UImage*)                             DisguiseCheck1                                              OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UImage*)                             DisguiseCheck2                                              OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UImage*)                             DisguiseCheck3                                              OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UImage*)                             DisguiseMeterTip                                            OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UImage*)                             DisguiseMeterTipAnim                                        OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UImage*)                             TipPurpleGlow                                               OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DisguiseMeterMaterial                                       OFFSET(get<T>, {0x490, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseBegin
	// void OnDisguiseBegin();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseEnd
	// void OnDisguiseEnd();                                                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseImageLoaded
	// void OnDisguiseImageLoaded();                                                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterFill
	// void UpdateDisguiseMeterFill(float NewValue);                                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterInnerAnim
	// void UpdateDisguiseMeterInnerAnim(int32_t CurrentFrame);                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.ShowDisguiseMeterTip
	// void ShowDisguiseMeterTip(float StartTime);                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.HideDisguiseMeterTip
	// void HideDisguiseMeterTip(float StartTime);                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/DisguiseMeter/DisguiseWidget_BP.DisguiseWidget_BP_C.ExecuteUbergraph_DisguiseWidget_BP
	// void ExecuteUbergraph_DisguiseWidget_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C
/// Size: 0x0030 (0x0003C0 - 0x0003F0)
class UCompanionOverview_BP_C : public UCompanionOverviewWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   AnimateInOutStatusEffectBlock                               OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInRootAnim                                              OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UImage*)                             BottomBarPiece                                              OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UBorder*)                            RootAnimationContainer                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UImage*)                             StatusEffectBlock                                           OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.OnMadeActive
	// void OnMadeActive();                                                                                                     // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.OnMadeInactive
	// void OnMadeInactive();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.OnNoStatusEffect
	// void OnNoStatusEffect();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.OnFirstStatusEffect
	// void OnFirstStatusEffect();                                                                                              // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.OnAnimInOutComplete
	// void OnAnimInOutComplete();                                                                                              // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/CompanionOverview/CompanionOverview_BP.CompanionOverview_BP_C.ExecuteUbergraph_CompanionOverview_BP
	// void ExecuteUbergraph_CompanionOverview_BP(int32_t EntryPoint);                                                          // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/AbilityOverview/AbilityOverviewGamepad_BP.AbilityOverviewGamepad_BP_C
/// Size: 0x005A (0x0005A0 - 0x0005FA)
class UAbilityOverviewGamepad_BP_C : public UAbilityOverviewWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1530;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5A0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FlickerCommandThree                                         OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FlickerCommandTwo                                           OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FlickerCommandOne                                           OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FlickerCommandFour                                          OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ActivationPulse                                             OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInFadeOutAbilityOverview                                OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInFadeOutTTD                                            OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UImage*)                             AbilityGamepadPanelImage                                    OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class UBorder*)                            AbilityOverviewAnimationContainer                           OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x5F0, 8, 0, 0})
	DMember(bool)                                      bTTDNeedsFadeOut                                            OFFSET(get<bool>, {0x5F8, 1, 0, 0})
	DMember(bool)                                      bAbilityOverviewNeedsFadeOut                                OFFSET(get<bool>, {0x5F9, 1, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverviewGamepad_BP.AbilityOverviewGamepad_BP_C.OnPlayerCombatStateChange
	// void OnPlayerCombatStateChange(bool IsPlayerInCombat, bool bRestoring);                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverviewGamepad_BP.AbilityOverviewGamepad_BP_C.OnAbilityCooldownFinished
	// void OnAbilityCooldownFinished(EAbilityPosition AbillityPosition);                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverviewGamepad_BP.AbilityOverviewGamepad_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverviewGamepad_BP.AbilityOverviewGamepad_BP_C.ExecuteUbergraph_AbilityOverviewGamepad_BP
	// void ExecuteUbergraph_AbilityOverviewGamepad_BP(int32_t EntryPoint);                                                     // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/AbilityOverview/AbilityOverview_BP.AbilityOverview_BP_C
/// Size: 0x000A (0x0005A0 - 0x0005AA)
class UAbilityOverview_BP_C : public UAbilityOverviewWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1450;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5A0, 8, 0, 0})
	DMember(bool)                                      bTTDNeedsFadeOut                                            OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	DMember(bool)                                      bAbilityOverviewNeedsFadeOut                                OFFSET(get<bool>, {0x5A9, 1, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverview_BP.AbilityOverview_BP_C.OnPlayerCombatStateChange
	// void OnPlayerCombatStateChange(bool IsPlayerInCombat, bool bRestoring);                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverview_BP.AbilityOverview_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverview_BP.AbilityOverview_BP_C.OnAbilityCooldownFinished
	// void OnAbilityCooldownFinished(EAbilityPosition AbillityPosition);                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverview_BP.AbilityOverview_BP_C.ExecuteUbergraph_AbilityOverview_BP
	// void ExecuteUbergraph_AbilityOverview_BP(int32_t EntryPoint);                                                            // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/ItemContainer/ItemContainerList_BP.ItemContainerList_BP_C
/// Size: 0x0010 (0x0003E8 - 0x0003F8)
class UItemContainerList_BP_C : public UItemContainerListWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
};

/// Class /Game/UI/LedgerCharacter/LedgerCharacter_BP.LedgerCharacter_BP_C
/// Size: 0x0000 (0x000348 - 0x000348)
class ULedgerCharacter_BP_C : public ULedgerCharacterWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Game/UI/ActorStage/CharacterStage_BP.CharacterStage_BP_C
/// Size: 0x0040 (0x000398 - 0x0003D8)
class ACharacterStage_BP_C : public AActorStage_BP_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	CMember(class USpotLightComponent*)                SpotLight                                                   OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UPointLightComponent*)               PointLight                                                  OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLightLeftTop                                            OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow                                                       OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  CharacterCapsuleVisualizer                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLightRight                                              OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLightRear                                               OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class USceneComponent*)                    LightingVolume                                              OFFSET(get<T>, {0x3D0, 8, 0, 0})
};

/// Class /Game/UI/Menus/SaveLoadMenu/SaveLoadMenuButton_BP.SaveLoadMenuButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class USaveLoadMenuButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/ActorRender/ActorRender_BP.ActorRender_BP_C
/// Size: 0x0000 (0x000398 - 0x000398)
class UActorRender_BP_C : public UActorRenderWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
};

/// Class /Game/UI/ItemModding/ItemModding_BP.ItemModding_BP_C
/// Size: 0x0068 (0x0006B8 - 0x000720)
class UItemModding_BP_C : public UItemModdingWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x6B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(class UInputLabel_BP_C*)                   ActionInputLabelModify                                      OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background                                                  OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(class UTextBlockBase*)                     EquipmentDescriptionTextBlock                               OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(class UImage*)                             IconImage                                                   OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(class UTextBlockBase*)                     ModificationTitleTextBlock                                  OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(class UPageAnchor1_BP_C*)                  PageAnchorLeft                                              OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(class UPageAnchor2_BP_C*)                  PageAnchorRight                                             OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(class UImage*)                             Smoke                                                       OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(class UImage*)                             Smoke_Behind                                                OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class USurvivalBarGroupWidget_BP_C*)       SurvivalBar                                                 OFFSET(get<T>, {0x718, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ItemModding/ItemModding_BP.ItemModding_BP_C.ZoomToggled
	// void ZoomToggled();                                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemModding/ItemModding_BP.ItemModding_BP_C.ExecuteUbergraph_ItemModding_BP
	// void ExecuteUbergraph_ItemModding_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C
/// Size: 0x0008 (0x000290 - 0x000298)
class UStatsAptitudeSummary_BP_C : public UAptitudeSummaryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_52_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_52_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_78_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_78_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_102_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_102_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_124_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_124_NoParamMCD__DelegateSignature();                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_144_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_144_NoParamMCD__DelegateSignature();                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C.ExecuteUbergraph_StatsAptitudeSummary_BP
	// void ExecuteUbergraph_StatsAptitudeSummary_BP(int32_t EntryPoint);                                                       // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Stats/SummaryPage/StatsSummaryPage_BP.StatsSummaryPage_BP_C
/// Size: 0x0018 (0x000340 - 0x000358)
class UStatsSummaryPage_BP_C : public UStatsSummaryPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget1                                      OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget2                                      OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/GamepadSelector_BP.GamepadSelector_BP_C
/// Size: 0x0008 (0x000278 - 0x000280)
class UGamepadSelector_BP_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class UImage*)                             GamepadSelector                                             OFFSET(get<T>, {0x278, 8, 0, 0})
};

/// Class /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummary_BP.StatsAttributeSummary_BP_C
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class UStatsAttributeSummary_BP_C : public UAttributeSummaryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C
/// Size: 0x0018 (0x000290 - 0x0002A8)
class UStatsAttributeSummaryGroup_BP_C : public UAttributeSummaryGroupWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class UTextBlockBase*)                     TitleTextBlock                                              OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FLocString)                                Title                                                       OFFSET(getStruct<T>, {0x2A0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.ExecuteUbergraph_StatsAttributeSummaryGroup_BP
	// void ExecuteUbergraph_StatsAttributeSummaryGroup_BP(int32_t EntryPoint);                                                 // [0x1c5deb0] Final                
};

/// Class /Game/UI/ComputerTerminal/TerminalResponseButton_BP.TerminalResponseButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UTerminalResponseButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/ComputerTerminal/TerminalResponse_BP.TerminalResponse_BP_C
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UTerminalResponse_BP_C : public UConversationResponseWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             CompanionContributedImage                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             NearMissImage                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UHorizontalBox*)                     TextHorizontalBox                                           OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ComputerTerminal/TerminalResponse_BP.TerminalResponse_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ComputerTerminal/TerminalResponse_BP.TerminalResponse_BP_C.OnResponseSkillsChanged
	// void OnResponseSkillsChanged(bool bContainsSkillCheck);                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ComputerTerminal/TerminalResponse_BP.TerminalResponse_BP_C.OnSetSelectableOption
	// void OnSetSelectableOption(bool bSelectable);                                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ComputerTerminal/TerminalResponse_BP.TerminalResponse_BP_C.OnSetSkillCheckRequiredCompanion
	// void OnSetSkillCheckRequiredCompanion(bool bSelectable);                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ComputerTerminal/TerminalResponse_BP.TerminalResponse_BP_C.ExecuteUbergraph_TerminalResponse_BP
	// void ExecuteUbergraph_TerminalResponse_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/UI/ComputerTerminal/Headers/ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class UComputerTerminal_DefaultHeader_BP_C : public UComputerTerminalHeaderWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3E0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInLogo                                                  OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ComputerTerminal/Headers/ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.FadeInLogoImage
	// void FadeInLogoImage();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ComputerTerminal/Headers/ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP
	// void ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP(int32_t EntryPoint);                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/CharacterCreation/Skills/SkillUnlockPanelMeter_BP.SkillUnlockPanelMeter_BP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class USkillUnlockPanelMeter_BP_C : public USkillUnlockPanelMeter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Game/UI/CodexJournal/AudioLogListEntry_BP.AudioLogListEntry_BP_C
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UAudioLogListEntry_BP_C : public UAudioLogListEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UStatsAttributeSummaryEntry_BP_C : public UAttributeSummaryEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature();                                        // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature();                                       // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_28_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_28_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_16_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_16_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);          // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C.ExecuteUbergraph_StatsAttributeSummaryEntry_BP
	// void ExecuteUbergraph_StatsAttributeSummaryEntry_BP(int32_t EntryPoint);                                                 // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/General/ScalableImageWidget.ScalableImageWidget_C
/// Size: 0x0000 (0x000338 - 0x000338)
class UScalableImageWidget_C : public UScalableImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/UI/CodexJournal/SymbolDescriptionPanelEntry_BP.SymbolDescriptionPanelEntry_BP_C
/// Size: 0x0000 (0x000318 - 0x000318)
class USymbolDescriptionPanelEntry_BP_C : public USymbolDescriptionPanelEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Game/UI/CodexJournal/AudioLogList_BP.AudioLogList_BP_C
/// Size: 0x0000 (0x0003F8 - 0x0003F8)
class UAudioLogList_BP_C : public UAudioLogList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
};

/// Class /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UQuestListEntry_BP_C : public UQuestListEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2E8, 8, 0, 0})
	DMember(float)                                     WidgetAlphaFocused                                          OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     WidgetAlphaUnfocused                                        OFFSET(get<float>, {0x2F4, 4, 0, 0})


	/// Functions
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.SetFocusChanged
	// void SetFocusChanged(bool IsFocused);                                                                                    // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);         // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.SetQuestCompletionStatus
	// void SetQuestCompletionStatus(EQuestState QuestState);                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.SetActiveQuest
	// void SetActiveQuest(bool bActive);                                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C.ExecuteUbergraph_QuestListEntry_BP
	// void ExecuteUbergraph_QuestListEntry_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/CharacterCreation/Skills/SkillUnlockPanel_BP.SkillUnlockPanel_BP_C
/// Size: 0x0060 (0x000318 - 0x000378)
class USkillUnlockPanel_BP_C : public USkillUnlockPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UImage*)                             LeftFlourish                                                OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UImage*)                             RightFlourish                                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UImage*)                             SkillMeterBarTop                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class USkillUnlock_BP_C*)                  SkillUnlock1                                                OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class USkillUnlock_BP_C*)                  SkillUnlock2                                                OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class USkillUnlock_BP_C*)                  SkillUnlock3                                                OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class USkillUnlock_BP_C*)                  SkillUnlock4                                                OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class USkillUnlock_BP_C*)                  SkillUnlock5                                                OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class USkillUnlock_BP_C*)                  SkillUnlock6                                                OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             SkillUnlocksBackgroundImage                                 OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UTextBlockBase*)                     SkillUpgradesText                                           OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Game/UI/Stats/SkillsPage/CharacterSkillsDescriptionPanel_BP.CharacterSkillsDescriptionPanel_BP_C
/// Size: 0x0008 (0x000378 - 0x000380)
class UCharacterSkillsDescriptionPanel_BP_C : public UCharacterSkillsDescriptionPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UImage*)                             AttributeEffectImage                                        OFFSET(get<T>, {0x378, 8, 0, 0})
};

/// Class /Game/UI/CodexJournal/CodexJournal_BP.CodexJournal_BP_C
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UCodexJournal_BP_C : public UCodexJournal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget1                                      OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UFlavorTextWidget_BP_C*)             FlavorTextWidget                                            OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/MapLegend/MapLegend_BP.MapLegend_BP_C
/// Size: 0x0058 (0x000278 - 0x0002D0)
class UMapLegend_BP_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UImage*)                             Image3                                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UImage*)                             Image4                                                      OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UImage*)                             Image5                                                      OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UImage*)                             Image6                                                      OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UImage*)                             Image7                                                      OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UImage*)                             Image8                                                      OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             Image9                                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelEntry_BP.FastTravelEntry_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UFastTravelEntry_BP_C : public UMapFastTravelEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconTooltip_BP.BeaconTooltip_BP_C
/// Size: 0x0018 (0x000300 - 0x000318)
class UBeaconTooltip_BP_C : public UMapBeaconEntryTooltipWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UTextBlockBase*)                     FastTravelTextBlock                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UBorder*)                            FrameBorder                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UTextBlockBase*)                     RestrictionTextBlock                                        OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconEntry_BP.BeaconEntry_BP_C
/// Size: 0x0000 (0x000358 - 0x000358)
class UBeaconEntry_BP_C : public UBeaconMapEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
};

/// Class /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C
/// Size: 0x0030 (0x000390 - 0x0003C0)
class UDialogBoxKeybind_BP_C : public UKeybindDialogBoxWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x390, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UImage*)                             BackingBot                                                  OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UImage*)                             BackingTop                                                  OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UImage*)                             Frame                                                       OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackingBotInst                                              OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.ExecuteUbergraph_DialogBoxKeybind_BP
	// void ExecuteUbergraph_DialogBoxKeybind_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemViewer/ItemViewerHealthKitButton_BP.ItemViewerHealthKitButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UItemViewerHealthKitButton_BP_C : public UItemViewerHealthKitButtonWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuInputKeySelector_BP.SettingsMenuInputKeySelector_BP_C
/// Size: 0x0000 (0x0003A8 - 0x0003A8)
class USettingsMenuInputKeySelector_BP_C : public USettingsMenuInputKeySelector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
};

/// Class /Game/UI/ComputerTerminal/ComputerTerminalContents_BP.ComputerTerminalContents_BP_C
/// Size: 0x0008 (0x000418 - 0x000420)
class UComputerTerminalContents_BP_C : public UComputerTerminalWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(class UHorizontalBox*)                     LabelContainer                                              OFFSET(get<T>, {0x418, 8, 0, 0})
};

/// Class /Game/UI/Conversation/ConversationResponse_BP.ConversationResponse_BP_C
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UConversationResponse_BP_C : public UConversationResponseWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   NewAnimation                                                OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             CompanionContributedImage                                   OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UImage*)                             NearMissImage                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     TextHorizontalBox                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Conversation/ConversationResponse_BP.ConversationResponse_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationResponse_BP.ConversationResponse_BP_C.OnResponseSkillsChanged
	// void OnResponseSkillsChanged(bool bContainsSkillCheck);                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationResponse_BP.ConversationResponse_BP_C.OnSetSelectableOption
	// void OnSetSelectableOption(bool bSelectable);                                                                            // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationResponse_BP.ConversationResponse_BP_C.OnSetSkillCheckRequiredCompanion
	// void OnSetSkillCheckRequiredCompanion(bool bSelectable);                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationResponse_BP.ConversationResponse_BP_C.ExecuteUbergraph_ConversationResponse_BP
	// void ExecuteUbergraph_ConversationResponse_BP(int32_t EntryPoint);                                                       // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/EnemyScanner/TTDScanner_BP.TTDScanner_BP_C
/// Size: 0x0028 (0x0003C0 - 0x0003E8)
class UTTDScanner_BP_C : public UTTDEnemyScanner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutContents                                             OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInContents                                              OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInFactionImage                                          OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x3E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/EnemyScanner/TTDScanner_BP.TTDScanner_BP_C.OnFactionImageLoaded
	// void OnFactionImageLoaded();                                                                                             // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/EnemyScanner/TTDScanner_BP.TTDScanner_BP_C.OnMakeVisible
	// void OnMakeVisible();                                                                                                    // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/EnemyScanner/TTDScanner_BP.TTDScanner_BP_C.OnMakeInvisible
	// void OnMakeInvisible();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/EnemyScanner/TTDScanner_BP.TTDScanner_BP_C.StopFactionImageAnimation
	// void StopFactionImageAnimation();                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/EnemyScanner/TTDScanner_BP.TTDScanner_BP_C.WidgetAnimationEvt_FadeOutContents_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeOutContents_K2Node_WidgetAnimationEvent();                                                   // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/EnemyScanner/TTDScanner_BP.TTDScanner_BP_C.ExecuteUbergraph_TTDScanner_BP
	// void ExecuteUbergraph_TTDScanner_BP(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/CharacterOverview/CharacterOverview_BP.CharacterOverview_BP_C
/// Size: 0x0028 (0x0004F8 - 0x000520)
class UCharacterOverview_BP_C : public UCharacterOverviewWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UImage*)                             TTDFrame                                                    OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UImage*)                             XPBacking                                                   OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UOverlay*)                           XPOverlay                                                   OFFSET(get<T>, {0x518, 8, 0, 0})
};

/// Class /Game/UI/HUD/BossBar/BossBar_BP.BossBar_BP_C
/// Size: 0x0010 (0x000380 - 0x000390)
class UBossBar_BP_C : public UIndianaBossBar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class UWidgetAnimation*)                   Hide                                                        OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Show                                                        OFFSET(get<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/BossBar/BossBar_BP.BossBar_BP_C.GetHideAnimation
	// class UWidgetAnimation* GetHideAnimation();                                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/BossBar/BossBar_BP.BossBar_BP_C.GetShowAnimation
	// class UWidgetAnimation* GetShowAnimation();                                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C
/// Size: 0x000A (0x0003B0 - 0x0003BA)
class UAmmoReadout_BP_C : public UAmmoReadoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 954;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3B0, 8, 0, 0})
	DMember(bool)                                      LoadedAmmoPrevIndex                                         OFFSET(get<bool>, {0x3B8, 1, 0, 0})
	DMember(bool)                                      RemainingAmmoPrevIndex                                      OFFSET(get<bool>, {0x3B9, 1, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C.ColorTextBlock
	// void ColorTextBlock(bool Index, class UTextBlockBase* Target);                                                           // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C.EvaluateLowAmmoWarning
	// void EvaluateLowAmmoWarning(int32_t MaxClipSize, int32_t CurrentClipSize, int32_t RemainingAmmo);                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C.ExecuteUbergraph_AmmoReadout_BP
	// void ExecuteUbergraph_AmmoReadout_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Inventory/Pages/Consumables_BP.Consumables_BP_C
/// Size: 0x0010 (0x000570 - 0x000580)
class UConsumables_BP_C : public UInventoryConsumablesPageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class UImage*)                             HealthKitIcon                                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x578, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/LedgerMap_BP.LedgerMap_BP_C
/// Size: 0x0010 (0x0006C0 - 0x0006D0)
class ULedgerMap_BP_C : public ULedgerMapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	CMember(class UImage*)                             BackerImage                                                 OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(class UMapLegend_BP_C*)                    MapLegend_BP                                                OFFSET(get<T>, {0x6C8, 8, 0, 0})
};

/// Class /Game/UI/AudioLogs/AudioLogWidget_BP.AudioLogWidget_BP_C
/// Size: 0x0018 (0x000398 - 0x0003B0)
class UAudioLogWidget_BP_C : public UAudioLogWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x398, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOut                                                     OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeIn                                                      OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/AudioLogs/AudioLogWidget_BP.AudioLogWidget_BP_C.ShowAudioLog
	// void ShowAudioLog(bool bShow, float CurrentRenderOpacity);                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/AudioLogs/AudioLogWidget_BP.AudioLogWidget_BP_C.ExecuteUbergraph_AudioLogWidget_BP
	// void ExecuteUbergraph_AudioLogWidget_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/Menus/SaveLoadMenu/SaveLoadDetail_BP.SaveLoadDetail_BP_C
/// Size: 0x0008 (0x0003F8 - 0x000400)
class USaveLoadDetail_BP_C : public USaveLoadDetailWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3F8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadDetail_BP.SaveLoadDetail_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadDetail_BP.SaveLoadDetail_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadDetail_BP.SaveLoadDetail_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadDetail_BP.SaveLoadDetail_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature
	// void BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);           // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadDetail_BP.SaveLoadDetail_BP_C.ExecuteUbergraph_SaveLoadDetail_BP
	// void ExecuteUbergraph_SaveLoadDetail_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Tutorial/TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C
/// Size: 0x0038 (0x000400 - 0x000438)
class UTutorialPopupStyle_Simple_BP_C : public UTutorialPopupStyleWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x400, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   MascotImageFadeIn                                           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UImage*)                             Background                                                  OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UHorizontalBox*)                     ButtonHorizontalBox                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UImage*)                             Frame                                                       OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackingBotInst                                              OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.FadeInMascotImage
	// void FadeInMascotImage();                                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.ExecuteUbergraph_TutorialPopupStyle_Simple_BP
	// void ExecuteUbergraph_TutorialPopupStyle_Simple_BP(int32_t EntryPoint);                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/Tutorial/TutorialPopupStyle_Corporate_BP.TutorialPopupStyle_Corporate_BP_C
/// Size: 0x0060 (0x000400 - 0x000460)
class UTutorialPopupStyle_Corporate_BP_C : public UTutorialPopupStyleWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x400, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   MascotImageFadeIn                                           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UImage*)                             BackingBotLeft                                              OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UImage*)                             BackingBotRight                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UImage*)                             BackingFill                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UImage*)                             BackingTopLeft                                              OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UImage*)                             BackingTopRight                                             OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UHorizontalBox*)                     OfferButtonContainerBox                                     OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackingBotInst                                              OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Corporate_BP.TutorialPopupStyle_Corporate_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Corporate_BP.TutorialPopupStyle_Corporate_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Corporate_BP.TutorialPopupStyle_Corporate_BP_C.FadeInMascotImage
	// void FadeInMascotImage();                                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Tutorial/TutorialPopupStyle_Corporate_BP.TutorialPopupStyle_Corporate_BP_C.ExecuteUbergraph_TutorialPopupStyle_Corporate_BP
	// void ExecuteUbergraph_TutorialPopupStyle_Corporate_BP(int32_t EntryPoint);                                               // [0x1c5deb0] Final                
};

/// Class /Game/UI/Inventory/Items/InventoryItem_BP.InventoryItem_BP_C
/// Size: 0x0120 (0x000370 - 0x000490)
class UInventoryItem_BP_C : public UInventoryItemWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   MakeImageBigAgain                                           OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UImage*)                             ModCategoryImage                                            OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(TMap<class UClass*, class UTexture2D*>)    DamageClassTextures                                         OFFSET(get<T>, {0x390, 80, 0, 0})
	CMember(TMap<class UClass*, class UTexture2D*>)    DamageClassHighlightedTextures                              OFFSET(get<T>, {0x3E0, 80, 0, 0})
	CMember(TEnumAsByte<EUMGSequencePlayMode>)         PlayDirectionToUse                                          OFFSET(get<T>, {0x430, 1, 0, 0})
	CMember(class UTexture2D*)                         ElementToUse                                                OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TMap<class UClass*, class UTexture2D*>)    MapToUse                                                    OFFSET(get<T>, {0x440, 80, 0, 0})


	/// Functions
	// Function /Game/UI/Inventory/Items/InventoryItem_BP.InventoryItem_BP_C.OnButtonFocusLost
	// void OnButtonFocusLost();                                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/Items/InventoryItem_BP.InventoryItem_BP_C.OnButtonUnhovered
	// void OnButtonUnhovered();                                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/Items/InventoryItem_BP.InventoryItem_BP_C.OnButtonFocused
	// void OnButtonFocused();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/Items/InventoryItem_BP.InventoryItem_BP_C.OnButtonHovered
	// void OnButtonHovered();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/Items/InventoryItem_BP.InventoryItem_BP_C.ExecuteUbergraph_InventoryItem_BP
	// void ExecuteUbergraph_InventoryItem_BP(int32_t EntryPoint);                                                              // [0x1c5deb0] Final                
};

/// Class /Game/UI/Ledger/Ledger_BP.Ledger_BP_C
/// Size: 0x0080 (0x000418 - 0x000498)
class ULedger_BP_C : public ULedgerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x418, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInCompanionItemViewer                                   OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeOutCharacter                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInCharacter                                             OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Outro                                                       OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Fade                                                        OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UBackground1_BP_C*)                  Background                                                  OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UImage*)                             Edge                                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UPageAnchor1_BP_C*)                  PageAnchor1_BP_C                                            OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UPageAnchor2_BP_C*)                  PageAnchor2_BP_C                                            OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UCanvasPanel*)                       RootCanvas                                                  OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UImage*)                             Smoke                                                       OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UImage*)                             Smoke_Behind                                                OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class USurvivalBarGroupWidget_BP_C*)       SurvivalBar                                                 OFFSET(get<T>, {0x488, 8, 0, 0})
	DMember(float)                                     TransitionsPlaybackSpeed                                    OFFSET(get<float>, {0x490, 4, 0, 0})
	DMember(float)                                     CharacterRenderFadeTime                                     OFFSET(get<float>, {0x494, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.OnMaximize
	// bool OnMaximize(FDelegateProperty& AnimationCompleteCallback);                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.OnMinimize
	// bool OnMinimize(FDelegateProperty& AnimationCompleteCallback);                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.SetupMaterialInstances
	// void SetupMaterialInstances(class UImage* Image, class UMaterialInstanceDynamic*& MaterialInstance, float& SizeX, float& SizeY); // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.OnFinalizeMaximize
	// void OnFinalizeMaximize();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.OnFinalizeMinimize
	// void OnFinalizeMinimize();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.OnSetCurrentPage
	// void OnSetCurrentPage(ELedgerPages Page, bool bAnimate);                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.FadeInSharedItemViewer
	// void FadeInSharedItemViewer();                                                                                           // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Ledger/Ledger_BP.Ledger_BP_C.ExecuteUbergraph_Ledger_BP
	// void ExecuteUbergraph_Ledger_BP(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/HUD_BP.HUD_BP_C
/// Size: 0x0020 (0x0003F0 - 0x000410)
class UHUD_BP_C : public UHUDWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3F0, 8, 0, 0})
	CMember(class UBossBar_BP_C*)                      BossBar                                                     OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class USavingWidget_BP_C*)                 SavingWidget_BP                                             OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UObject*)                            DialogCombatSkillComponent                                  OFFSET(get<T>, {0x408, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/HUD_BP.HUD_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/HUD_BP.HUD_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/HUD_BP.HUD_BP_C.ExecuteUbergraph_HUD_BP
	// void ExecuteUbergraph_HUD_BP(int32_t EntryPoint);                                                                        // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/ComputerTerminal/ComputerTerminalContainer_BP.ComputerTerminalContainer_BP_C
/// Size: 0x0000 (0x000328 - 0x000328)
class UComputerTerminalContainer_BP_C : public UComputerTerminalContainerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenu_BP.SettingsMenu_BP_C
/// Size: 0x0020 (0x000678 - 0x000698)
class USettingsMenu_BP_C : public USettingsMenuWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1688;

public:
	CMember(class UWidgetAnimation*)                   Outro                                                       OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UCanvasPanel*)                       RootCanvas                                                  OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenu_BP.SettingsMenu_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenu_BP.SettingsMenu_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/MainDLCManager_BP.MainDLCManager_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UMainDLCManager_BP_C : public UMainMenuDLCManagerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/Legal/LegalWidget_BP.LegalWidget_BP_C
/// Size: 0x0018 (0x0003E8 - 0x000400)
class ULegalWidget_BP_C : public ULegalWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(class UImage*)                             BackingBot                                                  OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UImage*)                             BackingTop                                                  OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UImage*)                             Frame                                                       OFFSET(get<T>, {0x3F8, 8, 0, 0})
};

/// Class /Game/UI/Credits/CreditsWidget_BP.CreditsWidget_BP_C
/// Size: 0x0008 (0x000380 - 0x000388)
class UCreditsWidget_BP_C : public UCreditsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UImage*)                             BackgroundImage                                             OFFSET(get<T>, {0x380, 8, 0, 0})
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/BaseDLCButton.BaseDLCButton_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UBaseDLCButton_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconButton_BP.BeaconButton_BP_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UBeaconButton_BP_C : public UButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/UI/Map/LedgerMap/MapQuestSelectionEntry_BP.MapQuestSelectionEntry_BP_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UMapQuestSelectionEntry_BP_C : public UMapQuestSelectionEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/UI/Map/MultiQuestMapTracker/MultiQuestEntry.MultiQuestEntry_C
/// Size: 0x0000 (0x000418 - 0x000418)
class UMultiQuestEntry_C : public UTextBlockBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
};

/// Class /Game/UI/CharacterCreation/Skills/SkillUnlock_BP.SkillUnlock_BP_C
/// Size: 0x0008 (0x000350 - 0x000358)
class USkillUnlock_BP_C : public USkillUnlockEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UImage*)                             CircleBacking                                               OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Game/UI/Map/MultiQuestMapTracker/MultiQuestMapTracker_BP.MultiQuestMapTracker_BP_C
/// Size: 0x0010 (0x000340 - 0x000350)
class UMultiQuestMapTracker_BP_C : public UMultiQuestMapTracker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(class UImage*)                             ActiveQuestIcon                                             OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/LedgerMapQuestSelection_BP.LedgerMapQuestSelection_BP_C
/// Size: 0x0008 (0x000370 - 0x000378)
class ULedgerMapQuestSelection_BP_C : public ULedgerMapQuestSelectionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UTextBlockBase*)                     HeaderTextblock                                             OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconButtonEntry_BP.BeaconButtonEntry_BP_C
/// Size: 0x0000 (0x000358 - 0x000358)
class UBeaconButtonEntry_BP_C : public UMapBeaconEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/BaseDLCWidget_BP.BaseDLCWidget_BP_C
/// Size: 0x0000 (0x000450 - 0x000450)
class UBaseDLCWidget_BP_C : public UMainMenuDLCWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
};

/// Class /Game/UI/QuestJournal/QuestJournalMaster_BP.QuestJournalMaster_BP_C
/// Size: 0x0030 (0x0004C0 - 0x0004F0)
class UQuestJournalMaster_BP_C : public UQuestJournalWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   FadeInQuestImage                                            OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UBackgroundPanelWidget_C*)           BackgroundPanelWidget                                       OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UBackgroundSplitPanelWidget_C*)      BackgroundSplitPanelWidget                                  OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox1                                            OFFSET(get<T>, {0x4E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/QuestJournal/QuestJournalMaster_BP.QuestJournalMaster_BP_C.OnQuestImageLoaded
	// void OnQuestImageLoaded();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestJournalMaster_BP.QuestJournalMaster_BP_C.ExecuteUbergraph_QuestJournalMaster_BP
	// void ExecuteUbergraph_QuestJournalMaster_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C
/// Size: 0x0028 (0x0010F0 - 0x001118)
class UCompass_BP_C : public UCompassWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4376;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x10F0, 8, 0, 0})
	CMember(class UImage*)                             CardinalDirectionsImage                                     OFFSET(get<T>, {0x10F8, 8, 0, 0})
	CMember(class UImage*)                             CompassBody                                                 OFFSET(get<T>, {0x1100, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CardinalDirection_Mat                                       OFFSET(get<T>, {0x1108, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CompassBody_Mat                                             OFFSET(get<T>, {0x1110, 8, 0, 0})


	/// Functions
	// Function /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C.ExecuteUbergraph_Compass_BP
	// void ExecuteUbergraph_Compass_BP(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final|HasDefaults    
};

