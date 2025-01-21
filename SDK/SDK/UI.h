
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Indiana
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/UI/HUD/BeaconTag/BeaconTag_BP.BeaconTag_BP_C
/// Size: 0x0378 (888 bytes) (0x000370 - 0x000378) align 8 MaxSize: 0x0378
class UBeaconTag_BP_C : public UBeaconTagWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/BeaconTag/BeaconTag_BP.BeaconTag_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/BeaconTag/BeaconTag_BP.BeaconTag_BP_C.ExecuteUbergraph_BeaconTag_BP
	// void ExecuteUbergraph_BeaconTag_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/LoadingScreen/RenderThreadLoadingScreen_BP.RenderThreadLoadingScreen_BP_C
/// Size: 0x0440 (1088 bytes) (0x000438 - 0x000440) align 8 MaxSize: 0x0440
class URenderThreadLoadingScreen_BP_C : public URenderThreadLoadingScreenWidget
{ 
public:
	class UImage*                                      Background;                                                 // 0x0438   (0x0008)  
};

/// Class /Game/UI/Library/Components/SquareCheckBox_BP.SquareCheckBox_BP_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class USquareCheckBox_BP_C : public UCheckBoxWidget
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/PresenterWrapperButton_BP.PresenterWrapperButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UPresenterWrapperButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuSubcategory_BP.SettingsMenuSubcategory_BP_C
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class USettingsMenuSubcategory_BP_C : public USettingsMenuSubcategoryWidget
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuSlot_BP.SettingsMenuSlot_BP_C
/// Size: 0x0358 (856 bytes) (0x000350 - 0x000358) align 8 MaxSize: 0x0358
class USettingsMenuSlot_BP_C : public USettingsMenuSlotWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x0350   (0x0008)  
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuDisplaySubcategory_BP.SettingsMenuDisplaySubcategory_BP_C
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class USettingsMenuDisplaySubcategory_BP_C : public USettingsMenuSubcategoryWidget
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuCheckBox2_BP.SettingsMenuCheckBox2_BP_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class USettingsMenuCheckBox2_BP_C : public USettingsMenuCheckBoxWidget
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuButtonSlot_BP.SettingsMenuButtonSlot_BP_C
/// Size: 0x0350 (848 bytes) (0x000350 - 0x000350) align 8 MaxSize: 0x0350
class USettingsMenuButtonSlot_BP_C : public USettingsMenuButtonSlotWidget
{ 
public:
};

/// Class /Game/UI/HUD/General/DamageText/DamageTextActor_BP.DamageTextActor_BP_C
/// Size: 0x02E0 (736 bytes) (0x0002E0 - 0x0002E0) align 8 MaxSize: 0x02E0
class ADamageTextActor_BP_C : public ADamageTextActor
{ 
public:
};

/// Class /Game/UI/HUD/StatusTag/StatusTagActor_BP.StatusTagActor_BP_C
/// Size: 0x02E0 (736 bytes) (0x0002E0 - 0x0002E0) align 8 MaxSize: 0x02E0
class AStatusTagActor_BP_C : public AStatusTagActor
{ 
public:
};

/// Class /Game/UI/Conversation/HistoryMessage_BP.HistoryMessage_BP_C
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align 8 MaxSize: 0x02C8
class UHistoryMessage_BP_C : public UConversationMessageWidget
{ 
public:
};

/// Class /Game/UI/Conversation/ConversationResponseButton_BP.ConversationResponseButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UConversationResponseButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Conversation/ConversationMessage_BP.ConversationMessage_BP_C
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align 8 MaxSize: 0x02D0
class UConversationMessage_BP_C : public UConversationMessageWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)  


	/// Functions
	// Function /Game/UI/Conversation/ConversationMessage_BP.ConversationMessage_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Conversation/ConversationMessage_BP.ConversationMessage_BP_C.ExecuteUbergraph_ConversationMessage_BP
	// void ExecuteUbergraph_ConversationMessage_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Conversation/ConversationHistory_BP.ConversationHistory_BP_C
/// Size: 0x02A8 (680 bytes) (0x0002A0 - 0x0002A8) align 8 MaxSize: 0x02A8
class UConversationHistory_BP_C : public UConversationHistoryWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x02A0   (0x0008)  
};

/// Class /Game/UI/Conversation/ConversationHistoryButton_BP.ConversationHistoryButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UConversationHistoryButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/RadialContextMenu/TextContextSection_BP.TextContextSection_BP_C
/// Size: 0x02A0 (672 bytes) (0x0002A0 - 0x0002A0) align 8 MaxSize: 0x02A0
class UTextContextSection_BP_C : public UTextSectionWidget
{ 
public:
};

/// Class /Game/UI/IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UIndianaUserWidgetLibrary_C : public UBlueprintFunctionLibrary
{ 
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
/// Size: 0x0308 (776 bytes) (0x000308 - 0x000308) align 8 MaxSize: 0x0308
class USubtitleEntryWidget_BP_C : public USubtitleEntryWidget
{ 
public:
};

/// Class /Game/UI/Drag/ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C
/// Size: 0x02E8 (744 bytes) (0x0002B8 - 0x0002E8) align 8 MaxSize: 0x02E8
class UItemCellDragContainerNoDrag_BP_C : public UDragContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UWidgetAnimation*                            Drop;                                                       // 0x02C0   (0x0008)  
	class UWidgetAnimation*                            Flash;                                                      // 0x02C8   (0x0008)  
	class UBorder*                                     DropBorder;                                                 // 0x02D0   (0x0008)  
	class UBorder*                                     FlashBorder;                                                // 0x02D8   (0x0008)  
	class UBorder*                                     PendingDropBorder;                                          // 0x02E0   (0x0008)  


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
/// Size: 0x0290 (656 bytes) (0x000278 - 0x000290) align 8 MaxSize: 0x0290
class UPageAnchor2_BP_C : public UUserWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x0278   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0280   (0x0008)  
	class UImage*                                      Image1;                                                     // 0x0288   (0x0008)  
};

/// Class /Game/UI/ItemViewer/ItemPageNoDrag_BP.ItemPageNoDrag_BP_C
/// Size: 0x0380 (896 bytes) (0x000370 - 0x000380) align 8 MaxSize: 0x0380
class UItemPageNoDrag_BP_C : public UItemViewerPageWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UWidgetAnimation*                            CollapsePage;                                               // 0x0378   (0x0008)  


	/// Functions
	// Function /Game/UI/ItemViewer/ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.PlayCollapseAnimation
	// void PlayCollapseAnimation();                                                                                            // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.ExecuteUbergraph_ItemPageNoDrag_BP
	// void ExecuteUbergraph_ItemPageNoDrag_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/Navigation/Button_MoreCompanions_BP.Button_MoreCompanions_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UButton_MoreCompanions_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/General/Condition/ConditionButton_BP.ConditionButton_BP_C
/// Size: 0x0308 (776 bytes) (0x000308 - 0x000308) align 8 MaxSize: 0x0308
class UConditionButton_BP_C : public UItemConditionWidget
{ 
public:
};

/// Class /Game/UI/EquipmentMods/EquipmentMods_BP.EquipmentMods_BP_C
/// Size: 0x03F8 (1016 bytes) (0x0003F0 - 0x0003F8) align 8 MaxSize: 0x03F8
class UEquipmentMods_BP_C : public UEquipmentModsWidget
{ 
public:
	class UVerticalBox*                                ModsVerticalBox;                                            // 0x03F0   (0x0008)  
};

/// Class /Game/UI/General/ItemViewerScrollSelector/ItemViewerScrollSelectorButton_BP.ItemViewerScrollSelectorButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UItemViewerScrollSelectorButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/General/ItemViewerScrollSelector/ItemViewerScrollSelectorEntry_BP.ItemViewerScrollSelectorEntry_BP_C
/// Size: 0x0318 (792 bytes) (0x000310 - 0x000318) align 8 MaxSize: 0x0318
class UItemViewerScrollSelectorEntry_BP_C : public UItemViewerScrollSelectorEntry
{ 
public:
	class UImage*                                      Image;                                                      // 0x0310   (0x0008)  
};

/// Class /Game/UI/General/ItemViewerScrollSelector/ItemViewerScrollSelector_BP.ItemViewerScrollSelector_BP_C
/// Size: 0x0338 (824 bytes) (0x000330 - 0x000338) align 8 MaxSize: 0x0338
class UItemViewerScrollSelector_BP_C : public UItemViewerScrollSelector
{ 
public:
	class UImage*                                      TopDivider;                                                 // 0x0330   (0x0008)  
};

/// Class /Game/UI/ItemViewer/ItemPage_BP.ItemPage_BP_C
/// Size: 0x0380 (896 bytes) (0x000370 - 0x000380) align 8 MaxSize: 0x0380
class UItemPage_BP_C : public UItemViewerPageWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UWidgetAnimation*                            CollapsePage;                                               // 0x0378   (0x0008)  


	/// Functions
	// Function /Game/UI/ItemViewer/ItemPage_BP.ItemPage_BP_C.PlayCollapseAnimation
	// void PlayCollapseAnimation();                                                                                            // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemPage_BP.ItemPage_BP_C.ExecuteUbergraph_ItemPage_BP
	// void ExecuteUbergraph_ItemPage_BP(int32_t EntryPoint);                                                                   // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemViewer/ItemViewerIconButton.ItemViewerIconButton_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UItemViewerIconButton_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/ItemViewer/PaginatedButton_BP.PaginatedButton_BP_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UPaginatedButton_BP_C : public UPaginatedButtonWidget
{ 
public:
};

/// Class /Game/UI/InputLabel/InputWidget_BP.InputWidget_BP_C
/// Size: 0x0380 (896 bytes) (0x000378 - 0x000380) align 8 MaxSize: 0x0380
class UInputWidget_BP_C : public UInputWidget
{ 
public:
	class UImage*                                      KeyBackingIcon;                                             // 0x0378   (0x0008)  
};

/// Class /Game/UI/Inventory/Pages/Ammo_BP.Ammo_BP_C
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class UAmmo_BP_C : public UInventoryWeaponAmmoWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  


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
/// Size: 0x0288 (648 bytes) (0x000280 - 0x000288) align 8 MaxSize: 0x0288
class UItemCellDragVisuals_BP_C : public UItemCellVisualsWidget
{ 
public:
	class UImage*                                      CellImage;                                                  // 0x0280   (0x0008)  
};

/// Class /Game/UI/Drag/ItemCellDragDropOperation_BP.ItemCellDragDropOperation_BP_C
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UItemCellDragDropOperation_BP_C : public UIndianaDragDropOperation
{ 
public:
};

/// Class /Game/UI/Drag/ItemCellDragContainer_BP.ItemCellDragContainer_BP_C
/// Size: 0x02E8 (744 bytes) (0x0002B8 - 0x0002E8) align 8 MaxSize: 0x02E8
class UItemCellDragContainer_BP_C : public UDragContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UWidgetAnimation*                            Drop;                                                       // 0x02C0   (0x0008)  
	class UWidgetAnimation*                            Flash;                                                      // 0x02C8   (0x0008)  
	class UBorder*                                     DropBorder;                                                 // 0x02D0   (0x0008)  
	class UBorder*                                     FlashBorder;                                                // 0x02D8   (0x0008)  
	class UBorder*                                     PendingDropBorder;                                          // 0x02E0   (0x0008)  


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
/// Size: 0x0BA0 (2976 bytes) (0x000BA0 - 0x000BA0) align 8 MaxSize: 0x0BA0
class UItemViewerButton_BP_C : public UItemViewerButtonWidget
{ 
public:
};

/// Class /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C
/// Size: 0x0340 (832 bytes) (0x000318 - 0x000340) align 8 MaxSize: 0x0340
class UAmmoGroup_BP_C : public UInventoryWeaponAmmoGroupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UWidgetAnimation*                            FadeBackground;                                             // 0x0320   (0x0008)  
	class UImage*                                      Background;                                                 // 0x0328   (0x0008)  
	class UTexture2D*                                  BackgroundTexture;                                          // 0x0330   (0x0008)  
	class UTexture2D*                                  AmmoTexture0;                                               // 0x0338   (0x0008)  


	/// Functions
	// Function /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C.OnHighlightChange
	// void OnHighlightChange(bool bHighlight);                                                                                 // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/AmmoGroup_BP.AmmoGroup_BP_C.ExecuteUbergraph_AmmoGroup_BP
	// void ExecuteUbergraph_AmmoGroup_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemStats/ItemStat_BP.ItemStat_BP_C
/// Size: 0x0348 (840 bytes) (0x000348 - 0x000348) align 8 MaxSize: 0x0348
class UItemStat_BP_C : public UItemStatEntryWidget
{ 
public:
};

/// Class /Game/UI/InputLabel/InputLabelHold_BP.InputLabelHold_BP_C
/// Size: 0x03D8 (984 bytes) (0x0003B8 - 0x0003D8) align 8 MaxSize: 0x03D8
class UInputLabelHold_BP_C : public UInputLabelHoldWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B8   (0x0008)  
	class UImage*                                      KeyBackingIcon;                                             // 0x03C0   (0x0008)  
	class UMaterialInstanceDynamic*                    GamepadRadialMaterial;                                      // 0x03C8   (0x0008)  
	class UMaterialInstanceDynamic*                    KeyRadialMaterial;                                          // 0x03D0   (0x0008)  


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
/// Size: 0x0378 (888 bytes) (0x000370 - 0x000378) align 8 MaxSize: 0x0378
class UInputLabel_BP_C : public UInputLabelWidget
{ 
public:
	class UMaterialInstanceDynamic*                    RadialMaterial;                                             // 0x0370   (0x0008)  
};

/// Class /Game/UI/Library/Components/GlowButtonWithBacking_BP.GlowButtonWithBacking_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UGlowButtonWithBacking_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C
/// Size: 0x03D0 (976 bytes) (0x0003A0 - 0x0003D0) align 8 MaxSize: 0x03D0
class UTinkering_BP_C : public UTinkeringWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A0   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x03A8   (0x0008)  
	class UImage*                                      BackingBot;                                                 // 0x03B0   (0x0008)  
	class UImage*                                      BackingTop;                                                 // 0x03B8   (0x0008)  
	class UImage*                                      Frame;                                                      // 0x03C0   (0x0008)  
	class UMaterialInstanceDynamic*                    BackingBotInst;                                             // 0x03C8   (0x0008)  


	/// Functions
	// Function /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Workbench/Tinkering_BP.Tinkering_BP_C.ExecuteUbergraph_Tinkering_BP
	// void ExecuteUbergraph_Tinkering_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/Workbench/RepairUpgradeInfo_BP.RepairUpgradeInfo_BP_C
/// Size: 0x0390 (912 bytes) (0x000380 - 0x000390) align 8 MaxSize: 0x0390
class URepairUpgradeInfo_BP_C : public URepairUpgradeInfoWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x0380   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0388   (0x0008)  
};

/// Class /Game/UI/Inventory/Pages/Weapons_BP.Weapons_BP_C
/// Size: 0x0578 (1400 bytes) (0x000550 - 0x000578) align 8 MaxSize: 0x0578
class UWeapons_BP_C : public UInventoryWeaponsPageWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0550   (0x0008)  
	class UInventoryItem_BP_C*                         Item0;                                                      // 0x0558   (0x0008)  
	class UInventoryItem_BP_C*                         Item1;                                                      // 0x0560   (0x0008)  
	class UInventoryItem_BP_C*                         Item2;                                                      // 0x0568   (0x0008)  
	class UInventoryItem_BP_C*                         Item3;                                                      // 0x0570   (0x0008)  


	/// Functions
	// Function /Game/UI/Inventory/Pages/Weapons_BP.Weapons_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Inventory/Pages/Weapons_BP.Weapons_BP_C.ExecuteUbergraph_Weapons_BP
	// void ExecuteUbergraph_Weapons_BP(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemViewer/ItemViewerNavigation_BP.ItemViewerNavigation_BP_C
/// Size: 0x0398 (920 bytes) (0x000390 - 0x000398) align 8 MaxSize: 0x0398
class UItemViewerNavigation_BP_C : public UItemViewerNavigationWidget
{ 
public:
	class UHorizontalBox*                              TabsContainer;                                              // 0x0390   (0x0008)  
};

/// Class /Game/UI/InputLabel/InputLabelGroup_BP.InputLabelGroup_BP_C
/// Size: 0x0380 (896 bytes) (0x000370 - 0x000380) align 8 MaxSize: 0x0380
class UInputLabelGroup_BP_C : public UInputLabelGroupWidget
{ 
public:
	class UImage*                                      LeftFrame;                                                  // 0x0370   (0x0008)  
	class UImage*                                      RightFrame;                                                 // 0x0378   (0x0008)  
};

/// Class /Game/UI/General/FlavorText/FlavorTextWidget_BP.FlavorTextWidget_BP_C
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class UFlavorTextWidget_BP_C : public UFlavorTextWidget
{ 
public:
};

/// Class /Game/UI/Vendor/CartInfoWidget_BP.CartInfoWidget_BP_C
/// Size: 0x03C8 (968 bytes) (0x0003B0 - 0x0003C8) align 8 MaxSize: 0x03C8
class UCartInfoWidget_BP_C : public UCartInfoWidget
{ 
public:
	class UInputLabel_BP_C*                            ActionInputLabelBreakdown;                                  // 0x03B0   (0x0008)  
	class UInputLabel_BP_C*                            ActionInputLabelRepair;                                     // 0x03B8   (0x0008)  
	class UInputLabel_BP_C*                            ActionInputLabelTinker;                                     // 0x03C0   (0x0008)  
};

/// Class /Game/UI/Inventory/Pages/Armor_BP.Armor_BP_C
/// Size: 0x0498 (1176 bytes) (0x000488 - 0x000498) align 8 MaxSize: 0x0498
class UArmor_BP_C : public UInventoryArmorPageWidget
{ 
public:
	class UInventoryItem_BP_C*                         Item0;                                                      // 0x0488   (0x0008)  
	class UInventoryItem_BP_C*                         Item1;                                                      // 0x0490   (0x0008)  
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBar_Thirst.SurvivalBar_Thirst_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class USurvivalBar_Thirst_C : public USurvivalBarWidget
{ 
public:
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBar_Sleep.SurvivalBar_Sleep_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class USurvivalBar_Sleep_C : public USurvivalBarWidget
{ 
public:
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBar_Hunger.SurvivalBar_Hunger_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class USurvivalBar_Hunger_C : public USurvivalBarWidget
{ 
public:
};

/// Class /Game/UI/Workbench/WBUpgradePage_BP.WBUpgradePage_BP_C
/// Size: 0x0430 (1072 bytes) (0x000428 - 0x000430) align 8 MaxSize: 0x0430
class UWBUpgradePage_BP_C : public UWBUpgradePageWidget
{ 
public:
	class USizeBox*                                    PagesSizeBox;                                               // 0x0428   (0x0008)  
};

/// Class /Game/UI/Workbench/WBRepairPage_BP.WBRepairPage_BP_C
/// Size: 0x0458 (1112 bytes) (0x000450 - 0x000458) align 8 MaxSize: 0x0458
class UWBRepairPage_BP_C : public UWBRepairPageWidget
{ 
public:
	class USizeBox*                                    PagesSizeBox;                                               // 0x0450   (0x0008)  
};

/// Class /Game/UI/Workbench/WBBreakdownPage_BP.WBBreakdownPage_BP_C
/// Size: 0x0420 (1056 bytes) (0x000418 - 0x000420) align 8 MaxSize: 0x0420
class UWBBreakdownPage_BP_C : public UWBBreakdownPageWidget
{ 
public:
	class USizeBox*                                    PagesSizeBox;                                               // 0x0418   (0x0008)  
};

/// Class /Game/UI/HUD/CharacterOverview/SurvivalBars/SurvivalBarGroupWidget_BP.SurvivalBarGroupWidget_BP_C
/// Size: 0x0350 (848 bytes) (0x000350 - 0x000350) align 8 MaxSize: 0x0350
class USurvivalBarGroupWidget_BP_C : public USurvivalBarGroupWidget
{ 
public:
};

/// Class /Game/UI/General/PageAnchor1_BP.PageAnchor1_BP_C
/// Size: 0x0298 (664 bytes) (0x000278 - 0x000298) align 8 MaxSize: 0x0298
class UPageAnchor1_BP_C : public UUserWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x0278   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0280   (0x0008)  
	class UImage*                                      Image1;                                                     // 0x0288   (0x0008)  
	class UImage*                                      Image2;                                                     // 0x0290   (0x0008)  
};

/// Class /Game/UI/Navigation/NavigationBar_BP.NavigationBar_BP_C
/// Size: 0x0380 (896 bytes) (0x000380 - 0x000380) align 8 MaxSize: 0x0380
class UNavigationBar_BP_C : public UNavigationGroupWidget
{ 
public:
};

/// Class /Game/UI/Library/Components/Background1_BP.Background1_BP_C
/// Size: 0x0288 (648 bytes) (0x000278 - 0x000288) align 8 MaxSize: 0x0288
class UBackground1_BP_C : public UUserWidget
{ 
public:
	class UImage*                                      Grid;                                                       // 0x0278   (0x0008)  
	class UImage*                                      Halftone;                                                   // 0x0280   (0x0008)  
};

/// Class /Game/UI/Workbench/WorkbenchWidget_BP.WorkbenchWidget_BP_C
/// Size: 0x0388 (904 bytes) (0x000358 - 0x000388) align 8 MaxSize: 0x0388
class UWorkbenchWidget_BP_C : public UWorkbenchWidget
{ 
public:
	class UBackground1_BP_C*                           Background;                                                 // 0x0358   (0x0008)  
	class UPageAnchor1_BP_C*                           PageAnchorLeft;                                             // 0x0360   (0x0008)  
	class UPageAnchor1_BP_C*                           PageAnchorRight;                                            // 0x0368   (0x0008)  
	class UImage*                                      Smoke;                                                      // 0x0370   (0x0008)  
	class UImage*                                      Smoke_Behind;                                               // 0x0378   (0x0008)  
	class USurvivalBarGroupWidget_BP_C*                SurvivalBar;                                                // 0x0380   (0x0008)  
};

/// Class /Game/UI/Tutorial/TutorialPopupWidget_BP.TutorialPopupWidget_BP_C
/// Size: 0x0360 (864 bytes) (0x000350 - 0x000360) align 8 MaxSize: 0x0360
class UTutorialPopupWidget_BP_C : public UTutorialPopupWidget
{ 
public:
	class UTutorialPopupStyle_Corporate_BP_C*          TutorialPopupStyle_Corporate_BP;                            // 0x0350   (0x0008)  
	class UTutorialPopupStyle_Simple_BP_C*             TutorialPopupStyle_Simple_BP;                               // 0x0358   (0x0008)  
};

/// Class /Game/UI/ToolTip/ToolTipContainer_BP.ToolTipContainer_BP_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class UToolTipContainer_BP_C : public UToolTipContainerWidget
{ 
public:
};

/// Class /Game/UI/Subtitles/SubtitleManager_BP.SubtitleManager_BP_C
/// Size: 0x03A0 (928 bytes) (0x0003A0 - 0x0003A0) align 8 MaxSize: 0x03A0
class USubtitleManager_BP_C : public USubtitleManagerWidget
{ 
public:
};

/// Class /Game/UI/Slideshows/SlideshowWidget_BP.SlideshowWidget_BP_C
/// Size: 0x0428 (1064 bytes) (0x000428 - 0x000428) align 8 MaxSize: 0x0428
class USlideshowWidget_BP_C : public USlideshowWidget
{ 
public:
};

/// Class /Game/UI/RadialContextMenu/RadialContextMenu_BP.RadialContextMenu_BP_C
/// Size: 0x0354 (852 bytes) (0x000338 - 0x000354) align 8 MaxSize: 0x0354
class URadialContextMenu_BP_C : public URadialContextMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0338   (0x0008)  
	class UWidgetAnimation*                            Outro;                                                      // 0x0340   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x0348   (0x0008)  
	float                                              PlaybackSpeed;                                              // 0x0350   (0x0004)  


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
/// Size: 0x0390 (912 bytes) (0x000370 - 0x000390) align 8 MaxSize: 0x0390
class UMoviePlayer_BP_C : public UMoviePlayerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UWidgetAnimation*                            SkipFadeOutIn;                                              // 0x0378   (0x0008)  
	class UBackground1_BP_C*                           Background1_BP;                                             // 0x0380   (0x0008)  
	class UImage*                                      BlackBG;                                                    // 0x0388   (0x0008)  


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
/// Size: 0x0462 (1122 bytes) (0x0003E0 - 0x000462) align 8 MaxSize: 0x0462
class ULevelUpNotification_BP_C : public ULevelUpNotificationWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  
	class UWidgetAnimation*                            FadeInLevelUpReminder;                                      // 0x03E8   (0x0008)  
	class UWidgetAnimation*                            SecondaryFadeIn;                                            // 0x03F0   (0x0008)  
	class UWidgetAnimation*                            PrimaryTextGrow;                                            // 0x03F8   (0x0008)  
	class UWidgetAnimation*                            SunSpin;                                                    // 0x0400   (0x0008)  
	class UWidgetAnimation*                            GlowFade;                                                   // 0x0408   (0x0008)  
	class UWidgetAnimation*                            GlowBall;                                                   // 0x0410   (0x0008)  
	class UWidgetAnimation*                            GlowGrow;                                                   // 0x0418   (0x0008)  
	class UWidgetAnimation*                            GlowShrink;                                                 // 0x0420   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0428   (0x0008)  
	class UWidgetAnimation*                            PrimaryFadeIn;                                              // 0x0430   (0x0008)  
	class UImage*                                      InputLabelBacking;                                          // 0x0438   (0x0008)  
	class UImage*                                      ReminderBacking;                                            // 0x0440   (0x0008)  
	class UMaterialInstanceDynamic*                    GlowMaterial;                                               // 0x0448   (0x0008)  
	class UMaterialInstanceDynamic*                    LeftWingMaterial;                                           // 0x0450   (0x0008)  
	class UMaterialInstanceDynamic*                    RightWingMaterial;                                          // 0x0458   (0x0008)  
	bool                                               CanStartWingIntro;                                          // 0x0460   (0x0001)  
	bool                                               CanStartWingOutro;                                          // 0x0461   (0x0001)  


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
/// Size: 0x0408 (1032 bytes) (0x0003D0 - 0x000408) align 8 MaxSize: 0x0408
class UDialogBoxRespec_BP_C : public UDialogBoxRespecWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x03D8   (0x0008)  
	class UBackground1_BP_C*                           Background1_BP;                                             // 0x03E0   (0x0008)  
	class UImage*                                      BackingBot;                                                 // 0x03E8   (0x0008)  
	class UImage*                                      BackingTop;                                                 // 0x03F0   (0x0008)  
	class UImage*                                      Frame;                                                      // 0x03F8   (0x0008)  
	class UMaterialInstanceDynamic*                    BackingBotInst;                                             // 0x0400   (0x0008)  


	/// Functions
	// Function /Game/UI/Dialogs/DialogBoxRespec_BP.DialogBoxRespec_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxRespec_BP.DialogBoxRespec_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxRespec_BP.DialogBoxRespec_BP_C.ExecuteUbergraph_DialogBoxRespec_BP
	// void ExecuteUbergraph_DialogBoxRespec_BP(int32_t EntryPoint);                                                            // [0x1c5deb0] Final                
};

/// Class /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C
/// Size: 0x03E8 (1000 bytes) (0x0003B8 - 0x0003E8) align 8 MaxSize: 0x03E8
class UDialogBox1_BP_C : public UDialogBoxWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B8   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x03C0   (0x0008)  
	class UImage*                                      BackingBot;                                                 // 0x03C8   (0x0008)  
	class UImage*                                      BackingTop;                                                 // 0x03D0   (0x0008)  
	class UImage*                                      Frame;                                                      // 0x03D8   (0x0008)  
	class UMaterialInstanceDynamic*                    BackingBotInst;                                             // 0x03E0   (0x0008)  


	/// Functions
	// Function /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBox1_BP.DialogBox1_BP_C.ExecuteUbergraph_DialogBox1_BP
	// void ExecuteUbergraph_DialogBox1_BP(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final                
};

/// Class /Game/UI/Debug/DebugOverlay.DebugOverlay_C
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class UDebugOverlay_C : public UDebugOverlayWidget
{ 
public:
};

/// Class /Game/UI/Conversation/ConversationWidget_BP.ConversationWidget_BP_C
/// Size: 0x0588 (1416 bytes) (0x000520 - 0x000588) align 8 MaxSize: 0x0588
class UConversationWidget_BP_C : public UConversationWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0520   (0x0008)  
	class UWidgetAnimation*                            FadeOutContent;                                             // 0x0528   (0x0008)  
	class UWidgetAnimation*                            FadeInContent;                                              // 0x0530   (0x0008)  
	class UImage*                                      ConversationBackingBot;                                     // 0x0538   (0x0008)  
	class UImage*                                      ConversationBackingTop;                                     // 0x0540   (0x0008)  
	class UImage*                                      HistoryBackingBot;                                          // 0x0548   (0x0008)  
	class UImage*                                      HistoryBackingTop;                                          // 0x0550   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0558   (0x0008)  
	float                                              PlaybackMultiplier;                                         // 0x0560   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0564   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    ConversationBackingTopInst;                                 // 0x0568   (0x0008)  
	class UMaterialInstanceDynamic*                    ConversationBackingBotInst;                                 // 0x0570   (0x0008)  
	class UMaterialInstanceDynamic*                    HistoryBackingTopInst;                                      // 0x0578   (0x0008)  
	class UMaterialInstanceDynamic*                    HistoryBackingBotInst;                                      // 0x0580   (0x0008)  


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
/// Size: 0x0358 (856 bytes) (0x000348 - 0x000358) align 8 MaxSize: 0x0358
class UCinematicPlayer_BP_C : public UCinematicPlayerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	class UWidgetAnimation*                            SkipFadeOutIn;                                              // 0x0350   (0x0008)  


	/// Functions
	// Function /Game/UI/CinematicPlayer/CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeIn
	// void InitiateFadeIn();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/CinematicPlayer/CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeOut
	// void InitiateFadeOut();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/CinematicPlayer/CinematicPlayer_BP.CinematicPlayer_BP_C.ExecuteUbergraph_CinematicPlayer_BP
	// void ExecuteUbergraph_CinematicPlayer_BP(int32_t EntryPoint);                                                            // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/StatusTag/StatusTagGenerator_BP.StatusTagGenerator_BP_C
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UStatusTagGenerator_BP_C : public UStatusTagGenerator
{ 
public:
};

