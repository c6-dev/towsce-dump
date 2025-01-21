
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: External

#pragma pack(push, 0x1)

/// Class /Game/Maps/Main.Main_C
/// Size: 0x02F0 (752 bytes) (0x0002C0 - 0x0002F0) align 8 MaxSize: 0x02F0
class AMain_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FRotator                                           Rotation_Speed;                                             // 0x02C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02D4   (0x0004)  MISSED
	class ACineCameraActor*                            MM_Cam_ExecuteUbergraph_Main_RefProperty;                   // 0x02D8   (0x0008)  
	class ABP_StarField_C*                             BP_StarField2_ExecuteUbergraph_Main_RefProperty;            // 0x02E0   (0x0008)  
	class AEmitter*                                    PS_Stars_11_ExecuteUbergraph_Main_RefProperty;              // 0x02E8   (0x0008)  


	/// Functions
	// Function /Game/Maps/Main.Main_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1c5deb0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Main.Main_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1c5deb0] Event|Public|BlueprintEvent 
	// Function /Game/Maps/Main.Main_C.ExecuteUbergraph_Main
	// void ExecuteUbergraph_Main(int32_t EntryPoint);                                                                          // [0x1c5deb0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AMain_C) == 0x02F0); // 752 bytes (0x0002C0 - 0x0002F0)
static_assert(offsetof(AMain_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(AMain_C, Rotation_Speed) == 0x02C8);
static_assert(offsetof(AMain_C, MM_Cam_ExecuteUbergraph_Main_RefProperty) == 0x02D8);
static_assert(offsetof(AMain_C, BP_StarField2_ExecuteUbergraph_Main_RefProperty) == 0x02E0);
static_assert(offsetof(AMain_C, PS_Stars_11_ExecuteUbergraph_Main_RefProperty) == 0x02E8);
