#pragma once
#include "DuckModule.h"
#include "EUIMenuItemID.generated.h"

UENUM(BlueprintType)
enum class EUIMenuItemID : uint8 {
    None,
    Test,
    ControlSetting,
    OperationMode,
    HudPosition,
    SoundOption,
    SystemSetting,
    Language,
    DisplaySetting,
    KeyBindSetting,
    AutoCombo,
    EasyHyperCombo,
    AutoSuperJump,
    BattleCommentary,
    BGMVolume,
    SEVolume,
    VoiceVolume,
    ChatVolume_Speaker,
    StoryVolume,
    Message,
    SubTitle_Battle,
    SubTitle_Story,
    ControllerSelect,
    ReplayAutoUpload,
    ReplayAutoSave,
    StatAutoUpload,
    DisplaySetting_Basic,
    DisplaySetting_Custom,
    PauseContinue,
    CommondList,
    Manual,
    Jump_MainMenu,
    Jump_CharaSelect,
    Jump_MissionSelect,
    Jump_OnlineMenu,
    Jump_Ranking,
    Jump_Lobby,
    Jump_ReplayList,
    Rematch,
    Research,
    PreviousMode,
    MatchingVersusFinish,
    StoryPauseMenu,
    ReStart,
    StartPosition,
    SideSetting,
    KeyLog,
    AttackData,
    NetworkSimulation,
    ShortCutSetting,
    TrainingBasic_Default,
    Action,
    CPU_Level,
    Guard,
    AdvancingGuard,
    Passive,
    AirPassive,
    GruppeDefense,
    CounterHit,
    TrainingDummy_Default,
    VitalGauge,
    HCGauge,
    GemType,
    GemGauge,
    TrainingGauge_Default,
    OnlineStandby,
    OnlineRegion,
    SignalStrength,
    RecordSlot,
    RecordRandom,
    NetworkMatch,
    OnlineMenu,
    SearchList,
    CollectionMenu,
    CollectionItem,
    MissionMenu,
    MissionItem,
    MissionDispType,
    NextMission,
    PrevMission,
    LobbyMenu,
    LobbyItem,
    LobbyMaking,
    LobbySearch,
    RankingSelect,
    StoryStart,
    StoryContinue,
    ProfileCard,
    Versus,
    TeamEdit,
    SetDefault,
    OnlineMatchType,
    NUM,
};