/// Class /Game/UI/HUD/PlayerHudEvents.PlayerHudEvents_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPlayerHudEvents_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/UI/HUD/PlayerHudEvents.PlayerHudEvents_C.SetObjective
	// void SetObjective(class AActor* Objective, FString ObjectiveName);                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/HUD/General/DamageText/WorldSpaceTextGenerator_BP.WorldSpaceTextGenerator_BP_C
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 8 MaxSize: 0x0100
class UWorldSpaceTextGenerator_BP_C : public UWorldSpaceDamageTextGenerator
{ 
public:
};

/// Class /Game/UI/General/OptionSlider/GenericSlider/GenericSlider_BP.GenericSlider_BP_C
/// Size: 0x0578 (1400 bytes) (0x000578 - 0x000578) align 8 MaxSize: 0x0578
class UGenericSlider_BP_C : public USliderBase
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuSlider_BP.SettingsMenuSlider_BP_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class USettingsMenuSlider_BP_C : public USettingsMenuSliderWidget
{ 
public:
};

/// Class /Game/UI/Menus/KeyBind/KeyBindMenu_BP.KeyBindMenu_BP_C
/// Size: 0x0B88 (2952 bytes) (0x000B58 - 0x000B88) align 8 MaxSize: 0x0B88
class UKeyBindMenu_BP_C : public UKeyBindsMenuWidget
{ 
public:
	class UWidgetAnimation*                            Outro;                                                      // 0x0B58   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x0B60   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0B68   (0x0008)  
	class UTextBlockBase*                              Primary;                                                    // 0x0B70   (0x0008)  
	class UCanvasPanel*                                RootCanvas;                                                 // 0x0B78   (0x0008)  
	class UTextBlockBase*                              Secondary;                                                  // 0x0B80   (0x0008)  


	/// Functions
	// Function /Game/UI/Menus/KeyBind/KeyBindMenu_BP.KeyBindMenu_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/KeyBind/KeyBindMenu_BP.KeyBindMenu_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Library/Components/GlowButtonNoBacking_BP.GlowButtonNoBacking_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UGlowButtonNoBacking_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/General/LoadingBlocker/LoadingBlocker_BP.LoadingBlocker_BP_C
/// Size: 0x0280 (640 bytes) (0x000278 - 0x000280) align 8 MaxSize: 0x0280
class ULoadingBlocker_BP_C : public UUserWidget
{ 
public:
	class UImage*                                      LoadingImage;                                               // 0x0278   (0x0008)  
};

/// Class /Game/UI/General/OptionSlider/GenericSlider/GenericSliderWidget_BP.GenericSliderWidget_BP_C
/// Size: 0x0348 (840 bytes) (0x000338 - 0x000348) align 8 MaxSize: 0x0348
class UGenericSliderWidget_BP_C : public UWaitTimeSliderWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x0338   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0340   (0x0008)  
};

/// Class /Game/UI/Library/Components/BackgroundPanelWidget.BackgroundPanelWidget_C
/// Size: 0x0428 (1064 bytes) (0x000300 - 0x000428) align 8 MaxSize: 0x0428
class UBackgroundPanelWidget_C : public UBackgroundPanelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	class UWidgetAnimation*                            FadeOpacity;                                                // 0x0308   (0x0008)  
	class UNamedSlot*                                  NamedSlot;                                                  // 0x0310   (0x0008)  
	FSlateBrush                                        OuterBrush;                                                 // 0x0318   (0x0088)  
	FSlateBrush                                        InnerBrush;                                                 // 0x03A0   (0x0088)  


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
/// Size: 0x0340 (832 bytes) (0x000330 - 0x000340) align 8 MaxSize: 0x0340
class UBreakdownItemsGainedPopup_BP_C : public UBreakdownPopupWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0330   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0338   (0x0008)  
};

/// Class /Game/UI/Menus/SaveLoadMenu/SaveLoadMenu_BP.SaveLoadMenu_BP_C
/// Size: 0x03F0 (1008 bytes) (0x0003D8 - 0x0003F0) align 8 MaxSize: 0x03F0
class USaveLoadMenu_BP_C : public USaveLoadMenuWidget
{ 
public:
	class UWidgetAnimation*                            Outro;                                                      // 0x03D8   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x03E0   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x03E8   (0x0008)  


	/// Functions
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/SaveLoadMenu/SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Menus/PauseMenu.PauseMenu_C
/// Size: 0x03B8 (952 bytes) (0x000370 - 0x0003B8) align 8 MaxSize: 0x03B8
class UPauseMenu_C : public UPauseMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UBackground1_BP_C*                           Background1_BP;                                             // 0x0378   (0x0008)  
	class UTextBlockBase*                              LoadGameText;                                               // 0x0380   (0x0008)  
	class UTextBlockBase*                              MainMenuText;                                               // 0x0388   (0x0008)  
	class UTextBlockBase*                              QuitText;                                                   // 0x0390   (0x0008)  
	class UTextBlockBase*                              ResumeText;                                                 // 0x0398   (0x0008)  
	class UTextBlockBase*                              SaveGameText;                                               // 0x03A0   (0x0008)  
	class USavingWidget_BP_C*                          SavingWidget_BP;                                            // 0x03A8   (0x0008)  
	class UTextBlockBase*                              SettingsText;                                               // 0x03B0   (0x0008)  


	/// Functions
	// Function /Game/UI/Menus/PauseMenu.PauseMenu_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Menus/PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
	// void ExecuteUbergraph_PauseMenu(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/WaitTime/WaitTime_BP.WaitTime_BP_C
/// Size: 0x03B0 (944 bytes) (0x0003A0 - 0x0003B0) align 8 MaxSize: 0x03B0
class UWaitTime_BP_C : public UWaitTimeWidget
{ 
public:
	class UBackground1_BP_C*                           Background1_BP;                                             // 0x03A0   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x03A8   (0x0008)  
};

/// Class /Game/UI/IndianaUI_BP.IndianaUI_BP_C
/// Size: 0x06A0 (1696 bytes) (0x000690 - 0x0006A0) align 8 MaxSize: 0x06A0
class AIndianaUI_BP_C : public AIndianaUI
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0690   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0698   (0x0008)  


	/// Functions
	// Function /Game/UI/IndianaUI_BP.IndianaUI_BP_C.SetObjective
	// void SetObjective(class AActor* Objective, FString ObjectiveName);                                                       // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/IndianaUI_BP.IndianaUI_BP_C.ExecuteUbergraph_IndianaUI_BP
	// void ExecuteUbergraph_IndianaUI_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/Saving/SavingWidget_BP.SavingWidget_BP_C
/// Size: 0x0348 (840 bytes) (0x000320 - 0x000348) align 8 MaxSize: 0x0348
class USavingWidget_BP_C : public USavingWidget
{ 
public:
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0320   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0328   (0x0008)  
	class UImage*                                      SavingImageBacking;                                         // 0x0330   (0x0008)  
	class UImage*                                      SavingImageForeground;                                      // 0x0338   (0x0008)  
	class UImage*                                      SavingImageRotating;                                        // 0x0340   (0x0008)  


	/// Functions
	// Function /Game/UI/Saving/SavingWidget_BP.SavingWidget_BP_C.OnMinimize
	// bool OnMinimize(FDelegateProperty& AnimationCompleteCallback);                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Saving/SavingWidget_BP.SavingWidget_BP_C.OnMaximize
	// bool OnMaximize(FDelegateProperty& AnimationCompleteCallback);                                                           // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Saving/SavingSpinnerWidget_BP.SavingSpinnerWidget_BP_C
/// Size: 0x0318 (792 bytes) (0x000300 - 0x000318) align 8 MaxSize: 0x0318
class USavingSpinnerWidget_BP_C : public UIndianaUserWidget
{ 
public:
	class UImage*                                      SavingImageBacking;                                         // 0x0300   (0x0008)  
	class UImage*                                      SavingImageForeground;                                      // 0x0308   (0x0008)  
	class UImage*                                      SavingImageRotating;                                        // 0x0310   (0x0008)  
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/MainOptions_BP.MainOptions_BP_C
/// Size: 0x0430 (1072 bytes) (0x0003E0 - 0x000430) align 8 MaxSize: 0x0430
class UMainOptions_BP_C : public UMainOptionsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  
	class UTextBlockBase*                              ChangeProfileText;                                          // 0x03E8   (0x0008)  
	class UTextBlockBase*                              ContinueText;                                               // 0x03F0   (0x0008)  
	class UTextBlockBase*                              CreditsText;                                                // 0x03F8   (0x0008)  
	class UTextBlockBase*                              DeliverablesText;                                           // 0x0400   (0x0008)  
	class UTextBlockBase*                              ExtrasText;                                                 // 0x0408   (0x0008)  
	class UTextBlockBase*                              LoadSaveText;                                               // 0x0410   (0x0008)  
	class UTextBlockBase*                              NewGameText;                                                // 0x0418   (0x0008)  
	class UTextBlockBase*                              QuitText;                                                   // 0x0420   (0x0008)  
	class UTextBlockBase*                              SettingsText;                                               // 0x0428   (0x0008)  


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
/// Size: 0x0340 (832 bytes) (0x000338 - 0x000340) align 8 MaxSize: 0x0340
class ULevelSelectOptions_BP_C : public ULevelOptionsWidget
{ 
public:
	class UBorder*                                     OptionsContainer;                                           // 0x0338   (0x0008)  
};

/// Class /Game/UI/Menus/GammaSelection/GammaSelection_BP.GammaSelection_BP_C
/// Size: 0x0398 (920 bytes) (0x000370 - 0x000398) align 8 MaxSize: 0x0398
class UGammaSelection_BP_C : public UGammaSelectionWidget
{ 
public:
	class UWidgetAnimation*                            Outro;                                                      // 0x0370   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x0378   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0380   (0x0008)  
	class UImage*                                      GammaImage;                                                 // 0x0388   (0x0008)  
	class UCanvasPanel*                                RootCanvas;                                                 // 0x0390   (0x0008)  
};

/// Class /Game/UI/Library/Components/InvisibleButton_BP.InvisibleButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UInvisibleButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Library/Components/Button1_BP.Button1_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UButton1_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Menus/MainMenu/MainMenu.MainMenu_C
/// Size: 0x0460 (1120 bytes) (0x0003F8 - 0x000460) align 8 MaxSize: 0x0460
class UMainMenu_C : public UMainMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03F8   (0x0008)  
	class UWidgetAnimation*                            FadeInGammaSelection;                                       // 0x0400   (0x0008)  
	class UWidgetAnimation*                            AutosaveSplashAnimation;                                    // 0x0408   (0x0008)  
	class UWidgetAnimation*                            FadeInKeyPress;                                             // 0x0410   (0x0008)  
	class UWidgetAnimation*                            FadeInLogo;                                                 // 0x0418   (0x0008)  
	class UWidgetAnimation*                            FadeOutLogo;                                                // 0x0420   (0x0008)  
	class UWidgetAnimation*                            KeyPressFadeLowAnim;                                        // 0x0428   (0x0008)  
	class UWidgetAnimation*                            FadeOutOptionsMenu;                                         // 0x0430   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0438   (0x0008)  
	class UImage*                                      LogoImage;                                                  // 0x0440   (0x0008)  
	class USavingSpinnerWidget_BP_C*                   SavingSpinnerWidget;                                        // 0x0448   (0x0008)  
	class USavingWidget_BP_C*                          SavingWidget_BP;                                            // 0x0450   (0x0008)  
	class UUserWidget*                                 NewVar;                                                     // 0x0458   (0x0008)  


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
/// Size: 0x03D8 (984 bytes) (0x0003B8 - 0x0003D8) align 8 MaxSize: 0x03D8
class UInputLabelHoldSmall_BP_C : public UInputLabelHoldWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B8   (0x0008)  
	class UImage*                                      KeyBackingIcon;                                             // 0x03C0   (0x0008)  
	class UMaterialInstanceDynamic*                    GamepadRadialMaterial;                                      // 0x03C8   (0x0008)  
	class UMaterialInstanceDynamic*                    KeyRadialMaterial;                                          // 0x03D0   (0x0008)  


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
/// Size: 0x0490 (1168 bytes) (0x000470 - 0x000490) align 8 MaxSize: 0x0490
class UCompanionEquipmentBarWidget_C : public UCompanionEquipmentBarWidget
{ 
public:
	class UInventoryItem_BP_C*                         Item0;                                                      // 0x0470   (0x0008)  
	class UInventoryItem_BP_C*                         Item1;                                                      // 0x0478   (0x0008)  
	class UInventoryItem_BP_C*                         Item2;                                                      // 0x0480   (0x0008)  
	class UInventoryItem_BP_C*                         Item3;                                                      // 0x0488   (0x0008)  
};

/// Class /Game/UI/Perks/StatsPerkListRow_BP.StatsPerkListRow_BP_C
/// Size: 0x0430 (1072 bytes) (0x000428 - 0x000430) align 8 MaxSize: 0x0430
class UStatsPerkListRow_BP_C : public UPerksListRowWidget
{ 
public:
	class UImage*                                      PerkAnchor;                                                 // 0x0428   (0x0008)  
};

/// Class /Game/UI/Perks/StatsPerkList_BP.StatsPerkList_BP_C
/// Size: 0x0388 (904 bytes) (0x000360 - 0x000388) align 8 MaxSize: 0x0388
class UStatsPerkList_BP_C : public UPerksListWidget
{ 
public:
	class UImage*                                      PerkRowLineBreakFour;                                       // 0x0360   (0x0008)  
	class UImage*                                      PerkRowLineBreakOne;                                        // 0x0368   (0x0008)  
	class UImage*                                      PerkRowLineBreakThree;                                      // 0x0370   (0x0008)  
	class UImage*                                      PerkRowLineBreakTwo;                                        // 0x0378   (0x0008)  
	class UVerticalBox*                                PerkVerticalBox;                                            // 0x0380   (0x0008)  
};

/// Class /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummaryEntry_BP1.StatsPerkSummaryEntry_BP1_C
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class UStatsPerkSummaryEntry_BP1_C : public UPerkSummaryEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  


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
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class UCompanionOptionSelector_BP_C : public UCompanionBehaviorOptionWidget
{ 
public:
};

/// Class /Game/UI/Stats/SummaryPage/Perk/StatsPerkSummary_BP.StatsPerkSummary_BP_C
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class UStatsPerkSummary_BP_C : public UStatsPerkSummaryWidget
{ 
public:
};

/// Class /Game/UI/Companions/CompanionStatusEffects_BP.CompanionStatusEffects_BP_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class UCompanionStatusEffects_BP_C : public UCharacterStatusEffectsWidget
{ 
public:
};

/// Class /Game/UI/Companions/CompanionBehaviors_BP.CompanionBehaviors_BP_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class UCompanionBehaviors_BP_C : public UCompanionBehaviorsWidget
{ 
public:
};

/// Class /Game/UI/Companions/CompanionDetails_BP.CompanionDetails_BP_C
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class UCompanionDetails_BP_C : public UCompanionDetails
{ 
public:
	class UBackgroundSplitPanelWidget_C*               BackgroundSplitPanelWidget;                                 // 0x0318   (0x0008)  
	class UScrollBox*                                  BodyScrollBox;                                              // 0x0320   (0x0008)  
};

/// Class /Game/UI/Companions/CompanionStats_BP.CompanionStats_BP_C
/// Size: 0x03C0 (960 bytes) (0x0003B0 - 0x0003C0) align 8 MaxSize: 0x03C0
class UCompanionStats_BP_C : public UCompanionStatsWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x03B0   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget0;                                     // 0x03B8   (0x0008)  
};

/// Class /Game/UI/Companions/CompanionPerks_BP.CompanionPerks_BP_C
/// Size: 0x03D8 (984 bytes) (0x0003B8 - 0x0003D8) align 8 MaxSize: 0x03D8
class UCompanionPerks_BP_C : public UCompanionPerksWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x03B8   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget0;                                     // 0x03C0   (0x0008)  
	class UImage*                                      DynamicBacking;                                             // 0x03C8   (0x0008)  
	class UImage*                                      StaticBacking;                                              // 0x03D0   (0x0008)  
};

/// Class /Game/UI/Companions/CompanionEquipment_BP.CompanionEquipment_BP_C
/// Size: 0x0548 (1352 bytes) (0x000548 - 0x000548) align 8 MaxSize: 0x0548
class UCompanionEquipment_BP_C : public UCompanionEquipmentWidget
{ 
public:
};

/// Class /Game/UI/CodexJournal/TutorialList_BP.TutorialList_BP_C
/// Size: 0x0398 (920 bytes) (0x000398 - 0x000398) align 8 MaxSize: 0x0398
class UTutorialList_BP_C : public UTutorialList
{ 
public:
};

/// Class /Game/UI/CodexJournal/TutorialListContainer_BP.TutorialListContainer_BP_C
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class UTutorialListContainer_BP_C : public UTutorialListContainer
{ 
public:
};

/// Class /Game/UI/CodexJournal/SymbolList_BP.SymbolList_BP_C
/// Size: 0x0448 (1096 bytes) (0x000448 - 0x000448) align 8 MaxSize: 0x0448
class USymbolList_BP_C : public USymbolList
{ 
public:
};

/// Class /Game/UI/QuestJournal/QuestList/QuestList_BP.QuestList_BP_C
/// Size: 0x03B8 (952 bytes) (0x0003B8 - 0x0003B8) align 8 MaxSize: 0x03B8
class UQuestList_BP_C : public UQuestListWidget
{ 
public:
};

/// Class /Game/UI/QuestJournal/ObjectiveList/ObjectiveList_BP.ObjectiveList_BP_C
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class UObjectiveList_BP_C : public UObjectiveListWidget
{ 
public:
};

/// Class /Game/UI/Library/Components/BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C
/// Size: 0x05B8 (1464 bytes) (0x000360 - 0x0005B8) align 8 MaxSize: 0x05B8
class UBackgroundSplitPanelWidget_C : public UBackgroundSplitPanelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	class UWidgetAnimation*                            FadeOpacity;                                                // 0x0368   (0x0008)  
	class UImage*                                      BorderBottom;                                               // 0x0370   (0x0008)  
	class UImage*                                      BorderInnerBottom;                                          // 0x0378   (0x0008)  
	class UImage*                                      BorderInnerTop;                                             // 0x0380   (0x0008)  
	class UImage*                                      BorderTop;                                                  // 0x0388   (0x0008)  
	class UNamedSlot*                                  NamedSlot;                                                  // 0x0390   (0x0008)  
	FSlateBrush                                        OuterTopBrush;                                              // 0x0398   (0x0088)  
	FSlateBrush                                        InnerTopBrush;                                              // 0x0420   (0x0088)  
	FSlateBrush                                        OuterBottomBrush;                                           // 0x04A8   (0x0088)  
	FSlateBrush                                        InnerBotttomBrush;                                          // 0x0530   (0x0088)  


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
/// Size: 0x0330 (816 bytes) (0x000328 - 0x000330) align 8 MaxSize: 0x0330
class UDerivedStat_BP_C : public UDerivedStatWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0328   (0x0008)  


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
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UGlowButtonNoBackingNoPress_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C
/// Size: 0x0330 (816 bytes) (0x000328 - 0x000330) align 8 MaxSize: 0x0330
class UCharacterStatusEffectEntry_BP_C : public UStatusEffectEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0328   (0x0008)  


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
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class UStatsFlawSummaryEntry_BP_C : public UFlawSummaryEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  


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
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class UStatsFlawSummary_BP_C : public UStatsFlawSummaryWidget
{ 
public:
};

/// Class /Game/UI/CharacterDetails/StatusEffects/CharacterStatusEffects_BP.CharacterStatusEffects_BP_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class UCharacterStatusEffects_BP_C : public UCharacterStatusEffectsWidget
{ 
public:
};

/// Class /Game/UI/CharacterDetails/DerivedStats/CharacterDerivedStats_BP.CharacterDerivedStats_BP_C
/// Size: 0x0380 (896 bytes) (0x000378 - 0x000380) align 8 MaxSize: 0x0380
class UCharacterDerivedStats_BP_C : public UCharacterDerivedStatsWidget
{ 
public:
	class UVerticalBox*                                ContentVerticalBox;                                         // 0x0378   (0x0008)  
};

/// Class /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C
/// Size: 0x02A9 (681 bytes) (0x000298 - 0x0002A9) align 8 MaxSize: 0x02A9
class UReputationProgress_BP_C : public UReputationProgressWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UTexture2D*                                  Fill;                                                       // 0x02A0   (0x0008)  
	EIndianaUIColorType                                IndianaColor;                                               // 0x02A8   (0x0001)  


	/// Functions
	// Function /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Reputation/ReputationProgress_BP.ReputationProgress_BP_C.ExecuteUbergraph_ReputationProgress_BP
	// void ExecuteUbergraph_ReputationProgress_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Reputation/ReputationList_BP.ReputationList_BP_C
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class UReputationList_BP_C : public UReputationListWidget
{ 
public:
};

/// Class /Game/UI/Reputation/ReputationEntry_BP1.ReputationEntry_BP1_C
/// Size: 0x0338 (824 bytes) (0x000330 - 0x000338) align 8 MaxSize: 0x0338
class UReputationEntry_BP1_C : public UReputationEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  


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
/// Size: 0x0378 (888 bytes) (0x000360 - 0x000378) align 8 MaxSize: 0x0378
class UReputationDetails_BP_C : public UReputationDetailsWidget
{ 
public:
	class UTextBlockBase*                              DescriptionTextBlock;                                       // 0x0360   (0x0008)  
	class UTextBlockBase*                              EffectsTextBlock;                                           // 0x0368   (0x0008)  
	class UTextBlockBase*                              TextBlockBase;                                              // 0x0370   (0x0008)  
};

/// Class /Game/UI/Stats/SkillsPage/SkillAdjustment_BP.SkillAdjustment_BP_C
/// Size: 0x0340 (832 bytes) (0x000340 - 0x000340) align 8 MaxSize: 0x0340
class USkillAdjustment_BP_C : public USkillAdjustment
{ 
public:
};

/// Class /Game/UI/Perks/StatsPerkListEntry_BP.StatsPerkListEntry_BP_C
/// Size: 0x0388 (904 bytes) (0x000368 - 0x000388) align 8 MaxSize: 0x0388
class UStatsPerkListEntry_BP_C : public UPerksListEntry
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  
	class UWidgetAnimation*                            Pip3Flashing;                                               // 0x0370   (0x0008)  
	class UWidgetAnimation*                            Pip2Flashing;                                               // 0x0378   (0x0008)  
	class UWidgetAnimation*                            Pip1Flashing;                                               // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/UI/Perks/StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.UpdateButtonBrush
	// void UpdateButtonBrush(bool bPendingPurchase, bool bActuallyPurchased, bool bSuppressed);                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Perks/StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.ExecuteUbergraph_StatsPerkListEntry_BP
	// void ExecuteUbergraph_StatsPerkListEntry_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Perks/PlayerPerkListRow_BP.PlayerPerkListRow_BP_C
/// Size: 0x0430 (1072 bytes) (0x000428 - 0x000430) align 8 MaxSize: 0x0430
class UPlayerPerkListRow_BP_C : public UPerksListRowWidget
{ 
public:
	class UImage*                                      PerkAnchor;                                                 // 0x0428   (0x0008)  
};

/// Class /Game/UI/Perks/PlayerPerkList_BP.PlayerPerkList_BP_C
/// Size: 0x0378 (888 bytes) (0x000360 - 0x000378) align 8 MaxSize: 0x0378
class UPlayerPerkList_BP_C : public UPerksListWidget
{ 
public:
	class UImage*                                      PerkRowLineBreakOne;                                        // 0x0360   (0x0008)  
	class UImage*                                      PerkRowLineBreakTwo;                                        // 0x0368   (0x0008)  
	class UVerticalBox*                                PerkVerticalBox;                                            // 0x0370   (0x0008)  
};

/// Class /Game/UI/Stats/SkillsPage/CharacterDescriptionPanel_BP.CharacterDescriptionPanel_BP_C
/// Size: 0x0370 (880 bytes) (0x000368 - 0x000370) align 8 MaxSize: 0x0370
class UCharacterDescriptionPanel_BP_C : public UCharacterDescriptionPanel
{ 
public:
	class UImage*                                      AttributeEffectImage;                                       // 0x0368   (0x0008)  
};

/// Class /Game/UI/Stats/SkillsPage/StatsSkillsPage_BP.StatsSkillsPage_BP_C
/// Size: 0x04B0 (1200 bytes) (0x0004A0 - 0x0004B0) align 8 MaxSize: 0x04B0
class UStatsSkillsPage_BP_C : public UStatsSkillsPageWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x04A0   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget0;                                     // 0x04A8   (0x0008)  


	/// Functions
	// Function /Game/UI/Stats/SkillsPage/StatsSkillsPage_BP.StatsSkillsPage_BP_C.Get_SkillGroupScrollBox_bIsEnabled
	// bool Get_SkillGroupScrollBox_bIsEnabled();                                                                               // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/UI/Stats/PerksPage/StatsPerksPage_BP.StatsPerksPage_BP_C
/// Size: 0x0400 (1024 bytes) (0x0003E8 - 0x000400) align 8 MaxSize: 0x0400
class UStatsPerksPage_BP_C : public UStatsPerksPageWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x03E8   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget0;                                     // 0x03F0   (0x0008)  
	class UImage*                                      DynamicBacking;                                             // 0x03F8   (0x0008)  
};

/// Class /Game/UI/Reputation/ReputationSummary_BP.ReputationSummary_BP_C
/// Size: 0x0340 (832 bytes) (0x000340 - 0x000340) align 8 MaxSize: 0x0340
class UReputationSummary_BP_C : public UReputationSummaryWidget
{ 
public:
};

/// Class /Game/UI/CharacterDetails/CharacterDetails_BP.CharacterDetails_BP_C
/// Size: 0x0358 (856 bytes) (0x000338 - 0x000358) align 8 MaxSize: 0x0358
class UCharacterDetails_BP_C : public UCharacterDetailsWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0338   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget0;                                     // 0x0340   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget1;                                     // 0x0348   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget_C;                                    // 0x0350   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/FloorIndicator/FloorLevel_BP.FloorLevel_BP_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UFloorLevel_BP_C : public UFloorLevelWidget
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/FloorIndicator/ChangeFloorButton_BP.ChangeFloorButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UChangeFloorButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PlayerEntry_BP.PlayerEntry_BP_C
/// Size: 0x0308 (776 bytes) (0x000300 - 0x000308) align 8 MaxSize: 0x0308
class UPlayerEntry_BP_C : public UBaseMapEntryWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x0300   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/FloorIndicator/FloorLevelIndicator_BP.FloorLevelIndicator_BP_C
/// Size: 0x03C8 (968 bytes) (0x0003C0 - 0x0003C8) align 8 MaxSize: 0x03C8
class UFloorLevelIndicator_BP_C : public UFloorIndicatorWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x03C0   (0x0008)  
};

/// Class /Game/UI/ItemStats/ToolTipArmorStat_BP.ToolTipArmorStat_BP_C
/// Size: 0x0348 (840 bytes) (0x000348 - 0x000348) align 8 MaxSize: 0x0348
class UToolTipArmorStat_BP_C : public UItemStatEntryWidget
{ 
public:
};

/// Class /Game/UI/ItemStats/ItemStatCategory_BP.ItemStatCategory_BP_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class UItemStatCategory_BP_C : public UItemStatsCategoryWidget
{ 
public:
};

/// Class /Game/UI/HUD/GenericNotifications/GeneralNotificationLabel_BP.GeneralNotificationLabel_BP_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UGeneralNotificationLabel_BP_C : public UInputLabelWidget
{ 
public:
};

/// Class /Game/UI/HUD/GenericNotifications/GenericNotificationEntry_BP.GenericNotificationEntry_BP_C
/// Size: 0x0458 (1112 bytes) (0x000440 - 0x000458) align 8 MaxSize: 0x0458
class UGenericNotificationEntry_BP_C : public UGenericNotificationEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0448   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0450   (0x0008)  


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
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class UTTDStatusEffectsWidget_BP_C : public UTTDStatusEffectsWidget
{ 
public:
	class UStatusEffectTagEntry_BP_C*                  StatusEffectTagEntry_BP;                                    // 0x0318   (0x0008)  
};

/// Class /Game/UI/HUD/EnemyScanner/EnemyDifficulty_BP.EnemyDifficulty_BP_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class UEnemyDifficulty_BP_C : public UEnemyDifficultyWidget
{ 
public:
};

/// Class /Game/UI/HUD/Reticle/GenericCrosshair_BP.GenericCrosshair_BP_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UGenericCrosshair_BP_C : public UCrosshairWidget
{ 
public:
};

/// Class /Game/UI/HUD/Reticle/CauseDamageReticle_BP.CauseDamageReticle_BP_C
/// Size: 0x0358 (856 bytes) (0x000338 - 0x000358) align 8 MaxSize: 0x0358
class UCauseDamageReticle_BP_C : public UCauseDamageReticleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0338   (0x0008)  
	class UWidgetAnimation*                            KillAnim;                                                   // 0x0340   (0x0008)  
	class UWidgetAnimation*                            WeakAnim;                                                   // 0x0348   (0x0008)  
	class UWidgetAnimation*                            HitAnim;                                                    // 0x0350   (0x0008)  


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
/// Size: 0x02A0 (672 bytes) (0x000298 - 0x0002A0) align 8 MaxSize: 0x02A0
class UWeaponRadialSection_BP_C : public UWeaponRadialSectionWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/WeaponSelect/WeaponRadialSection_BP.WeaponRadialSection_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponRadialSection_BP.WeaponRadialSection_BP_C.ExecuteUbergraph_WeaponRadialSection_BP
	// void ExecuteUbergraph_WeaponRadialSection_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/WeaponSelect/AmmoRadialSection_BP.AmmoRadialSection_BP_C
/// Size: 0x02A8 (680 bytes) (0x0002A8 - 0x0002A8) align 8 MaxSize: 0x02A8
class UAmmoRadialSection_BP_C : public UAmmoRadialSectionWidget
{ 
public:
};

/// Class /Game/UI/HUD/StatusEffectOverview/StatusEffectTagEntry_BP.StatusEffectTagEntry_BP_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class UStatusEffectTagEntry_BP_C : public UStatusEffectTagEntryWidget
{ 
public:
};

