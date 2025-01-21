
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface

#pragma pack(push, 0x1)

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x0188 (392 bytes) (0x0000E0 - 0x000188) align 8 MaxSize: 0x0188
class ULiveLinkComponentController : public UActorComponent
{ 
public:
	FLiveLinkSubjectRepresentation                     SubjectRepresentation;                                      // 0x00E0   (0x0010)  
	TMap<class UClass*, class ULiveLinkControllerBase*> ControllerMap;                                             // 0x00F0   (0x0050)  
	bool                                               bUpdateInEditor;                                            // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	SDK_UNDEFINED(16,830) /* FMulticastInlineDelegate */ __um(OnLiveLinkUpdated);                                  // 0x0148   (0x0010)  
	FComponentReference                                ComponentToControl;                                         // 0x0158   (0x0028)  
	bool                                               bDisableEvaluateLiveLinkWhenSpawnable;                      // 0x0180   (0x0001)  
	bool                                               bEvaluateLiveLink;                                          // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0182   (0x0006)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class ULiveLinkComponentSettings : public UObject
{ 
public:
	TMap<class UClass*, class UClass*>                 DefaultControllerForRole;                                   // 0x0030   (0x0050)  
};

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class ULiveLinkControllerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class ULiveLinkLightController : public ULiveLinkControllerBase
{ 
public:
};

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FLiveLinkTransformControllerData
{ 
	bool                                               bWorldTransform;                                            // 0x0000   (0x0001)  
	bool                                               bUseLocation;                                               // 0x0001   (0x0001)  
	bool                                               bUseRotation;                                               // 0x0002   (0x0001)  
	bool                                               bUseScale;                                                  // 0x0003   (0x0001)  
	bool                                               bSweep;                                                     // 0x0004   (0x0001)  
	bool                                               bTeleport;                                                  // 0x0005   (0x0001)  
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class ULiveLinkTransformController : public ULiveLinkControllerBase
{ 
public:
	FLiveLinkTransformControllerData                   TransformData;                                              // 0x0048   (0x0006)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x004E   (0x0002)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkComponentController) == 0x0188); // 392 bytes (0x0000E0 - 0x000188)
static_assert(sizeof(ULiveLinkComponentSettings) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(ULiveLinkControllerBase) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ULiveLinkLightController) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FLiveLinkTransformControllerData) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(ULiveLinkTransformController) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(offsetof(ULiveLinkComponentController, SubjectRepresentation) == 0x00E0);
static_assert(offsetof(ULiveLinkComponentController, ControllerMap) == 0x00F0);
static_assert(offsetof(ULiveLinkComponentController, ComponentToControl) == 0x0158);
static_assert(offsetof(ULiveLinkComponentSettings, DefaultControllerForRole) == 0x0030);
static_assert(offsetof(ULiveLinkTransformController, TransformData) == 0x0048);
