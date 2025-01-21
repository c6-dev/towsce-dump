
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: External

/// Class /Game/Maps/Main.Main_C
/// Size: 0x0030 (0x0002C0 - 0x0002F0)
class AMain_C : public ALevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	SMember(FRotator)                                  Rotation_Speed                                              OFFSET(getStruct<T>, {0x2C8, 12, 0, 0})
	CMember(class ACineCameraActor*)                   MM_Cam_ExecuteUbergraph_Main_RefProperty                    OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class ABP_StarField_C*)                    BP_StarField2_ExecuteUbergraph_Main_RefProperty             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class AEmitter*)                           PS_Stars_11_ExecuteUbergraph_Main_RefProperty               OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/Main.Main_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Main.Main_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Maps/Main.Main_C.ExecuteUbergraph_Main
	// void ExecuteUbergraph_Main(int32_t EntryPoint);                                                                          // [0x1c5deb0] Final|HasDefaults    
};