/// Class /Game/UI/Library/Components/KeySelectorGlowButton_BP.KeySelectorGlowButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UKeySelectorGlowButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Menus/MainMenu/DifficultySelect/DifficultySelect_BP.DifficultySelect_BP_C
/// Size: 0x04E8 (1256 bytes) (0x000480 - 0x0004E8) align 8 MaxSize: 0x04E8
class UDifficultySelect_BP_C : public UDifficultySelectWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	class UWidgetAnimation*                            Transition;                                                 // 0x0488   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0490   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget_C;                                    // 0x0498   (0x0008)  
	class UTextBlockBase*                              ConversationHeaderTextblock;                                // 0x04A0   (0x0008)  
	class UTextBlockBase*                              DifficultyHeaderTextBlock;                                  // 0x04A8   (0x0008)  
	class UImage*                                      Image;                                                      // 0x04B0   (0x0008)  
	class USizeBox*                                    SelectDifficultyPanel_SizeBox;                              // 0x04B8   (0x0008)  
	class USizeBox*                                    SubtitleSettingsPanel_SizeBox;                              // 0x04C0   (0x0008)  
	class UTextBlockBase*                              TextBlockBase;                                              // 0x04C8   (0x0008)  
	class UTextBlockBase*                              TextBlockBase0;                                             // 0x04D0   (0x0008)  
	class UTextBlockBase*                              TextBlockBase1;                                             // 0x04D8   (0x0008)  
	class UTextBlockBase*                              TextBlockBase2;                                             // 0x04E0   (0x0008)  


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
/// Size: 0x0370 (880 bytes) (0x000360 - 0x000370) align 8 MaxSize: 0x0370
class USettingsMenuKeyRebind_BP_C : public USettingsMenuKeyRebindWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
	// void BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(FComponentEvent& Event);   // [0x1c5deb0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.ExecuteUbergraph_SettingsMenuKeyRebind_BP
	// void ExecuteUbergraph_SettingsMenuKeyRebind_BP(int32_t EntryPoint);                                                      // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Library/Components/CheckBox1_BP.CheckBox1_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UCheckBox1_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/General/OptionPresenter/OptionPresenter_BP.OptionPresenter_BP_C
/// Size: 0x0380 (896 bytes) (0x000380 - 0x000380) align 8 MaxSize: 0x0380
class UOptionPresenter_BP_C : public UOptionPresenterWidget
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuOptionPresenter_BP.SettingsMenuOptionPresenter_BP_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class USettingsMenuOptionPresenter_BP_C : public USettingsMenuOptionPresenterWdgt
{ 
public:
};

/// Class /Game/UI/Ledger/Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C
/// Size: 0x02B9 (697 bytes) (0x0002B0 - 0x0002B9) align 8 MaxSize: 0x02B9
class UButton_Ledger_Header_SubContainer_BP_C : public UButtonBaseContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B0   (0x0008)  
	bool                                               bSelected;                                                  // 0x02B8   (0x0001)  


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
/// Size: 0x0610 (1552 bytes) (0x000610 - 0x000610) align 16 MaxSize: 0x0610
class AHumanDummy_UI_C : public AIndianaCharacterDummy
{ 
public:
};

/// Class /Game/UI/ActorStage/PlayerDummy_UI.PlayerDummy_UI_C
/// Size: 0x0610 (1552 bytes) (0x000610 - 0x000610) align 16 MaxSize: 0x0610
class APlayerDummy_UI_C : public AHumanDummy_UI_C
{ 
public:
};

/// Class /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveTo_BP.CompanionMoveTo_BP_C
/// Size: 0x0328 (808 bytes) (0x000308 - 0x000328) align 8 MaxSize: 0x0328
class UCompanionMoveTo_BP_C : public UCompanionMoveToWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0308   (0x0008)  
	class UWidgetAnimation*                            IntroOutro;                                                 // 0x0310   (0x0008)  
	class UWidgetAnimation*                            Idle;                                                       // 0x0318   (0x0008)  
	class UImage*                                      MoveToImage;                                                // 0x0320   (0x0008)  


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
/// Size: 0x0368 (872 bytes) (0x000368 - 0x000368) align 8 MaxSize: 0x0368
class UStatusEffectTag_BP_C : public UStatusEffectTagWidget
{ 
public:
};

/// Class /Game/UI/HUD/General/DamageText/DamageEffect.DamageEffect_C
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 8 MaxSize: 0x0370
class UDamageEffect_C : public UDamageEffectWidget
{ 
public:
};

/// Class /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C
/// Size: 0x0420 (1056 bytes) (0x000400 - 0x000420) align 8 MaxSize: 0x0420
class UStatusTag_BP_C : public UStatusTagWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0400   (0x0008)  
	class UWidgetAnimation*                            FadeOutTarget;                                              // 0x0408   (0x0008)  
	class UWidgetAnimation*                            FadeInTarget;                                               // 0x0410   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x0418   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.OnSetPlayerTargeted
	// void OnSetPlayerTargeted(bool bIsTarget);                                                                                // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.WidgetAnimationEvt_FadeOutTarget_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeOutTarget_K2Node_WidgetAnimationEvent();                                                     // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.WidgetAnimationEvt_FadeInTarget_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeInTarget_K2Node_WidgetAnimationEvent();                                                      // [0x1c5deb0] BlueprintEvent       
	// Function /Game/UI/HUD/StatusTag/StatusTag_BP.StatusTag_BP_C.ExecuteUbergraph_StatusTag_BP
	// void ExecuteUbergraph_StatusTag_BP(int32_t EntryPoint);                                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/Subtitle/Subtitle_BP.Subtitle_BP_C
/// Size: 0x0490 (1168 bytes) (0x000470 - 0x000490) align 8 MaxSize: 0x0490
class USubtitle_BP_C : public USubtitlesWidget
{ 
public:
	class UMaterialInstanceDynamic*                    LeftTopImageInst;                                           // 0x0470   (0x0008)  
	class UMaterialInstanceDynamic*                    RightTopImageInst;                                          // 0x0478   (0x0008)  
	class UMaterialInstanceDynamic*                    LeftBotImageInst;                                           // 0x0480   (0x0008)  
	class UMaterialInstanceDynamic*                    RightBotImageInst;                                          // 0x0488   (0x0008)  
};

/// Class /Game/UI/HUD/MapTransition/MapTransitionNotification_BP.MapTransitionNotification_BP_C
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class UMapTransitionNotification_BP_C : public UMapTransitionNotification
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UWidgetAnimation*                            AreaNameFadeInOut;                                          // 0x0320   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/MapTransition/MapTransitionNotification_BP.MapTransitionNotification_BP_C.StartAnimation
	// void StartAnimation();                                                                                                   // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/MapTransition/MapTransitionNotification_BP.MapTransitionNotification_BP_C.ExecuteUbergraph_MapTransitionNotification_BP
	// void ExecuteUbergraph_MapTransitionNotification_BP(int32_t EntryPoint);                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/RadialContextMenu/WeaponContextSection_BP.WeaponContextSection_BP_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class UWeaponContextSection_BP_C : public UItemWeaponSectionWidget
{ 
public:
};

/// Class /Game/UI/RadialContextMenu/RadialMenuGadgetSlot_BP.RadialMenuGadgetSlot_BP_C
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class URadialMenuGadgetSlot_BP_C : public UItemGadgetSectionWidget
{ 
public:
};

/// Class /Game/UI/RadialContextMenu/RadialMenuDrugSlot_BP.RadialMenuDrugSlot_BP_C
/// Size: 0x02B8 (696 bytes) (0x0002B8 - 0x0002B8) align 8 MaxSize: 0x02B8
class URadialMenuDrugSlot_BP_C : public UItemDrugSectionWidget
{ 
public:
};

/// Class /Game/UI/Inventory/Pages/Modifications_BP.Modifications_BP_C
/// Size: 0x0430 (1072 bytes) (0x000430 - 0x000430) align 8 MaxSize: 0x0430
class UModifications_BP_C : public UInventoryModificationsPageWidget
{ 
public:
};

/// Class /Game/UI/RadialContextMenu/MedKitContextSection_BP.MedKitContextSection_BP_C
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class UMedKitContextSection_BP_C : public UItemMedKitSectionWidget
{ 
public:
};

/// Class /Game/UI/Inventory/Pages/Materials_BP.Materials_BP_C
/// Size: 0x0430 (1072 bytes) (0x000430 - 0x000430) align 8 MaxSize: 0x0430
class UMaterials_BP_C : public UInventoryMaterialsPageWidget
{ 
public:
};

/// Class /Game/UI/Inventory/Pages/Junk_BP.Junk_BP_C
/// Size: 0x0430 (1072 bytes) (0x000430 - 0x000430) align 8 MaxSize: 0x0430
class UJunk_BP_C : public UInventoryJunkPageWidget
{ 
public:
};

/// Class /Game/UI/Inventory/Pages/General_BP.General_BP_C
/// Size: 0x0430 (1072 bytes) (0x000430 - 0x000430) align 8 MaxSize: 0x0430
class UGeneral_BP_C : public UInventoryPageWidget
{ 
public:
};

/// Class /Game/UI/ItemStats/ToolTipItemStat_BP.ToolTipItemStat_BP_C
/// Size: 0x0348 (840 bytes) (0x000348 - 0x000348) align 8 MaxSize: 0x0348
class UToolTipItemStat_BP_C : public UItemStatEntryWidget
{ 
public:
};

/// Class /Game/UI/Inventory/StatSummary/SummaryEquipmentModWidget_BP.SummaryEquipmentModWidget_BP_C
/// Size: 0x02A8 (680 bytes) (0x0002A8 - 0x0002A8) align 8 MaxSize: 0x02A8
class USummaryEquipmentModWidget_BP_C : public UEquipmentModWidget
{ 
public:
};

/// Class /Game/UI/ItemStats/ItemStats_BP.ItemStats_BP_C
/// Size: 0x0418 (1048 bytes) (0x000418 - 0x000418) align 8 MaxSize: 0x0418
class UItemStats_BP_C : public UItemStatsWidget
{ 
public:
};

/// Class /Game/UI/CodexJournal/LedgerJournalWidget_BP.LedgerJournalWidget_BP_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class ULedgerJournalWidget_BP_C : public ULedgerJournalWidget
{ 
public:
};

/// Class /Game/UI/Companions/Companions_BP.Companions_BP_C
/// Size: 0x03B0 (944 bytes) (0x0003B0 - 0x0003B0) align 8 MaxSize: 0x03B0
class UCompanions_BP_C : public UCompanionsWidget
{ 
public:
};

/// Class /Game/UI/Menus/SaveLoadMenu/NewSave_BP.NewSave_BP_C
/// Size: 0x0298 (664 bytes) (0x000288 - 0x000298) align 8 MaxSize: 0x0298
class UNewSave_BP_C : public UNewSaveWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0288   (0x0008)  
	class UBorder*                                     Border;                                                     // 0x0290   (0x0008)  


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
/// Size: 0x0450 (1104 bytes) (0x000440 - 0x000450) align 8 MaxSize: 0x0450
class URadial_BP_C : public URadialWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UMaterialInstance*                           DMI;                                                        // 0x0448   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/Radial/Radial_BP.Radial_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Radial/Radial_BP.Radial_BP_C.ExecuteUbergraph_Radial_BP
	// void ExecuteUbergraph_Radial_BP(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final                
};

/// Class /Game/UI/RadialContextMenu/IconContextSection_BP.IconContextSection_BP_C
/// Size: 0x02A8 (680 bytes) (0x0002A8 - 0x0002A8) align 8 MaxSize: 0x02A8
class UIconContextSection_BP_C : public UImageSectionWidget
{ 
public:
};

/// Class /Game/UI/RadialContextMenu/RadialContainerWidget_BP.RadialContainerWidget_BP_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class URadialContainerWidget_BP_C : public URadialContainerWidget
{ 
public:
};

/// Class /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C
/// Size: 0x0508 (1288 bytes) (0x0004C8 - 0x000508) align 8 MaxSize: 0x0508
class UStackSplitting_BP_C : public UStackSplittingWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C8   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x04D0   (0x0008)  
	class UImage*                                      BackingBot;                                                 // 0x04D8   (0x0008)  
	class UImage*                                      BackingTop;                                                 // 0x04E0   (0x0008)  
	class UImage*                                      Frame;                                                      // 0x04E8   (0x0008)  
	class UImage*                                      Image;                                                      // 0x04F0   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x04F8   (0x0008)  
	class UMaterialInstanceDynamic*                    BackingBotInst;                                             // 0x0500   (0x0008)  


	/// Functions
	// Function /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/General/StackSplitting/StackSplitting_BP.StackSplitting_BP_C.ExecuteUbergraph_StackSplitting_BP
	// void ExecuteUbergraph_StackSplitting_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/Ledger/Button_Ledger_Header_Container_BP.Button_Ledger_Header_Container_BP_C
/// Size: 0x02C1 (705 bytes) (0x0002B0 - 0x0002C1) align 8 MaxSize: 0x02C1
class UButton_Ledger_Header_Container_BP_C : public UButtonBaseContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B0   (0x0008)  
	bool                                               bSelected;                                                  // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02B9   (0x0003)  MISSED
	float                                              TextAlpha;                                                  // 0x02BC   (0x0004)  
	bool                                               bLastActivatable;                                           // 0x02C0   (0x0001)  


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
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UButton_LedgerHeader_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/EquipmentMods/EquipmentMod_BP.EquipmentMod_BP_C
/// Size: 0x02A8 (680 bytes) (0x0002A8 - 0x0002A8) align 8 MaxSize: 0x02A8
class UEquipmentMod_BP_C : public UEquipmentModWidget
{ 
public:
};

/// Class /Game/UI/ItemRepair/ItemRepair_BP.ItemRepair_BP_C
/// Size: 0x03B0 (944 bytes) (0x0003A8 - 0x0003B0) align 8 MaxSize: 0x03B0
class UItemRepair_BP_C : public UItemRepairWidget
{ 
public:
	class UBackground1_BP_C*                           Background;                                                 // 0x03A8   (0x0008)  
};

/// Class /Game/UI/InputLabel/InputLabelSmall_BP.InputLabelSmall_BP_C
/// Size: 0x0378 (888 bytes) (0x000370 - 0x000378) align 8 MaxSize: 0x0378
class UInputLabelSmall_BP_C : public UInputLabelWidget
{ 
public:
	class UMaterialInstanceDynamic*                    RadialMaterial;                                             // 0x0370   (0x0008)  
};

/// Class /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C
/// Size: 0x0678 (1656 bytes) (0x000650 - 0x000678) align 8 MaxSize: 0x0678
class UItemViewer_BP_C : public UItemViewerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0650   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0658   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0660   (0x0008)  
	class UImage*                                      Image1;                                                     // 0x0668   (0x0008)  
	class UImage*                                      Image2;                                                     // 0x0670   (0x0008)  


	/// Functions
	// Function /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ItemViewer/ItemViewer_BP.ItemViewer_BP_C.ExecuteUbergraph_ItemViewer_BP
	// void ExecuteUbergraph_ItemViewer_BP(int32_t EntryPoint);                                                                 // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Workbench/WBModificationPage_BP.WBModificationPage_BP_C
/// Size: 0x0440 (1088 bytes) (0x000428 - 0x000440) align 8 MaxSize: 0x0440
class UWBModificationPage_BP_C : public UWBModificationPageWidget
{ 
public:
	class UWidgetAnimation*                            NewAnimation;                                               // 0x0428   (0x0008)  
	class UInputLabel_BP_C*                            ActionInputLabelMod;                                        // 0x0430   (0x0008)  
	class USizeBox*                                    PagesSizeBox;                                               // 0x0438   (0x0008)  
};

/// Class /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C
/// Size: 0x0360 (864 bytes) (0x000348 - 0x000360) align 8 MaxSize: 0x0360
class UPlayerStats_BP_C : public UPlayerStatsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	class UImage*                                      XPBarFill;                                                  // 0x0350   (0x0008)  
	class UMaterialInstanceDynamic*                    XPBarFillMat;                                               // 0x0358   (0x0008)  


	/// Functions
	// Function /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C.SetXPRatio
	// void SetXPRatio(float XPRatio);                                                                                          // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Ledger/PlayerStats_BP.PlayerStats_BP_C.ExecuteUbergraph_PlayerStats_BP
	// void ExecuteUbergraph_PlayerStats_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Workbench/ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C
/// Size: 0x02C1 (705 bytes) (0x0002B0 - 0x0002C1) align 8 MaxSize: 0x02C1
class UButtonWorkbenchHeaderContainer_BP_C : public UButtonBaseContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B0   (0x0008)  
	bool                                               bSelected;                                                  // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02B9   (0x0003)  MISSED
	float                                              TextAlpha;                                                  // 0x02BC   (0x0004)  
	bool                                               bLastActivatable;                                           // 0x02C0   (0x0001)  


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
/// Size: 0x0698 (1688 bytes) (0x000620 - 0x000698) align 8 MaxSize: 0x0698
class UVendorWidget_BP_C : public UVendorWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0620   (0x0008)  
	class UWidgetAnimation*                            PurchaseAnimation;                                          // 0x0628   (0x0008)  
	class UWidgetAnimation*                            FactionImageFadeIn;                                         // 0x0630   (0x0008)  
	class UBackground1_BP_C*                           Background;                                                 // 0x0638   (0x0008)  
	class UFlavorTextWidget_BP_C*                      FlavorTextWidget;                                           // 0x0640   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0648   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0650   (0x0008)  
	class UImage*                                      Image1;                                                     // 0x0658   (0x0008)  
	class UPageAnchor1_BP_C*                           PageAnchorLeft;                                             // 0x0660   (0x0008)  
	class UPageAnchor2_BP_C*                           PageAnchorRight;                                            // 0x0668   (0x0008)  
	class UImage*                                      PurchaseAnim1;                                              // 0x0670   (0x0008)  
	class UImage*                                      PurchaseAnim2;                                              // 0x0678   (0x0008)  
	class UImage*                                      Smoke;                                                      // 0x0680   (0x0008)  
	class UImage*                                      Smoke_Behind;                                               // 0x0688   (0x0008)  
	class USurvivalBarGroupWidget_BP_C*                SurvivalBar;                                                // 0x0690   (0x0008)  


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
/// Size: 0x03F0 (1008 bytes) (0x0003D0 - 0x0003F0) align 8 MaxSize: 0x03F0
class UItemTransfer_BP_C : public UItemTransferWidget
{ 
public:
	class UBackground1_BP_C*                           Background;                                                 // 0x03D0   (0x0008)  
	class URetainerBox*                                RetainerBox;                                                // 0x03D8   (0x0008)  
	class URetainerBox*                                RetainerBox0;                                               // 0x03E0   (0x0008)  
	class USurvivalBarGroupWidget_BP_C*                SurvivalBar;                                                // 0x03E8   (0x0008)  
};

/// Class /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C
/// Size: 0x06C0 (1728 bytes) (0x0004F8 - 0x0006C0) align 8 MaxSize: 0x06C0
class UItemToolTip_BP_C : public UItemToolTipWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04F8   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0500   (0x0008)  
	class UImage*                                      BorderBackerImage;                                          // 0x0508   (0x0008)  
	class UImage*                                      ConditionImage;                                             // 0x0510   (0x0008)  
	class UImage*                                      ValueImage;                                                 // 0x0518   (0x0008)  
	class UImage*                                      WeightImage;                                                // 0x0520   (0x0008)  
	FSlateBrush                                        ScienceBackerBrush;                                         // 0x0528   (0x0088)  
	FSlateBrush                                        UniqueBackerBrush;                                          // 0x05B0   (0x0088)  
	FSlateBrush                                        NoBackerBrush;                                              // 0x0638   (0x0088)  


	/// Functions
	// Function /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C.SetBackgroundBrush
	// void SetBackgroundBrush();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/StatSummary/ItemToolTip_BP.ItemToolTip_BP_C.ExecuteUbergraph_ItemToolTip_BP
	// void ExecuteUbergraph_ItemToolTip_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Inventory/Inspector/ItemInspector_BP.ItemInspector_BP_C
/// Size: 0x03B0 (944 bytes) (0x000388 - 0x0003B0) align 8 MaxSize: 0x03B0
class UItemInspector_BP_C : public UItemInspectorWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0388   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0390   (0x0008)  
	class UBackground1_BP_C*                           Background;                                                 // 0x0398   (0x0008)  
	class UBorder*                                     ButtonBorder;                                               // 0x03A0   (0x0008)  
	class UVerticalBox*                                NameVerticalBox;                                            // 0x03A8   (0x0008)  


	/// Functions
	// Function /Game/UI/Inventory/Inspector/ItemInspector_BP.ItemInspector_BP_C.ZoomToggled
	// void ZoomToggled(bool bFullZoom);                                                                                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Inventory/Inspector/ItemInspector_BP.ItemInspector_BP_C.ExecuteUbergraph_ItemInspector_BP
	// void ExecuteUbergraph_ItemInspector_BP(int32_t EntryPoint);                                                              // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemContainer/ItemContainer_BP.ItemContainer_BP_C
/// Size: 0x038C (908 bytes) (0x000368 - 0x00038C) align 8 MaxSize: 0x038C
class UItemContainer_BP_C : public UItemContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  
	class UWidgetAnimation*                            Outro;                                                      // 0x0370   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x0378   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0380   (0x0008)  
	float                                              PlaybackMultiplier;                                         // 0x0388   (0x0004)  


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
/// Size: 0x04C0 (1216 bytes) (0x0004B8 - 0x0004C0) align 8 MaxSize: 0x04C0
class UInventoryMaster_BP_C : public UInventoryWidget
{ 
public:
	class USizeBox*                                    PagesSizeBox;                                               // 0x04B8   (0x0008)  
};

/// Class /Game/UI/Inventory/HealthKitTooltip_BP.HealthKitTooltip_BP_C
/// Size: 0x03C0 (960 bytes) (0x0003B0 - 0x0003C0) align 8 MaxSize: 0x03C0
class UHealthKitTooltip_BP_C : public UHealthKitTooltipWidget
{ 
public:
	class UWidgetAnimation*                            FadeIn;                                                     // 0x03B0   (0x0008)  
	class UImage*                                      BrandImage;                                                 // 0x03B8   (0x0008)  


	/// Functions
	// Function /Game/UI/Inventory/HealthKitTooltip_BP.HealthKitTooltip_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Examinable/ExaminableWidget_BP.ExaminableWidget_BP_C
/// Size: 0x0360 (864 bytes) (0x000350 - 0x000360) align 8 MaxSize: 0x0360
class UExaminableWidget_BP_C : public UExaminableWidget
{ 
public:
	class UBackground1_BP_C*                           Background1_BP;                                             // 0x0350   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0358   (0x0008)  
};

/// Class /Game/UI/Dialogs/DialogBoxWarning_BP.DialogBoxWarning_BP_C
/// Size: 0x0388 (904 bytes) (0x000368 - 0x000388) align 8 MaxSize: 0x0388
class UDialogBoxWarning_BP_C : public UDialogWarningBoxWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0370   (0x0008)  
	class UBackground1_BP_C*                           Background1_BP;                                             // 0x0378   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/UI/Dialogs/DialogBoxWarning_BP.DialogBoxWarning_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxWarning_BP.DialogBoxWarning_BP_C.ExecuteUbergraph_DialogBoxWarning_BP
	// void ExecuteUbergraph_DialogBoxWarning_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/UI/Menus/DeathMenu.DeathMenu_C
/// Size: 0x03A0 (928 bytes) (0x000360 - 0x0003A0) align 8 MaxSize: 0x03A0
class UDeathMenu_C : public UDeathMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	class UBackground1_BP_C*                           Background1_BP;                                             // 0x0368   (0x0008)  
	class UTextBlockBase*                              ContinueText;                                               // 0x0370   (0x0008)  
	class UTextBlockBase*                              LoadText;                                                   // 0x0378   (0x0008)  
	class UTextBlockBase*                              MainMenuText;                                               // 0x0380   (0x0008)  
	class UTextBlockBase*                              QuitText;                                                   // 0x0388   (0x0008)  
	class UTextBlockBase*                              ResurrectText;                                              // 0x0390   (0x0008)  
	class UTextBlockBase*                              SettingsText;                                               // 0x0398   (0x0008)  


	/// Functions
	// Function /Game/UI/Menus/DeathMenu.DeathMenu_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Menus/DeathMenu.DeathMenu_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Menus/DeathMenu.DeathMenu_C.ExecuteUbergraph_DeathMenu
	// void ExecuteUbergraph_DeathMenu(int32_t EntryPoint);                                                                     // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Subtitles/ConversationSubtitleWidget_BP.ConversationSubtitleWidget_BP_C
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class UConversationSubtitleWidget_BP_C : public UConversationSubtitleWidget
{ 
public:
};

/// Class /Game/UI/HUD/CompanionCommands/CompanionMoveTo/CompanionMoveToWC_3D.CompanionMoveToWC_3D_C
/// Size: 0x0690 (1680 bytes) (0x000690 - 0x000690) align 16 MaxSize: 0x0690
class UCompanionMoveToWC_3D_C : public UCompanionMoveToWidgetComponent
{ 
public:
};

/// Class /Game/UI/Library/Components/GenericListEntryWidget_BP.GenericListEntryWidget_BP_C
/// Size: 0x0339 (825 bytes) (0x000330 - 0x000339) align 8 MaxSize: 0x0339
class UGenericListEntryWidget_BP_C : public UGenericListEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	TEnumAsByte<ETextJustify>                          RightTextJustification;                                     // 0x0338   (0x0001)  


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
/// Size: 0x0348 (840 bytes) (0x000348 - 0x000348) align 8 MaxSize: 0x0348
class UCompanionStatSummary_BP_C : public UCompanionStatSummary
{ 
public:
};

/// Class /Game/UI/Companions/CompanionSkillSummary.CompanionSkillSummary_C
/// Size: 0x0358 (856 bytes) (0x000358 - 0x000358) align 8 MaxSize: 0x0358
class UCompanionSkillSummary_C : public UCompanionSkillSummary
{ 
public:
};

/// Class /Game/UI/CodexJournal/GenericListEntry_BP.GenericListEntry_BP_C
/// Size: 0x02A8 (680 bytes) (0x0002A0 - 0x0002A8) align 8 MaxSize: 0x02A8
class UGenericListEntry_BP_C : public UGenericCollapsableListEntry
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  


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
/// Size: 0x0388 (904 bytes) (0x000388 - 0x000388) align 8 MaxSize: 0x0388
class ULogList_BP_C : public ULogList
{ 
public:
};

/// Class /Game/UI/CodexJournal/JournalDescriptionPanel_BP.JournalDescriptionPanel_BP_C
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class UJournalDescriptionPanel_BP_C : public UJournalDescriptionPanel
{ 
public:
};

/// Class /Game/UI/QuestJournal/QuestObjective/QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C
/// Size: 0x02B0 (688 bytes) (0x0002A8 - 0x0002B0) align 8 MaxSize: 0x02B0
class UQuestObjectiveTitle_BP_C : public UQuestObjectiveTitleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.OnObjectiveStatusChange
	// void OnObjectiveStatusChange(ECompletionStatus ObjectiveStatus);                                                         // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.ExecuteUbergraph_QuestObjectiveTitle_BP
	// void ExecuteUbergraph_QuestObjectiveTitle_BP(int32_t EntryPoint);                                                        // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/Perks/StatsPerkEntryButton_BP.StatsPerkEntryButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UStatsPerkEntryButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Stats/SkillsPage/SkillGroupDetail_BP.SkillGroupDetail_BP_C
/// Size: 0x02D0 (720 bytes) (0x0002B8 - 0x0002D0) align 8 MaxSize: 0x02D0
class USkillGroupDetail_BP_C : public USkillGroupDetailWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UWidgetAnimation*                            SelectedAnimation3;                                         // 0x02C0   (0x0008)  
	class UWidgetAnimation*                            SelectedAnimation2;                                         // 0x02C8   (0x0008)  


