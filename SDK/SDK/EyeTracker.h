
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x01 (1 bytes)
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2
};

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	// void SetEyeTrackedPlayer(class APlayerController* PlayerController);                                                     // [0x1fbbd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	// bool IsStereoGazeDataAvailable();                                                                                        // [0x1fbbd60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	// bool IsEyeTrackerConnected();                                                                                            // [0x1fbbd30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	// bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);                                                          // [0x1fbbc90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	// bool GetGazeData(FEyeTrackerGazeData& OutGazeData);                                                                      // [0x1fbbbe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FEyeTrackerStereoGazeData
{ 
	FVector                                            LeftEyeOrigin;                                              // 0x0000   (0x000C)  
	FVector                                            LeftEyeDirection;                                           // 0x000C   (0x000C)  
	FVector                                            RightEyeOrigin;                                             // 0x0018   (0x000C)  
	FVector                                            RightEyeDirection;                                          // 0x0024   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0030   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x003C   (0x0004)  
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FEyeTrackerGazeData
{ 
	FVector                                            GazeOrigin;                                                 // 0x0000   (0x000C)  
	FVector                                            GazeDirection;                                              // 0x000C   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0018   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x0024   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UEyeTrackerFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FEyeTrackerStereoGazeData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FEyeTrackerGazeData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 0x000C);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 0x0018);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 0x0024);
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 0x0030);
static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 0x000C);
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 0x0018);
