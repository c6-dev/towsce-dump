
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x008C (0x0002D0 - 0x00035C)
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 860;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Right                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Forward                                                     OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Up                                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class USphereComponent*)                   ValidRadiusVisualizer                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class USceneComponent*)                    AxisRoot                                                    OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class USceneComponent*)                    VisualizerRoot                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextRenderComponent*)               TypeValue                                                   OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UTextRenderComponent*)               TransErrValue                                               OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UTextRenderComponent*)               RotErrValue                                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UTextRenderComponent*)               ConfidenceValue                                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UTextRenderComponent*)               TransErrLabel                                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UTextRenderComponent*)               RotErrLabel                                                 OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UTextRenderComponent*)               ConfidenceLabel                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UTextRenderComponent*)               PinIDValue                                                  OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class USceneComponent*)                    InfoRoot                                                    OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class USceneComponent*)                    Root                                                        OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     RotationSmoothSpeed                                         OFFSET(get<float>, {0x358, 4, 0, 0})


	/// Functions
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	// void UpdatePinState();                                                                                                   // [0x1c5deb0] Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	// void OnUpdateARPinState();                                                                                               // [0x1c5deb0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	// void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint);                                                       // [0x1c5deb0] Final|HasDefaults    
};

