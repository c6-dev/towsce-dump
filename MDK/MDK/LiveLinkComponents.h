
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x00A8 (0x0000E0 - 0x000188)
class ULiveLinkComponentController : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FLiveLinkSubjectRepresentation)            SubjectRepresentation                                       OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(TMap<class UClass*, class ULiveLinkControllerBase*>) ControllerMap                                     OFFSET(get<T>, {0xF0, 80, 0, 0})
	DMember(bool)                                      bUpdateInEditor                                             OFFSET(get<bool>, {0x140, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLiveLinkUpdated                                           OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FComponentReference)                       ComponentToControl                                          OFFSET(getStruct<T>, {0x158, 40, 0, 0})
	DMember(bool)                                      bDisableEvaluateLiveLinkWhenSpawnable                       OFFSET(get<bool>, {0x180, 1, 0, 0})
	DMember(bool)                                      bEvaluateLiveLink                                           OFFSET(get<bool>, {0x181, 1, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class ULiveLinkComponentSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<class UClass*, class UClass*>)        DefaultControllerForRole                                    OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0018 (0x000030 - 0x000048)
class ULiveLinkControllerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0000 (0x000048 - 0x000048)
class ULiveLinkLightController : public ULiveLinkControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0006 (0x000000 - 0x000006)
class FLiveLinkTransformControllerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bWorldTransform                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseLocation                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bUseRotation                                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bUseScale                                                   OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bSweep                                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bTeleport                                                   OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0008 (0x000048 - 0x000050)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLiveLinkTransformControllerData)          TransformData                                               OFFSET(getStruct<T>, {0x48, 6, 0, 0})
};

