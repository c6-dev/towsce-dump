
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

#pragma pack(push, 0x1)

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x035C (860 bytes) (0x0002D0 - 0x00035C) align 8 MaxSize: 0x035C
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	class UStaticMeshComponent*                        Right;                                                      // 0x02D8   (0x0008)  
	class UStaticMeshComponent*                        Forward;                                                    // 0x02E0   (0x0008)  
	class UStaticMeshComponent*                        Up;                                                         // 0x02E8   (0x0008)  
	class USphereComponent*                            ValidRadiusVisualizer;                                      // 0x02F0   (0x0008)  
	class USceneComponent*                             AxisRoot;                                                   // 0x02F8   (0x0008)  
	class USceneComponent*                             VisualizerRoot;                                             // 0x0300   (0x0008)  
	class UTextRenderComponent*                        TypeValue;                                                  // 0x0308   (0x0008)  
	class UTextRenderComponent*                        TransErrValue;                                              // 0x0310   (0x0008)  
	class UTextRenderComponent*                        RotErrValue;                                                // 0x0318   (0x0008)  
	class UTextRenderComponent*                        ConfidenceValue;                                            // 0x0320   (0x0008)  
	class UTextRenderComponent*                        TransErrLabel;                                              // 0x0328   (0x0008)  
	class UTextRenderComponent*                        RotErrLabel;                                                // 0x0330   (0x0008)  
	class UTextRenderComponent*                        ConfidenceLabel;                                            // 0x0338   (0x0008)  
	class UTextRenderComponent*                        PinIDValue;                                                 // 0x0340   (0x0008)  
	class USceneComponent*                             InfoRoot;                                                   // 0x0348   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x0350   (0x0008)  
	float                                              RotationSmoothSpeed;                                        // 0x0358   (0x0004)  


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

#pragma pack(pop)


static_assert(sizeof(AMagicLeapARPinInfoActor_C) == 0x035C); // 860 bytes (0x0002D0 - 0x00035C)
static_assert(offsetof(AMagicLeapARPinInfoActor_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Right) == 0x02D8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Forward) == 0x02E0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Up) == 0x02E8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ValidRadiusVisualizer) == 0x02F0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, AxisRoot) == 0x02F8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, VisualizerRoot) == 0x0300);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TypeValue) == 0x0308);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrValue) == 0x0310);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrValue) == 0x0318);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceValue) == 0x0320);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrLabel) == 0x0328);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrLabel) == 0x0330);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceLabel) == 0x0338);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, PinIDValue) == 0x0340);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, InfoRoot) == 0x0348);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Root) == 0x0350);