	/// Functions
	// Function /Game/UI/Stats/SkillsPage/SkillGroupDetail_BP.SkillGroupDetail_BP_C.OnSkillSelected
	// void OnSkillSelected();                                                                                                  // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Stats/SkillsPage/SkillGroupDetail_BP.SkillGroupDetail_BP_C.ExecuteUbergraph_SkillGroupDetail_BP
	// void ExecuteUbergraph_SkillGroupDetail_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelButton_BP.FastTravelButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UFastTravelButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PointOfInterest/PointOfInterestTooltip_BP.PointOfInterestTooltip_BP_C
/// Size: 0x0310 (784 bytes) (0x000308 - 0x000310) align 8 MaxSize: 0x0310
class UPointOfInterestTooltip_BP_C : public UPointOfInterestTooltipWidget
{ 
public:
	class UBorder*                                     FrameBorder;                                                // 0x0308   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PointOfInterest/PointOfInterestButton_BP.PointOfInterestButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UPointOfInterestButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/PointOfInterest/PointOfInterest_BP.PointOfInterest_BP_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class UPointOfInterest_BP_C : public UMapPointOfInterestWidget
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/MultiFastTravelSelection_BP.MultiFastTravelSelection_BP_C
/// Size: 0x0340 (832 bytes) (0x000340 - 0x000340) align 8 MaxSize: 0x0340
class UMultiFastTravelSelection_BP_C : public UMFTSelectionWidget
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/MapTextEntry_BP.MapTextEntry_BP_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class UMapTextEntry_BP_C : public UMapTextEntryWidget
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelTooltip_BP.FastTravelTooltip_BP_C
/// Size: 0x0318 (792 bytes) (0x000310 - 0x000318) align 8 MaxSize: 0x0318
class UFastTravelTooltip_BP_C : public UFastTravelTooltipWidget
{ 
public:
	class UBorder*                                     FrameBorder;                                                // 0x0310   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/AreaBeaconEntry_BP.AreaBeaconEntry_BP_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UAreaBeaconEntry_BP_C : public UMapAreaBeaconWidget
{ 
public:
};

/// Class /Game/UI/ItemContainer/ItemContainerEntry_BP.ItemContainerEntry_BP_C
/// Size: 0x0368 (872 bytes) (0x000368 - 0x000368) align 8 MaxSize: 0x0368
class UItemContainerEntry_BP_C : public UItemContainerEntryWidget
{ 
public:
};

/// Class /Game/UI/ItemContainer/ItemContainerSlider_BP.ItemContainerSlider_BP_C
/// Size: 0x0578 (1400 bytes) (0x000578 - 0x000578) align 8 MaxSize: 0x0578
class UItemContainerSlider_BP_C : public USliderBase
{ 
public:
};

/// Class /Game/UI/Ledger/SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C
/// Size: 0x0338 (824 bytes) (0x000318 - 0x000338) align 8 MaxSize: 0x0338
class USelectedNotificationWidget_BP_C : public USelectedNotificationWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UWidgetAnimation*                            InstantFadeIn;                                              // 0x0320   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0328   (0x0008)  
	class UWidgetAnimation*                            FadeRight;                                                  // 0x0330   (0x0008)  


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
/// Size: 0x0398 (920 bytes) (0x000380 - 0x000398) align 8 MaxSize: 0x0398
class AActorStage_BP_Base_C : public AActorStage
{ 
public:
	class UStaticMeshComponent*                        VisualizerCamera;                                           // 0x0380   (0x0008)  
	class UStaticMeshComponent*                        VisualizerAttachPoint;                                      // 0x0388   (0x0008)  
	class UStaticMeshComponent*                        Chroma;                                                     // 0x0390   (0x0008)  
};

/// Class /Game/UI/ActorStage/ItemStage_BP.ItemStage_BP_C
/// Size: 0x03D0 (976 bytes) (0x000398 - 0x0003D0) align 8 MaxSize: 0x03D0
class AItemStage_BP_C : public AActorStage_BP_Base_C
{ 
public:
	class USpotLightComponent*                         SpotLight;                                                  // 0x0398   (0x0008)  
	class UPointLightComponent*                        PointLight;                                                 // 0x03A0   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x03A8   (0x0008)  
	class USpotLightComponent*                         SpotLightLeft;                                              // 0x03B0   (0x0008)  
	class USpotLightComponent*                         SpotLightRight;                                             // 0x03B8   (0x0008)  
	class USpotLightComponent*                         SpotLightRear;                                              // 0x03C0   (0x0008)  
	class USceneComponent*                             LightingVolume;                                             // 0x03C8   (0x0008)  
};

/// Class /Game/UI/Stats/SkillsPage/SkillButtonEntry_BP.SkillButtonEntry_BP_C
/// Size: 0x0490 (1168 bytes) (0x000490 - 0x000490) align 8 MaxSize: 0x0490
class USkillButtonEntry_BP_C : public USkillButtonEntryWidget
{ 
public:
};

/// Class /Game/UI/Stats/SkillsPage/CategoryButtonEntry_BP.CategoryButtonEntry_BP_C
/// Size: 0x0498 (1176 bytes) (0x000498 - 0x000498) align 8 MaxSize: 0x0498
class UCategoryButtonEntry_BP_C : public UCategoryButtonEntryWidget
{ 
public:
};

/// Class /Game/UI/HUD/AbilityOverview/AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C
/// Size: 0x0420 (1056 bytes) (0x000400 - 0x000420) align 8 MaxSize: 0x0420
class UAbilityOverDetail_Ability_BP_C : public UAbilityOverviewDetailWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0400   (0x0008)  
	class UImage*                                      HoldArtGamepad;                                             // 0x0408   (0x0008)  
	class UImage*                                      HoldArtPC;                                                  // 0x0410   (0x0008)  
	class UMaterialInstanceDynamic*                    RadialMaterial;                                             // 0x0418   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/AbilityOverview/AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.ExecuteUbergraph_AbilityOverDetail_Ability_BP
	// void ExecuteUbergraph_AbilityOverDetail_Ability_BP(int32_t EntryPoint);                                                  // [0x1c5deb0] Final                
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelSelectionButton_BP.FastTravelSelectionButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UFastTravelSelectionButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/MFTSelectionEntry_BP.MFTSelectionEntry_BP_C
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class UMFTSelectionEntry_BP_C : public UMFTSelectionEntryWidget
{ 
public:
};

/// Class /Game/UI/HUD/AbilityOverview/CharacterMedKit_BP.CharacterMedKit_BP_C
/// Size: 0x03D0 (976 bytes) (0x0003D0 - 0x0003D0) align 8 MaxSize: 0x03D0
class UCharacterMedKit_BP_C : public UCharacterMedKitWidget
{ 
public:
};

/// Class /Game/UI/QuestJournal/QuestObjective/QuestObjective_BP.QuestObjective_BP_C
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class UQuestObjective_BP_C : public UQuestObjectiveWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  


	/// Functions
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjective_BP.QuestObjective_BP_C.OnObjectiveStatusChange
	// void OnObjectiveStatusChange(ECompletionStatus ObjectiveStatus);                                                         // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestObjective/QuestObjective_BP.QuestObjective_BP_C.ExecuteUbergraph_QuestObjective_BP
	// void ExecuteUbergraph_QuestObjective_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/HUD/StatusEffectOverview/StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C
/// Size: 0x0340 (832 bytes) (0x000320 - 0x000340) align 8 MaxSize: 0x0340
class UStatusEffectBarEntry_BP_C : public UStatusEffectBarEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0320   (0x0008)  
	class UWidgetAnimation*                            AnimateContentsOut;                                         // 0x0328   (0x0008)  
	class UWidgetAnimation*                            AnimateContentsIn;                                          // 0x0330   (0x0008)  
	class UVerticalBox*                                DisplayParent;                                              // 0x0338   (0x0008)  


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
/// Size: 0x03A0 (928 bytes) (0x000398 - 0x0003A0) align 8 MaxSize: 0x03A0
class UStatusEffectBar_BP_C : public UStatusEffectBarWidget
{ 
public:
	class UImage*                                      StatusBarImage;                                             // 0x0398   (0x0008)  
};

/// Class /Game/UI/HUD/Compass/CompassEntries/CompassEntry_BP.CompassEntry_BP_C
/// Size: 0x02BC (700 bytes) (0x0002A0 - 0x0002BC) align 8 MaxSize: 0x02BC
class UCompassEntry_BP_C : public UCompassEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x02A8   (0x0008)  
	float                                              AbsoluteOrientation;                                        // 0x02B0   (0x0004)  
	float                                              SignMultiplier;                                             // 0x02B4   (0x0004)  
	float                                              AdjustedOrientation;                                        // 0x02B8   (0x0004)  


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
/// Size: 0x0348 (840 bytes) (0x000320 - 0x000348) align 8 MaxSize: 0x0348
class UItemDegradationEntry_BP_C : public UItemDegradationEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0320   (0x0008)  
	class UWidgetAnimation*                            SevereDamgeAnim;                                            // 0x0328   (0x0008)  
	class UWidgetAnimation*                            IntroDamagedAnim;                                           // 0x0330   (0x0008)  
	class UImage*                                      InnerCircle;                                                // 0x0338   (0x0008)  
	class UImage*                                      OuterCircle;                                                // 0x0340   (0x0008)  


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
/// Size: 0x0368 (872 bytes) (0x000338 - 0x000368) align 8 MaxSize: 0x0368
class UQuestLogObjectiveEntry_BP_C : public UQuestObjectiveEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0338   (0x0008)  
	class UWidgetAnimation*                            OutroAnim;                                                  // 0x0340   (0x0008)  
	class UWidgetAnimation*                            IntroAnim;                                                  // 0x0348   (0x0008)  
	class UWidgetAnimation*                            OnObjectiveFailed;                                          // 0x0350   (0x0008)  
	class UWidgetAnimation*                            OnObjectiveCompleted;                                       // 0x0358   (0x0008)  
	class UImage*                                      ObjectiveFailedImage;                                       // 0x0360   (0x0008)  


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
/// Size: 0x0360 (864 bytes) (0x000330 - 0x000360) align 8 MaxSize: 0x0360
class UQuestLogEntry_BP_C : public UQuestLogEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	class UWidgetAnimation*                            QuestUpdated;                                               // 0x0338   (0x0008)  
	class UWidgetAnimation*                            FadeOutQuestName;                                           // 0x0340   (0x0008)  
	class UWidgetAnimation*                            FadeInQuestName;                                            // 0x0348   (0x0008)  
	class UWidgetAnimation*                            QuestFail;                                                  // 0x0350   (0x0008)  
	class UWidgetAnimation*                            QuestComplete;                                              // 0x0358   (0x0008)  


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
/// Size: 0x0330 (816 bytes) (0x000320 - 0x000330) align 8 MaxSize: 0x0330
class UWeaponRadialBackgroundSection_BP_C : public URadialBackgroundSectionWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0320   (0x0008)  
	class UWidgetAnimation*                            FadeOutHighlight;                                           // 0x0328   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/Radial/WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Deselect
	// void Deselect();                                                                                                         // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/Radial/WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.Select
	// void Select();                                                                                                           // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/Radial/WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C.ExecuteUbergraph_WeaponRadialBackgroundSection_BP
	// void ExecuteUbergraph_WeaponRadialBackgroundSection_BP(int32_t EntryPoint);                                              // [0x1c5deb0] Final                
};

/// Class /Game/UI/QuestJournal/AddendumButton_BP.AddendumButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UAddendumButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/QuestJournal/QuestObjective/QuestAddendum/QuestAddendum_BP.QuestAddendum_BP_C
/// Size: 0x0318 (792 bytes) (0x000308 - 0x000318) align 8 MaxSize: 0x0318
class UQuestAddendum_BP_C : public UQuestAddendumWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0308   (0x0008)  
	class UAddendumButton_BP_C*                        Button;                                                     // 0x0310   (0x0008)  


	/// Functions
	// Function /Game/UI/QuestJournal/QuestObjective/QuestAddendum/QuestAddendum_BP.QuestAddendum_BP_C.OnObjectiveStatusChange
	// void OnObjectiveStatusChange(ECompletionStatus ObjectiveCompletion);                                                     // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestObjective/QuestAddendum/QuestAddendum_BP.QuestAddendum_BP_C.ExecuteUbergraph_QuestAddendum_BP
	// void ExecuteUbergraph_QuestAddendum_BP(int32_t EntryPoint);                                                              // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/ActorStage/HumanDummy_UI_Animation.HumanDummy_UI_Animation_C
/// Size: 0x16D8 (5848 bytes) (0x000580 - 0x0016D8) align 16 MaxSize: 0x16D8
class UHumanDummy_UI_Animation_C : public UPreviewCharacterAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0580   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0588   (0x0030)  
	FAnimNode_RandomSequenceNamed                      AnimGraphNode_RandomSequenceNamed;                          // 0x05B8   (0x0088)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0640   (0x0020)  
	FAnimNode_RandomSequenceNamed                      AnimGraphNode_RandomSequenceNamed0;                         // 0x0660   (0x0088)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x06E8   (0x00A0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0788   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x07A8   (0x0048)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x07F0   (0x01E0)  
	FAnimNode_LegIK                                    AnimGraphNode_LegIK;                                        // 0x09D0   (0x00F8)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0AC8   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK1;                                   // 0x0AD0   (0x01E0)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK2;                                   // 0x0CB0   (0x01E0)  
	FAnimNode_BatchJointDriver                         AnimGraphNode_BatchJointDriver;                             // 0x0E90   (0x01E0)  
	FAnimNode_BatchModify                              AnimGraphNode_BatchModify;                                  // 0x1070   (0x00D8)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1148   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x1170   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x1198   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x11C0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x11E8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1268   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer6;                              // 0x1298   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x1318   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer8;                              // 0x1348   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult9;                                 // 0x13C8   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x13F8   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x14A8   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1600   (0x0028)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x1628   (0x00B0)  


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
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class UMedKitHUDDrugSlot_BP_C : public UMedKitDrugSlotWidget
{ 
public:
};

/// Class /Game/UI/HUD/AbilityOverview/MedKitHUDAdrenoSlot_BP.MedKitHUDAdrenoSlot_BP_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class UMedKitHUDAdrenoSlot_BP_C : public UMedKitDrugSlotWidget
{ 
public:
};

/// Class /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C
/// Size: 0x03D8 (984 bytes) (0x0003C8 - 0x0003D8) align 8 MaxSize: 0x03D8
class UStatusTagAwarenessWidget_BP_C : public UStatusTagAwarenessWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C8   (0x0008)  
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x03D0   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.SetTextures
	// void SetTextures(class UTexture2D* BackingTexture, class UTexture2D* FillTexture);                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/StatusTag/Awareness/StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.ExecuteUbergraph_StatusTagAwarenessWidget_BP
	// void ExecuteUbergraph_StatusTagAwarenessWidget_BP(int32_t EntryPoint);                                                   // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C
/// Size: 0x0544 (1348 bytes) (0x000490 - 0x000544) align 8 MaxSize: 0x0544
class UWeaponSelect_BP_C : public UWeaponSelectWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0490   (0x0008)  
	class UWidgetAnimation*                            FadeOutAmmoBackground;                                      // 0x0498   (0x0008)  
	class UWidgetAnimation*                            FadeOutWeaponBackground;                                    // 0x04A0   (0x0008)  
	class UWidgetAnimation*                            IntroOutro;                                                 // 0x04A8   (0x0008)  
	class UImage*                                      AmmoBackground;                                             // 0x04B0   (0x0008)  
	class UImage*                                      Background;                                                 // 0x04B8   (0x0008)  
	class UBorder*                                     Border;                                                     // 0x04C0   (0x0008)  
	class UImage*                                      BulbOff;                                                    // 0x04C8   (0x0008)  
	class UImage*                                      BulbOn;                                                     // 0x04D0   (0x0008)  
	class UImage*                                      InnerCircle;                                                // 0x04D8   (0x0008)  
	class UImage*                                      InnerCircle2;                                               // 0x04E0   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x04E8   (0x0008)  
	class UVerticalBox*                                OrientatorVerticalBox;                                      // 0x04F0   (0x0008)  
	class UImage*                                      WeaponBackground;                                           // 0x04F8   (0x0008)  
	class UImage*                                      WeaponHighlight;                                            // 0x0500   (0x0008)  
	TArray<class UWeaponRadialBackgroundSection_BP_C*> BackgroundSections;                                         // 0x0508   (0x0010)  
	TArray<class UWeaponRadialBackgroundSection_BP_C*> WeaponBackgroundSections;                                   // 0x0518   (0x0010)  
	float                                              BackgroundFadeSpeed;                                        // 0x0528   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x052C   (0x0004)  MISSED
	TArray<class UWeaponRadialBackgroundSection_BP_C*> AmmoBackgroundSections;                                     // 0x0530   (0x0010)  
	float                                              OrientatorClamped;                                          // 0x0540   (0x0004)  


	/// Functions
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.SetBackgroundVisibility
	// void SetBackgroundVisibility(TArray<UWeaponRadialBackgroundSection_BP_C*>& Array, int32_t Index, bool Enabled);          // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.UpdateBackgroundVisibility
	// void UpdateBackgroundVisibility(TArray<UWeaponRadialBackgroundSection_BP_C*>& TargetArray, int32_t IndexToTest);         // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/WeaponSelect/WeaponSelect_BP.WeaponSelect_BP_C.GetBackgroundSection
	// void GetBackgroundSection(class UObject* Object, class UWeaponRadialBackgroundSection_BP_C*& AsHUDRadialSectionBP);      // [0x1c5deb0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
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
/// Size: 0x03F0 (1008 bytes) (0x0003A0 - 0x0003F0) align 8 MaxSize: 0x03F0
class UReticle_BP_C : public UReticleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A0   (0x0008)  
	class UWidgetAnimation*                            ShrinkInnards;                                              // 0x03A8   (0x0008)  
	class UWidgetAnimation*                            GrowInnards;                                                // 0x03B0   (0x0008)  
	class UImage*                                      Image;                                                      // 0x03B8   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x03C0   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x03C8   (0x0008)  
	class UInvalidationBox*                            InvalidationBox1;                                           // 0x03D0   (0x0008)  
	class UImage*                                      TTDFill;                                                    // 0x03D8   (0x0008)  
	class UMaterialInstanceDynamic*                    TTDFillMat;                                                 // 0x03E0   (0x0008)  
	class UMaterialInstanceDynamic*                    RezCooldownMat;                                             // 0x03E8   (0x0008)  


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
/// Size: 0x03E0 (992 bytes) (0x0003C0 - 0x0003E0) align 16 MaxSize: 0x03E0
class UQuestLog_BP_C : public UQuestLogWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C0   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x03C8   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x03D0   (0x0008)  
	class UMaterialInstanceDynamic*                    ContentBorderMat;                                           // 0x03D8   (0x0008)  


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
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class UItemDegradationAlert_BP_C : public UItemDegradationAlertWidget
{ 
public:
};

/// Class /Game/UI/HUD/InteractionGuide/InputGuide_BP.InputGuide_BP_C
/// Size: 0x04F0 (1264 bytes) (0x000478 - 0x0004F0) align 8 MaxSize: 0x04F0
class UInputGuide_BP_C : public UInputGuideWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UWidgetAnimation*                            LittleRedCircleCounterClockwise;                            // 0x0480   (0x0008)  
	class UWidgetAnimation*                            RedCircleClockwise;                                         // 0x0488   (0x0008)  
	class UWidgetAnimation*                            IntroOutro;                                                 // 0x0490   (0x0008)  
	class UImage*                                      Arrow13_Mid;                                                // 0x0498   (0x0008)  
	class UImage*                                      Arrow2_Left;                                                // 0x04A0   (0x0008)  
	class UImage*                                      Arrow2_Right;                                               // 0x04A8   (0x0008)  
	class UImage*                                      Arrow3_Left;                                                // 0x04B0   (0x0008)  
	class UImage*                                      Arrow3_Right;                                               // 0x04B8   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x04C0   (0x0008)  
	class UBorder*                                     RootBorder;                                                 // 0x04C8   (0x0008)  
	class UImage*                                      RotatingLittleRedCircle;                                    // 0x04D0   (0x0008)  
	float                                              IntroOutroMultiplier;                                       // 0x04D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x04DC   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    InteractionMat;                                             // 0x04E0   (0x0008)  
	class UMaterialInstanceDynamic*                    RadialMaterial;                                             // 0x04E8   (0x0008)  


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
/// Size: 0x0488 (1160 bytes) (0x000460 - 0x000488) align 8 MaxSize: 0x0488
class UGenericNotification_BP_C : public UGenericNotificationWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0468   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0470   (0x0008)  
	class UBorder*                                     ContentContainer;                                           // 0x0478   (0x0008)  
	class UMaterialInstanceDynamic*                    ContentContainerMat;                                        // 0x0480   (0x0008)  


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
/// Size: 0x0498 (1176 bytes) (0x000430 - 0x000498) align 8 MaxSize: 0x0498
class UDisguiseWidget_BP_C : public UDisguiseMeterWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0430   (0x0008)  
	class UWidgetAnimation*                            FadeOutTip;                                                 // 0x0438   (0x0008)  
	class UWidgetAnimation*                            FadeInTip;                                                  // 0x0440   (0x0008)  
	class UWidgetAnimation*                            OnImageLoaded;                                              // 0x0448   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0450   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0458   (0x0008)  
	class UImage*                                      DisguiseCheck1;                                             // 0x0460   (0x0008)  
	class UImage*                                      DisguiseCheck2;                                             // 0x0468   (0x0008)  
	class UImage*                                      DisguiseCheck3;                                             // 0x0470   (0x0008)  
	class UImage*                                      DisguiseMeterTip;                                           // 0x0478   (0x0008)  
	class UImage*                                      DisguiseMeterTipAnim;                                       // 0x0480   (0x0008)  
	class UImage*                                      TipPurpleGlow;                                              // 0x0488   (0x0008)  
	class UMaterialInstanceDynamic*                    DisguiseMeterMaterial;                                      // 0x0490   (0x0008)  


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
/// Size: 0x03F0 (1008 bytes) (0x0003C0 - 0x0003F0) align 8 MaxSize: 0x03F0
class UCompanionOverview_BP_C : public UCompanionOverviewWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C0   (0x0008)  
	class UWidgetAnimation*                            AnimateInOutStatusEffectBlock;                              // 0x03C8   (0x0008)  
	class UWidgetAnimation*                            FadeInRootAnim;                                             // 0x03D0   (0x0008)  
	class UImage*                                      BottomBarPiece;                                             // 0x03D8   (0x0008)  
	class UBorder*                                     RootAnimationContainer;                                     // 0x03E0   (0x0008)  
	class UImage*                                      StatusEffectBlock;                                          // 0x03E8   (0x0008)  


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
/// Size: 0x05FA (1530 bytes) (0x0005A0 - 0x0005FA) align 8 MaxSize: 0x05FA
class UAbilityOverviewGamepad_BP_C : public UAbilityOverviewWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A0   (0x0008)  
	class UWidgetAnimation*                            FlickerCommandThree;                                        // 0x05A8   (0x0008)  
	class UWidgetAnimation*                            FlickerCommandTwo;                                          // 0x05B0   (0x0008)  
	class UWidgetAnimation*                            FlickerCommandOne;                                          // 0x05B8   (0x0008)  
	class UWidgetAnimation*                            FlickerCommandFour;                                         // 0x05C0   (0x0008)  
	class UWidgetAnimation*                            ActivationPulse;                                            // 0x05C8   (0x0008)  
	class UWidgetAnimation*                            FadeInFadeOutAbilityOverview;                               // 0x05D0   (0x0008)  
	class UWidgetAnimation*                            FadeInFadeOutTTD;                                           // 0x05D8   (0x0008)  
	class UImage*                                      AbilityGamepadPanelImage;                                   // 0x05E0   (0x0008)  
	class UBorder*                                     AbilityOverviewAnimationContainer;                          // 0x05E8   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x05F0   (0x0008)  
	bool                                               bTTDNeedsFadeOut;                                           // 0x05F8   (0x0001)  
	bool                                               bAbilityOverviewNeedsFadeOut;                               // 0x05F9   (0x0001)  


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
/// Size: 0x05AA (1450 bytes) (0x0005A0 - 0x0005AA) align 8 MaxSize: 0x05AA
class UAbilityOverview_BP_C : public UAbilityOverviewWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A0   (0x0008)  
	bool                                               bTTDNeedsFadeOut;                                           // 0x05A8   (0x0001)  
	bool                                               bAbilityOverviewNeedsFadeOut;                               // 0x05A9   (0x0001)  


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
/// Size: 0x03F8 (1016 bytes) (0x0003E8 - 0x0003F8) align 8 MaxSize: 0x03F8
class UItemContainerList_BP_C : public UItemContainerListWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x03E8   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x03F0   (0x0008)  
};

/// Class /Game/UI/LedgerCharacter/LedgerCharacter_BP.LedgerCharacter_BP_C
/// Size: 0x0348 (840 bytes) (0x000348 - 0x000348) align 8 MaxSize: 0x0348
class ULedgerCharacter_BP_C : public ULedgerCharacterWidget
{ 
public:
};

/// Class /Game/UI/ActorStage/CharacterStage_BP.CharacterStage_BP_C
/// Size: 0x03D8 (984 bytes) (0x000398 - 0x0003D8) align 8 MaxSize: 0x03D8
class ACharacterStage_BP_C : public AActorStage_BP_Base_C
{ 
public:
	class USpotLightComponent*                         SpotLight;                                                  // 0x0398   (0x0008)  
	class UPointLightComponent*                        PointLight;                                                 // 0x03A0   (0x0008)  
	class USpotLightComponent*                         SpotLightLeftTop;                                           // 0x03A8   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x03B0   (0x0008)  
	class UCapsuleComponent*                           CharacterCapsuleVisualizer;                                 // 0x03B8   (0x0008)  
	class USpotLightComponent*                         SpotLightRight;                                             // 0x03C0   (0x0008)  
	class USpotLightComponent*                         SpotLightRear;                                              // 0x03C8   (0x0008)  
	class USceneComponent*                             LightingVolume;                                             // 0x03D0   (0x0008)  
};

/// Class /Game/UI/Menus/SaveLoadMenu/SaveLoadMenuButton_BP.SaveLoadMenuButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class USaveLoadMenuButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/ActorRender/ActorRender_BP.ActorRender_BP_C
/// Size: 0x0398 (920 bytes) (0x000398 - 0x000398) align 8 MaxSize: 0x0398
class UActorRender_BP_C : public UActorRenderWidget
{ 
public:
};

/// Class /Game/UI/ItemModding/ItemModding_BP.ItemModding_BP_C
/// Size: 0x0720 (1824 bytes) (0x0006B8 - 0x000720) align 8 MaxSize: 0x0720
class UItemModding_BP_C : public UItemModdingWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x06C0   (0x0008)  
	class UInputLabel_BP_C*                            ActionInputLabelModify;                                     // 0x06C8   (0x0008)  
	class UBackground1_BP_C*                           Background;                                                 // 0x06D0   (0x0008)  
	class UTextBlockBase*                              EquipmentDescriptionTextBlock;                              // 0x06D8   (0x0008)  
	class UImage*                                      IconImage;                                                  // 0x06E0   (0x0008)  
	class UImage*                                      Image;                                                      // 0x06E8   (0x0008)  
	class UTextBlockBase*                              ModificationTitleTextBlock;                                 // 0x06F0   (0x0008)  
	class UPageAnchor1_BP_C*                           PageAnchorLeft;                                             // 0x06F8   (0x0008)  
	class UPageAnchor2_BP_C*                           PageAnchorRight;                                            // 0x0700   (0x0008)  
	class UImage*                                      Smoke;                                                      // 0x0708   (0x0008)  
	class UImage*                                      Smoke_Behind;                                               // 0x0710   (0x0008)  
	class USurvivalBarGroupWidget_BP_C*                SurvivalBar;                                                // 0x0718   (0x0008)  


	/// Functions
	// Function /Game/UI/ItemModding/ItemModding_BP.ItemModding_BP_C.ZoomToggled
	// void ZoomToggled();                                                                                                      // [0x1c5deb0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemModding/ItemModding_BP.ItemModding_BP_C.ExecuteUbergraph_ItemModding_BP
	// void ExecuteUbergraph_ItemModding_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Stats/SummaryPage/Aptitude/StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class UStatsAptitudeSummary_BP_C : public UAptitudeSummaryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  


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
/// Size: 0x0358 (856 bytes) (0x000340 - 0x000358) align 8 MaxSize: 0x0358
class UStatsSummaryPage_BP_C : public UStatsSummaryPageWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0340   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget0;                                     // 0x0348   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget1;                                     // 0x0350   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/GamepadSelector_BP.GamepadSelector_BP_C
/// Size: 0x0280 (640 bytes) (0x000278 - 0x000280) align 8 MaxSize: 0x0280
class UGamepadSelector_BP_C : public UUserWidget
{ 
public:
	class UImage*                                      GamepadSelector;                                            // 0x0278   (0x0008)  
};

/// Class /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummary_BP.StatsAttributeSummary_BP_C
/// Size: 0x02E0 (736 bytes) (0x0002E0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UStatsAttributeSummary_BP_C : public UAttributeSummaryWidget
{ 
public:
};

/// Class /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class UStatsAttributeSummaryGroup_BP_C : public UAttributeSummaryGroupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UTextBlockBase*                              TitleTextBlock;                                             // 0x0298   (0x0008)  
	FLocString                                         Title;                                                      // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.ExecuteUbergraph_StatsAttributeSummaryGroup_BP
	// void ExecuteUbergraph_StatsAttributeSummaryGroup_BP(int32_t EntryPoint);                                                 // [0x1c5deb0] Final                
};

/// Class /Game/UI/ComputerTerminal/TerminalResponseButton_BP.TerminalResponseButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UTerminalResponseButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/ComputerTerminal/TerminalResponse_BP.TerminalResponse_BP_C
/// Size: 0x02F0 (752 bytes) (0x0002D0 - 0x0002F0) align 8 MaxSize: 0x02F0
class UTerminalResponse_BP_C : public UConversationResponseWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	class UImage*                                      CompanionContributedImage;                                  // 0x02D8   (0x0008)  
	class UImage*                                      NearMissImage;                                              // 0x02E0   (0x0008)  
	class UHorizontalBox*                              TextHorizontalBox;                                          // 0x02E8   (0x0008)  


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
/// Size: 0x03F0 (1008 bytes) (0x0003E0 - 0x0003F0) align 8 MaxSize: 0x03F0
class UComputerTerminal_DefaultHeader_BP_C : public UComputerTerminalHeaderWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  
	class UWidgetAnimation*                            FadeInLogo;                                                 // 0x03E8   (0x0008)  


	/// Functions
	// Function /Game/UI/ComputerTerminal/Headers/ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.FadeInLogoImage
	// void FadeInLogoImage();                                                                                                  // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ComputerTerminal/Headers/ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP
	// void ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP(int32_t EntryPoint);                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/CharacterCreation/Skills/SkillUnlockPanelMeter_BP.SkillUnlockPanelMeter_BP_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class USkillUnlockPanelMeter_BP_C : public USkillUnlockPanelMeter
{ 
public:
};

/// Class /Game/UI/CodexJournal/AudioLogListEntry_BP.AudioLogListEntry_BP_C
/// Size: 0x02A0 (672 bytes) (0x0002A0 - 0x0002A0) align 8 MaxSize: 0x02A0
class UAudioLogListEntry_BP_C : public UAudioLogListEntryWidget
{ 
public:
};

/// Class /Game/UI/Stats/SummaryPage/Attribute/StatsAttributeSummaryEntry_BP.StatsAttributeSummaryEntry_BP_C
/// Size: 0x02B8 (696 bytes) (0x0002B0 - 0x0002B8) align 8 MaxSize: 0x02B8
class UStatsAttributeSummaryEntry_BP_C : public UAttributeSummaryEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B0   (0x0008)  


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
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class UScalableImageWidget_C : public UScalableImage
{ 
public:
};

/// Class /Game/UI/CodexJournal/SymbolDescriptionPanelEntry_BP.SymbolDescriptionPanelEntry_BP_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class USymbolDescriptionPanelEntry_BP_C : public USymbolDescriptionPanelEntry
{ 
public:
};

/// Class /Game/UI/CodexJournal/AudioLogList_BP.AudioLogList_BP_C
/// Size: 0x03F8 (1016 bytes) (0x0003F8 - 0x0003F8) align 8 MaxSize: 0x03F8
class UAudioLogList_BP_C : public UAudioLogList
{ 
public:
};

/// Class /Game/UI/QuestJournal/QuestListEntry/QuestListEntry_BP.QuestListEntry_BP_C
/// Size: 0x02F8 (760 bytes) (0x0002E8 - 0x0002F8) align 8 MaxSize: 0x02F8
class UQuestListEntry_BP_C : public UQuestListEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E8   (0x0008)  
	float                                              WidgetAlphaFocused;                                         // 0x02F0   (0x0004)  
	float                                              WidgetAlphaUnfocused;                                       // 0x02F4   (0x0004)  


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
/// Size: 0x0378 (888 bytes) (0x000318 - 0x000378) align 8 MaxSize: 0x0378
class USkillUnlockPanel_BP_C : public USkillUnlockPanelWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x0318   (0x0008)  
	class UImage*                                      LeftFlourish;                                               // 0x0320   (0x0008)  
	class UImage*                                      RightFlourish;                                              // 0x0328   (0x0008)  
	class UImage*                                      SkillMeterBarTop;                                           // 0x0330   (0x0008)  
	class USkillUnlock_BP_C*                           SkillUnlock1;                                               // 0x0338   (0x0008)  
	class USkillUnlock_BP_C*                           SkillUnlock2;                                               // 0x0340   (0x0008)  
	class USkillUnlock_BP_C*                           SkillUnlock3;                                               // 0x0348   (0x0008)  
	class USkillUnlock_BP_C*                           SkillUnlock4;                                               // 0x0350   (0x0008)  
	class USkillUnlock_BP_C*                           SkillUnlock5;                                               // 0x0358   (0x0008)  
	class USkillUnlock_BP_C*                           SkillUnlock6;                                               // 0x0360   (0x0008)  
	class UImage*                                      SkillUnlocksBackgroundImage;                                // 0x0368   (0x0008)  
	class UTextBlockBase*                              SkillUpgradesText;                                          // 0x0370   (0x0008)  
};

