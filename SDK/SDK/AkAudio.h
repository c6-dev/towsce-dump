
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x01 (1 bytes)
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x01 (1 bytes)
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x01 (1 bytes)
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x01 (1 bytes)
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x01 (1 bytes)
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__AAC                                                                   = 10,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x01 (1 bytes)
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x01 (1 bytes)
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x01 (1 bytes)
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x01 (1 bytes)
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x01 (1 bytes)
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x01 (1 bytes)
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x04 (4 bytes)
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x01 (1 bytes)
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_LFE                                                   = 1,
	AkChannelConfiguration__Ak_1                                                     = 2,
	AkChannelConfiguration__Ak_2                                                     = 3,
	AkChannelConfiguration__Ak_25                                                    = 4,
	AkChannelConfiguration__Ak_3                                                     = 5,
	AkChannelConfiguration__Ak_37                                                    = 6,
	AkChannelConfiguration__Ak_4                                                     = 7,
	AkChannelConfiguration__Ak_49                                                    = 8,
	AkChannelConfiguration__Ak_5                                                     = 9,
	AkChannelConfiguration__Ak_511                                                   = 10,
	AkChannelConfiguration__Ak_7                                                     = 11,
	AkChannelConfiguration__Ak_5_1                                                   = 12,
	AkChannelConfiguration__Ak_7_1                                                   = 13,
	AkChannelConfiguration__Ak_7_115                                                 = 14,
	AkChannelConfiguration__Ak_Auro_9                                                = 15,
	AkChannelConfiguration__Ak_Auro_10                                               = 16,
	AkChannelConfiguration__Ak_Auro_11                                               = 17,
	AkChannelConfiguration__Ak_Auro_13                                               = 18,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 19,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 20,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 21
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x01 (1 bytes)
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x01 (1 bytes)
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x01 (1 bytes)
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkHololensAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkHololensAudioAPI : uint8_t
{
	EAkHololensAudioAPI__Wasapi                                                      = 0,
	EAkHololensAudioAPI__XAudio2                                                     = 1,
	EAkHololensAudioAPI__DirectSound                                                 = 2
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x04 (4 bytes)
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x01 (1 bytes)
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x04 (4 bytes)
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkDiffractionFlags
/// Size: 0x01 (1 bytes)
enum class EAkDiffractionFlags : uint8_t
{
	EAkDiffractionFlags__UseBuiltInParam                                             = 0,
	EAkDiffractionFlags__UseObstruction                                              = 1,
	EAkDiffractionFlags__CalcEmitterVirtualPosition                                  = 3
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x04 (4 bytes)
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkWindowsAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkWindowsAudioAPI : uint8_t
{
	EAkWindowsAudioAPI__Wasapi                                                       = 0,
	EAkWindowsAudioAPI__XAudio2                                                      = 1,
	EAkWindowsAudioAPI__DirectSound                                                  = 2
};

/// Enum /Script/AkAudio.EAkWinGDKAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkWinGDKAudioAPI : uint8_t
{
	EAkWinGDKAudioAPI__Wasapi                                                        = 0,
	EAkWinGDKAudioAPI__XAudio2                                                       = 1,
	EAkWinGDKAudioAPI__DirectSound                                                   = 2
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x03A0 (928 bytes) (0x000310 - 0x0003A0) align 8 MaxSize: 0x03A0
class AAkAcousticPortal : public AVolume
{ 
public:
	AkAcousticPortalState                              InitialState;                                               // 0x0310   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0311   (0x0003)  MISSED
	float                                              ObstructionRefreshInterval;                                 // 0x0314   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                                // 0x0318   (0x0001)  
	unsigned char                                      UnknownData01_7[0x87];                                      // 0x0319   (0x0087)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	// void OpenPortal();                                                                                                       // [0x11dc360] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x11dbf30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	// void ClosePortal();                                                                                                      // [0x11dbe20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x0270 (624 bytes) (0x000268 - 0x000270) align 16 MaxSize: 0x0270
class UAkPortalComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UAkAudioType : public UObject
{ 
public:
	uint32_t                                           ShortID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UObject*>                             UserData;                                                   // 0x0038   (0x0010)  
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UAkAcousticTexture : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0308 (776 bytes) (0x0002B8 - 0x000308) align 8 MaxSize: 0x0308
class AAkAmbientSound : public AActor
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x02B8   (0x0008)  
	class UAkComponent*                                AkComponent;                                                // 0x02C0   (0x0008)  
	bool                                               StopWhenOwnerIsDestroyed;                                   // 0x02C8   (0x0001)  
	bool                                               AutoPost;                                                   // 0x02C9   (0x0001)  
	bool                                               bDistanceCull;                                              // 0x02CA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x02CB   (0x0001)  MISSED
	float                                              CullRadius;                                                 // 0x02CC   (0x0004)  
	float                                              CullDebounce;                                               // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x34];                                      // 0x02D4   (0x0034)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	// void StopAmbientSound();                                                                                                 // [0x11dd590] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	// void StartAmbientSound();                                                                                                // [0x11dd570] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAkMainOutputSettings
{ 
	FString                                            AudioDeviceShareset;                                        // 0x0000   (0x0010)  
	uint32_t                                           DeviceID;                                                   // 0x0010   (0x0004)  
	EAkPanningRule                                     PanningRule;                                                // 0x0014   (0x0004)  
	EAkChannelConfigType                               ChannelConfigType;                                          // 0x0018   (0x0004)  
	uint32_t                                           ChannelMask;                                                // 0x001C   (0x0004)  
	uint32_t                                           NumberOfChannels;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FAkSpatialAudioSettings
{ 
	uint32_t                                           MaxSoundPropagationDepth;                                   // 0x0000   (0x0004)  
	uint32_t                                           DiffractionFlags;                                           // 0x0004   (0x0004)  
	float                                              MovementThreshold;                                          // 0x0008   (0x0004)  
	uint32_t                                           NumberOfPrimaryRays;                                        // 0x000C   (0x0004)  
	uint32_t                                           ReflectionOrder;                                            // 0x0010   (0x0004)  
	bool                                               EnableDiffractionOnReflections;                             // 0x0014   (0x0001)  
	bool                                               EnableDirectPathDiffraction;                                // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              MaximumPathLength;                                          // 0x0018   (0x0004)  
	bool                                               EnableTransmission;                                         // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FAkCommonInitializationSettings
{ 
	uint32_t                                           MaximumNumberOfMemoryPools;                                 // 0x0000   (0x0004)  
	uint32_t                                           MaximumNumberOfPositioningPaths;                            // 0x0004   (0x0004)  
	uint32_t                                           CommandQueueSize;                                           // 0x0008   (0x0004)  
	uint32_t                                           SamplesPerFrame;                                            // 0x000C   (0x0004)  
	FAkMainOutputSettings                              MainOutputSettings;                                         // 0x0010   (0x0028)  
	float                                              StreamingLookAheadRatio;                                    // 0x0038   (0x0004)  
	uint16_t                                           NumberOfRefillsInVoice;                                     // 0x003C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	FAkSpatialAudioSettings                            SpatialAudioSettings;                                       // 0x0040   (0x0020)  
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{ 
	uint32_t                                           SampleRate;                                                 // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAkCommunicationSettings
{ 
	uint32_t                                           PoolSize;                                                   // 0x0000   (0x0004)  
	uint16_t                                           DiscoveryBroadcastPort;                                     // 0x0004   (0x0002)  
	uint16_t                                           CommandPort;                                                // 0x0006   (0x0002)  
	uint16_t                                           NotificationPort;                                           // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FString                                            NetworkName;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{ 
	bool                                               InitializeSystemComms;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkAdvancedSpatialAudioSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAkAdvancedSpatialAudioSettings
{ 
	float                                              DiffractionShadowAttenuationFactor;                         // 0x0000   (0x0004)  
	float                                              DiffractionShadowDegrees;                                   // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FAkAdvancedInitializationSettings
{ 
	uint32_t                                           IO_MemorySize;                                              // 0x0000   (0x0004)  
	uint32_t                                           IO_Granularity;                                             // 0x0004   (0x0004)  
	float                                              TargetAutoStreamBufferLength;                               // 0x0008   (0x0004)  
	bool                                               UseStreamCache;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	uint32_t                                           MaximumPinnedBytesInCache;                                  // 0x0010   (0x0004)  
	bool                                               EnableGameSyncPreparation;                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	uint32_t                                           ContinuousPlaybackLookAhead;                                // 0x0018   (0x0004)  
	uint32_t                                           MonitorQueuePoolSize;                                       // 0x001C   (0x0004)  
	uint32_t                                           MaximumHardwareTimeoutMs;                                   // 0x0020   (0x0004)  
	bool                                               DebugOutOfRangeCheckEnabled;                                // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DebugOutOfRangeLimit;                                       // 0x0028   (0x0004)  
	FAkAdvancedSpatialAudioSettings                    SpatialAudioSettings;                                       // 0x002C   (0x0008)  
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x0038 (56 bytes) (0x000034 - 0x000038) align 4 MaxSize: 0x0038
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{ 
	bool                                               EnableMultiCoreRendering;                                   // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 4 MaxSize: 0x0040
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x0038   (0x0004)  
	bool                                               RoundFrameSizeToHardwareSize;                               // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkAndroidInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAndroidAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UAkPlatformInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0030   (0x0048)  MISSED
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAkAssetData : public UObject
{ 
public:
	uint32_t                                           CachedHash;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x0034   (0x003C)  MISSED
};

/// Class /Script/AkAudio.AkAssetDataWithMedia
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UAkAssetDataWithMedia : public UAkAssetData
{ 
public:
	TArray<class UAkMediaAsset*>                       MediaList;                                                  // 0x0070   (0x0010)  
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAkAssetPlatformData : public UObject
{ 
public:
	class UAkAssetData*                                CurrentAssetData;                                           // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkAssetBase
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UAkAssetBase : public UAkAudioType
{ 
public:
	class UAkAssetPlatformData*                        PlatformAssetData;                                          // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x0170 (368 bytes) (0x000058 - 0x000170) align 8 MaxSize: 0x0170
class UAkAudioBank : public UAkAssetBase
{ 
public:
	bool                                               AutoLoad;                                                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0059   (0x002F)  MISSED
	SDK_UNDEFINED(80,282) /* TMap<FString, TWeakObjectPtr<UAkAssetPlatformData*>> */ __um(LocalizedPlatformAssetDataMap); // 0x0088   (0x0050)  
	SDK_UNDEFINED(80,283) /* TSet<TWeakObjectPtr<UAkAudioEvent*>> */ __um(LinkedAkEvents);                         // 0x00D8   (0x0050)  
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformAssetData;                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<class UAkAudioBank*>                        ReferencedBanks;                                            // 0x0138   (0x0010)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0148   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainerData
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAkAssetDataSwitchContainerData : public UObject
{ 
public:
	TWeakObjectPtr<class UAkGroupValue*>               GroupValue;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0038   (0x0020)  MISSED
	class UAkGroupValue*                               DefaultGroupValue;                                          // 0x0058   (0x0008)  
	TArray<class UAkMediaAsset*>                       MediaList;                                                  // 0x0060   (0x0010)  
	TArray<class UAkAssetDataSwitchContainerData*>     Children;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainer
/// Size: 0x00E8 (232 bytes) (0x000080 - 0x0000E8) align 8 MaxSize: 0x00E8
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{ 
public:
	TArray<class UAkAssetDataSwitchContainerData*>     SwitchContainers;                                           // 0x0080   (0x0010)  
	class UAkGroupValue*                               DefaultGroupValue;                                          // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0098   (0x0050)  MISSED
};

/// Class /Script/AkAudio.AkAudioEventData
/// Size: 0x02B0 (688 bytes) (0x0000E8 - 0x0002B0) align 8 MaxSize: 0x02B0
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x00E8   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x00F0   (0x0004)  
	float                                              MaximumDuration;                                            // 0x00F4   (0x0004)  
	TMap<FString, class UAkAssetDataSwitchContainer*>  LocalizedMedia;                                             // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,284) /* TSet<UAkAudioEvent*> */   __um(PostedEvents);                                         // 0x0148   (0x0050)  
	SDK_UNDEFINED(80,285) /* TSet<UAkAuxBus*> */       __um(UserDefinedSends);                                     // 0x0198   (0x0050)  
	SDK_UNDEFINED(80,286) /* TSet<UAkTrigger*> */      __um(PostedTriggers);                                       // 0x01E8   (0x0050)  
	SDK_UNDEFINED(80,287) /* TSet<UAkGroupValue*> */   __um(GroupValues);                                          // 0x0238   (0x0050)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0288   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x00F0 (240 bytes) (0x000058 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAkAudioEvent : public UAkAssetBase
{ 
public:
	SDK_UNDEFINED(80,288) /* TMap<FString, TWeakObjectPtr<UAkAssetPlatformData*>> */ __um(LocalizedPlatformAssetDataMap); // 0x0058   (0x0050)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
	float                                              FadeDuration;                                               // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformData;                               // 0x00C0   (0x0008)  
	float                                              MaxAttenuationRadius;                                       // 0x00C8   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x00D0   (0x0004)  
	float                                              MaximumDuration;                                            // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x00D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.GetMinimumDuration
	// float GetMinimumDuration();                                                                                              // [0x11dbff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaximumDuration
	// float GetMaximumDuration();                                                                                              // [0x11dbfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	// float GetMaxAttenuationRadius();                                                                                         // [0x11dbf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetIsInfinite
	// bool GetIsInfinite();                                                                                                    // [0x11dbf60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0290 (656 bytes) (0x000268 - 0x000290) align 16 MaxSize: 0x0288
class UAkGameObject : public USceneComponent
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0268   (0x0008)  
	FString                                            EventName;                                                  // 0x0270   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0280   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	// void Stop();                                                                                                             // [0x11e4670] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x11e23b0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources); // [0x11e2210] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11e1a50] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FString in_EventName); // [0x11e1820] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x0490 (1168 bytes) (0x000288 - 0x000490) align 16 MaxSize: 0x0488
class UAkComponent : public UAkGameObject
{ 
public:
	bool                                               bUseSpatialAudio;                                           // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                  // 0x0290   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0291   (0x0003)  MISSED
	bool                                               EnableSpotReflectors : 1;                                   // 0x0294:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x0298   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x02A0   (0x0010)  
	int32_t                                            EarlyReflectionOrder;                                       // 0x02B0   (0x0004)  
	float                                              EarlyReflectionBusSendGain;                                 // 0x02B4   (0x0004)  
	float                                              EarlyReflectionMaxPathLength;                               // 0x02B8   (0x0004)  
	float                                              roomReverbAuxBusGain;                                       // 0x02BC   (0x0004)  
	int32_t                                            diffractionMaxEdges;                                        // 0x02C0   (0x0004)  
	int32_t                                            diffractionMaxPaths;                                        // 0x02C4   (0x0004)  
	float                                              diffractionMaxPathLength;                                   // 0x02C8   (0x0004)  
	bool                                               DrawFirstOrderReflections : 1;                              // 0x02CC:0 (0x0001)  
	bool                                               DrawSecondOrderReflections : 1;                             // 0x02CC:1 (0x0001)  
	bool                                               DrawHigherOrderReflections : 1;                             // 0x02CC:2 (0x0001)  
	bool                                               DrawDiffraction : 1;                                        // 0x02CC:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x02CD   (0x0003)  MISSED
	bool                                               bDisableRoomIdentification;                                 // 0x02D0   (0x0001)  
	bool                                               StopWhenOwnerDestroyed;                                     // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x02D2   (0x0002)  MISSED
	float                                              AttenuationScalingFactor;                                   // 0x02D4   (0x0004)  
	float                                              OcclusionRefreshInterval;                                   // 0x02D8   (0x0004)  
	bool                                               bUseReverbVolumes;                                          // 0x02DC   (0x0001)  
	bool                                               bDistanceCull;                                              // 0x02DD   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x02DE   (0x0002)  MISSED
	float                                              CullRadius;                                                 // 0x02E0   (0x0004)  
	float                                              CullDebounce;                                               // 0x02E4   (0x0004)  
	unsigned char                                      UnknownData06_7[0x1A0];                                     // 0x02E8   (0x01A0)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0x11dd7a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	// void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x11dd5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                             // [0x11dd3c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0x11dd330] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                     // [0x11dd180] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume);                                                                                // [0x11dd100] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0x11dd050] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	// void SetEarlyReflectionsVolume(float SendVolume);                                                                        // [0x11dcf40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                      // [0x11dcea0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	// void SetAttenuationScalingFactor(float Value);                                                                           // [0x11dcda0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                       // [0x11dcb30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// int32_t PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventByName
	// int32_t PostAkEventByName(FString in_EventName);                                                                         // [0x11dc740] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11dc380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x11dc020] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	// float GetAttenuationRadius();                                                                                            // [0x11dbed0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x04C0 (1216 bytes) (0x000488 - 0x0004C0) align 16 MaxSize: 0x04C0
class UAkAudioInputComponent : public UAkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0488   (0x0038)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// int32_t PostAssociatedAudioInputEvent();                                                                                 // [0x11dcb00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UAkAuxBus : public UAkAssetBase
{ 
public:
	class UAkAudioBank*                                RequiredBank;                                               // 0x0058   (0x0008)  
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkBoolPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAkWwiseObjectDetails
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemPath;                                                   // 0x0010   (0x0010)  
	FString                                            ItemId;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FAkWwiseItemToControl
{ 
	FAkWwiseObjectDetails                              ItemPicked;                                                 // 0x0000   (0x0030)  
	FString                                            ItemPath;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0B90 (2960 bytes) (0x000138 - 0x000B90) align 8 MaxSize: 0x0B90
class UAkCheckBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x3E8];                                     // 0x0138   (0x03E8)  MISSED
	ECheckBoxState                                     CheckedState;                                               // 0x0520   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0521   (0x0003)  MISSED
	SDK_UNDEFINED(16,289) /* FDelegateProperty */      __um(CheckedStateDelegate);                                 // 0x0524   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0534   (0x0004)  MISSED
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x0538   (0x0580)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0AB8   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0AB9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0ABA   (0x0006)  MISSED
	FAkBoolPropertyToControl                           ThePropertyToControl;                                       // 0x0AC0   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x0AD0   (0x0040)  
	SDK_UNDEFINED(16,290) /* FMulticastInlineDelegate */ __um(AkOnCheckStateChanged);                              // 0x0B10   (0x0010)  
	SDK_UNDEFINED(16,291) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x0B20   (0x0010)  
	SDK_UNDEFINED(16,292) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0B30   (0x0010)  
	unsigned char                                      UnknownData04_7[0x50];                                      // 0x0B40   (0x0050)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x11dcfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x11dce20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	// void SetAkItemId(FGuid& ItemId);                                                                                         // [0x11dcd00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	// void SetAkBoolProperty(FString ItemProperty);                                                                            // [0x11dcc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0x11dc2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0x11dc270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x11dbf00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	// FString GetAkProperty();                                                                                                 // [0x11dbe80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	// FGuid GetAkItemId();                                                                                                     // [0x11dbe40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkChinookPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkChinookPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMPXPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkMPXPlatformInfo : public UAkChinookPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXSXPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXSXPlatformInfo : public UAkChinookPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x00C0 (192 bytes) (0x000048 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAkFolder : public UAkAudioType
{ 
public:
	FString                                            UnrealFolderPath;                                           // 0x0048   (0x0010)  
	FString                                            WwiseFolderPath;                                            // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0068   (0x0058)  MISSED
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkGameplayStatics.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);                                                     // [0x11e4cf0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UseEarlyReflections
	// void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x11e4ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName
	// void UnloadBankByName(FString BankName);                                                                                 // [0x11e4a40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankAsync
	// void UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankUnloadedCallback);                                 // [0x11e4960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBank
	// void UnloadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x11e47f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture
	// void StopProfilerCapture();                                                                                              // [0x11e47d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture
	// void StopOutputCapture();                                                                                                // [0x11e47b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                            // [0x11e4730] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAll
	// void StopAll();                                                                                                          // [0x11e4710] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopActor
	// void StopActor(class AActor* Actor);                                                                                     // [0x11e4690] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture
	// void StartProfilerCapture(FString Filename);                                                                             // [0x11e45e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture
	// void StartOutputCapture(FString Filename);                                                                               // [0x11e4550] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                           // [0x11e44d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy); // [0x11e4290] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);            // [0x11e4140] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0x11e4040] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset);                          // [0x11e3ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0x11e3ca0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetReflectionsOrder
	// void SetReflectionsOrder(int32_t Order, bool RefreshPaths);                                                              // [0x11e3e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPanningRule
	// void SetPanningRule(PanningRule PanRule);                                                                                // [0x11e3c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                           // [0x11e3b70] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	// void SetOcclusionScalingFactor(float ScalingFactor);                                                                     // [0x11e3af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);                                            // [0x11e3a30] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x11e38d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x11e36f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x11e3510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0x11e3420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);      // [0x11e32d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusConfig
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                         // [0x11e3200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);                                    // [0x11e3100] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventCB
	// int32_t PostEventCB(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x11e2e10] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventByName
	// void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);                         // [0x11e2cf0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAttached
	// int32_t PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x11e2b00] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x11e2990] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject); // [0x11e27d0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x11e2630] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x11e1fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo); // [0x11e1d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadInitBank
	// void LoadInitBank();                                                                                                     // [0x11e1800] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBanks
	// void LoadBanks(TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);                                           // [0x11e1710] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankByName
	// void LoadBankByName(FString BankName);                                                                                   // [0x11e1680] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankAsync
	// void LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankLoadedCallback);                                     // [0x11e15a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBank
	// void LoadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x11e1430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0x11e13a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsEditor
	// bool IsEditor();                                                                                                         // [0x11e1370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset);                         // [0x11e11e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x11e0fb0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	// float GetOcclusionScalingFactor();                                                                                       // [0x11e0e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                        // [0x11e0ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// TArray<FString> GetAvailableAudioCultures();                                                                             // [0x11e0870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	// class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);                               // [0x11e0600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkComponent
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0x11e06d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                                 // [0x11e0600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x11e04c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0x11e02f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearBanks
	// void ClearBanks();                                                                                                       // [0x11e02d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.CancelEventCallback
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                          // [0x11e0230] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// void AddOutputCaptureMarker(FString MarkerText);                                                                         // [0x11e01a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAkCallbackInfo : public UObject
{ 
public:
	class UAkComponent*                                AkComponent;                                                // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	int32_t                                            EventID;                                                    // 0x003C   (0x0004)  
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType
	// EAkMidiEventType GetType();                                                                                              // [0x11e1340] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                            // [0x11e0f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                        // [0x11e0e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                              // [0x11e0d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                            // [0x11e0cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                         // [0x11e0c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                              // [0x11e0b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                                // [0x11e0a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// char GetChannel();                                                                                                       // [0x11e0a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc
	// bool GetCc(FAkMidiCc& AsCc);                                                                                             // [0x11e0950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	int32_t                                            Identifier;                                                 // 0x0040   (0x0004)  
	int32_t                                            Position;                                                   // 0x0044   (0x0004)  
	FString                                            Label;                                                      // 0x0048   (0x0010)  
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	float                                              Duration;                                                   // 0x0040   (0x0004)  
	float                                              EstimatedDuration;                                          // 0x0044   (0x0004)  
	int32_t                                            AudioNodeID;                                                // 0x0048   (0x0004)  
	int32_t                                            MediaID;                                                    // 0x004C   (0x0004)  
	bool                                               bStreaming;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FAkSegmentInfo
{ 
	int32_t                                            CurrentPosition;                                            // 0x0000   (0x0004)  
	int32_t                                            PreEntryDuration;                                           // 0x0004   (0x0004)  
	int32_t                                            ActiveDuration;                                             // 0x0008   (0x0004)  
	int32_t                                            PostExitDuration;                                           // 0x000C   (0x0004)  
	int32_t                                            RemainingLookAheadTime;                                     // 0x0010   (0x0004)  
	float                                              BeatDuration;                                               // 0x0014   (0x0004)  
	float                                              BarDuration;                                                // 0x0018   (0x0004)  
	float                                              GridDuration;                                               // 0x001C   (0x0004)  
	float                                              GridOffset;                                                 // 0x0020   (0x0004)  
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	FAkSegmentInfo                                     SegmentInfo;                                                // 0x003C   (0x0024)  
	EAkCallbackType                                    MusicSyncType;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            UserCueName;                                                // 0x0068   (0x0010)  
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkGeometrySurfaceOverride
{ 
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0000   (0x0008)  
	bool                                               bEnableOcclusionOverride : 1;                               // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              OcclusionValue;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkAcousticSurface
{ 
	uint32_t                                           Texture;                                                    // 0x0000   (0x0004)  
	float                                              Occlusion;                                                  // 0x0004   (0x0004)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FAkTriangle
{ 
	uint16_t                                           Point0;                                                     // 0x0000   (0x0002)  
	uint16_t                                           Point1;                                                     // 0x0002   (0x0002)  
	uint16_t                                           Point2;                                                     // 0x0004   (0x0002)  
	uint16_t                                           Surface;                                                    // 0x0006   (0x0002)  
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAkGeometryData
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FAkAcousticSurface>                         Surfaces;                                                   // 0x0010   (0x0010)  
	TArray<FAkTriangle>                                Triangles;                                                  // 0x0020   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideAcousticTexture;                                  // 0x0030   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideOcclusion;                                        // 0x0040   (0x0010)  
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x03A0 (928 bytes) (0x000268 - 0x0003A0) align 16 MaxSize: 0x03A0
class UAkGeometryComponent : public USceneComponent
{ 
public:
	AkMeshType                                         MeshType;                                                   // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	int32_t                                            LOD;                                                        // 0x026C   (0x0004)  
	float                                              WeldingThreshold;                                           // 0x0270   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0274   (0x0004)  MISSED
	TMap<class UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x0278   (0x0050)  
	FAkGeometrySurfaceOverride                         CollisionMeshSurfaceOverride;                               // 0x02C8   (0x0010)  
	bool                                               bEnableDiffraction : 1;                                     // 0x02D8:0 (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges : 1;                      // 0x02D8:1 (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02D9   (0x0007)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x02E8   (0x0010)  MISSED
	FAkGeometryData                                    GeometryData;                                               // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x0348   (0x0058)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	// void UpdateGeometry();                                                                                                   // [0x11e9740] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	// void RemoveGeometry();                                                                                                   // [0x11e9020] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	// void ConvertMesh();                                                                                                      // [0x11e89a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0070 (112 bytes) (0x000048 - 0x000070) align 8 MaxSize: 0x0070
class UAkGroupValue : public UAkAudioType
{ 
public:
	SDK_UNDEFINED(16,293) /* TArray<TWeakObjectPtr<UAkMediaAsset*>> */ __um(MediaDependencies);                    // 0x0048   (0x0010)  
	uint32_t                                           GroupShortID;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x14];                                      // 0x005C   (0x0014)  MISSED
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 4 MaxSize: 0x0040
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x0038   (0x0004)  
	bool                                               GlobalFocus;                                                // 0x003C   (0x0001)  
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkHololensInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkHololensAdvancedInitializationSettings          AdvancedSettings;                                           // 0x00C8   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkIndianaAudioStatics
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkIndianaAudioStatics : public UAkGameplayStatics
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkIndianaAudioStatics.StopSoundByID
	// void StopSoundByID(int32_t PlayingID, int32_t FadeTime);                                                                 // [0x11e9680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetSwitchByID
	// void SetSwitchByID(FName SwitchGroup, int32_t SwitchStateID, class AActor* Actor);                                       // [0x11e9580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetStateChecked
	// void SetStateChecked(FName StateGroup, FName State);                                                                     // [0x11e94c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetRTPCValueOnPlayingID
	// void SetRTPCValueOnPlayingID(int32_t PlayingID, FName RTPC, float Value, int32_t InterpolationTimeMs);                   // [0x11e92d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.SetRTPCValueChecked
	// void SetRTPCValueChecked(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC); // [0x11e9140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.ResetRTPCValue
	// void ResetRTPCValue(FName RTPC, int32_t InterpolationTimeMs, class AActor* Actor);                                       // [0x11e9040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.PostExternalSourceEvent
	// int32_t PostExternalSourceEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, FString ExternalSource, FString SourceEvent, bool StopWhenAttachedToDestroyed); // [0x11e8e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.PostEventAtLocationByEvent
	// int32_t PostEventAtLocationByEvent(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x11e8cf0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.PostEvent2D
	// int32_t PostEvent2D(class UAkAudioEvent* AkEvent);                                                                       // [0x11e8c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkIndianaAudioStatics.GetSwitch
	// bool GetSwitch(FName SwitchGroup, int32_t& OutState, class AActor* Actor);                                               // [0x11e8b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkPluginInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAkPluginInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	uint32_t                                           PluginID;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            dll;                                                        // 0x0018   (0x0010)  
};

/// Class /Script/AkAudio.AkInitBankAssetData
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{ 
public:
	TArray<FAkPluginInfo>                              PluginInfos;                                                // 0x0080   (0x0010)  
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x0078 (120 bytes) (0x000058 - 0x000078) align 8 MaxSize: 0x0078
class UAkInitBank : public UAkAssetBase
{ 
public:
	TArray<FString>                                    AvailableAudioCultures;                                     // 0x0058   (0x0010)  
	FString                                            DefaultLanguage;                                            // 0x0068   (0x0010)  
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAkAudioSession
{ 
	EAkAudioSessionCategory                            AudioSessionCategory;                                       // 0x0000   (0x0004)  
	uint32_t                                           AudioSessionCategoryOptions;                                // 0x0004   (0x0004)  
	EAkAudioSessionMode                                AudioSessionMode;                                           // 0x0008   (0x0004)  
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UAkIOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B0   (0x0028)  
	FAkAdvancedInitializationSettings                  AdvancedSettings;                                           // 0x00D8   (0x0034)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                          // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                      // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0160 (352 bytes) (0x000120 - 0x000160) align 8 MaxSize: 0x0160
class UAkItemBoolProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,294) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,295) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x0130   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x11e9420] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x11e8a40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x11e89c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                      // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                                  // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0160 (352 bytes) (0x000120 - 0x000160) align 8 MaxSize: 0x0160
class UAkItemProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,296) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,297) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x0130   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x11e9420] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x11e8ac0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x11e89c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x02B0 (688 bytes) (0x000268 - 0x0002B0) align 16 MaxSize: 0x02B0
class UAkLateReverbComponent : public USceneComponent
{ 
public:
	bool                                               bEnable : 1;                                                // 0x0268:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0270   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0278   (0x0010)  
	float                                              SendLevel;                                                  // 0x0288   (0x0004)  
	float                                              FadeRate;                                                   // 0x028C   (0x0004)  
	float                                              Priority;                                                   // 0x0290   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0294   (0x0004)  MISSED
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                                 // 0x0298   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x02A0   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UAkLinuxInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkLuminInitializationSettings
/// Size: 0x00F8 (248 bytes) (0x000030 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAkLuminInitializationSettings : public UObject
{ 
public:
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0098   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C0   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11edbc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLuminPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkLuminPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UAkMacInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UAkMediaAssetData : public UObject
{ 
public:
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	bool                                               UseDeviceMemory;                                            // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_7[0x36];                                      // 0x0032   (0x0036)  MISSED
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UAkMediaAsset : public UObject
{ 
public:
	uint32_t                                           ID;                                                         // 0x0030   (0x0004)  
	bool                                               AutoLoad;                                                   // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	TArray<class UObject*>                             UserData;                                                   // 0x0038   (0x0010)  
	class UAkMediaAssetData*                           CurrentMediaAssetData;                                      // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x00C0 (192 bytes) (0x000060 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0060   (0x0060)  MISSED
};

/// Class /Script/AkAudio.AkPellegrinoPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkPellegrinoPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkDPXPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkDPXPlatformInfo : public UAkPellegrinoPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkPS5PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkPS5PlatformInfo : public UAkPellegrinoPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
public:
};

/// Struct /Script/AkAudio.AkPS4AdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 4 MaxSize: 0x0040
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           ACPBatchBufferSize;                                         // 0x0038   (0x0004)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkPS4InitializationSettings
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UAkPS4InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0098   (0x0028)  
	FAkPS4AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C0   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11edbc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPS4PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkPS4PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkPS5AdvancedInitializationSettings
/// Size: 0x003C (60 bytes) (0x000038 - 0x00003C) align 4 MaxSize: 0x003C
struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0038   (0x0001)  
	bool                                               bVorbisHwAcceleration;                                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003A   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkPS5InitializationSettings
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UAkPS5InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0098   (0x0028)  
	FAkPS5AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C0   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkDPXInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 8 MaxSize: 0x0100
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0348 (840 bytes) (0x000310 - 0x000348) align 8 MaxSize: 0x0348
class AAkReverbVolume : public AVolume
{ 
public:
	bool                                               bEnabled : 1;                                               // 0x0310:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0318   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0320   (0x0010)  
	float                                              SendLevel;                                                  // 0x0330   (0x0004)  
	float                                              FadeRate;                                                   // 0x0334   (0x0004)  
	float                                              Priority;                                                   // 0x0338   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UAkLateReverbComponent*                      LateReverbComponent;                                        // 0x0340   (0x0008)  
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x02B0 (688 bytes) (0x000288 - 0x0002B0) align 16 MaxSize: 0x02B0
class UAkRoomComponent : public UAkGameObject
{ 
public:
	bool                                               bEnable : 1;                                                // 0x0288:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0289   (0x0007)  MISSED
	class UAkRoomComponent*                            NextLowerPriorityComponent;                                 // 0x0290   (0x0008)  
	float                                              Priority;                                                   // 0x0298   (0x0004)  
	float                                              WallOcclusion;                                              // 0x029C   (0x0004)  
	float                                              AuxSendLevel;                                               // 0x02A0   (0x0004)  
	bool                                               AutoPost;                                                   // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x02A5   (0x000B)  MISSED
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UAkRtpc : public UAkAudioType
{ 
public:
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAkGeometrySurfacePropertiesToMap
{ 
	TWeakObjectPtr<class UAkAcousticTexture*>          AcousticTexture;                                            // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	float                                              OcclusionValue;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x0148 (328 bytes) (0x000030 - 0x000148) align 8 MaxSize: 0x0148
class UAkSettings : public UObject
{ 
public:
	char                                               MaxSimultaneousReverbVolumes;                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FFilePath                                          WwiseProjectPath;                                           // 0x0038   (0x0010)  
	FDirectoryPath                                     WwiseSoundDataFolder;                                       // 0x0048   (0x0010)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x0058   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED
	SDK_UNDEFINED(80,298) /* TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap> */ __um(AkGeometryMap); // 0x0060   (0x0050)  
	bool                                               SplitSwitchContainerMedia;                                  // 0x00B0   (0x0001)  
	bool                                               SplitMediaPerFolder;                                        // 0x00B1   (0x0001)  
	bool                                               UseEventBasedPackaging;                                     // 0x00B2   (0x0001)  
	bool                                               EnableAutomaticAssetSynchronization;                        // 0x00B3   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FString                                            CommandletCommitMessage;                                    // 0x00B8   (0x0010)  
	TMap<FString, FString>                             UnrealCultureToWwiseCulture;                                // 0x00C8   (0x0050)  
	bool                                               AskedToUseNewAssetManagement;                               // 0x0118   (0x0001)  
	bool                                               bEnableMultiCoreRendering;                                  // 0x0119   (0x0001)  
	bool                                               MigratedEnableMultiCoreRendering;                           // 0x011A   (0x0001)  
	bool                                               FixupRedirectorsDuringMigration;                            // 0x011B   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0120   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0130   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0140   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UAkSettingsPerUser : public UObject
{ 
public:
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0030   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0040   (0x0010)  
	bool                                               EnableAutomaticAssetSynchronization;                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            WaapiIPAddress;                                             // 0x0058   (0x0010)  
	uint32_t                                           WaapiPort;                                                  // 0x0068   (0x0004)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x006C   (0x0001)  
	bool                                               AutoSyncSelection;                                          // 0x006D   (0x0001)  
	bool                                               SuppressWwiseProjectPathWarnings;                           // 0x006E   (0x0001)  
	bool                                               SoundDataGenerationSkipLanguage;                            // 0x006F   (0x0001)  
	uint32_t                                           MonitorPoolMemory;                                          // 0x0070   (0x0004)  
	uint32_t                                           MonitorQueueMemory;                                         // 0x0074   (0x0004)  
	uint32_t                                           CommunicationMemory;                                        // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x1C];                                      // 0x007C   (0x001C)  MISSED
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x0550 (1360 bytes) (0x000120 - 0x000550) align 8 MaxSize: 0x0550
class UAkSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0120   (0x0004)  
	SDK_UNDEFINED(16,299) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x0124   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	FSliderStyle                                       WidgetStyle;                                                // 0x0138   (0x0348)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0480   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0481   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x0484   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0494   (0x0010)  
	bool                                               IndentHandle;                                               // 0x04A4   (0x0001)  
	bool                                               Locked;                                                     // 0x04A5   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x04A6   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x04A8   (0x0004)  
	bool                                               IsFocusable;                                                // 0x04AC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x04AD   (0x0003)  MISSED
	FAkPropertyToControl                               ThePropertyToControl;                                       // 0x04B0   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x04C0   (0x0040)  
	SDK_UNDEFINED(16,300) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x0500   (0x0010)  
	SDK_UNDEFINED(16,301) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x0510   (0x0010)  
	SDK_UNDEFINED(16,302) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0520   (0x0010)  
	unsigned char                                      UnknownData04_7[0x20];                                      // 0x0530   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x11ee090] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x11ee010] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x11edf80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x11edef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x11ede60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x11eddd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0x11edd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0x11edc90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	// float GetValue();                                                                                                        // [0x11edb90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	// FString GetAkSliderItemProperty();                                                                                       // [0x11edb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	// FGuid GetAkSliderItemId();                                                                                               // [0x11edb00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0328 (808 bytes) (0x000310 - 0x000328) align 8 MaxSize: 0x0328
class AAkSpatialAudioVolume : public AVolume
{ 
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                        // 0x0310   (0x0008)  
	class UAkLateReverbComponent*                      LateReverb;                                                 // 0x0318   (0x0008)  
	class UAkRoomComponent*                            Room;                                                       // 0x0320   (0x0008)  
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x02E0 (736 bytes) (0x0002B8 - 0x0002E0) align 8 MaxSize: 0x02E0
class AAkSpotReflector : public AActor
{ 
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x02B8   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x02C0   (0x0010)  
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x02D0   (0x0008)  
	float                                              DistanceScalingFactor;                                      // 0x02D8   (0x0004)  
	float                                              Level;                                                      // 0x02DC   (0x0004)  
};

/// Class /Script/AkAudio.AkStadiaInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UAkStadiaInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0038)  
};

/// Class /Script/AkAudio.AkQuailInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 8 MaxSize: 0x0100
class UAkQuailInitializationSettings : public UAkStadiaInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkStadiaPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkStadiaPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkQuailPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkQuailPlatformInfo : public UAkStadiaPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkStateValue : public UAkGroupValue
{ 
public:
};

/// Struct /Script/AkAudio.AkPoly
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkPoly
{ 
	class UAkAcousticTexture*                          Texture;                                                    // 0x0000   (0x0008)  
	float                                              Occlusion;                                                  // 0x0008   (0x0004)  
	bool                                               EnableSurface;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x02A0 (672 bytes) (0x000268 - 0x0002A0) align 16 MaxSize: 0x02A0
class UAkSurfaceReflectorSetComponent : public USceneComponent
{ 
public:
	bool                                               bEnableSurfaceReflectors : 1;                               // 0x0268:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	TArray<FAkPoly>                                    AcousticPolys;                                              // 0x0270   (0x0010)  
	bool                                               bEnableDiffraction : 1;                                     // 0x0280:0 (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges : 1;                      // 0x0280:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0281   (0x0007)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x0288   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0290   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// void UpdateSurfaceReflectorSet();                                                                                        // [0x11ee110] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// void SendSurfaceReflectorSet();                                                                                          // [0x11edc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// void RemoveSurfaceReflectorSet();                                                                                        // [0x11edc50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{ 
	EAkCommSystem                                      CommunicationSystem;                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSwitchInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UAkSwitchInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithCommSelection          CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkSwitchPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkSwitchValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UAkTrigger : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UAkTVOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B0   (0x0028)  
	FAkAdvancedInitializationSettings                  AdvancedSettings;                                           // 0x00D8   (0x0034)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiCalls.Unsubscribe
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                        // [0x11f42a0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SubscribeToWaapi
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0x11f4000] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                                // [0x11f3f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& Callback);                                                    // [0x11f3100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& Callback);                                                   // [0x11f3050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                         // [0x11f2fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                                // [0x11f2380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                            // [0x11f22b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.CallWaapi
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);    // [0x11f1e30] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                            // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                        // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiJsonManager.SetStringField
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);         // [0x11f3d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0x11f3a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);           // [0x11f3850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);              // [0x11f3650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0x11f3420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0x11f31b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetStringField
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                        // [0x11f2e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                             // [0x11f2ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0x11f2970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0x11f2810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                             // [0x11f26b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                      // [0x11f2470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                             // [0x11f2180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                         // [0x11f2060] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                                 // [0x11e88a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                             // [0x11e87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 4 MaxSize: 0x0040
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x0038   (0x0004)  
	bool                                               GlobalFocus;                                                // 0x003C   (0x0001)  
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkWindowsInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkWindowsAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkWinGDKAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 4 MaxSize: 0x0040
struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x0038   (0x0004)  
	bool                                               GlobalFocus;                                                // 0x003C   (0x0001)  
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkWinGDKInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkWinGDKInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkWinGDKAdvancedInitializationSettings            AdvancedSettings;                                           // 0x00C8   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWinAnvilInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkWinGDKPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWinAnvilPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0160 (352 bytes) (0x000120 - 0x000160) align 8 MaxSize: 0x0160
class UAkWwiseTree : public UWidget
{ 
public:
	SDK_UNDEFINED(16,303) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,304) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x0130   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x11f3c90] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	// FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0x11f2d00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x11f2c80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0180 (384 bytes) (0x000120 - 0x000180) align 8 MaxSize: 0x0180
class UAkWwiseTreeSelector : public UWidget
{ 
public:
	SDK_UNDEFINED(16,305) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,306) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x0130   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0140   (0x0040)  MISSED
};

/// Struct /Script/AkAudio.AkXboxOneGDKApuHeapInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAkXboxOneGDKApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneGDKAdvancedInitializationSettings
/// Size: 0x003C (60 bytes) (0x000038 - 0x00003C) align 4 MaxSize: 0x003C
struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0038   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x003B   (0x0001)  MISSED
};

/// Class /Script/AkAudio.AkXboxOneGDKInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkXboxOneGDKInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkXboxOneGDKApuHeapInitializationSettings         ApuHeapSettings;                                            // 0x0098   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkXboxOneGDKAdvancedInitializationSettings        AdvancedSettings;                                           // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOneAnvilInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneGDKPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneAnvilPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkXboxOneApuHeapInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAkXboxOneApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneAdvancedInitializationSettings
/// Size: 0x003C (60 bytes) (0x000038 - 0x00003C) align 4 MaxSize: 0x003C
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0038   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x003B   (0x0001)  MISSED
};

/// Class /Script/AkAudio.AkXboxOneInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkXboxOneInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkXboxOneApuHeapInitializationSettings            ApuHeapSettings;                                            // 0x0098   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkXboxOneAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOnePlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkXSXApuHeapInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAkXSXApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXSXAdvancedInitializationSettings
/// Size: 0x003C (60 bytes) (0x000038 - 0x00003C) align 4 MaxSize: 0x003C
struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0038   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x003B   (0x0001)  MISSED
};

/// Class /Script/AkAudio.AkXSXInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkXSXInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkXSXApuHeapInitializationSettings                ApuHeapSettings;                                            // 0x0098   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkXSXAdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x11dc2d0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMPXInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{ 
public:
};

/// Struct /Script/AkAudio.AkAudioEventTrackKey
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAkAudioEventTrackKey
{ 
	float                                              Time;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0008   (0x0008)  
	FString                                            EventName;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/AkAudio.InterpTrackAkAudioEvent
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{ 
public:
	TArray<FAkAudioEventTrackKey>                      Events;                                                     // 0x0098   (0x0010)  
	bool                                               bContinueEventOnMatineeEnd : 1;                             // 0x00A8:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/AkAudio.InterpTrackAkAudioRTPC
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{ 
public:
	FString                                            Param;                                                      // 0x0098   (0x0010)  
	bool                                               bPlayOnReverse : 1;                                         // 0x00A8:0 (0x0001)  
	bool                                               bContinueRTPCOnMatineeEnd : 1;                              // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/AkAudio.InterpTrackInstAkAudioEvent
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{ 
public:
	float                                              LastUpdatePosition;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AkAudio.InterpTrackInstAkAudioRTPC
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{ 
public:
	float                                              LastUpdatePosition;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x01D8 (472 bytes) (0x0000F0 - 0x0001D8) align 8 MaxSize: 0x01D8
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x00F0   (0x0040)  MISSED
	class UAkAudioEvent*                               Event;                                                      // 0x0130   (0x0008)  
	bool                                               RetriggerEvent;                                             // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0139   (0x0003)  MISSED
	int32_t                                            ScrubTailLengthMs;                                          // 0x013C   (0x0004)  
	bool                                               StopAtSectionEnd;                                           // 0x0140   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	FString                                            EventName;                                                  // 0x0148   (0x0010)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0158   (0x0020)  MISSED
	float                                              MaxSourceDuration;                                          // 0x0178   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	FString                                            MaxDurationSourceID;                                        // 0x0180   (0x0010)  
	unsigned char                                      UnknownData05_7[0x48];                                      // 0x0190   (0x0048)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
	bool                                               bIsAMasterTrack : 1;                                        // 0x00A8:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMovieSceneTangentDataSerializationHelper
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ArriveTangentWeight;                                        // 0x000C   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x0010   (0x0004)  
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMovieSceneFloatValueSerializationHelper
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x0004   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FMovieSceneTangentDataSerializationHelper          Tangent;                                                    // 0x0008   (0x0014)  
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMovieSceneFloatChannelSerializationHelper
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0000   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<int32_t>                                    Times;                                                      // 0x0008   (0x0010)  
	TArray<FMovieSceneFloatValueSerializationHelper>   Values;                                                     // 0x0018   (0x0010)  
	float                                              DefaultValue;                                               // 0x0028   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x0258 (600 bytes) (0x0000F0 - 0x000258) align 8 MaxSize: 0x0258
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
public:
	class UAkRtpc*                                     RTPC;                                                       // 0x00F0   (0x0008)  
	FString                                            Name;                                                       // 0x00F8   (0x0010)  
	FRichCurve                                         FloatCurve;                                                 // 0x0108   (0x0080)  
	FMovieSceneFloatChannelSerializationHelper         FloatChannelSerializationHelper;                            // 0x0188   (0x0030)  
	FMovieSceneFloatChannel                            RTPCChannel;                                                // 0x01B8   (0x00A0)  
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,307) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // [0x11f6990] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x11f6950] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,308) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x11f6c20] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x11f6970] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAKWaapiJsonObject
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FAkWaapiSubscriptionId
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkAmbSoundCheckpointRecord
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FAkAmbSoundCheckpointRecord
{ 
	bool                                               bCurrentlyPlaying;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAkExternalSourceInfo
{ 
	FString                                            ExternalSrcName;                                            // 0x0000   (0x0010)  
	AkCodecId                                          CodecID;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	class UAkExternalMediaAsset*                       ExternalSourceAsset;                                        // 0x0028   (0x0008)  
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FAkMidiEventBase
{ 
	EAkMidiEventType                                   Type;                                                       // 0x0000   (0x0001)  
	char                                               Chan;                                                       // 0x0001   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0003 (3 bytes) (0x000002 - 0x000003) align 1 MaxSize: 0x0003
struct FAkMidiProgramChange : FAkMidiEventBase
{ 
	char                                               ProgramNum;                                                 // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0003 (3 bytes) (0x000002 - 0x000003) align 1 MaxSize: 0x0003
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{ 
	char                                               Value;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0008 (8 bytes) (0x000002 - 0x000008) align 4 MaxSize: 0x0008
struct FAkMidiPitchBend : FAkMidiEventBase
{ 
	char                                               ValueLsb;                                                   // 0x0002   (0x0001)  
	char                                               ValueMsb;                                                   // 0x0003   (0x0001)  
	int32_t                                            FullValue;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiCc : FAkMidiEventBase
{ 
	EAkMidiCcValues                                    Cc;                                                         // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiNoteOnOff : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Velocity;                                                   // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiGeneric : FAkMidiEventBase
{ 
	char                                               Param1;                                                     // 0x0002   (0x0001)  
	char                                               Param2;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAkChannelMask
{ 
	int32_t                                            ChannelMask;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkWaapiFieldNames
{ 
	FString                                            FieldName;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkWaapiUri
{ 
	FString                                            Uri;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioEventSection*              Section;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioRTPCSection*               Section;                                                    // 0x0020   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(AAkAcousticPortal) == 0x03A0); // 928 bytes (0x000310 - 0x0003A0)
static_assert(sizeof(UAkPortalComponent) == 0x0270); // 624 bytes (0x000268 - 0x000270)
static_assert(sizeof(UAkAudioType) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UAkAcousticTexture) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(AAkAmbientSound) == 0x0308); // 776 bytes (0x0002B8 - 0x000308)
static_assert(sizeof(FAkMainOutputSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSpatialAudioSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAkCommonInitializationSettings) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FAkCommonInitializationSettingsWithSampleRate) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(FAkCommunicationSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAkCommunicationSettingsWithSystemInitialization) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FAkAdvancedSpatialAudioSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkAdvancedInitializationSettings) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering) == 0x0038); // 56 bytes (0x000034 - 0x000038)
static_assert(sizeof(FAkAndroidAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkAndroidInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkPlatformInfo) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UAkAndroidPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkAssetData) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UAkAssetDataWithMedia) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UAkAssetPlatformData) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAkAssetBase) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UAkAudioBank) == 0x0170); // 368 bytes (0x000058 - 0x000170)
static_assert(sizeof(UAkAssetDataSwitchContainerData) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UAkAssetDataSwitchContainer) == 0x00E8); // 232 bytes (0x000080 - 0x0000E8)
static_assert(sizeof(UAkAudioEventData) == 0x02B0); // 688 bytes (0x0000E8 - 0x0002B0)
static_assert(sizeof(UAkAudioEvent) == 0x00F0); // 240 bytes (0x000058 - 0x0000F0)
static_assert(sizeof(UAkGameObject) == 0x0288); // 648 bytes (0x000268 - 0x000288)
static_assert(sizeof(UAkComponent) == 0x0488); // 1160 bytes (0x000288 - 0x000488)
static_assert(sizeof(UAkAudioInputComponent) == 0x04C0); // 1216 bytes (0x000488 - 0x0004C0)
static_assert(sizeof(UAkAuxBus) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FAkBoolPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWwiseObjectDetails) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkWwiseItemToControl) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UAkCheckBox) == 0x0B90); // 2960 bytes (0x000138 - 0x000B90)
static_assert(sizeof(UAkChinookPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkMPXPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkXSXPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkFolder) == 0x00C0); // 192 bytes (0x000048 - 0x0000C0)
static_assert(sizeof(UAkGameplayStatics) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkCallbackInfo) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAkEventCallbackInfo) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkMIDIEventCallbackInfo) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UAkMarkerCallbackInfo) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UAkDurationCallbackInfo) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(FAkSegmentInfo) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UAkMusicSyncCallbackInfo) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(FAkGeometrySurfaceOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkAcousticSurface) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkTriangle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkGeometryData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UAkGeometryComponent) == 0x03A0); // 928 bytes (0x000268 - 0x0003A0)
static_assert(sizeof(UAkGroupValue) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(FAkHololensAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkHololensInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkHololensPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkIndianaAudioStatics) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAkPluginInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UAkInitBankAssetData) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAkInitBank) == 0x0078); // 120 bytes (0x000058 - 0x000078)
static_assert(sizeof(FAkAudioSession) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAkIOSInitializationSettings) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UAkIOSPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkItemBoolPropertiesConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkItemBoolProperties) == 0x0160); // 352 bytes (0x000120 - 0x000160)
static_assert(sizeof(UAkItemPropertiesConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkItemProperties) == 0x0160); // 352 bytes (0x000120 - 0x000160)
static_assert(sizeof(UAkLateReverbComponent) == 0x02B0); // 688 bytes (0x000268 - 0x0002B0)
static_assert(sizeof(UAkLinuxInitializationSettings) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UAkLinuxPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkLuminInitializationSettings) == 0x00F8); // 248 bytes (0x000030 - 0x0000F8)
static_assert(sizeof(UAkLuminPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkMacInitializationSettings) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UAkMacPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkMediaAssetData) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAkMediaAsset) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UAkLocalizedMediaAsset) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UAkExternalMediaAsset) == 0x00C0); // 192 bytes (0x000060 - 0x0000C0)
static_assert(sizeof(UAkPellegrinoPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkDPXPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkPS5PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkPlatformInitialisationSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAkPS4AdvancedInitializationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkPS4InitializationSettings) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UAkPS4PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkPS5AdvancedInitializationSettings) == 0x003C); // 60 bytes (0x000038 - 0x00003C)
static_assert(sizeof(UAkPS5InitializationSettings) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UAkDPXInitializationSettings) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(AAkReverbVolume) == 0x0348); // 840 bytes (0x000310 - 0x000348)
static_assert(sizeof(UAkRoomComponent) == 0x02B0); // 688 bytes (0x000288 - 0x0002B0)
static_assert(sizeof(UAkRtpc) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FAkGeometrySurfacePropertiesToMap) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAkSettings) == 0x0148); // 328 bytes (0x000030 - 0x000148)
static_assert(sizeof(UAkSettingsPerUser) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FAkPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAkSlider) == 0x0550); // 1360 bytes (0x000120 - 0x000550)
static_assert(sizeof(AAkSpatialAudioVolume) == 0x0328); // 808 bytes (0x000310 - 0x000328)
static_assert(sizeof(AAkSpotReflector) == 0x02E0); // 736 bytes (0x0002B8 - 0x0002E0)
static_assert(sizeof(UAkStadiaInitializationSettings) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UAkQuailInitializationSettings) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(UAkStadiaPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkQuailPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkStateValue) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FAkPoly) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAkSurfaceReflectorSetComponent) == 0x02A0); // 672 bytes (0x000268 - 0x0002A0)
static_assert(sizeof(FAkCommunicationSettingsWithCommSelection) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(UAkSwitchInitializationSettings) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UAkSwitchPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkSwitchValue) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkTrigger) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAkTVOSInitializationSettings) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UAkTVOSPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWaapiCalls) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USAkWaapiFieldNamesConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkWaapiJsonManager) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkWaapiUriConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAkWindowsAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkWindowsInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkWin32PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWin64PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWindowsPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkWinGDKAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkWinGDKInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkWinAnvilInitializationSettings) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAkWinGDKPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWinAnvilPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWwiseTree) == 0x0160); // 352 bytes (0x000120 - 0x000160)
static_assert(sizeof(UAkWwiseTreeSelector) == 0x0180); // 384 bytes (0x000120 - 0x000180)
static_assert(sizeof(FAkXboxOneGDKApuHeapInitializationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkXboxOneGDKAdvancedInitializationSettings) == 0x003C); // 60 bytes (0x000038 - 0x00003C)
static_assert(sizeof(UAkXboxOneGDKInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkXboxOneAnvilInitializationSettings) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAkXboxOneGDKPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkXboxOneAnvilPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkXboxOneApuHeapInitializationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkXboxOneAdvancedInitializationSettings) == 0x003C); // 60 bytes (0x000038 - 0x00003C)
static_assert(sizeof(UAkXboxOneInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkXboxOnePlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkXSXApuHeapInitializationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkXSXAdvancedInitializationSettings) == 0x003C); // 60 bytes (0x000038 - 0x00003C)
static_assert(sizeof(UAkXSXInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkMPXInitializationSettings) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(FAkAudioEventTrackKey) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UInterpTrackAkAudioEvent) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UInterpTrackAkAudioRTPC) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UInterpTrackInstAkAudioEvent) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UInterpTrackInstAkAudioRTPC) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UMovieSceneAkAudioEventSection) == 0x01D8); // 472 bytes (0x0000F0 - 0x0001D8)
static_assert(sizeof(UMovieSceneAkTrack) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UMovieSceneAkAudioEventTrack) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(FMovieSceneTangentDataSerializationHelper) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneFloatValueSerializationHelper) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMovieSceneFloatChannelSerializationHelper) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneAkAudioRTPCSection) == 0x0258); // 600 bytes (0x0000F0 - 0x000258)
static_assert(sizeof(UMovieSceneAkAudioRTPCTrack) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UPostEventAsync) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UPostEventAtLocationAsync) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(FAKWaapiJsonObject) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiSubscriptionId) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkAmbSoundCheckpointRecord) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAkExternalSourceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAkMidiEventBase) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FAkMidiProgramChange) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkMidiChannelAftertouch) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkMidiNoteAftertouch) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiPitchBend) == 0x0008); // 8 bytes (0x000002 - 0x000008)
static_assert(sizeof(FAkMidiCc) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiNoteOnOff) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiGeneric) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkChannelMask) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAkWaapiFieldNames) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiUri) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneAkAudioEventTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMovieSceneAkAudioRTPCTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(offsetof(AAkAcousticPortal, InitialState) == 0x0310);
static_assert(offsetof(AAkAcousticPortal, ObstructionCollisionChannel) == 0x0318);
static_assert(offsetof(UAkAudioType, UserData) == 0x0038);
static_assert(offsetof(AAkAmbientSound, AkAudioEvent) == 0x02B8);
static_assert(offsetof(AAkAmbientSound, AkComponent) == 0x02C0);
static_assert(offsetof(FAkMainOutputSettings, AudioDeviceShareset) == 0x0000);
static_assert(offsetof(FAkMainOutputSettings, PanningRule) == 0x0014);
static_assert(offsetof(FAkMainOutputSettings, ChannelConfigType) == 0x0018);
static_assert(offsetof(FAkCommonInitializationSettings, MainOutputSettings) == 0x0010);
static_assert(offsetof(FAkCommonInitializationSettings, SpatialAudioSettings) == 0x0040);
static_assert(offsetof(FAkCommunicationSettings, NetworkName) == 0x0010);
static_assert(offsetof(FAkAdvancedInitializationSettings, SpatialAudioSettings) == 0x002C);
static_assert(offsetof(UAkAndroidInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkAndroidInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkAndroidInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkAssetDataWithMedia, MediaList) == 0x0070);
static_assert(offsetof(UAkAssetPlatformData, CurrentAssetData) == 0x0030);
static_assert(offsetof(UAkAssetBase, PlatformAssetData) == 0x0048);
static_assert(offsetof(UAkAudioBank, CurrentLocalizedPlatformAssetData) == 0x0128);
static_assert(offsetof(UAkAudioBank, ReferencedBanks) == 0x0138);
static_assert(offsetof(UAkAssetDataSwitchContainerData, GroupValue) == 0x0030);
static_assert(offsetof(UAkAssetDataSwitchContainerData, DefaultGroupValue) == 0x0058);
static_assert(offsetof(UAkAssetDataSwitchContainerData, MediaList) == 0x0060);
static_assert(offsetof(UAkAssetDataSwitchContainerData, Children) == 0x0070);
static_assert(offsetof(UAkAssetDataSwitchContainer, SwitchContainers) == 0x0080);
static_assert(offsetof(UAkAssetDataSwitchContainer, DefaultGroupValue) == 0x0090);
static_assert(offsetof(UAkAudioEventData, LocalizedMedia) == 0x00F8);
static_assert(offsetof(UAkAudioEvent, RequiredBank) == 0x00A8);
static_assert(offsetof(UAkAudioEvent, CurrentLocalizedPlatformData) == 0x00C0);
static_assert(offsetof(UAkGameObject, AkAudioEvent) == 0x0268);
static_assert(offsetof(UAkGameObject, EventName) == 0x0270);
static_assert(offsetof(UAkComponent, OcclusionCollisionChannel) == 0x0290);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBus) == 0x0298);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBusName) == 0x02A0);
static_assert(offsetof(UAkAuxBus, RequiredBank) == 0x0058);
static_assert(offsetof(FAkBoolPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemName) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemPath) == 0x0010);
static_assert(offsetof(FAkWwiseObjectDetails, ItemId) == 0x0020);
static_assert(offsetof(FAkWwiseItemToControl, ItemPicked) == 0x0000);
static_assert(offsetof(FAkWwiseItemToControl, ItemPath) == 0x0030);
static_assert(offsetof(UAkCheckBox, CheckedState) == 0x0520);
static_assert(offsetof(UAkCheckBox, WidgetStyle) == 0x0538);
static_assert(offsetof(UAkCheckBox, HorizontalAlignment) == 0x0AB8);
static_assert(offsetof(UAkCheckBox, ThePropertyToControl) == 0x0AC0);
static_assert(offsetof(UAkCheckBox, ItemToControl) == 0x0AD0);
static_assert(offsetof(UAkFolder, UnrealFolderPath) == 0x0048);
static_assert(offsetof(UAkFolder, WwiseFolderPath) == 0x0058);
static_assert(offsetof(UAkCallbackInfo, AkComponent) == 0x0030);
static_assert(offsetof(UAkMarkerCallbackInfo, Label) == 0x0048);
static_assert(offsetof(UAkMusicSyncCallbackInfo, SegmentInfo) == 0x003C);
static_assert(offsetof(UAkMusicSyncCallbackInfo, MusicSyncType) == 0x0060);
static_assert(offsetof(UAkMusicSyncCallbackInfo, UserCueName) == 0x0068);
static_assert(offsetof(FAkGeometrySurfaceOverride, AcousticTexture) == 0x0000);
static_assert(offsetof(FAkAcousticSurface, Name) == 0x0008);
static_assert(offsetof(FAkGeometryData, Vertices) == 0x0000);
static_assert(offsetof(FAkGeometryData, Surfaces) == 0x0010);
static_assert(offsetof(FAkGeometryData, Triangles) == 0x0020);
static_assert(offsetof(FAkGeometryData, ToOverrideAcousticTexture) == 0x0030);
static_assert(offsetof(FAkGeometryData, ToOverrideOcclusion) == 0x0040);
static_assert(offsetof(UAkGeometryComponent, MeshType) == 0x0268);
static_assert(offsetof(UAkGeometryComponent, StaticMeshSurfaceOverride) == 0x0278);
static_assert(offsetof(UAkGeometryComponent, CollisionMeshSurfaceOverride) == 0x02C8);
static_assert(offsetof(UAkGeometryComponent, AssociatedRoom) == 0x02E0);
static_assert(offsetof(UAkGeometryComponent, GeometryData) == 0x02F8);
static_assert(offsetof(UAkHololensInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkHololensInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkHololensInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(FAkPluginInfo, Name) == 0x0000);
static_assert(offsetof(FAkPluginInfo, dll) == 0x0018);
static_assert(offsetof(UAkInitBankAssetData, PluginInfos) == 0x0080);
static_assert(offsetof(UAkInitBank, AvailableAudioCultures) == 0x0058);
static_assert(offsetof(UAkInitBank, DefaultLanguage) == 0x0068);
static_assert(offsetof(FAkAudioSession, AudioSessionCategory) == 0x0000);
static_assert(offsetof(FAkAudioSession, AudioSessionMode) == 0x0008);
static_assert(offsetof(UAkIOSInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkIOSInitializationSettings, AudioSession) == 0x00A0);
static_assert(offsetof(UAkIOSInitializationSettings, CommunicationSettings) == 0x00B0);
static_assert(offsetof(UAkIOSInitializationSettings, AdvancedSettings) == 0x00D8);
static_assert(offsetof(UAkLateReverbComponent, AuxBus) == 0x0270);
static_assert(offsetof(UAkLateReverbComponent, AuxBusName) == 0x0278);
static_assert(offsetof(UAkLateReverbComponent, NextLowerPriorityComponent) == 0x0298);
static_assert(offsetof(UAkLinuxInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkLinuxInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkLinuxInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkLuminInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkLuminInitializationSettings, CommunicationSettings) == 0x0098);
static_assert(offsetof(UAkLuminInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkMacInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkMacInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkMacInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkMediaAsset, UserData) == 0x0038);
static_assert(offsetof(UAkMediaAsset, CurrentMediaAssetData) == 0x0048);
static_assert(offsetof(UAkPS4InitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkPS4InitializationSettings, CommunicationSettings) == 0x0098);
static_assert(offsetof(UAkPS4InitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkPS5InitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkPS5InitializationSettings, CommunicationSettings) == 0x0098);
static_assert(offsetof(UAkPS5InitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(AAkReverbVolume, AuxBus) == 0x0318);
static_assert(offsetof(AAkReverbVolume, AuxBusName) == 0x0320);
static_assert(offsetof(AAkReverbVolume, LateReverbComponent) == 0x0340);
static_assert(offsetof(UAkRoomComponent, NextLowerPriorityComponent) == 0x0290);
static_assert(offsetof(FAkGeometrySurfacePropertiesToMap, AcousticTexture) == 0x0000);
static_assert(offsetof(UAkSettings, WwiseProjectPath) == 0x0038);
static_assert(offsetof(UAkSettings, WwiseSoundDataFolder) == 0x0048);
static_assert(offsetof(UAkSettings, DefaultOcclusionCollisionChannel) == 0x0059);
static_assert(offsetof(UAkSettings, CommandletCommitMessage) == 0x00B8);
static_assert(offsetof(UAkSettings, UnrealCultureToWwiseCulture) == 0x00C8);
static_assert(offsetof(UAkSettings, WwiseWindowsInstallationPath) == 0x0120);
static_assert(offsetof(UAkSettings, WwiseMacInstallationPath) == 0x0130);
static_assert(offsetof(UAkSettingsPerUser, WwiseWindowsInstallationPath) == 0x0030);
static_assert(offsetof(UAkSettingsPerUser, WwiseMacInstallationPath) == 0x0040);
static_assert(offsetof(UAkSettingsPerUser, WaapiIPAddress) == 0x0058);
static_assert(offsetof(FAkPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(UAkSlider, WidgetStyle) == 0x0138);
static_assert(offsetof(UAkSlider, Orientation) == 0x0480);
static_assert(offsetof(UAkSlider, SliderBarColor) == 0x0484);
static_assert(offsetof(UAkSlider, SliderHandleColor) == 0x0494);
static_assert(offsetof(UAkSlider, ThePropertyToControl) == 0x04B0);
static_assert(offsetof(UAkSlider, ItemToControl) == 0x04C0);
static_assert(offsetof(AAkSpatialAudioVolume, SurfaceReflectorSet) == 0x0310);
static_assert(offsetof(AAkSpatialAudioVolume, LateReverb) == 0x0318);
static_assert(offsetof(AAkSpatialAudioVolume, Room) == 0x0320);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBus) == 0x02B8);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBusName) == 0x02C0);
static_assert(offsetof(AAkSpotReflector, AcousticTexture) == 0x02D0);
static_assert(offsetof(UAkStadiaInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkStadiaInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkStadiaInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(FAkPoly, Texture) == 0x0000);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AcousticPolys) == 0x0270);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AssociatedRoom) == 0x0288);
static_assert(offsetof(FAkCommunicationSettingsWithCommSelection, CommunicationSystem) == 0x0020);
static_assert(offsetof(UAkSwitchInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkSwitchInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkSwitchInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkTVOSInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkTVOSInitializationSettings, AudioSession) == 0x00A0);
static_assert(offsetof(UAkTVOSInitializationSettings, CommunicationSettings) == 0x00B0);
static_assert(offsetof(UAkTVOSInitializationSettings, AdvancedSettings) == 0x00D8);
static_assert(offsetof(UAkWindowsInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkWindowsInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkWindowsInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkWinGDKInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkWinGDKInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkWinGDKInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, ApuHeapSettings) == 0x0098);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkXboxOneInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkXboxOneInitializationSettings, ApuHeapSettings) == 0x0098);
static_assert(offsetof(UAkXboxOneInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkXboxOneInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkXSXInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkXSXInitializationSettings, ApuHeapSettings) == 0x0098);
static_assert(offsetof(UAkXSXInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkXSXInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(FAkAudioEventTrackKey, AkAudioEvent) == 0x0008);
static_assert(offsetof(FAkAudioEventTrackKey, EventName) == 0x0010);
static_assert(offsetof(UInterpTrackAkAudioEvent, Events) == 0x0098);
static_assert(offsetof(UInterpTrackAkAudioRTPC, Param) == 0x0098);
static_assert(offsetof(UMovieSceneAkAudioEventSection, Event) == 0x0130);
static_assert(offsetof(UMovieSceneAkAudioEventSection, EventName) == 0x0148);
static_assert(offsetof(UMovieSceneAkAudioEventSection, MaxDurationSourceID) == 0x0180);
static_assert(offsetof(UMovieSceneAkTrack, Sections) == 0x0098);
static_assert(offsetof(FMovieSceneTangentDataSerializationHelper, TangentWeightMode) == 0x0008);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, InterpMode) == 0x0004);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, TangentMode) == 0x0005);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, Tangent) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap) == 0x0000);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap) == 0x0001);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Times) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Values) == 0x0018);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPC) == 0x00F0);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, Name) == 0x00F8);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatCurve) == 0x0108);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper) == 0x0188);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPCChannel) == 0x01B8);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSrcName) == 0x0000);
static_assert(offsetof(FAkExternalSourceInfo, CodecID) == 0x0010);
static_assert(offsetof(FAkExternalSourceInfo, Filename) == 0x0018);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSourceAsset) == 0x0028);
static_assert(offsetof(FAkMidiEventBase, Type) == 0x0000);
static_assert(offsetof(FAkMidiCc, Cc) == 0x0002);
static_assert(offsetof(FAkWaapiFieldNames, FieldName) == 0x0000);
static_assert(offsetof(FAkWaapiUri, Uri) == 0x0000);
static_assert(offsetof(FMovieSceneAkAudioEventTemplate, Section) == 0x0020);
static_assert(offsetof(FMovieSceneAkAudioRTPCTemplate, Section) == 0x0020);
