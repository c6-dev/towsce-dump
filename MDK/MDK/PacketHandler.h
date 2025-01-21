
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/PacketHandler.HandlerComponentFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UHandlerComponentFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PacketHandler.PacketHandlerProfileConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UPacketHandlerProfileConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FString>)                           Components                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