/// Class /Game/UI/Stats/SkillsPage/CharacterSkillsDescriptionPanel_BP.CharacterSkillsDescriptionPanel_BP_C
/// Size: 0x0380 (896 bytes) (0x000378 - 0x000380) align 8 MaxSize: 0x0380
class UCharacterSkillsDescriptionPanel_BP_C : public UCharacterSkillsDescriptionPanel
{ 
public:
	class UImage*                                      AttributeEffectImage;                                       // 0x0378   (0x0008)  
};

/// Class /Game/UI/CodexJournal/CodexJournal_BP.CodexJournal_BP_C
/// Size: 0x03E0 (992 bytes) (0x0003C8 - 0x0003E0) align 8 MaxSize: 0x03E0
class UCodexJournal_BP_C : public UCodexJournal
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x03C8   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget0;                                     // 0x03D0   (0x0008)  
	class UFlavorTextWidget_BP_C*                      FlavorTextWidget;                                           // 0x03D8   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/MapLegend/MapLegend_BP.MapLegend_BP_C
/// Size: 0x02D0 (720 bytes) (0x000278 - 0x0002D0) align 8 MaxSize: 0x02D0
class UMapLegend_BP_C : public UUserWidget
{ 
public:
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0278   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0280   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0288   (0x0008)  
	class UImage*                                      Image1;                                                     // 0x0290   (0x0008)  
	class UImage*                                      Image2;                                                     // 0x0298   (0x0008)  
	class UImage*                                      Image3;                                                     // 0x02A0   (0x0008)  
	class UImage*                                      Image4;                                                     // 0x02A8   (0x0008)  
	class UImage*                                      Image5;                                                     // 0x02B0   (0x0008)  
	class UImage*                                      Image6;                                                     // 0x02B8   (0x0008)  
	class UImage*                                      Image7;                                                     // 0x02C0   (0x0008)  
	class UImage*                                      Image8;                                                     // 0x02C8   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/FastTravel/FastTravelEntry_BP.FastTravelEntry_BP_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class UFastTravelEntry_BP_C : public UMapFastTravelEntryWidget
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconTooltip_BP.BeaconTooltip_BP_C
/// Size: 0x0318 (792 bytes) (0x000300 - 0x000318) align 8 MaxSize: 0x0318
class UBeaconTooltip_BP_C : public UMapBeaconEntryTooltipWidget
{ 
public:
	class UTextBlockBase*                              FastTravelTextBlock;                                        // 0x0300   (0x0008)  
	class UBorder*                                     FrameBorder;                                                // 0x0308   (0x0008)  
	class UTextBlockBase*                              RestrictionTextBlock;                                       // 0x0310   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconEntry_BP.BeaconEntry_BP_C
/// Size: 0x0358 (856 bytes) (0x000358 - 0x000358) align 8 MaxSize: 0x0358
class UBeaconEntry_BP_C : public UBeaconMapEntryWidget
{ 
public:
};

/// Class /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C
/// Size: 0x03C0 (960 bytes) (0x000390 - 0x0003C0) align 8 MaxSize: 0x03C0
class UDialogBoxKeybind_BP_C : public UKeybindDialogBoxWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0390   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0398   (0x0008)  
	class UImage*                                      BackingBot;                                                 // 0x03A0   (0x0008)  
	class UImage*                                      BackingTop;                                                 // 0x03A8   (0x0008)  
	class UImage*                                      Frame;                                                      // 0x03B0   (0x0008)  
	class UMaterialInstanceDynamic*                    BackingBotInst;                                             // 0x03B8   (0x0008)  


	/// Functions
	// Function /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.SetNewBackingMaterialHeight
	// void SetNewBackingMaterialHeight(float NewHeight);                                                                       // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Dialogs/DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.ExecuteUbergraph_DialogBoxKeybind_BP
	// void ExecuteUbergraph_DialogBoxKeybind_BP(int32_t EntryPoint);                                                           // [0x1c5deb0] Final                
};

/// Class /Game/UI/ItemViewer/ItemViewerHealthKitButton_BP.ItemViewerHealthKitButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UItemViewerHealthKitButton_BP_C : public UItemViewerHealthKitButtonWidget
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenuInputKeySelector_BP.SettingsMenuInputKeySelector_BP_C
/// Size: 0x03A8 (936 bytes) (0x0003A8 - 0x0003A8) align 8 MaxSize: 0x03A8
class USettingsMenuInputKeySelector_BP_C : public USettingsMenuInputKeySelector
{ 
public:
};

/// Class /Game/UI/ComputerTerminal/ComputerTerminalContents_BP.ComputerTerminalContents_BP_C
/// Size: 0x0420 (1056 bytes) (0x000418 - 0x000420) align 8 MaxSize: 0x0420
class UComputerTerminalContents_BP_C : public UComputerTerminalWidget
{ 
public:
	class UHorizontalBox*                              LabelContainer;                                             // 0x0418   (0x0008)  
};

/// Class /Game/UI/Conversation/ConversationResponse_BP.ConversationResponse_BP_C
/// Size: 0x02F8 (760 bytes) (0x0002D0 - 0x0002F8) align 8 MaxSize: 0x02F8
class UConversationResponse_BP_C : public UConversationResponseWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	class UWidgetAnimation*                            NewAnimation;                                               // 0x02D8   (0x0008)  
	class UImage*                                      CompanionContributedImage;                                  // 0x02E0   (0x0008)  
	class UImage*                                      NearMissImage;                                              // 0x02E8   (0x0008)  
	class UHorizontalBox*                              TextHorizontalBox;                                          // 0x02F0   (0x0008)  


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
/// Size: 0x03E8 (1000 bytes) (0x0003C0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UTTDScanner_BP_C : public UTTDEnemyScanner
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C0   (0x0008)  
	class UWidgetAnimation*                            FadeOutContents;                                            // 0x03C8   (0x0008)  
	class UWidgetAnimation*                            FadeInContents;                                             // 0x03D0   (0x0008)  
	class UWidgetAnimation*                            FadeInFactionImage;                                         // 0x03D8   (0x0008)  
	class UImage*                                      Image;                                                      // 0x03E0   (0x0008)  


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
/// Size: 0x0520 (1312 bytes) (0x0004F8 - 0x000520) align 8 MaxSize: 0x0520
class UCharacterOverview_BP_C : public UCharacterOverviewWidget
{ 
public:
	class UImage*                                      Image;                                                      // 0x04F8   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0500   (0x0008)  
	class UImage*                                      TTDFrame;                                                   // 0x0508   (0x0008)  
	class UImage*                                      XPBacking;                                                  // 0x0510   (0x0008)  
	class UOverlay*                                    XPOverlay;                                                  // 0x0518   (0x0008)  
};

/// Class /Game/UI/HUD/BossBar/BossBar_BP.BossBar_BP_C
/// Size: 0x0390 (912 bytes) (0x000380 - 0x000390) align 8 MaxSize: 0x0390
class UBossBar_BP_C : public UIndianaBossBar
{ 
public:
	class UWidgetAnimation*                            Hide;                                                       // 0x0380   (0x0008)  
	class UWidgetAnimation*                            Show;                                                       // 0x0388   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/BossBar/BossBar_BP.BossBar_BP_C.GetHideAnimation
	// class UWidgetAnimation* GetHideAnimation();                                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/BossBar/BossBar_BP.BossBar_BP_C.GetShowAnimation
	// class UWidgetAnimation* GetShowAnimation();                                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C
/// Size: 0x03BA (954 bytes) (0x0003B0 - 0x0003BA) align 8 MaxSize: 0x03BA
class UAmmoReadout_BP_C : public UAmmoReadoutWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B0   (0x0008)  
	bool                                               LoadedAmmoPrevIndex;                                        // 0x03B8   (0x0001)  
	bool                                               RemainingAmmoPrevIndex;                                     // 0x03B9   (0x0001)  


	/// Functions
	// Function /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C.ColorTextBlock
	// void ColorTextBlock(bool Index, class UTextBlockBase* Target);                                                           // [0x1c5deb0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C.EvaluateLowAmmoWarning
	// void EvaluateLowAmmoWarning(int32_t MaxClipSize, int32_t CurrentClipSize, int32_t RemainingAmmo);                        // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/HUD/AmmoReadout/AmmoReadout_BP.AmmoReadout_BP_C.ExecuteUbergraph_AmmoReadout_BP
	// void ExecuteUbergraph_AmmoReadout_BP(int32_t EntryPoint);                                                                // [0x1c5deb0] Final                
};

/// Class /Game/UI/Inventory/Pages/Consumables_BP.Consumables_BP_C
/// Size: 0x0580 (1408 bytes) (0x000570 - 0x000580) align 8 MaxSize: 0x0580
class UConsumables_BP_C : public UInventoryConsumablesPageWidget
{ 
public:
	class UImage*                                      HealthKitIcon;                                              // 0x0570   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0578   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/LedgerMap_BP.LedgerMap_BP_C
/// Size: 0x06D0 (1744 bytes) (0x0006C0 - 0x0006D0) align 8 MaxSize: 0x06D0
class ULedgerMap_BP_C : public ULedgerMapWidget
{ 
public:
	class UImage*                                      BackerImage;                                                // 0x06C0   (0x0008)  
	class UMapLegend_BP_C*                             MapLegend_BP;                                               // 0x06C8   (0x0008)  
};

/// Class /Game/UI/AudioLogs/AudioLogWidget_BP.AudioLogWidget_BP_C
/// Size: 0x03B0 (944 bytes) (0x000398 - 0x0003B0) align 8 MaxSize: 0x03B0
class UAudioLogWidget_BP_C : public UAudioLogWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0398   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x03A0   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x03A8   (0x0008)  


	/// Functions
	// Function /Game/UI/AudioLogs/AudioLogWidget_BP.AudioLogWidget_BP_C.ShowAudioLog
	// void ShowAudioLog(bool bShow, float CurrentRenderOpacity);                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/AudioLogs/AudioLogWidget_BP.AudioLogWidget_BP_C.ExecuteUbergraph_AudioLogWidget_BP
	// void ExecuteUbergraph_AudioLogWidget_BP(int32_t EntryPoint);                                                             // [0x1c5deb0] Final                
};

/// Class /Game/UI/Menus/SaveLoadMenu/SaveLoadDetail_BP.SaveLoadDetail_BP_C
/// Size: 0x0400 (1024 bytes) (0x0003F8 - 0x000400) align 8 MaxSize: 0x0400
class USaveLoadDetail_BP_C : public USaveLoadDetailWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03F8   (0x0008)  


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
/// Size: 0x0438 (1080 bytes) (0x000400 - 0x000438) align 8 MaxSize: 0x0438
class UTutorialPopupStyle_Simple_BP_C : public UTutorialPopupStyleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0400   (0x0008)  
	class UWidgetAnimation*                            MascotImageFadeIn;                                          // 0x0408   (0x0008)  
	class UImage*                                      Background;                                                 // 0x0410   (0x0008)  
	class UHorizontalBox*                              ButtonHorizontalBox;                                        // 0x0418   (0x0008)  
	class UImage*                                      Frame;                                                      // 0x0420   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x0428   (0x0008)  
	class UMaterialInstanceDynamic*                    BackingBotInst;                                             // 0x0430   (0x0008)  


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
/// Size: 0x0460 (1120 bytes) (0x000400 - 0x000460) align 8 MaxSize: 0x0460
class UTutorialPopupStyle_Corporate_BP_C : public UTutorialPopupStyleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0400   (0x0008)  
	class UWidgetAnimation*                            MascotImageFadeIn;                                          // 0x0408   (0x0008)  
	class UImage*                                      BackingBotLeft;                                             // 0x0410   (0x0008)  
	class UImage*                                      BackingBotRight;                                            // 0x0418   (0x0008)  
	class UImage*                                      BackingFill;                                                // 0x0420   (0x0008)  
	class UImage*                                      BackingTopLeft;                                             // 0x0428   (0x0008)  
	class UImage*                                      BackingTopRight;                                            // 0x0430   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0438   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0440   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x0448   (0x0008)  
	class UHorizontalBox*                              OfferButtonContainerBox;                                    // 0x0450   (0x0008)  
	class UMaterialInstanceDynamic*                    BackingBotInst;                                             // 0x0458   (0x0008)  


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
/// Size: 0x0490 (1168 bytes) (0x000370 - 0x000490) align 8 MaxSize: 0x0490
class UInventoryItem_BP_C : public UInventoryItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UWidgetAnimation*                            MakeImageBigAgain;                                          // 0x0378   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0380   (0x0008)  
	class UImage*                                      ModCategoryImage;                                           // 0x0388   (0x0008)  
	TMap<class UClass*, class UTexture2D*>             DamageClassTextures;                                        // 0x0390   (0x0050)  
	TMap<class UClass*, class UTexture2D*>             DamageClassHighlightedTextures;                             // 0x03E0   (0x0050)  
	TEnumAsByte<EUMGSequencePlayMode>                  PlayDirectionToUse;                                         // 0x0430   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0431   (0x0007)  MISSED
	class UTexture2D*                                  ElementToUse;                                               // 0x0438   (0x0008)  
	TMap<class UClass*, class UTexture2D*>             MapToUse;                                                   // 0x0440   (0x0050)  


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
/// Size: 0x0498 (1176 bytes) (0x000418 - 0x000498) align 8 MaxSize: 0x0498
class ULedger_BP_C : public ULedgerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0418   (0x0008)  
	class UWidgetAnimation*                            FadeInCompanionItemViewer;                                  // 0x0420   (0x0008)  
	class UWidgetAnimation*                            FadeOutCharacter;                                           // 0x0428   (0x0008)  
	class UWidgetAnimation*                            FadeInCharacter;                                            // 0x0430   (0x0008)  
	class UWidgetAnimation*                            Outro;                                                      // 0x0438   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x0440   (0x0008)  
	class UWidgetAnimation*                            Fade;                                                       // 0x0448   (0x0008)  
	class UBackground1_BP_C*                           Background;                                                 // 0x0450   (0x0008)  
	class UImage*                                      Edge;                                                       // 0x0458   (0x0008)  
	class UPageAnchor1_BP_C*                           PageAnchor1_BP_C;                                           // 0x0460   (0x0008)  
	class UPageAnchor2_BP_C*                           PageAnchor2_BP_C;                                           // 0x0468   (0x0008)  
	class UCanvasPanel*                                RootCanvas;                                                 // 0x0470   (0x0008)  
	class UImage*                                      Smoke;                                                      // 0x0478   (0x0008)  
	class UImage*                                      Smoke_Behind;                                               // 0x0480   (0x0008)  
	class USurvivalBarGroupWidget_BP_C*                SurvivalBar;                                                // 0x0488   (0x0008)  
	float                                              TransitionsPlaybackSpeed;                                   // 0x0490   (0x0004)  
	float                                              CharacterRenderFadeTime;                                    // 0x0494   (0x0004)  


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
/// Size: 0x0410 (1040 bytes) (0x0003F0 - 0x000410) align 8 MaxSize: 0x0410
class UHUD_BP_C : public UHUDWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03F0   (0x0008)  
	class UBossBar_BP_C*                               BossBar;                                                    // 0x03F8   (0x0008)  
	class USavingWidget_BP_C*                          SavingWidget_BP;                                            // 0x0400   (0x0008)  
	class UObject*                                     DialogCombatSkillComponent;                                 // 0x0408   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/HUD_BP.HUD_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/HUD_BP.HUD_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/HUD_BP.HUD_BP_C.ExecuteUbergraph_HUD_BP
	// void ExecuteUbergraph_HUD_BP(int32_t EntryPoint);                                                                        // [0x1c5deb0] Final|HasDefaults    
};

/// Class /Game/UI/ComputerTerminal/ComputerTerminalContainer_BP.ComputerTerminalContainer_BP_C
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class UComputerTerminalContainer_BP_C : public UComputerTerminalContainerWidget
{ 
public:
};

/// Class /Game/UI/Menus/SettingsMenu/SettingsMenu_BP.SettingsMenu_BP_C
/// Size: 0x0698 (1688 bytes) (0x000678 - 0x000698) align 8 MaxSize: 0x0698
class USettingsMenu_BP_C : public USettingsMenuWidget
{ 
public:
	class UWidgetAnimation*                            Outro;                                                      // 0x0678   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x0680   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x0688   (0x0008)  
	class UCanvasPanel*                                RootCanvas;                                                 // 0x0690   (0x0008)  


	/// Functions
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenu_BP.SettingsMenu_BP_C.OnIntro
	// bool OnIntro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Menus/SettingsMenu/SettingsMenu_BP.SettingsMenu_BP_C.OnOutro
	// bool OnOutro(FDelegateProperty& AnimationCompleteCallback);                                                              // [0x1c5deb0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/MainDLCManager_BP.MainDLCManager_BP_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class UMainDLCManager_BP_C : public UMainMenuDLCManagerWidget
{ 
public:
};

/// Class /Game/UI/Legal/LegalWidget_BP.LegalWidget_BP_C
/// Size: 0x0400 (1024 bytes) (0x0003E8 - 0x000400) align 8 MaxSize: 0x0400
class ULegalWidget_BP_C : public ULegalWidget
{ 
public:
	class UImage*                                      BackingBot;                                                 // 0x03E8   (0x0008)  
	class UImage*                                      BackingTop;                                                 // 0x03F0   (0x0008)  
	class UImage*                                      Frame;                                                      // 0x03F8   (0x0008)  
};

/// Class /Game/UI/Credits/CreditsWidget_BP.CreditsWidget_BP_C
/// Size: 0x0388 (904 bytes) (0x000380 - 0x000388) align 8 MaxSize: 0x0388
class UCreditsWidget_BP_C : public UCreditsWidget
{ 
public:
	class UImage*                                      BackgroundImage;                                            // 0x0380   (0x0008)  
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/BaseDLCButton.BaseDLCButton_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UBaseDLCButton_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconButton_BP.BeaconButton_BP_C
/// Size: 0x0B98 (2968 bytes) (0x000B98 - 0x000B98) align 8 MaxSize: 0x0B98
class UBeaconButton_BP_C : public UButtonBase
{ 
public:
};

/// Class /Game/UI/Map/LedgerMap/MapQuestSelectionEntry_BP.MapQuestSelectionEntry_BP_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class UMapQuestSelectionEntry_BP_C : public UMapQuestSelectionEntryWidget
{ 
public:
};

/// Class /Game/UI/Map/MultiQuestMapTracker/MultiQuestEntry.MultiQuestEntry_C
/// Size: 0x0418 (1048 bytes) (0x000418 - 0x000418) align 8 MaxSize: 0x0418
class UMultiQuestEntry_C : public UTextBlockBase
{ 
public:
};

/// Class /Game/UI/CharacterCreation/Skills/SkillUnlock_BP.SkillUnlock_BP_C
/// Size: 0x0358 (856 bytes) (0x000350 - 0x000358) align 8 MaxSize: 0x0358
class USkillUnlock_BP_C : public USkillUnlockEntryWidget
{ 
public:
	class UImage*                                      CircleBacking;                                              // 0x0350   (0x0008)  
};

/// Class /Game/UI/Map/MultiQuestMapTracker/MultiQuestMapTracker_BP.MultiQuestMapTracker_BP_C
/// Size: 0x0350 (848 bytes) (0x000340 - 0x000350) align 8 MaxSize: 0x0350
class UMultiQuestMapTracker_BP_C : public UMultiQuestMapTracker
{ 
public:
	class UImage*                                      ActiveQuestIcon;                                            // 0x0340   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0348   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/LedgerMapQuestSelection_BP.LedgerMapQuestSelection_BP_C
/// Size: 0x0378 (888 bytes) (0x000370 - 0x000378) align 8 MaxSize: 0x0378
class ULedgerMapQuestSelection_BP_C : public ULedgerMapQuestSelectionWidget
{ 
public:
	class UTextBlockBase*                              HeaderTextblock;                                            // 0x0370   (0x0008)  
};

/// Class /Game/UI/Map/LedgerMap/MapEntry/Beacons/BeaconButtonEntry_BP.BeaconButtonEntry_BP_C
/// Size: 0x0358 (856 bytes) (0x000358 - 0x000358) align 8 MaxSize: 0x0358
class UBeaconButtonEntry_BP_C : public UMapBeaconEntryWidget
{ 
public:
};

/// Class /Game/UI/Menus/MainMenu/SubMenus/BaseDLCWidget_BP.BaseDLCWidget_BP_C
/// Size: 0x0450 (1104 bytes) (0x000450 - 0x000450) align 8 MaxSize: 0x0450
class UBaseDLCWidget_BP_C : public UMainMenuDLCWidget
{ 
public:
};

/// Class /Game/UI/QuestJournal/QuestJournalMaster_BP.QuestJournalMaster_BP_C
/// Size: 0x04F0 (1264 bytes) (0x0004C0 - 0x0004F0) align 8 MaxSize: 0x04F0
class UQuestJournalMaster_BP_C : public UQuestJournalWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UWidgetAnimation*                            FadeInQuestImage;                                           // 0x04C8   (0x0008)  
	class UBackgroundPanelWidget_C*                    BackgroundPanelWidget;                                      // 0x04D0   (0x0008)  
	class UBackgroundSplitPanelWidget_C*               BackgroundSplitPanelWidget;                                 // 0x04D8   (0x0008)  
	class UInvalidationBox*                            InvalidationBox;                                            // 0x04E0   (0x0008)  
	class UInvalidationBox*                            InvalidationBox0;                                           // 0x04E8   (0x0008)  


	/// Functions
	// Function /Game/UI/QuestJournal/QuestJournalMaster_BP.QuestJournalMaster_BP_C.OnQuestImageLoaded
	// void OnQuestImageLoaded();                                                                                               // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/QuestJournal/QuestJournalMaster_BP.QuestJournalMaster_BP_C.ExecuteUbergraph_QuestJournalMaster_BP
	// void ExecuteUbergraph_QuestJournalMaster_BP(int32_t EntryPoint);                                                         // [0x1c5deb0] Final                
};

/// Class /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C
/// Size: 0x1118 (4376 bytes) (0x0010F0 - 0x001118) align 8 MaxSize: 0x1118
class UCompass_BP_C : public UCompassWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x10F0   (0x0008)  
	class UImage*                                      CardinalDirectionsImage;                                    // 0x10F8   (0x0008)  
	class UImage*                                      CompassBody;                                                // 0x1100   (0x0008)  
	class UMaterialInstanceDynamic*                    CardinalDirection_Mat;                                      // 0x1108   (0x0008)  
	class UMaterialInstanceDynamic*                    CompassBody_Mat;                                            // 0x1110   (0x0008)  


	/// Functions
	// Function /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C.Construct
	// void Construct();                                                                                                        // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1c5deb0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/HUD/Compass/Compass_BP.Compass_BP_C.ExecuteUbergraph_Compass_BP
	// void ExecuteUbergraph_Compass_BP(int32_t EntryPoint);                                                                    // [0x1c5deb0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UBeaconTag_BP_C) == 0x0378); // 888 bytes (0x000370 - 0x000378)
static_assert(sizeof(URenderThreadLoadingScreen_BP_C) == 0x0440); // 1088 bytes (0x000438 - 0x000440)
static_assert(sizeof(USquareCheckBox_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UPresenterWrapperButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(USettingsMenuSubcategory_BP_C) == 0x0298); // 664 bytes (0x000298 - 0x000298)
static_assert(sizeof(USettingsMenuSlot_BP_C) == 0x0358); // 856 bytes (0x000350 - 0x000358)
static_assert(sizeof(USettingsMenuDisplaySubcategory_BP_C) == 0x0298); // 664 bytes (0x000298 - 0x000298)
static_assert(sizeof(USettingsMenuCheckBox2_BP_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(USettingsMenuButtonSlot_BP_C) == 0x0350); // 848 bytes (0x000350 - 0x000350)
static_assert(sizeof(ADamageTextActor_BP_C) == 0x02E0); // 736 bytes (0x0002E0 - 0x0002E0)
static_assert(sizeof(AStatusTagActor_BP_C) == 0x02E0); // 736 bytes (0x0002E0 - 0x0002E0)
static_assert(sizeof(UHistoryMessage_BP_C) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(UConversationResponseButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UConversationMessage_BP_C) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UConversationHistory_BP_C) == 0x02A8); // 680 bytes (0x0002A0 - 0x0002A8)
static_assert(sizeof(UConversationHistoryButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UTextContextSection_BP_C) == 0x02A0); // 672 bytes (0x0002A0 - 0x0002A0)
static_assert(sizeof(UIndianaUserWidgetLibrary_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USubtitleEntryWidget_BP_C) == 0x0308); // 776 bytes (0x000308 - 0x000308)
static_assert(sizeof(UItemCellDragContainerNoDrag_BP_C) == 0x02E8); // 744 bytes (0x0002B8 - 0x0002E8)
static_assert(sizeof(UPageAnchor2_BP_C) == 0x0290); // 656 bytes (0x000278 - 0x000290)
static_assert(sizeof(UItemPageNoDrag_BP_C) == 0x0380); // 896 bytes (0x000370 - 0x000380)
static_assert(sizeof(UButton_MoreCompanions_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UConditionButton_BP_C) == 0x0308); // 776 bytes (0x000308 - 0x000308)
static_assert(sizeof(UEquipmentMods_BP_C) == 0x03F8); // 1016 bytes (0x0003F0 - 0x0003F8)
static_assert(sizeof(UItemViewerScrollSelectorButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UItemViewerScrollSelectorEntry_BP_C) == 0x0318); // 792 bytes (0x000310 - 0x000318)
static_assert(sizeof(UItemViewerScrollSelector_BP_C) == 0x0338); // 824 bytes (0x000330 - 0x000338)
static_assert(sizeof(UItemPage_BP_C) == 0x0380); // 896 bytes (0x000370 - 0x000380)
static_assert(sizeof(UItemViewerIconButton_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UPaginatedButton_BP_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UInputWidget_BP_C) == 0x0380); // 896 bytes (0x000378 - 0x000380)
static_assert(sizeof(UAmmo_BP_C) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UItemCellDragVisuals_BP_C) == 0x0288); // 648 bytes (0x000280 - 0x000288)
static_assert(sizeof(UItemCellDragDropOperation_BP_C) == 0x00B8); // 184 bytes (0x0000B8 - 0x0000B8)
static_assert(sizeof(UItemCellDragContainer_BP_C) == 0x02E8); // 744 bytes (0x0002B8 - 0x0002E8)
static_assert(sizeof(UItemViewerButton_BP_C) == 0x0BA0); // 2976 bytes (0x000BA0 - 0x000BA0)
static_assert(sizeof(UAmmoGroup_BP_C) == 0x0340); // 832 bytes (0x000318 - 0x000340)
static_assert(sizeof(UItemStat_BP_C) == 0x0348); // 840 bytes (0x000348 - 0x000348)
static_assert(sizeof(UInputLabelHold_BP_C) == 0x03D8); // 984 bytes (0x0003B8 - 0x0003D8)
static_assert(sizeof(UInputLabel_BP_C) == 0x0378); // 888 bytes (0x000370 - 0x000378)
static_assert(sizeof(UGlowButtonWithBacking_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UTinkering_BP_C) == 0x03D0); // 976 bytes (0x0003A0 - 0x0003D0)
static_assert(sizeof(URepairUpgradeInfo_BP_C) == 0x0390); // 912 bytes (0x000380 - 0x000390)
static_assert(sizeof(UWeapons_BP_C) == 0x0578); // 1400 bytes (0x000550 - 0x000578)
static_assert(sizeof(UItemViewerNavigation_BP_C) == 0x0398); // 920 bytes (0x000390 - 0x000398)
static_assert(sizeof(UInputLabelGroup_BP_C) == 0x0380); // 896 bytes (0x000370 - 0x000380)
static_assert(sizeof(UFlavorTextWidget_BP_C) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UCartInfoWidget_BP_C) == 0x03C8); // 968 bytes (0x0003B0 - 0x0003C8)
static_assert(sizeof(UArmor_BP_C) == 0x0498); // 1176 bytes (0x000488 - 0x000498)
static_assert(sizeof(USurvivalBar_Thirst_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(USurvivalBar_Sleep_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(USurvivalBar_Hunger_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(UWBUpgradePage_BP_C) == 0x0430); // 1072 bytes (0x000428 - 0x000430)
static_assert(sizeof(UWBRepairPage_BP_C) == 0x0458); // 1112 bytes (0x000450 - 0x000458)
static_assert(sizeof(UWBBreakdownPage_BP_C) == 0x0420); // 1056 bytes (0x000418 - 0x000420)
static_assert(sizeof(USurvivalBarGroupWidget_BP_C) == 0x0350); // 848 bytes (0x000350 - 0x000350)
static_assert(sizeof(UPageAnchor1_BP_C) == 0x0298); // 664 bytes (0x000278 - 0x000298)
static_assert(sizeof(UNavigationBar_BP_C) == 0x0380); // 896 bytes (0x000380 - 0x000380)
static_assert(sizeof(UBackground1_BP_C) == 0x0288); // 648 bytes (0x000278 - 0x000288)
static_assert(sizeof(UWorkbenchWidget_BP_C) == 0x0388); // 904 bytes (0x000358 - 0x000388)
static_assert(sizeof(UTutorialPopupWidget_BP_C) == 0x0360); // 864 bytes (0x000350 - 0x000360)
static_assert(sizeof(UToolTipContainer_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(USubtitleManager_BP_C) == 0x03A0); // 928 bytes (0x0003A0 - 0x0003A0)
static_assert(sizeof(USlideshowWidget_BP_C) == 0x0428); // 1064 bytes (0x000428 - 0x000428)
static_assert(sizeof(URadialContextMenu_BP_C) == 0x0354); // 852 bytes (0x000338 - 0x000354)
static_assert(sizeof(UMoviePlayer_BP_C) == 0x0390); // 912 bytes (0x000370 - 0x000390)
static_assert(sizeof(ULevelUpNotification_BP_C) == 0x0462); // 1122 bytes (0x0003E0 - 0x000462)
static_assert(sizeof(UDialogBoxRespec_BP_C) == 0x0408); // 1032 bytes (0x0003D0 - 0x000408)
static_assert(sizeof(UDialogBox1_BP_C) == 0x03E8); // 1000 bytes (0x0003B8 - 0x0003E8)
static_assert(sizeof(UDebugOverlay_C) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UConversationWidget_BP_C) == 0x0588); // 1416 bytes (0x000520 - 0x000588)
static_assert(sizeof(UCinematicPlayer_BP_C) == 0x0358); // 856 bytes (0x000348 - 0x000358)
static_assert(sizeof(UStatusTagGenerator_BP_C) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UPlayerHudEvents_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWorldSpaceTextGenerator_BP_C) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(UGenericSlider_BP_C) == 0x0578); // 1400 bytes (0x000578 - 0x000578)
static_assert(sizeof(USettingsMenuSlider_BP_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(UKeyBindMenu_BP_C) == 0x0B88); // 2952 bytes (0x000B58 - 0x000B88)
static_assert(sizeof(UGlowButtonNoBacking_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(ULoadingBlocker_BP_C) == 0x0280); // 640 bytes (0x000278 - 0x000280)
static_assert(sizeof(UGenericSliderWidget_BP_C) == 0x0348); // 840 bytes (0x000338 - 0x000348)
static_assert(sizeof(UBackgroundPanelWidget_C) == 0x0428); // 1064 bytes (0x000300 - 0x000428)
static_assert(sizeof(UBreakdownItemsGainedPopup_BP_C) == 0x0340); // 832 bytes (0x000330 - 0x000340)
static_assert(sizeof(USaveLoadMenu_BP_C) == 0x03F0); // 1008 bytes (0x0003D8 - 0x0003F0)
static_assert(sizeof(UPauseMenu_C) == 0x03B8); // 952 bytes (0x000370 - 0x0003B8)
static_assert(sizeof(UWaitTime_BP_C) == 0x03B0); // 944 bytes (0x0003A0 - 0x0003B0)
static_assert(sizeof(AIndianaUI_BP_C) == 0x06A0); // 1696 bytes (0x000690 - 0x0006A0)
static_assert(sizeof(USavingWidget_BP_C) == 0x0348); // 840 bytes (0x000320 - 0x000348)
static_assert(sizeof(USavingSpinnerWidget_BP_C) == 0x0318); // 792 bytes (0x000300 - 0x000318)
static_assert(sizeof(UMainOptions_BP_C) == 0x0430); // 1072 bytes (0x0003E0 - 0x000430)
static_assert(sizeof(ULevelSelectOptions_BP_C) == 0x0340); // 832 bytes (0x000338 - 0x000340)
static_assert(sizeof(UGammaSelection_BP_C) == 0x0398); // 920 bytes (0x000370 - 0x000398)
static_assert(sizeof(UInvisibleButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UButton1_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UMainMenu_C) == 0x0460); // 1120 bytes (0x0003F8 - 0x000460)
static_assert(sizeof(UInputLabelHoldSmall_BP_C) == 0x03D8); // 984 bytes (0x0003B8 - 0x0003D8)
static_assert(sizeof(UCompanionEquipmentBarWidget_C) == 0x0490); // 1168 bytes (0x000470 - 0x000490)
static_assert(sizeof(UStatsPerkListRow_BP_C) == 0x0430); // 1072 bytes (0x000428 - 0x000430)
static_assert(sizeof(UStatsPerkList_BP_C) == 0x0388); // 904 bytes (0x000360 - 0x000388)
static_assert(sizeof(UStatsPerkSummaryEntry_BP1_C) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UCompanionOptionSelector_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UStatsPerkSummary_BP_C) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UCompanionStatusEffects_BP_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(UCompanionBehaviors_BP_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(UCompanionDetails_BP_C) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UCompanionStats_BP_C) == 0x03C0); // 960 bytes (0x0003B0 - 0x0003C0)
static_assert(sizeof(UCompanionPerks_BP_C) == 0x03D8); // 984 bytes (0x0003B8 - 0x0003D8)
static_assert(sizeof(UCompanionEquipment_BP_C) == 0x0548); // 1352 bytes (0x000548 - 0x000548)
static_assert(sizeof(UTutorialList_BP_C) == 0x0398); // 920 bytes (0x000398 - 0x000398)
static_assert(sizeof(UTutorialListContainer_BP_C) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(USymbolList_BP_C) == 0x0448); // 1096 bytes (0x000448 - 0x000448)
static_assert(sizeof(UQuestList_BP_C) == 0x03B8); // 952 bytes (0x0003B8 - 0x0003B8)
static_assert(sizeof(UObjectiveList_BP_C) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UBackgroundSplitPanelWidget_C) == 0x05B8); // 1464 bytes (0x000360 - 0x0005B8)
static_assert(sizeof(UDerivedStat_BP_C) == 0x0330); // 816 bytes (0x000328 - 0x000330)
static_assert(sizeof(UGlowButtonNoBackingNoPress_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UCharacterStatusEffectEntry_BP_C) == 0x0330); // 816 bytes (0x000328 - 0x000330)
static_assert(sizeof(UStatsFlawSummaryEntry_BP_C) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UStatsFlawSummary_BP_C) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UCharacterStatusEffects_BP_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(UCharacterDerivedStats_BP_C) == 0x0380); // 896 bytes (0x000378 - 0x000380)
static_assert(sizeof(UReputationProgress_BP_C) == 0x02A9); // 681 bytes (0x000298 - 0x0002A9)
static_assert(sizeof(UReputationList_BP_C) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UReputationEntry_BP1_C) == 0x0338); // 824 bytes (0x000330 - 0x000338)
static_assert(sizeof(UReputationDetails_BP_C) == 0x0378); // 888 bytes (0x000360 - 0x000378)
static_assert(sizeof(USkillAdjustment_BP_C) == 0x0340); // 832 bytes (0x000340 - 0x000340)
static_assert(sizeof(UStatsPerkListEntry_BP_C) == 0x0388); // 904 bytes (0x000368 - 0x000388)
static_assert(sizeof(UPlayerPerkListRow_BP_C) == 0x0430); // 1072 bytes (0x000428 - 0x000430)
static_assert(sizeof(UPlayerPerkList_BP_C) == 0x0378); // 888 bytes (0x000360 - 0x000378)
static_assert(sizeof(UCharacterDescriptionPanel_BP_C) == 0x0370); // 880 bytes (0x000368 - 0x000370)
static_assert(sizeof(UStatsSkillsPage_BP_C) == 0x04B0); // 1200 bytes (0x0004A0 - 0x0004B0)
static_assert(sizeof(UStatsPerksPage_BP_C) == 0x0400); // 1024 bytes (0x0003E8 - 0x000400)
static_assert(sizeof(UReputationSummary_BP_C) == 0x0340); // 832 bytes (0x000340 - 0x000340)
static_assert(sizeof(UCharacterDetails_BP_C) == 0x0358); // 856 bytes (0x000338 - 0x000358)
static_assert(sizeof(UFloorLevel_BP_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UChangeFloorButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UPlayerEntry_BP_C) == 0x0308); // 776 bytes (0x000300 - 0x000308)
static_assert(sizeof(UFloorLevelIndicator_BP_C) == 0x03C8); // 968 bytes (0x0003C0 - 0x0003C8)
static_assert(sizeof(UToolTipArmorStat_BP_C) == 0x0348); // 840 bytes (0x000348 - 0x000348)
static_assert(sizeof(UItemStatCategory_BP_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UGeneralNotificationLabel_BP_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UGenericNotificationEntry_BP_C) == 0x0458); // 1112 bytes (0x000440 - 0x000458)
static_assert(sizeof(UTTDStatusEffectsWidget_BP_C) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UEnemyDifficulty_BP_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UGenericCrosshair_BP_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UCauseDamageReticle_BP_C) == 0x0358); // 856 bytes (0x000338 - 0x000358)
static_assert(sizeof(UWeaponRadialSection_BP_C) == 0x02A0); // 672 bytes (0x000298 - 0x0002A0)
static_assert(sizeof(UAmmoRadialSection_BP_C) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(UStatusEffectTagEntry_BP_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UKeySelectorGlowButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UDifficultySelect_BP_C) == 0x04E8); // 1256 bytes (0x000480 - 0x0004E8)
static_assert(sizeof(USettingsMenuKeyRebind_BP_C) == 0x0370); // 880 bytes (0x000360 - 0x000370)
static_assert(sizeof(UCheckBox1_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UOptionPresenter_BP_C) == 0x0380); // 896 bytes (0x000380 - 0x000380)
static_assert(sizeof(USettingsMenuOptionPresenter_BP_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UButton_Ledger_Header_SubContainer_BP_C) == 0x02B9); // 697 bytes (0x0002B0 - 0x0002B9)
static_assert(sizeof(AHumanDummy_UI_C) == 0x0610); // 1552 bytes (0x000610 - 0x000610)
static_assert(sizeof(APlayerDummy_UI_C) == 0x0610); // 1552 bytes (0x000610 - 0x000610)
static_assert(sizeof(UCompanionMoveTo_BP_C) == 0x0328); // 808 bytes (0x000308 - 0x000328)
static_assert(sizeof(UStatusEffectTag_BP_C) == 0x0368); // 872 bytes (0x000368 - 0x000368)
static_assert(sizeof(UDamageEffect_C) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UStatusTag_BP_C) == 0x0420); // 1056 bytes (0x000400 - 0x000420)
static_assert(sizeof(USubtitle_BP_C) == 0x0490); // 1168 bytes (0x000470 - 0x000490)
static_assert(sizeof(UMapTransitionNotification_BP_C) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UWeaponContextSection_BP_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(URadialMenuGadgetSlot_BP_C) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(URadialMenuDrugSlot_BP_C) == 0x02B8); // 696 bytes (0x0002B8 - 0x0002B8)
static_assert(sizeof(UModifications_BP_C) == 0x0430); // 1072 bytes (0x000430 - 0x000430)
static_assert(sizeof(UMedKitContextSection_BP_C) == 0x0298); // 664 bytes (0x000298 - 0x000298)
static_assert(sizeof(UMaterials_BP_C) == 0x0430); // 1072 bytes (0x000430 - 0x000430)
static_assert(sizeof(UJunk_BP_C) == 0x0430); // 1072 bytes (0x000430 - 0x000430)
static_assert(sizeof(UGeneral_BP_C) == 0x0430); // 1072 bytes (0x000430 - 0x000430)
static_assert(sizeof(UToolTipItemStat_BP_C) == 0x0348); // 840 bytes (0x000348 - 0x000348)
static_assert(sizeof(USummaryEquipmentModWidget_BP_C) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(UItemStats_BP_C) == 0x0418); // 1048 bytes (0x000418 - 0x000418)
static_assert(sizeof(ULedgerJournalWidget_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UCompanions_BP_C) == 0x03B0); // 944 bytes (0x0003B0 - 0x0003B0)
static_assert(sizeof(UNewSave_BP_C) == 0x0298); // 664 bytes (0x000288 - 0x000298)
static_assert(sizeof(URadial_BP_C) == 0x0450); // 1104 bytes (0x000440 - 0x000450)
static_assert(sizeof(UIconContextSection_BP_C) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(URadialContainerWidget_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UStackSplitting_BP_C) == 0x0508); // 1288 bytes (0x0004C8 - 0x000508)
static_assert(sizeof(UButton_Ledger_Header_Container_BP_C) == 0x02C1); // 705 bytes (0x0002B0 - 0x0002C1)
static_assert(sizeof(UButton_LedgerHeader_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UEquipmentMod_BP_C) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(UItemRepair_BP_C) == 0x03B0); // 944 bytes (0x0003A8 - 0x0003B0)
static_assert(sizeof(UInputLabelSmall_BP_C) == 0x0378); // 888 bytes (0x000370 - 0x000378)
static_assert(sizeof(UItemViewer_BP_C) == 0x0678); // 1656 bytes (0x000650 - 0x000678)
static_assert(sizeof(UWBModificationPage_BP_C) == 0x0440); // 1088 bytes (0x000428 - 0x000440)
static_assert(sizeof(UPlayerStats_BP_C) == 0x0360); // 864 bytes (0x000348 - 0x000360)
static_assert(sizeof(UButtonWorkbenchHeaderContainer_BP_C) == 0x02C1); // 705 bytes (0x0002B0 - 0x0002C1)
static_assert(sizeof(UVendorWidget_BP_C) == 0x0698); // 1688 bytes (0x000620 - 0x000698)
static_assert(sizeof(UItemTransfer_BP_C) == 0x03F0); // 1008 bytes (0x0003D0 - 0x0003F0)
static_assert(sizeof(UItemToolTip_BP_C) == 0x06C0); // 1728 bytes (0x0004F8 - 0x0006C0)
static_assert(sizeof(UItemInspector_BP_C) == 0x03B0); // 944 bytes (0x000388 - 0x0003B0)
static_assert(sizeof(UItemContainer_BP_C) == 0x038C); // 908 bytes (0x000368 - 0x00038C)
static_assert(sizeof(UInventoryMaster_BP_C) == 0x04C0); // 1216 bytes (0x0004B8 - 0x0004C0)
static_assert(sizeof(UHealthKitTooltip_BP_C) == 0x03C0); // 960 bytes (0x0003B0 - 0x0003C0)
static_assert(sizeof(UExaminableWidget_BP_C) == 0x0360); // 864 bytes (0x000350 - 0x000360)
static_assert(sizeof(UDialogBoxWarning_BP_C) == 0x0388); // 904 bytes (0x000368 - 0x000388)
static_assert(sizeof(UDeathMenu_C) == 0x03A0); // 928 bytes (0x000360 - 0x0003A0)
static_assert(sizeof(UConversationSubtitleWidget_BP_C) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UCompanionMoveToWC_3D_C) == 0x0690); // 1680 bytes (0x000690 - 0x000690)
static_assert(sizeof(UGenericListEntryWidget_BP_C) == 0x0339); // 825 bytes (0x000330 - 0x000339)
static_assert(sizeof(UCompanionStatSummary_BP_C) == 0x0348); // 840 bytes (0x000348 - 0x000348)
static_assert(sizeof(UCompanionSkillSummary_C) == 0x0358); // 856 bytes (0x000358 - 0x000358)
static_assert(sizeof(UGenericListEntry_BP_C) == 0x02A8); // 680 bytes (0x0002A0 - 0x0002A8)
static_assert(sizeof(ULogList_BP_C) == 0x0388); // 904 bytes (0x000388 - 0x000388)
static_assert(sizeof(UJournalDescriptionPanel_BP_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(UQuestObjectiveTitle_BP_C) == 0x02B0); // 688 bytes (0x0002A8 - 0x0002B0)
static_assert(sizeof(UStatsPerkEntryButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(USkillGroupDetail_BP_C) == 0x02D0); // 720 bytes (0x0002B8 - 0x0002D0)
static_assert(sizeof(UFastTravelButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UPointOfInterestTooltip_BP_C) == 0x0310); // 784 bytes (0x000308 - 0x000310)
static_assert(sizeof(UPointOfInterestButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UPointOfInterest_BP_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UMultiFastTravelSelection_BP_C) == 0x0340); // 832 bytes (0x000340 - 0x000340)
static_assert(sizeof(UMapTextEntry_BP_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UFastTravelTooltip_BP_C) == 0x0318); // 792 bytes (0x000310 - 0x000318)
static_assert(sizeof(UAreaBeaconEntry_BP_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UItemContainerEntry_BP_C) == 0x0368); // 872 bytes (0x000368 - 0x000368)
static_assert(sizeof(UItemContainerSlider_BP_C) == 0x0578); // 1400 bytes (0x000578 - 0x000578)
static_assert(sizeof(USelectedNotificationWidget_BP_C) == 0x0338); // 824 bytes (0x000318 - 0x000338)
static_assert(sizeof(AActorStage_BP_Base_C) == 0x0398); // 920 bytes (0x000380 - 0x000398)
static_assert(sizeof(AItemStage_BP_C) == 0x03D0); // 976 bytes (0x000398 - 0x0003D0)
static_assert(sizeof(USkillButtonEntry_BP_C) == 0x0490); // 1168 bytes (0x000490 - 0x000490)
static_assert(sizeof(UCategoryButtonEntry_BP_C) == 0x0498); // 1176 bytes (0x000498 - 0x000498)
static_assert(sizeof(UAbilityOverDetail_Ability_BP_C) == 0x0420); // 1056 bytes (0x000400 - 0x000420)
static_assert(sizeof(UFastTravelSelectionButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UMFTSelectionEntry_BP_C) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UCharacterMedKit_BP_C) == 0x03D0); // 976 bytes (0x0003D0 - 0x0003D0)
static_assert(sizeof(UQuestObjective_BP_C) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UStatusEffectBarEntry_BP_C) == 0x0340); // 832 bytes (0x000320 - 0x000340)
static_assert(sizeof(UStatusEffectBar_BP_C) == 0x03A0); // 928 bytes (0x000398 - 0x0003A0)
static_assert(sizeof(UCompassEntry_BP_C) == 0x02BC); // 700 bytes (0x0002A0 - 0x0002BC)
static_assert(sizeof(UItemDegradationEntry_BP_C) == 0x0348); // 840 bytes (0x000320 - 0x000348)
static_assert(sizeof(UQuestLogObjectiveEntry_BP_C) == 0x0368); // 872 bytes (0x000338 - 0x000368)
static_assert(sizeof(UQuestLogEntry_BP_C) == 0x0360); // 864 bytes (0x000330 - 0x000360)
static_assert(sizeof(UWeaponRadialBackgroundSection_BP_C) == 0x0330); // 816 bytes (0x000320 - 0x000330)
static_assert(sizeof(UAddendumButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UQuestAddendum_BP_C) == 0x0318); // 792 bytes (0x000308 - 0x000318)
static_assert(sizeof(UHumanDummy_UI_Animation_C) == 0x16D8); // 5848 bytes (0x000580 - 0x0016D8)
static_assert(sizeof(UMedKitHUDDrugSlot_BP_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UMedKitHUDAdrenoSlot_BP_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UStatusTagAwarenessWidget_BP_C) == 0x03D8); // 984 bytes (0x0003C8 - 0x0003D8)
static_assert(sizeof(UWeaponSelect_BP_C) == 0x0544); // 1348 bytes (0x000490 - 0x000544)
static_assert(sizeof(UReticle_BP_C) == 0x03F0); // 1008 bytes (0x0003A0 - 0x0003F0)
static_assert(sizeof(UQuestLog_BP_C) == 0x03E0); // 992 bytes (0x0003C0 - 0x0003E0)
static_assert(sizeof(UItemDegradationAlert_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UInputGuide_BP_C) == 0x04F0); // 1264 bytes (0x000478 - 0x0004F0)
static_assert(sizeof(UGenericNotification_BP_C) == 0x0488); // 1160 bytes (0x000460 - 0x000488)
static_assert(sizeof(UDisguiseWidget_BP_C) == 0x0498); // 1176 bytes (0x000430 - 0x000498)
static_assert(sizeof(UCompanionOverview_BP_C) == 0x03F0); // 1008 bytes (0x0003C0 - 0x0003F0)
static_assert(sizeof(UAbilityOverviewGamepad_BP_C) == 0x05FA); // 1530 bytes (0x0005A0 - 0x0005FA)
static_assert(sizeof(UAbilityOverview_BP_C) == 0x05AA); // 1450 bytes (0x0005A0 - 0x0005AA)
static_assert(sizeof(UItemContainerList_BP_C) == 0x03F8); // 1016 bytes (0x0003E8 - 0x0003F8)
static_assert(sizeof(ULedgerCharacter_BP_C) == 0x0348); // 840 bytes (0x000348 - 0x000348)
static_assert(sizeof(ACharacterStage_BP_C) == 0x03D8); // 984 bytes (0x000398 - 0x0003D8)
static_assert(sizeof(USaveLoadMenuButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UActorRender_BP_C) == 0x0398); // 920 bytes (0x000398 - 0x000398)
static_assert(sizeof(UItemModding_BP_C) == 0x0720); // 1824 bytes (0x0006B8 - 0x000720)
static_assert(sizeof(UStatsAptitudeSummary_BP_C) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UStatsSummaryPage_BP_C) == 0x0358); // 856 bytes (0x000340 - 0x000358)
static_assert(sizeof(UGamepadSelector_BP_C) == 0x0280); // 640 bytes (0x000278 - 0x000280)
static_assert(sizeof(UStatsAttributeSummary_BP_C) == 0x02E0); // 736 bytes (0x0002E0 - 0x0002E0)
static_assert(sizeof(UStatsAttributeSummaryGroup_BP_C) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(UTerminalResponseButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UTerminalResponse_BP_C) == 0x02F0); // 752 bytes (0x0002D0 - 0x0002F0)
static_assert(sizeof(UComputerTerminal_DefaultHeader_BP_C) == 0x03F0); // 1008 bytes (0x0003E0 - 0x0003F0)
static_assert(sizeof(USkillUnlockPanelMeter_BP_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UAudioLogListEntry_BP_C) == 0x02A0); // 672 bytes (0x0002A0 - 0x0002A0)
static_assert(sizeof(UStatsAttributeSummaryEntry_BP_C) == 0x02B8); // 696 bytes (0x0002B0 - 0x0002B8)
static_assert(sizeof(UScalableImageWidget_C) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(USymbolDescriptionPanelEntry_BP_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UAudioLogList_BP_C) == 0x03F8); // 1016 bytes (0x0003F8 - 0x0003F8)
static_assert(sizeof(UQuestListEntry_BP_C) == 0x02F8); // 760 bytes (0x0002E8 - 0x0002F8)
static_assert(sizeof(USkillUnlockPanel_BP_C) == 0x0378); // 888 bytes (0x000318 - 0x000378)
static_assert(sizeof(UCharacterSkillsDescriptionPanel_BP_C) == 0x0380); // 896 bytes (0x000378 - 0x000380)
static_assert(sizeof(UCodexJournal_BP_C) == 0x03E0); // 992 bytes (0x0003C8 - 0x0003E0)
static_assert(sizeof(UMapLegend_BP_C) == 0x02D0); // 720 bytes (0x000278 - 0x0002D0)
static_assert(sizeof(UFastTravelEntry_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UBeaconTooltip_BP_C) == 0x0318); // 792 bytes (0x000300 - 0x000318)
static_assert(sizeof(UBeaconEntry_BP_C) == 0x0358); // 856 bytes (0x000358 - 0x000358)
static_assert(sizeof(UDialogBoxKeybind_BP_C) == 0x03C0); // 960 bytes (0x000390 - 0x0003C0)
static_assert(sizeof(UItemViewerHealthKitButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(USettingsMenuInputKeySelector_BP_C) == 0x03A8); // 936 bytes (0x0003A8 - 0x0003A8)
static_assert(sizeof(UComputerTerminalContents_BP_C) == 0x0420); // 1056 bytes (0x000418 - 0x000420)
static_assert(sizeof(UConversationResponse_BP_C) == 0x02F8); // 760 bytes (0x0002D0 - 0x0002F8)
static_assert(sizeof(UTTDScanner_BP_C) == 0x03E8); // 1000 bytes (0x0003C0 - 0x0003E8)
static_assert(sizeof(UCharacterOverview_BP_C) == 0x0520); // 1312 bytes (0x0004F8 - 0x000520)
static_assert(sizeof(UBossBar_BP_C) == 0x0390); // 912 bytes (0x000380 - 0x000390)
static_assert(sizeof(UAmmoReadout_BP_C) == 0x03BA); // 954 bytes (0x0003B0 - 0x0003BA)
static_assert(sizeof(UConsumables_BP_C) == 0x0580); // 1408 bytes (0x000570 - 0x000580)
static_assert(sizeof(ULedgerMap_BP_C) == 0x06D0); // 1744 bytes (0x0006C0 - 0x0006D0)
static_assert(sizeof(UAudioLogWidget_BP_C) == 0x03B0); // 944 bytes (0x000398 - 0x0003B0)
static_assert(sizeof(USaveLoadDetail_BP_C) == 0x0400); // 1024 bytes (0x0003F8 - 0x000400)
static_assert(sizeof(UTutorialPopupStyle_Simple_BP_C) == 0x0438); // 1080 bytes (0x000400 - 0x000438)
static_assert(sizeof(UTutorialPopupStyle_Corporate_BP_C) == 0x0460); // 1120 bytes (0x000400 - 0x000460)
static_assert(sizeof(UInventoryItem_BP_C) == 0x0490); // 1168 bytes (0x000370 - 0x000490)
static_assert(sizeof(ULedger_BP_C) == 0x0498); // 1176 bytes (0x000418 - 0x000498)
static_assert(sizeof(UHUD_BP_C) == 0x0410); // 1040 bytes (0x0003F0 - 0x000410)
static_assert(sizeof(UComputerTerminalContainer_BP_C) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(USettingsMenu_BP_C) == 0x0698); // 1688 bytes (0x000678 - 0x000698)
static_assert(sizeof(UMainDLCManager_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(ULegalWidget_BP_C) == 0x0400); // 1024 bytes (0x0003E8 - 0x000400)
static_assert(sizeof(UCreditsWidget_BP_C) == 0x0388); // 904 bytes (0x000380 - 0x000388)
static_assert(sizeof(UBaseDLCButton_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UBeaconButton_BP_C) == 0x0B98); // 2968 bytes (0x000B98 - 0x000B98)
static_assert(sizeof(UMapQuestSelectionEntry_BP_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UMultiQuestEntry_C) == 0x0418); // 1048 bytes (0x000418 - 0x000418)
static_assert(sizeof(USkillUnlock_BP_C) == 0x0358); // 856 bytes (0x000350 - 0x000358)
static_assert(sizeof(UMultiQuestMapTracker_BP_C) == 0x0350); // 848 bytes (0x000340 - 0x000350)
static_assert(sizeof(ULedgerMapQuestSelection_BP_C) == 0x0378); // 888 bytes (0x000370 - 0x000378)
static_assert(sizeof(UBeaconButtonEntry_BP_C) == 0x0358); // 856 bytes (0x000358 - 0x000358)
static_assert(sizeof(UBaseDLCWidget_BP_C) == 0x0450); // 1104 bytes (0x000450 - 0x000450)
static_assert(sizeof(UQuestJournalMaster_BP_C) == 0x04F0); // 1264 bytes (0x0004C0 - 0x0004F0)
static_assert(sizeof(UCompass_BP_C) == 0x1118); // 4376 bytes (0x0010F0 - 0x001118)
static_assert(offsetof(UBeaconTag_BP_C, UberGraphFrame) == 0x0370);
static_assert(offsetof(URenderThreadLoadingScreen_BP_C, Background) == 0x0438);
static_assert(offsetof(USettingsMenuSlot_BP_C, Image) == 0x0350);
static_assert(offsetof(UConversationMessage_BP_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(UConversationHistory_BP_C, Image) == 0x02A0);
static_assert(offsetof(UItemCellDragContainerNoDrag_BP_C, UberGraphFrame) == 0x02B8);
static_assert(offsetof(UItemCellDragContainerNoDrag_BP_C, Drop) == 0x02C0);
static_assert(offsetof(UItemCellDragContainerNoDrag_BP_C, Flash) == 0x02C8);
static_assert(offsetof(UItemCellDragContainerNoDrag_BP_C, DropBorder) == 0x02D0);
static_assert(offsetof(UItemCellDragContainerNoDrag_BP_C, FlashBorder) == 0x02D8);
static_assert(offsetof(UItemCellDragContainerNoDrag_BP_C, PendingDropBorder) == 0x02E0);
static_assert(offsetof(UPageAnchor2_BP_C, Image) == 0x0278);
static_assert(offsetof(UPageAnchor2_BP_C, Image0) == 0x0280);
static_assert(offsetof(UPageAnchor2_BP_C, Image1) == 0x0288);
static_assert(offsetof(UItemPageNoDrag_BP_C, UberGraphFrame) == 0x0370);
static_assert(offsetof(UItemPageNoDrag_BP_C, CollapsePage) == 0x0378);
static_assert(offsetof(UEquipmentMods_BP_C, ModsVerticalBox) == 0x03F0);
static_assert(offsetof(UItemViewerScrollSelectorEntry_BP_C, Image) == 0x0310);
static_assert(offsetof(UItemViewerScrollSelector_BP_C, TopDivider) == 0x0330);
static_assert(offsetof(UItemPage_BP_C, UberGraphFrame) == 0x0370);
static_assert(offsetof(UItemPage_BP_C, CollapsePage) == 0x0378);
static_assert(offsetof(UInputWidget_BP_C, KeyBackingIcon) == 0x0378);
static_assert(offsetof(UAmmo_BP_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UItemCellDragVisuals_BP_C, CellImage) == 0x0280);
static_assert(offsetof(UItemCellDragContainer_BP_C, UberGraphFrame) == 0x02B8);
static_assert(offsetof(UItemCellDragContainer_BP_C, Drop) == 0x02C0);
static_assert(offsetof(UItemCellDragContainer_BP_C, Flash) == 0x02C8);
static_assert(offsetof(UItemCellDragContainer_BP_C, DropBorder) == 0x02D0);
static_assert(offsetof(UItemCellDragContainer_BP_C, FlashBorder) == 0x02D8);
static_assert(offsetof(UItemCellDragContainer_BP_C, PendingDropBorder) == 0x02E0);
static_assert(offsetof(UAmmoGroup_BP_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UAmmoGroup_BP_C, FadeBackground) == 0x0320);
static_assert(offsetof(UAmmoGroup_BP_C, Background) == 0x0328);
static_assert(offsetof(UAmmoGroup_BP_C, BackgroundTexture) == 0x0330);
static_assert(offsetof(UAmmoGroup_BP_C, AmmoTexture0) == 0x0338);
static_assert(offsetof(UInputLabelHold_BP_C, UberGraphFrame) == 0x03B8);
static_assert(offsetof(UInputLabelHold_BP_C, KeyBackingIcon) == 0x03C0);
static_assert(offsetof(UInputLabelHold_BP_C, GamepadRadialMaterial) == 0x03C8);
static_assert(offsetof(UInputLabelHold_BP_C, KeyRadialMaterial) == 0x03D0);
static_assert(offsetof(UInputLabel_BP_C, RadialMaterial) == 0x0370);
static_assert(offsetof(UTinkering_BP_C, UberGraphFrame) == 0x03A0);
static_assert(offsetof(UTinkering_BP_C, FadeIn) == 0x03A8);
static_assert(offsetof(UTinkering_BP_C, BackingBot) == 0x03B0);
static_assert(offsetof(UTinkering_BP_C, BackingTop) == 0x03B8);
static_assert(offsetof(UTinkering_BP_C, Frame) == 0x03C0);
static_assert(offsetof(UTinkering_BP_C, BackingBotInst) == 0x03C8);
static_assert(offsetof(URepairUpgradeInfo_BP_C, Image) == 0x0380);
static_assert(offsetof(URepairUpgradeInfo_BP_C, Image0) == 0x0388);
static_assert(offsetof(UWeapons_BP_C, UberGraphFrame) == 0x0550);
static_assert(offsetof(UWeapons_BP_C, Item0) == 0x0558);
static_assert(offsetof(UWeapons_BP_C, Item1) == 0x0560);
static_assert(offsetof(UWeapons_BP_C, Item2) == 0x0568);
static_assert(offsetof(UWeapons_BP_C, Item3) == 0x0570);
static_assert(offsetof(UItemViewerNavigation_BP_C, TabsContainer) == 0x0390);
static_assert(offsetof(UInputLabelGroup_BP_C, LeftFrame) == 0x0370);
static_assert(offsetof(UInputLabelGroup_BP_C, RightFrame) == 0x0378);
static_assert(offsetof(UCartInfoWidget_BP_C, ActionInputLabelBreakdown) == 0x03B0);
static_assert(offsetof(UCartInfoWidget_BP_C, ActionInputLabelRepair) == 0x03B8);
static_assert(offsetof(UCartInfoWidget_BP_C, ActionInputLabelTinker) == 0x03C0);
static_assert(offsetof(UArmor_BP_C, Item0) == 0x0488);
static_assert(offsetof(UArmor_BP_C, Item1) == 0x0490);
static_assert(offsetof(UWBUpgradePage_BP_C, PagesSizeBox) == 0x0428);
static_assert(offsetof(UWBRepairPage_BP_C, PagesSizeBox) == 0x0450);
static_assert(offsetof(UWBBreakdownPage_BP_C, PagesSizeBox) == 0x0418);
static_assert(offsetof(UPageAnchor1_BP_C, Image) == 0x0278);
static_assert(offsetof(UPageAnchor1_BP_C, Image0) == 0x0280);
static_assert(offsetof(UPageAnchor1_BP_C, Image1) == 0x0288);
static_assert(offsetof(UPageAnchor1_BP_C, Image2) == 0x0290);
static_assert(offsetof(UBackground1_BP_C, Grid) == 0x0278);
static_assert(offsetof(UBackground1_BP_C, Halftone) == 0x0280);
static_assert(offsetof(UWorkbenchWidget_BP_C, Background) == 0x0358);
static_assert(offsetof(UWorkbenchWidget_BP_C, PageAnchorLeft) == 0x0360);
static_assert(offsetof(UWorkbenchWidget_BP_C, PageAnchorRight) == 0x0368);
static_assert(offsetof(UWorkbenchWidget_BP_C, Smoke) == 0x0370);
static_assert(offsetof(UWorkbenchWidget_BP_C, Smoke_Behind) == 0x0378);
static_assert(offsetof(UWorkbenchWidget_BP_C, SurvivalBar) == 0x0380);
static_assert(offsetof(UTutorialPopupWidget_BP_C, TutorialPopupStyle_Corporate_BP) == 0x0350);
static_assert(offsetof(UTutorialPopupWidget_BP_C, TutorialPopupStyle_Simple_BP) == 0x0358);
static_assert(offsetof(URadialContextMenu_BP_C, UberGraphFrame) == 0x0338);
static_assert(offsetof(URadialContextMenu_BP_C, Outro) == 0x0340);
static_assert(offsetof(URadialContextMenu_BP_C, Intro) == 0x0348);
static_assert(offsetof(UMoviePlayer_BP_C, UberGraphFrame) == 0x0370);
static_assert(offsetof(UMoviePlayer_BP_C, SkipFadeOutIn) == 0x0378);
static_assert(offsetof(UMoviePlayer_BP_C, Background1_BP) == 0x0380);
static_assert(offsetof(UMoviePlayer_BP_C, BlackBG) == 0x0388);
static_assert(offsetof(ULevelUpNotification_BP_C, UberGraphFrame) == 0x03E0);
static_assert(offsetof(ULevelUpNotification_BP_C, FadeInLevelUpReminder) == 0x03E8);
static_assert(offsetof(ULevelUpNotification_BP_C, SecondaryFadeIn) == 0x03F0);
static_assert(offsetof(ULevelUpNotification_BP_C, PrimaryTextGrow) == 0x03F8);
static_assert(offsetof(ULevelUpNotification_BP_C, SunSpin) == 0x0400);
static_assert(offsetof(ULevelUpNotification_BP_C, GlowFade) == 0x0408);
static_assert(offsetof(ULevelUpNotification_BP_C, GlowBall) == 0x0410);
static_assert(offsetof(ULevelUpNotification_BP_C, GlowGrow) == 0x0418);
static_assert(offsetof(ULevelUpNotification_BP_C, GlowShrink) == 0x0420);
static_assert(offsetof(ULevelUpNotification_BP_C, FadeOut) == 0x0428);
static_assert(offsetof(ULevelUpNotification_BP_C, PrimaryFadeIn) == 0x0430);
static_assert(offsetof(ULevelUpNotification_BP_C, InputLabelBacking) == 0x0438);
static_assert(offsetof(ULevelUpNotification_BP_C, ReminderBacking) == 0x0440);
static_assert(offsetof(ULevelUpNotification_BP_C, GlowMaterial) == 0x0448);
static_assert(offsetof(ULevelUpNotification_BP_C, LeftWingMaterial) == 0x0450);
static_assert(offsetof(ULevelUpNotification_BP_C, RightWingMaterial) == 0x0458);
static_assert(offsetof(UDialogBoxRespec_BP_C, UberGraphFrame) == 0x03D0);
static_assert(offsetof(UDialogBoxRespec_BP_C, FadeIn) == 0x03D8);
static_assert(offsetof(UDialogBoxRespec_BP_C, Background1_BP) == 0x03E0);
static_assert(offsetof(UDialogBoxRespec_BP_C, BackingBot) == 0x03E8);
static_assert(offsetof(UDialogBoxRespec_BP_C, BackingTop) == 0x03F0);
static_assert(offsetof(UDialogBoxRespec_BP_C, Frame) == 0x03F8);
static_assert(offsetof(UDialogBoxRespec_BP_C, BackingBotInst) == 0x0400);
static_assert(offsetof(UDialogBox1_BP_C, UberGraphFrame) == 0x03B8);
static_assert(offsetof(UDialogBox1_BP_C, FadeIn) == 0x03C0);
static_assert(offsetof(UDialogBox1_BP_C, BackingBot) == 0x03C8);
static_assert(offsetof(UDialogBox1_BP_C, BackingTop) == 0x03D0);
static_assert(offsetof(UDialogBox1_BP_C, Frame) == 0x03D8);
static_assert(offsetof(UDialogBox1_BP_C, BackingBotInst) == 0x03E0);
static_assert(offsetof(UConversationWidget_BP_C, UberGraphFrame) == 0x0520);
static_assert(offsetof(UConversationWidget_BP_C, FadeOutContent) == 0x0528);
static_assert(offsetof(UConversationWidget_BP_C, FadeInContent) == 0x0530);
static_assert(offsetof(UConversationWidget_BP_C, ConversationBackingBot) == 0x0538);
static_assert(offsetof(UConversationWidget_BP_C, ConversationBackingTop) == 0x0540);
static_assert(offsetof(UConversationWidget_BP_C, HistoryBackingBot) == 0x0548);
static_assert(offsetof(UConversationWidget_BP_C, HistoryBackingTop) == 0x0550);
static_assert(offsetof(UConversationWidget_BP_C, Image) == 0x0558);
static_assert(offsetof(UConversationWidget_BP_C, ConversationBackingTopInst) == 0x0568);
static_assert(offsetof(UConversationWidget_BP_C, ConversationBackingBotInst) == 0x0570);
static_assert(offsetof(UConversationWidget_BP_C, HistoryBackingTopInst) == 0x0578);
static_assert(offsetof(UConversationWidget_BP_C, HistoryBackingBotInst) == 0x0580);
static_assert(offsetof(UCinematicPlayer_BP_C, UberGraphFrame) == 0x0348);
static_assert(offsetof(UCinematicPlayer_BP_C, SkipFadeOutIn) == 0x0350);
static_assert(offsetof(UKeyBindMenu_BP_C, Outro) == 0x0B58);
static_assert(offsetof(UKeyBindMenu_BP_C, Intro) == 0x0B60);
static_assert(offsetof(UKeyBindMenu_BP_C, BackgroundPanelWidget) == 0x0B68);
static_assert(offsetof(UKeyBindMenu_BP_C, Primary) == 0x0B70);
static_assert(offsetof(UKeyBindMenu_BP_C, RootCanvas) == 0x0B78);
static_assert(offsetof(UKeyBindMenu_BP_C, Secondary) == 0x0B80);
static_assert(offsetof(ULoadingBlocker_BP_C, LoadingImage) == 0x0278);
static_assert(offsetof(UGenericSliderWidget_BP_C, Image) == 0x0338);
static_assert(offsetof(UGenericSliderWidget_BP_C, Image0) == 0x0340);
static_assert(offsetof(UBackgroundPanelWidget_C, UberGraphFrame) == 0x0300);
static_assert(offsetof(UBackgroundPanelWidget_C, FadeOpacity) == 0x0308);
static_assert(offsetof(UBackgroundPanelWidget_C, NamedSlot) == 0x0310);
static_assert(offsetof(UBackgroundPanelWidget_C, OuterBrush) == 0x0318);
static_assert(offsetof(UBackgroundPanelWidget_C, InnerBrush) == 0x03A0);
static_assert(offsetof(UBreakdownItemsGainedPopup_BP_C, BackgroundPanelWidget) == 0x0330);
static_assert(offsetof(UBreakdownItemsGainedPopup_BP_C, Image) == 0x0338);
static_assert(offsetof(USaveLoadMenu_BP_C, Outro) == 0x03D8);
static_assert(offsetof(USaveLoadMenu_BP_C, Intro) == 0x03E0);
static_assert(offsetof(USaveLoadMenu_BP_C, BackgroundPanelWidget) == 0x03E8);
static_assert(offsetof(UPauseMenu_C, UberGraphFrame) == 0x0370);
static_assert(offsetof(UPauseMenu_C, Background1_BP) == 0x0378);
static_assert(offsetof(UPauseMenu_C, LoadGameText) == 0x0380);
static_assert(offsetof(UPauseMenu_C, MainMenuText) == 0x0388);
static_assert(offsetof(UPauseMenu_C, QuitText) == 0x0390);
static_assert(offsetof(UPauseMenu_C, ResumeText) == 0x0398);
static_assert(offsetof(UPauseMenu_C, SaveGameText) == 0x03A0);
static_assert(offsetof(UPauseMenu_C, SavingWidget_BP) == 0x03A8);
static_assert(offsetof(UPauseMenu_C, SettingsText) == 0x03B0);
static_assert(offsetof(UWaitTime_BP_C, Background1_BP) == 0x03A0);
static_assert(offsetof(UWaitTime_BP_C, InvalidationBox) == 0x03A8);
static_assert(offsetof(AIndianaUI_BP_C, UberGraphFrame) == 0x0690);
static_assert(offsetof(AIndianaUI_BP_C, DefaultSceneRoot) == 0x0698);
static_assert(offsetof(USavingWidget_BP_C, FadeOut) == 0x0320);
static_assert(offsetof(USavingWidget_BP_C, FadeIn) == 0x0328);
static_assert(offsetof(USavingWidget_BP_C, SavingImageBacking) == 0x0330);
static_assert(offsetof(USavingWidget_BP_C, SavingImageForeground) == 0x0338);
static_assert(offsetof(USavingWidget_BP_C, SavingImageRotating) == 0x0340);
static_assert(offsetof(USavingSpinnerWidget_BP_C, SavingImageBacking) == 0x0300);
static_assert(offsetof(USavingSpinnerWidget_BP_C, SavingImageForeground) == 0x0308);
static_assert(offsetof(USavingSpinnerWidget_BP_C, SavingImageRotating) == 0x0310);
static_assert(offsetof(UMainOptions_BP_C, UberGraphFrame) == 0x03E0);
static_assert(offsetof(UMainOptions_BP_C, ChangeProfileText) == 0x03E8);
static_assert(offsetof(UMainOptions_BP_C, ContinueText) == 0x03F0);
static_assert(offsetof(UMainOptions_BP_C, CreditsText) == 0x03F8);
static_assert(offsetof(UMainOptions_BP_C, DeliverablesText) == 0x0400);
static_assert(offsetof(UMainOptions_BP_C, ExtrasText) == 0x0408);
static_assert(offsetof(UMainOptions_BP_C, LoadSaveText) == 0x0410);
static_assert(offsetof(UMainOptions_BP_C, NewGameText) == 0x0418);
static_assert(offsetof(UMainOptions_BP_C, QuitText) == 0x0420);
static_assert(offsetof(UMainOptions_BP_C, SettingsText) == 0x0428);
static_assert(offsetof(ULevelSelectOptions_BP_C, OptionsContainer) == 0x0338);
static_assert(offsetof(UGammaSelection_BP_C, Outro) == 0x0370);
static_assert(offsetof(UGammaSelection_BP_C, Intro) == 0x0378);
static_assert(offsetof(UGammaSelection_BP_C, BackgroundPanelWidget) == 0x0380);
static_assert(offsetof(UGammaSelection_BP_C, GammaImage) == 0x0388);
static_assert(offsetof(UGammaSelection_BP_C, RootCanvas) == 0x0390);
static_assert(offsetof(UMainMenu_C, UberGraphFrame) == 0x03F8);
static_assert(offsetof(UMainMenu_C, FadeInGammaSelection) == 0x0400);
static_assert(offsetof(UMainMenu_C, AutosaveSplashAnimation) == 0x0408);
static_assert(offsetof(UMainMenu_C, FadeInKeyPress) == 0x0410);
static_assert(offsetof(UMainMenu_C, FadeInLogo) == 0x0418);
static_assert(offsetof(UMainMenu_C, FadeOutLogo) == 0x0420);
static_assert(offsetof(UMainMenu_C, KeyPressFadeLowAnim) == 0x0428);
static_assert(offsetof(UMainMenu_C, FadeOutOptionsMenu) == 0x0430);
static_assert(offsetof(UMainMenu_C, Image) == 0x0438);
static_assert(offsetof(UMainMenu_C, LogoImage) == 0x0440);
static_assert(offsetof(UMainMenu_C, SavingSpinnerWidget) == 0x0448);
static_assert(offsetof(UMainMenu_C, SavingWidget_BP) == 0x0450);
static_assert(offsetof(UMainMenu_C, NewVar) == 0x0458);
static_assert(offsetof(UInputLabelHoldSmall_BP_C, UberGraphFrame) == 0x03B8);
static_assert(offsetof(UInputLabelHoldSmall_BP_C, KeyBackingIcon) == 0x03C0);
static_assert(offsetof(UInputLabelHoldSmall_BP_C, GamepadRadialMaterial) == 0x03C8);
static_assert(offsetof(UInputLabelHoldSmall_BP_C, KeyRadialMaterial) == 0x03D0);
static_assert(offsetof(UCompanionEquipmentBarWidget_C, Item0) == 0x0470);
static_assert(offsetof(UCompanionEquipmentBarWidget_C, Item1) == 0x0478);
static_assert(offsetof(UCompanionEquipmentBarWidget_C, Item2) == 0x0480);
static_assert(offsetof(UCompanionEquipmentBarWidget_C, Item3) == 0x0488);
static_assert(offsetof(UStatsPerkListRow_BP_C, PerkAnchor) == 0x0428);
static_assert(offsetof(UStatsPerkList_BP_C, PerkRowLineBreakFour) == 0x0360);
static_assert(offsetof(UStatsPerkList_BP_C, PerkRowLineBreakOne) == 0x0368);
static_assert(offsetof(UStatsPerkList_BP_C, PerkRowLineBreakThree) == 0x0370);
static_assert(offsetof(UStatsPerkList_BP_C, PerkRowLineBreakTwo) == 0x0378);
static_assert(offsetof(UStatsPerkList_BP_C, PerkVerticalBox) == 0x0380);
static_assert(offsetof(UStatsPerkSummaryEntry_BP1_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UCompanionDetails_BP_C, BackgroundSplitPanelWidget) == 0x0318);
static_assert(offsetof(UCompanionDetails_BP_C, BodyScrollBox) == 0x0320);
static_assert(offsetof(UCompanionStats_BP_C, BackgroundPanelWidget) == 0x03B0);
static_assert(offsetof(UCompanionStats_BP_C, BackgroundPanelWidget0) == 0x03B8);
static_assert(offsetof(UCompanionPerks_BP_C, BackgroundPanelWidget) == 0x03B8);
static_assert(offsetof(UCompanionPerks_BP_C, BackgroundPanelWidget0) == 0x03C0);
static_assert(offsetof(UCompanionPerks_BP_C, DynamicBacking) == 0x03C8);
static_assert(offsetof(UCompanionPerks_BP_C, StaticBacking) == 0x03D0);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, UberGraphFrame) == 0x0360);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, FadeOpacity) == 0x0368);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, BorderBottom) == 0x0370);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, BorderInnerBottom) == 0x0378);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, BorderInnerTop) == 0x0380);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, BorderTop) == 0x0388);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, NamedSlot) == 0x0390);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, OuterTopBrush) == 0x0398);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, InnerTopBrush) == 0x0420);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, OuterBottomBrush) == 0x04A8);
static_assert(offsetof(UBackgroundSplitPanelWidget_C, InnerBotttomBrush) == 0x0530);
static_assert(offsetof(UDerivedStat_BP_C, UberGraphFrame) == 0x0328);
static_assert(offsetof(UCharacterStatusEffectEntry_BP_C, UberGraphFrame) == 0x0328);
static_assert(offsetof(UStatsFlawSummaryEntry_BP_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UCharacterDerivedStats_BP_C, ContentVerticalBox) == 0x0378);
static_assert(offsetof(UReputationProgress_BP_C, UberGraphFrame) == 0x0298);
static_assert(offsetof(UReputationProgress_BP_C, Fill) == 0x02A0);
static_assert(offsetof(UReputationProgress_BP_C, IndianaColor) == 0x02A8);
static_assert(offsetof(UReputationEntry_BP1_C, UberGraphFrame) == 0x0330);
static_assert(offsetof(UReputationDetails_BP_C, DescriptionTextBlock) == 0x0360);
static_assert(offsetof(UReputationDetails_BP_C, EffectsTextBlock) == 0x0368);
static_assert(offsetof(UReputationDetails_BP_C, TextBlockBase) == 0x0370);
static_assert(offsetof(UStatsPerkListEntry_BP_C, UberGraphFrame) == 0x0368);
static_assert(offsetof(UStatsPerkListEntry_BP_C, Pip3Flashing) == 0x0370);
static_assert(offsetof(UStatsPerkListEntry_BP_C, Pip2Flashing) == 0x0378);
static_assert(offsetof(UStatsPerkListEntry_BP_C, Pip1Flashing) == 0x0380);
static_assert(offsetof(UPlayerPerkListRow_BP_C, PerkAnchor) == 0x0428);
static_assert(offsetof(UPlayerPerkList_BP_C, PerkRowLineBreakOne) == 0x0360);
static_assert(offsetof(UPlayerPerkList_BP_C, PerkRowLineBreakTwo) == 0x0368);
static_assert(offsetof(UPlayerPerkList_BP_C, PerkVerticalBox) == 0x0370);
static_assert(offsetof(UCharacterDescriptionPanel_BP_C, AttributeEffectImage) == 0x0368);
static_assert(offsetof(UStatsSkillsPage_BP_C, BackgroundPanelWidget) == 0x04A0);
static_assert(offsetof(UStatsSkillsPage_BP_C, BackgroundPanelWidget0) == 0x04A8);
static_assert(offsetof(UStatsPerksPage_BP_C, BackgroundPanelWidget) == 0x03E8);
static_assert(offsetof(UStatsPerksPage_BP_C, BackgroundPanelWidget0) == 0x03F0);
static_assert(offsetof(UStatsPerksPage_BP_C, DynamicBacking) == 0x03F8);
static_assert(offsetof(UCharacterDetails_BP_C, BackgroundPanelWidget) == 0x0338);
static_assert(offsetof(UCharacterDetails_BP_C, BackgroundPanelWidget0) == 0x0340);
static_assert(offsetof(UCharacterDetails_BP_C, BackgroundPanelWidget1) == 0x0348);
static_assert(offsetof(UCharacterDetails_BP_C, BackgroundPanelWidget_C) == 0x0350);
static_assert(offsetof(UPlayerEntry_BP_C, Image) == 0x0300);
static_assert(offsetof(UFloorLevelIndicator_BP_C, BackgroundPanelWidget) == 0x03C0);
static_assert(offsetof(UGenericNotificationEntry_BP_C, UberGraphFrame) == 0x0440);
static_assert(offsetof(UGenericNotificationEntry_BP_C, FadeIn) == 0x0448);
static_assert(offsetof(UGenericNotificationEntry_BP_C, FadeOut) == 0x0450);
static_assert(offsetof(UTTDStatusEffectsWidget_BP_C, StatusEffectTagEntry_BP) == 0x0318);
static_assert(offsetof(UCauseDamageReticle_BP_C, UberGraphFrame) == 0x0338);
static_assert(offsetof(UCauseDamageReticle_BP_C, KillAnim) == 0x0340);
static_assert(offsetof(UCauseDamageReticle_BP_C, WeakAnim) == 0x0348);
static_assert(offsetof(UCauseDamageReticle_BP_C, HitAnim) == 0x0350);
static_assert(offsetof(UWeaponRadialSection_BP_C, UberGraphFrame) == 0x0298);
static_assert(offsetof(UDifficultySelect_BP_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(UDifficultySelect_BP_C, Transition) == 0x0488);
static_assert(offsetof(UDifficultySelect_BP_C, BackgroundPanelWidget) == 0x0490);
static_assert(offsetof(UDifficultySelect_BP_C, BackgroundPanelWidget_C) == 0x0498);
static_assert(offsetof(UDifficultySelect_BP_C, ConversationHeaderTextblock) == 0x04A0);
static_assert(offsetof(UDifficultySelect_BP_C, DifficultyHeaderTextBlock) == 0x04A8);
static_assert(offsetof(UDifficultySelect_BP_C, Image) == 0x04B0);
static_assert(offsetof(UDifficultySelect_BP_C, SelectDifficultyPanel_SizeBox) == 0x04B8);
static_assert(offsetof(UDifficultySelect_BP_C, SubtitleSettingsPanel_SizeBox) == 0x04C0);
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase) == 0x04C8);
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase0) == 0x04D0);
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase1) == 0x04D8);
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase2) == 0x04E0);
static_assert(offsetof(USettingsMenuKeyRebind_BP_C, UberGraphFrame) == 0x0360);
static_assert(offsetof(USettingsMenuKeyRebind_BP_C, Image) == 0x0368);
static_assert(offsetof(UButton_Ledger_Header_SubContainer_BP_C, UberGraphFrame) == 0x02B0);
static_assert(offsetof(UCompanionMoveTo_BP_C, UberGraphFrame) == 0x0308);
static_assert(offsetof(UCompanionMoveTo_BP_C, IntroOutro) == 0x0310);
static_assert(offsetof(UCompanionMoveTo_BP_C, Idle) == 0x0318);
static_assert(offsetof(UCompanionMoveTo_BP_C, MoveToImage) == 0x0320);
static_assert(offsetof(UStatusTag_BP_C, UberGraphFrame) == 0x0400);
static_assert(offsetof(UStatusTag_BP_C, FadeOutTarget) == 0x0408);
static_assert(offsetof(UStatusTag_BP_C, FadeInTarget) == 0x0410);
static_assert(offsetof(UStatusTag_BP_C, InvalidationBox) == 0x0418);
static_assert(offsetof(USubtitle_BP_C, LeftTopImageInst) == 0x0470);
static_assert(offsetof(USubtitle_BP_C, RightTopImageInst) == 0x0478);
static_assert(offsetof(USubtitle_BP_C, LeftBotImageInst) == 0x0480);
static_assert(offsetof(USubtitle_BP_C, RightBotImageInst) == 0x0488);
static_assert(offsetof(UMapTransitionNotification_BP_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UMapTransitionNotification_BP_C, AreaNameFadeInOut) == 0x0320);
static_assert(offsetof(UNewSave_BP_C, UberGraphFrame) == 0x0288);
static_assert(offsetof(UNewSave_BP_C, Border) == 0x0290);
static_assert(offsetof(URadial_BP_C, UberGraphFrame) == 0x0440);
static_assert(offsetof(URadial_BP_C, DMI) == 0x0448);
static_assert(offsetof(UStackSplitting_BP_C, UberGraphFrame) == 0x04C8);
static_assert(offsetof(UStackSplitting_BP_C, FadeIn) == 0x04D0);
static_assert(offsetof(UStackSplitting_BP_C, BackingBot) == 0x04D8);
static_assert(offsetof(UStackSplitting_BP_C, BackingTop) == 0x04E0);
static_assert(offsetof(UStackSplitting_BP_C, Frame) == 0x04E8);
static_assert(offsetof(UStackSplitting_BP_C, Image) == 0x04F0);
static_assert(offsetof(UStackSplitting_BP_C, Image0) == 0x04F8);
static_assert(offsetof(UStackSplitting_BP_C, BackingBotInst) == 0x0500);
static_assert(offsetof(UButton_Ledger_Header_Container_BP_C, UberGraphFrame) == 0x02B0);
static_assert(offsetof(UItemRepair_BP_C, Background) == 0x03A8);
static_assert(offsetof(UInputLabelSmall_BP_C, RadialMaterial) == 0x0370);
static_assert(offsetof(UItemViewer_BP_C, UberGraphFrame) == 0x0650);
static_assert(offsetof(UItemViewer_BP_C, Image) == 0x0658);
static_assert(offsetof(UItemViewer_BP_C, Image0) == 0x0660);
static_assert(offsetof(UItemViewer_BP_C, Image1) == 0x0668);
static_assert(offsetof(UItemViewer_BP_C, Image2) == 0x0670);
static_assert(offsetof(UWBModificationPage_BP_C, NewAnimation) == 0x0428);
static_assert(offsetof(UWBModificationPage_BP_C, ActionInputLabelMod) == 0x0430);
static_assert(offsetof(UWBModificationPage_BP_C, PagesSizeBox) == 0x0438);
static_assert(offsetof(UPlayerStats_BP_C, UberGraphFrame) == 0x0348);
static_assert(offsetof(UPlayerStats_BP_C, XPBarFill) == 0x0350);
static_assert(offsetof(UPlayerStats_BP_C, XPBarFillMat) == 0x0358);
static_assert(offsetof(UButtonWorkbenchHeaderContainer_BP_C, UberGraphFrame) == 0x02B0);
static_assert(offsetof(UVendorWidget_BP_C, UberGraphFrame) == 0x0620);
static_assert(offsetof(UVendorWidget_BP_C, PurchaseAnimation) == 0x0628);
static_assert(offsetof(UVendorWidget_BP_C, FactionImageFadeIn) == 0x0630);
static_assert(offsetof(UVendorWidget_BP_C, Background) == 0x0638);
static_assert(offsetof(UVendorWidget_BP_C, FlavorTextWidget) == 0x0640);
static_assert(offsetof(UVendorWidget_BP_C, Image) == 0x0648);
static_assert(offsetof(UVendorWidget_BP_C, Image0) == 0x0650);
static_assert(offsetof(UVendorWidget_BP_C, Image1) == 0x0658);
static_assert(offsetof(UVendorWidget_BP_C, PageAnchorLeft) == 0x0660);
static_assert(offsetof(UVendorWidget_BP_C, PageAnchorRight) == 0x0668);
static_assert(offsetof(UVendorWidget_BP_C, PurchaseAnim1) == 0x0670);
static_assert(offsetof(UVendorWidget_BP_C, PurchaseAnim2) == 0x0678);
static_assert(offsetof(UVendorWidget_BP_C, Smoke) == 0x0680);
static_assert(offsetof(UVendorWidget_BP_C, Smoke_Behind) == 0x0688);
static_assert(offsetof(UVendorWidget_BP_C, SurvivalBar) == 0x0690);
static_assert(offsetof(UItemTransfer_BP_C, Background) == 0x03D0);
static_assert(offsetof(UItemTransfer_BP_C, RetainerBox) == 0x03D8);
static_assert(offsetof(UItemTransfer_BP_C, RetainerBox0) == 0x03E0);
static_assert(offsetof(UItemTransfer_BP_C, SurvivalBar) == 0x03E8);
static_assert(offsetof(UItemToolTip_BP_C, UberGraphFrame) == 0x04F8);
static_assert(offsetof(UItemToolTip_BP_C, FadeIn) == 0x0500);
static_assert(offsetof(UItemToolTip_BP_C, BorderBackerImage) == 0x0508);
static_assert(offsetof(UItemToolTip_BP_C, ConditionImage) == 0x0510);
static_assert(offsetof(UItemToolTip_BP_C, ValueImage) == 0x0518);
static_assert(offsetof(UItemToolTip_BP_C, WeightImage) == 0x0520);
static_assert(offsetof(UItemToolTip_BP_C, ScienceBackerBrush) == 0x0528);
static_assert(offsetof(UItemToolTip_BP_C, UniqueBackerBrush) == 0x05B0);
static_assert(offsetof(UItemToolTip_BP_C, NoBackerBrush) == 0x0638);
static_assert(offsetof(UItemInspector_BP_C, UberGraphFrame) == 0x0388);
static_assert(offsetof(UItemInspector_BP_C, FadeOut) == 0x0390);
static_assert(offsetof(UItemInspector_BP_C, Background) == 0x0398);
static_assert(offsetof(UItemInspector_BP_C, ButtonBorder) == 0x03A0);
static_assert(offsetof(UItemInspector_BP_C, NameVerticalBox) == 0x03A8);
static_assert(offsetof(UItemContainer_BP_C, UberGraphFrame) == 0x0368);
static_assert(offsetof(UItemContainer_BP_C, Outro) == 0x0370);
static_assert(offsetof(UItemContainer_BP_C, Intro) == 0x0378);
static_assert(offsetof(UItemContainer_BP_C, Image) == 0x0380);
static_assert(offsetof(UInventoryMaster_BP_C, PagesSizeBox) == 0x04B8);
static_assert(offsetof(UHealthKitTooltip_BP_C, FadeIn) == 0x03B0);
static_assert(offsetof(UHealthKitTooltip_BP_C, BrandImage) == 0x03B8);
static_assert(offsetof(UExaminableWidget_BP_C, Background1_BP) == 0x0350);
static_assert(offsetof(UExaminableWidget_BP_C, Image) == 0x0358);
static_assert(offsetof(UDialogBoxWarning_BP_C, UberGraphFrame) == 0x0368);
static_assert(offsetof(UDialogBoxWarning_BP_C, FadeIn) == 0x0370);
static_assert(offsetof(UDialogBoxWarning_BP_C, Background1_BP) == 0x0378);
static_assert(offsetof(UDialogBoxWarning_BP_C, Image) == 0x0380);
static_assert(offsetof(UDeathMenu_C, UberGraphFrame) == 0x0360);
static_assert(offsetof(UDeathMenu_C, Background1_BP) == 0x0368);
static_assert(offsetof(UDeathMenu_C, ContinueText) == 0x0370);
static_assert(offsetof(UDeathMenu_C, LoadText) == 0x0378);
static_assert(offsetof(UDeathMenu_C, MainMenuText) == 0x0380);
static_assert(offsetof(UDeathMenu_C, QuitText) == 0x0388);
static_assert(offsetof(UDeathMenu_C, ResurrectText) == 0x0390);
static_assert(offsetof(UDeathMenu_C, SettingsText) == 0x0398);
static_assert(offsetof(UGenericListEntryWidget_BP_C, UberGraphFrame) == 0x0330);
static_assert(offsetof(UGenericListEntryWidget_BP_C, RightTextJustification) == 0x0338);
static_assert(offsetof(UGenericListEntry_BP_C, UberGraphFrame) == 0x02A0);
static_assert(offsetof(UQuestObjectiveTitle_BP_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(USkillGroupDetail_BP_C, UberGraphFrame) == 0x02B8);
static_assert(offsetof(USkillGroupDetail_BP_C, SelectedAnimation3) == 0x02C0);
static_assert(offsetof(USkillGroupDetail_BP_C, SelectedAnimation2) == 0x02C8);
static_assert(offsetof(UPointOfInterestTooltip_BP_C, FrameBorder) == 0x0308);
static_assert(offsetof(UFastTravelTooltip_BP_C, FrameBorder) == 0x0310);
static_assert(offsetof(USelectedNotificationWidget_BP_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(USelectedNotificationWidget_BP_C, InstantFadeIn) == 0x0320);
static_assert(offsetof(USelectedNotificationWidget_BP_C, FadeOut) == 0x0328);
static_assert(offsetof(USelectedNotificationWidget_BP_C, FadeRight) == 0x0330);
static_assert(offsetof(AActorStage_BP_Base_C, VisualizerCamera) == 0x0380);
static_assert(offsetof(AActorStage_BP_Base_C, VisualizerAttachPoint) == 0x0388);
static_assert(offsetof(AActorStage_BP_Base_C, Chroma) == 0x0390);
static_assert(offsetof(AItemStage_BP_C, SpotLight) == 0x0398);
static_assert(offsetof(AItemStage_BP_C, PointLight) == 0x03A0);
static_assert(offsetof(AItemStage_BP_C, Box) == 0x03A8);
static_assert(offsetof(AItemStage_BP_C, SpotLightLeft) == 0x03B0);
static_assert(offsetof(AItemStage_BP_C, SpotLightRight) == 0x03B8);
static_assert(offsetof(AItemStage_BP_C, SpotLightRear) == 0x03C0);
static_assert(offsetof(AItemStage_BP_C, LightingVolume) == 0x03C8);
static_assert(offsetof(UAbilityOverDetail_Ability_BP_C, UberGraphFrame) == 0x0400);
static_assert(offsetof(UAbilityOverDetail_Ability_BP_C, HoldArtGamepad) == 0x0408);
static_assert(offsetof(UAbilityOverDetail_Ability_BP_C, HoldArtPC) == 0x0410);
static_assert(offsetof(UAbilityOverDetail_Ability_BP_C, RadialMaterial) == 0x0418);
static_assert(offsetof(UQuestObjective_BP_C, UberGraphFrame) == 0x0290);
static_assert(offsetof(UStatusEffectBarEntry_BP_C, UberGraphFrame) == 0x0320);
static_assert(offsetof(UStatusEffectBarEntry_BP_C, AnimateContentsOut) == 0x0328);
static_assert(offsetof(UStatusEffectBarEntry_BP_C, AnimateContentsIn) == 0x0330);
static_assert(offsetof(UStatusEffectBarEntry_BP_C, DisplayParent) == 0x0338);
static_assert(offsetof(UStatusEffectBar_BP_C, StatusBarImage) == 0x0398);
static_assert(offsetof(UCompassEntry_BP_C, UberGraphFrame) == 0x02A0);
static_assert(offsetof(UCompassEntry_BP_C, InvalidationBox) == 0x02A8);
static_assert(offsetof(UItemDegradationEntry_BP_C, UberGraphFrame) == 0x0320);
static_assert(offsetof(UItemDegradationEntry_BP_C, SevereDamgeAnim) == 0x0328);
static_assert(offsetof(UItemDegradationEntry_BP_C, IntroDamagedAnim) == 0x0330);
static_assert(offsetof(UItemDegradationEntry_BP_C, InnerCircle) == 0x0338);
static_assert(offsetof(UItemDegradationEntry_BP_C, OuterCircle) == 0x0340);
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, UberGraphFrame) == 0x0338);
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, OutroAnim) == 0x0340);
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, IntroAnim) == 0x0348);
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, OnObjectiveFailed) == 0x0350);
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, OnObjectiveCompleted) == 0x0358);
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, ObjectiveFailedImage) == 0x0360);
static_assert(offsetof(UQuestLogEntry_BP_C, UberGraphFrame) == 0x0330);
static_assert(offsetof(UQuestLogEntry_BP_C, QuestUpdated) == 0x0338);
static_assert(offsetof(UQuestLogEntry_BP_C, FadeOutQuestName) == 0x0340);
static_assert(offsetof(UQuestLogEntry_BP_C, FadeInQuestName) == 0x0348);
static_assert(offsetof(UQuestLogEntry_BP_C, QuestFail) == 0x0350);
static_assert(offsetof(UQuestLogEntry_BP_C, QuestComplete) == 0x0358);
static_assert(offsetof(UWeaponRadialBackgroundSection_BP_C, UberGraphFrame) == 0x0320);
static_assert(offsetof(UWeaponRadialBackgroundSection_BP_C, FadeOutHighlight) == 0x0328);
static_assert(offsetof(UQuestAddendum_BP_C, UberGraphFrame) == 0x0308);
static_assert(offsetof(UQuestAddendum_BP_C, Button) == 0x0310);
static_assert(offsetof(UHumanDummy_UI_Animation_C, UberGraphFrame) == 0x0580);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_Root) == 0x0588);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_RandomSequenceNamed) == 0x05B8);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_ComponentToLocalSpace) == 0x0640);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_RandomSequenceNamed0) == 0x0660);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_BlendListByBool) == 0x06E8);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_LocalToComponentSpace) == 0x0788);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_Slot) == 0x07A8);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_TwoBoneIK) == 0x07F0);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_LegIK) == 0x09D0);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_TwoBoneIK1) == 0x0AD0);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_TwoBoneIK2) == 0x0CB0);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_BatchJointDriver) == 0x0E90);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_BatchModify) == 0x1070);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_TransitionResult) == 0x1148);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_TransitionResult3) == 0x1170);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_TransitionResult4) == 0x1198);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_TransitionResult5) == 0x11C0);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_SequencePlayer) == 0x11E8);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_StateResult) == 0x1268);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_SequencePlayer6) == 0x1298);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_StateResult7) == 0x1318);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_SequencePlayer8) == 0x1348);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_StateResult9) == 0x13C8);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_StateMachine) == 0x13F8);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_SaveCachedPose) == 0x14A8);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_UseCachedPose) == 0x1600);
static_assert(offsetof(UHumanDummy_UI_Animation_C, AnimGraphNode_BlendListByEnum) == 0x1628);
static_assert(offsetof(UStatusTagAwarenessWidget_BP_C, UberGraphFrame) == 0x03C8);
static_assert(offsetof(UStatusTagAwarenessWidget_BP_C, MaterialInstance) == 0x03D0);
static_assert(offsetof(UWeaponSelect_BP_C, UberGraphFrame) == 0x0490);
static_assert(offsetof(UWeaponSelect_BP_C, FadeOutAmmoBackground) == 0x0498);
static_assert(offsetof(UWeaponSelect_BP_C, FadeOutWeaponBackground) == 0x04A0);
static_assert(offsetof(UWeaponSelect_BP_C, IntroOutro) == 0x04A8);
static_assert(offsetof(UWeaponSelect_BP_C, AmmoBackground) == 0x04B0);
static_assert(offsetof(UWeaponSelect_BP_C, Background) == 0x04B8);
static_assert(offsetof(UWeaponSelect_BP_C, Border) == 0x04C0);
static_assert(offsetof(UWeaponSelect_BP_C, BulbOff) == 0x04C8);
static_assert(offsetof(UWeaponSelect_BP_C, BulbOn) == 0x04D0);
static_assert(offsetof(UWeaponSelect_BP_C, InnerCircle) == 0x04D8);
static_assert(offsetof(UWeaponSelect_BP_C, InnerCircle2) == 0x04E0);
static_assert(offsetof(UWeaponSelect_BP_C, InvalidationBox) == 0x04E8);
static_assert(offsetof(UWeaponSelect_BP_C, OrientatorVerticalBox) == 0x04F0);
static_assert(offsetof(UWeaponSelect_BP_C, WeaponBackground) == 0x04F8);
static_assert(offsetof(UWeaponSelect_BP_C, WeaponHighlight) == 0x0500);
static_assert(offsetof(UWeaponSelect_BP_C, BackgroundSections) == 0x0508);
static_assert(offsetof(UWeaponSelect_BP_C, WeaponBackgroundSections) == 0x0518);
static_assert(offsetof(UWeaponSelect_BP_C, AmmoBackgroundSections) == 0x0530);
static_assert(offsetof(UReticle_BP_C, UberGraphFrame) == 0x03A0);
static_assert(offsetof(UReticle_BP_C, ShrinkInnards) == 0x03A8);
static_assert(offsetof(UReticle_BP_C, GrowInnards) == 0x03B0);
static_assert(offsetof(UReticle_BP_C, Image) == 0x03B8);
static_assert(offsetof(UReticle_BP_C, Image0) == 0x03C0);
static_assert(offsetof(UReticle_BP_C, InvalidationBox) == 0x03C8);
static_assert(offsetof(UReticle_BP_C, InvalidationBox1) == 0x03D0);
static_assert(offsetof(UReticle_BP_C, TTDFill) == 0x03D8);
static_assert(offsetof(UReticle_BP_C, TTDFillMat) == 0x03E0);
static_assert(offsetof(UReticle_BP_C, RezCooldownMat) == 0x03E8);
static_assert(offsetof(UQuestLog_BP_C, UberGraphFrame) == 0x03C0);
static_assert(offsetof(UQuestLog_BP_C, FadeOut) == 0x03C8);
static_assert(offsetof(UQuestLog_BP_C, FadeIn) == 0x03D0);
static_assert(offsetof(UQuestLog_BP_C, ContentBorderMat) == 0x03D8);
static_assert(offsetof(UInputGuide_BP_C, UberGraphFrame) == 0x0478);
static_assert(offsetof(UInputGuide_BP_C, LittleRedCircleCounterClockwise) == 0x0480);
static_assert(offsetof(UInputGuide_BP_C, RedCircleClockwise) == 0x0488);
static_assert(offsetof(UInputGuide_BP_C, IntroOutro) == 0x0490);
static_assert(offsetof(UInputGuide_BP_C, Arrow13_Mid) == 0x0498);
static_assert(offsetof(UInputGuide_BP_C, Arrow2_Left) == 0x04A0);
static_assert(offsetof(UInputGuide_BP_C, Arrow2_Right) == 0x04A8);
static_assert(offsetof(UInputGuide_BP_C, Arrow3_Left) == 0x04B0);
static_assert(offsetof(UInputGuide_BP_C, Arrow3_Right) == 0x04B8);
static_assert(offsetof(UInputGuide_BP_C, InvalidationBox) == 0x04C0);
static_assert(offsetof(UInputGuide_BP_C, RootBorder) == 0x04C8);
static_assert(offsetof(UInputGuide_BP_C, RotatingLittleRedCircle) == 0x04D0);
static_assert(offsetof(UInputGuide_BP_C, InteractionMat) == 0x04E0);
static_assert(offsetof(UInputGuide_BP_C, RadialMaterial) == 0x04E8);
static_assert(offsetof(UGenericNotification_BP_C, UberGraphFrame) == 0x0460);
static_assert(offsetof(UGenericNotification_BP_C, FadeOut) == 0x0468);
static_assert(offsetof(UGenericNotification_BP_C, FadeIn) == 0x0470);
static_assert(offsetof(UGenericNotification_BP_C, ContentContainer) == 0x0478);
static_assert(offsetof(UGenericNotification_BP_C, ContentContainerMat) == 0x0480);
static_assert(offsetof(UDisguiseWidget_BP_C, UberGraphFrame) == 0x0430);
static_assert(offsetof(UDisguiseWidget_BP_C, FadeOutTip) == 0x0438);
static_assert(offsetof(UDisguiseWidget_BP_C, FadeInTip) == 0x0440);
static_assert(offsetof(UDisguiseWidget_BP_C, OnImageLoaded) == 0x0448);
static_assert(offsetof(UDisguiseWidget_BP_C, FadeOut) == 0x0450);
static_assert(offsetof(UDisguiseWidget_BP_C, FadeIn) == 0x0458);
static_assert(offsetof(UDisguiseWidget_BP_C, DisguiseCheck1) == 0x0460);
static_assert(offsetof(UDisguiseWidget_BP_C, DisguiseCheck2) == 0x0468);
static_assert(offsetof(UDisguiseWidget_BP_C, DisguiseCheck3) == 0x0470);
static_assert(offsetof(UDisguiseWidget_BP_C, DisguiseMeterTip) == 0x0478);
static_assert(offsetof(UDisguiseWidget_BP_C, DisguiseMeterTipAnim) == 0x0480);
static_assert(offsetof(UDisguiseWidget_BP_C, TipPurpleGlow) == 0x0488);
static_assert(offsetof(UDisguiseWidget_BP_C, DisguiseMeterMaterial) == 0x0490);
static_assert(offsetof(UCompanionOverview_BP_C, UberGraphFrame) == 0x03C0);
static_assert(offsetof(UCompanionOverview_BP_C, AnimateInOutStatusEffectBlock) == 0x03C8);
static_assert(offsetof(UCompanionOverview_BP_C, FadeInRootAnim) == 0x03D0);
static_assert(offsetof(UCompanionOverview_BP_C, BottomBarPiece) == 0x03D8);
static_assert(offsetof(UCompanionOverview_BP_C, RootAnimationContainer) == 0x03E0);
static_assert(offsetof(UCompanionOverview_BP_C, StatusEffectBlock) == 0x03E8);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, UberGraphFrame) == 0x05A0);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, FlickerCommandThree) == 0x05A8);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, FlickerCommandTwo) == 0x05B0);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, FlickerCommandOne) == 0x05B8);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, FlickerCommandFour) == 0x05C0);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, ActivationPulse) == 0x05C8);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, FadeInFadeOutAbilityOverview) == 0x05D0);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, FadeInFadeOutTTD) == 0x05D8);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, AbilityGamepadPanelImage) == 0x05E0);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, AbilityOverviewAnimationContainer) == 0x05E8);
static_assert(offsetof(UAbilityOverviewGamepad_BP_C, InvalidationBox) == 0x05F0);
static_assert(offsetof(UAbilityOverview_BP_C, UberGraphFrame) == 0x05A0);
static_assert(offsetof(UItemContainerList_BP_C, Image) == 0x03E8);
static_assert(offsetof(UItemContainerList_BP_C, Image0) == 0x03F0);
static_assert(offsetof(ACharacterStage_BP_C, SpotLight) == 0x0398);
static_assert(offsetof(ACharacterStage_BP_C, PointLight) == 0x03A0);
static_assert(offsetof(ACharacterStage_BP_C, SpotLightLeftTop) == 0x03A8);
static_assert(offsetof(ACharacterStage_BP_C, Arrow) == 0x03B0);
static_assert(offsetof(ACharacterStage_BP_C, CharacterCapsuleVisualizer) == 0x03B8);
static_assert(offsetof(ACharacterStage_BP_C, SpotLightRight) == 0x03C0);
static_assert(offsetof(ACharacterStage_BP_C, SpotLightRear) == 0x03C8);
static_assert(offsetof(ACharacterStage_BP_C, LightingVolume) == 0x03D0);
static_assert(offsetof(UItemModding_BP_C, UberGraphFrame) == 0x06B8);
static_assert(offsetof(UItemModding_BP_C, FadeOut) == 0x06C0);
static_assert(offsetof(UItemModding_BP_C, ActionInputLabelModify) == 0x06C8);
static_assert(offsetof(UItemModding_BP_C, Background) == 0x06D0);
static_assert(offsetof(UItemModding_BP_C, EquipmentDescriptionTextBlock) == 0x06D8);
static_assert(offsetof(UItemModding_BP_C, IconImage) == 0x06E0);
static_assert(offsetof(UItemModding_BP_C, Image) == 0x06E8);
static_assert(offsetof(UItemModding_BP_C, ModificationTitleTextBlock) == 0x06F0);
static_assert(offsetof(UItemModding_BP_C, PageAnchorLeft) == 0x06F8);
static_assert(offsetof(UItemModding_BP_C, PageAnchorRight) == 0x0700);
static_assert(offsetof(UItemModding_BP_C, Smoke) == 0x0708);
static_assert(offsetof(UItemModding_BP_C, Smoke_Behind) == 0x0710);
static_assert(offsetof(UItemModding_BP_C, SurvivalBar) == 0x0718);
static_assert(offsetof(UStatsAptitudeSummary_BP_C, UberGraphFrame) == 0x0290);
static_assert(offsetof(UStatsSummaryPage_BP_C, BackgroundPanelWidget) == 0x0340);
static_assert(offsetof(UStatsSummaryPage_BP_C, BackgroundPanelWidget0) == 0x0348);
static_assert(offsetof(UStatsSummaryPage_BP_C, BackgroundPanelWidget1) == 0x0350);
static_assert(offsetof(UGamepadSelector_BP_C, GamepadSelector) == 0x0278);
static_assert(offsetof(UStatsAttributeSummaryGroup_BP_C, UberGraphFrame) == 0x0290);
static_assert(offsetof(UStatsAttributeSummaryGroup_BP_C, TitleTextBlock) == 0x0298);
static_assert(offsetof(UStatsAttributeSummaryGroup_BP_C, Title) == 0x02A0);
static_assert(offsetof(UTerminalResponse_BP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UTerminalResponse_BP_C, CompanionContributedImage) == 0x02D8);
static_assert(offsetof(UTerminalResponse_BP_C, NearMissImage) == 0x02E0);
static_assert(offsetof(UTerminalResponse_BP_C, TextHorizontalBox) == 0x02E8);
static_assert(offsetof(UComputerTerminal_DefaultHeader_BP_C, UberGraphFrame) == 0x03E0);
static_assert(offsetof(UComputerTerminal_DefaultHeader_BP_C, FadeInLogo) == 0x03E8);
static_assert(offsetof(UStatsAttributeSummaryEntry_BP_C, UberGraphFrame) == 0x02B0);
static_assert(offsetof(UQuestListEntry_BP_C, UberGraphFrame) == 0x02E8);
static_assert(offsetof(USkillUnlockPanel_BP_C, Image) == 0x0318);
static_assert(offsetof(USkillUnlockPanel_BP_C, LeftFlourish) == 0x0320);
static_assert(offsetof(USkillUnlockPanel_BP_C, RightFlourish) == 0x0328);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillMeterBarTop) == 0x0330);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUnlock1) == 0x0338);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUnlock2) == 0x0340);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUnlock3) == 0x0348);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUnlock4) == 0x0350);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUnlock5) == 0x0358);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUnlock6) == 0x0360);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUnlocksBackgroundImage) == 0x0368);
static_assert(offsetof(USkillUnlockPanel_BP_C, SkillUpgradesText) == 0x0370);
static_assert(offsetof(UCharacterSkillsDescriptionPanel_BP_C, AttributeEffectImage) == 0x0378);
static_assert(offsetof(UCodexJournal_BP_C, BackgroundPanelWidget) == 0x03C8);
static_assert(offsetof(UCodexJournal_BP_C, BackgroundPanelWidget0) == 0x03D0);
static_assert(offsetof(UCodexJournal_BP_C, FlavorTextWidget) == 0x03D8);
static_assert(offsetof(UMapLegend_BP_C, BackgroundPanelWidget) == 0x0278);
static_assert(offsetof(UMapLegend_BP_C, Image) == 0x0280);
static_assert(offsetof(UMapLegend_BP_C, Image0) == 0x0288);
static_assert(offsetof(UMapLegend_BP_C, Image1) == 0x0290);
static_assert(offsetof(UMapLegend_BP_C, Image2) == 0x0298);
static_assert(offsetof(UMapLegend_BP_C, Image3) == 0x02A0);
static_assert(offsetof(UMapLegend_BP_C, Image4) == 0x02A8);
static_assert(offsetof(UMapLegend_BP_C, Image5) == 0x02B0);
static_assert(offsetof(UMapLegend_BP_C, Image6) == 0x02B8);
static_assert(offsetof(UMapLegend_BP_C, Image7) == 0x02C0);
static_assert(offsetof(UMapLegend_BP_C, Image8) == 0x02C8);
static_assert(offsetof(UBeaconTooltip_BP_C, FastTravelTextBlock) == 0x0300);
static_assert(offsetof(UBeaconTooltip_BP_C, FrameBorder) == 0x0308);
static_assert(offsetof(UBeaconTooltip_BP_C, RestrictionTextBlock) == 0x0310);
static_assert(offsetof(UDialogBoxKeybind_BP_C, UberGraphFrame) == 0x0390);
static_assert(offsetof(UDialogBoxKeybind_BP_C, FadeIn) == 0x0398);
static_assert(offsetof(UDialogBoxKeybind_BP_C, BackingBot) == 0x03A0);
static_assert(offsetof(UDialogBoxKeybind_BP_C, BackingTop) == 0x03A8);
static_assert(offsetof(UDialogBoxKeybind_BP_C, Frame) == 0x03B0);
static_assert(offsetof(UDialogBoxKeybind_BP_C, BackingBotInst) == 0x03B8);
static_assert(offsetof(UComputerTerminalContents_BP_C, LabelContainer) == 0x0418);
static_assert(offsetof(UConversationResponse_BP_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UConversationResponse_BP_C, NewAnimation) == 0x02D8);
static_assert(offsetof(UConversationResponse_BP_C, CompanionContributedImage) == 0x02E0);
static_assert(offsetof(UConversationResponse_BP_C, NearMissImage) == 0x02E8);
static_assert(offsetof(UConversationResponse_BP_C, TextHorizontalBox) == 0x02F0);
static_assert(offsetof(UTTDScanner_BP_C, UberGraphFrame) == 0x03C0);
static_assert(offsetof(UTTDScanner_BP_C, FadeOutContents) == 0x03C8);
static_assert(offsetof(UTTDScanner_BP_C, FadeInContents) == 0x03D0);
static_assert(offsetof(UTTDScanner_BP_C, FadeInFactionImage) == 0x03D8);
static_assert(offsetof(UTTDScanner_BP_C, Image) == 0x03E0);
static_assert(offsetof(UCharacterOverview_BP_C, Image) == 0x04F8);
static_assert(offsetof(UCharacterOverview_BP_C, Image0) == 0x0500);
static_assert(offsetof(UCharacterOverview_BP_C, TTDFrame) == 0x0508);
static_assert(offsetof(UCharacterOverview_BP_C, XPBacking) == 0x0510);
static_assert(offsetof(UCharacterOverview_BP_C, XPOverlay) == 0x0518);
static_assert(offsetof(UBossBar_BP_C, Hide) == 0x0380);
static_assert(offsetof(UBossBar_BP_C, Show) == 0x0388);
static_assert(offsetof(UAmmoReadout_BP_C, UberGraphFrame) == 0x03B0);
static_assert(offsetof(UConsumables_BP_C, HealthKitIcon) == 0x0570);
static_assert(offsetof(UConsumables_BP_C, Image) == 0x0578);
static_assert(offsetof(ULedgerMap_BP_C, BackerImage) == 0x06C0);
static_assert(offsetof(ULedgerMap_BP_C, MapLegend_BP) == 0x06C8);
static_assert(offsetof(UAudioLogWidget_BP_C, UberGraphFrame) == 0x0398);
static_assert(offsetof(UAudioLogWidget_BP_C, FadeOut) == 0x03A0);
static_assert(offsetof(UAudioLogWidget_BP_C, FadeIn) == 0x03A8);
static_assert(offsetof(USaveLoadDetail_BP_C, UberGraphFrame) == 0x03F8);
static_assert(offsetof(UTutorialPopupStyle_Simple_BP_C, UberGraphFrame) == 0x0400);
static_assert(offsetof(UTutorialPopupStyle_Simple_BP_C, MascotImageFadeIn) == 0x0408);
static_assert(offsetof(UTutorialPopupStyle_Simple_BP_C, Background) == 0x0410);
static_assert(offsetof(UTutorialPopupStyle_Simple_BP_C, ButtonHorizontalBox) == 0x0418);
static_assert(offsetof(UTutorialPopupStyle_Simple_BP_C, Frame) == 0x0420);
static_assert(offsetof(UTutorialPopupStyle_Simple_BP_C, InvalidationBox) == 0x0428);
static_assert(offsetof(UTutorialPopupStyle_Simple_BP_C, BackingBotInst) == 0x0430);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, UberGraphFrame) == 0x0400);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, MascotImageFadeIn) == 0x0408);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, BackingBotLeft) == 0x0410);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, BackingBotRight) == 0x0418);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, BackingFill) == 0x0420);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, BackingTopLeft) == 0x0428);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, BackingTopRight) == 0x0430);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, Image) == 0x0438);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, Image0) == 0x0440);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, InvalidationBox) == 0x0448);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, OfferButtonContainerBox) == 0x0450);
static_assert(offsetof(UTutorialPopupStyle_Corporate_BP_C, BackingBotInst) == 0x0458);
static_assert(offsetof(UInventoryItem_BP_C, UberGraphFrame) == 0x0370);
static_assert(offsetof(UInventoryItem_BP_C, MakeImageBigAgain) == 0x0378);
static_assert(offsetof(UInventoryItem_BP_C, Image) == 0x0380);
static_assert(offsetof(UInventoryItem_BP_C, ModCategoryImage) == 0x0388);
static_assert(offsetof(UInventoryItem_BP_C, DamageClassTextures) == 0x0390);
static_assert(offsetof(UInventoryItem_BP_C, DamageClassHighlightedTextures) == 0x03E0);
static_assert(offsetof(UInventoryItem_BP_C, PlayDirectionToUse) == 0x0430);
static_assert(offsetof(UInventoryItem_BP_C, ElementToUse) == 0x0438);
static_assert(offsetof(UInventoryItem_BP_C, MapToUse) == 0x0440);
static_assert(offsetof(ULedger_BP_C, UberGraphFrame) == 0x0418);
static_assert(offsetof(ULedger_BP_C, FadeInCompanionItemViewer) == 0x0420);
static_assert(offsetof(ULedger_BP_C, FadeOutCharacter) == 0x0428);
static_assert(offsetof(ULedger_BP_C, FadeInCharacter) == 0x0430);
static_assert(offsetof(ULedger_BP_C, Outro) == 0x0438);
static_assert(offsetof(ULedger_BP_C, Intro) == 0x0440);
static_assert(offsetof(ULedger_BP_C, Fade) == 0x0448);
static_assert(offsetof(ULedger_BP_C, Background) == 0x0450);
static_assert(offsetof(ULedger_BP_C, Edge) == 0x0458);
static_assert(offsetof(ULedger_BP_C, PageAnchor1_BP_C) == 0x0460);
static_assert(offsetof(ULedger_BP_C, PageAnchor2_BP_C) == 0x0468);
static_assert(offsetof(ULedger_BP_C, RootCanvas) == 0x0470);
static_assert(offsetof(ULedger_BP_C, Smoke) == 0x0478);
static_assert(offsetof(ULedger_BP_C, Smoke_Behind) == 0x0480);
static_assert(offsetof(ULedger_BP_C, SurvivalBar) == 0x0488);
static_assert(offsetof(UHUD_BP_C, UberGraphFrame) == 0x03F0);
static_assert(offsetof(UHUD_BP_C, BossBar) == 0x03F8);
static_assert(offsetof(UHUD_BP_C, SavingWidget_BP) == 0x0400);
static_assert(offsetof(UHUD_BP_C, DialogCombatSkillComponent) == 0x0408);
static_assert(offsetof(USettingsMenu_BP_C, Outro) == 0x0678);
static_assert(offsetof(USettingsMenu_BP_C, Intro) == 0x0680);
static_assert(offsetof(USettingsMenu_BP_C, BackgroundPanelWidget) == 0x0688);
static_assert(offsetof(USettingsMenu_BP_C, RootCanvas) == 0x0690);
static_assert(offsetof(ULegalWidget_BP_C, BackingBot) == 0x03E8);
static_assert(offsetof(ULegalWidget_BP_C, BackingTop) == 0x03F0);
static_assert(offsetof(ULegalWidget_BP_C, Frame) == 0x03F8);
static_assert(offsetof(UCreditsWidget_BP_C, BackgroundImage) == 0x0380);
static_assert(offsetof(USkillUnlock_BP_C, CircleBacking) == 0x0350);
static_assert(offsetof(UMultiQuestMapTracker_BP_C, ActiveQuestIcon) == 0x0340);
static_assert(offsetof(UMultiQuestMapTracker_BP_C, Image) == 0x0348);
static_assert(offsetof(ULedgerMapQuestSelection_BP_C, HeaderTextblock) == 0x0370);
static_assert(offsetof(UQuestJournalMaster_BP_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(UQuestJournalMaster_BP_C, FadeInQuestImage) == 0x04C8);
static_assert(offsetof(UQuestJournalMaster_BP_C, BackgroundPanelWidget) == 0x04D0);
static_assert(offsetof(UQuestJournalMaster_BP_C, BackgroundSplitPanelWidget) == 0x04D8);
static_assert(offsetof(UQuestJournalMaster_BP_C, InvalidationBox) == 0x04E0);
static_assert(offsetof(UQuestJournalMaster_BP_C, InvalidationBox0) == 0x04E8);
static_assert(offsetof(UCompass_BP_C, UberGraphFrame) == 0x10F0);
static_assert(offsetof(UCompass_BP_C, CardinalDirectionsImage) == 0x10F8);
static_assert(offsetof(UCompass_BP_C, CompassBody) == 0x1100);
static_assert(offsetof(UCompass_BP_C, CardinalDirection_Mat) == 0x1108);
static_assert(offsetof(UCompass_BP_C, CompassBody_Mat) == 0x1110);
