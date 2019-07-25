typedef enum _POWER_INFORMATION_LEVEL_INTERNAL
{
  PowerInternalAcpiInterfaceRegister = 0,
  PowerInternalS0LowPowerIdleInfo = 1,
  PowerInternalReapplyBrightnessSettings = 2,
  PowerInternalUserAbsencePrediction = 3,
  PowerInternalUserAbsencePredictionCapability = 4,
  PowerInternalPoProcessorLatencyHint = 5,
  PowerInternalStandbyNetworkRequest = 6,
  PowerInternalDirtyTransitionInformation = 7,
  PowerInternalSetBackgroundTaskState = 8,
  PowerInternalReservedDoNotUseEnum9 = 9,
  PowerInternalReservedDoNotUseEnum10 = 10,
  PowerInternalReservedDoNotUseEnum11 = 11,
  PowerInternalReservedDoNotUseEnum12 = 12,
  PowerInternalReservedDoNotUseEnum13 = 13,
  PowerInternalReservedDoNotUseEnum14 = 14,
  PowerInternalReservedDoNotUseEnum15 = 15,
  PowerInternalReservedDoNotUseEnum16 = 16,
  PowerInternalReservedDoNotUseEnum17 = 17,
  PowerInternalBootSessionStandbyActivationInformation = 18,
  PowerInternalSessionPowerState = 19,
  PowerInternalSessionTerminalInput = 20,
  PowerInternalSetWatchdog = 21,
  PowerInternalPhysicalPowerButtonPressInfoAtBoot = 22,
  PowerInternalExternalMonitorConnected = 23,
  PowerInternalHighPrecisionBrightnessSettings = 24,
  PowerInternalWinrtScreenToggle = 25,
  PowerInternalPpmQosDisable = 26,
  PowerInternalTransitionCheckpoint = 27,
  PowerInternalInputControllerState = 28,
  PowerInternalFirmwareResetReason = 29,
  PowerInternalPpmSchedulerQosSupport = 30,
  PowerInternalBootStatGet = 31,
  PowerInternalBootStatSet = 32,
  PowerInternalCallHasNotReturnedWatchdog = 33,
  PowerInternalBootStatCheckIntegrity = 34,
  PowerInternalBootStatRestoreDefaults = 35,
  PowerInternalHostEsStateUpdate = 36,
  PowerInternalGetPowerActionState = 37,
  PowerInternalBootStatUnlock = 38,
  PowerInternalWakeOnVoiceState = 39,
  PowerInternalDeepSleepBlock = 40,
  PowerInternalIsPoFxDevice = 41,
  PowerInternalPowerTransitionExtensionAtBoot = 42,
  PowerInternalProcessorBrandedFrequency = 43,
  PowerInternalTimeBrokerExpirationReason = 44,
  PowerInternalNotifyUserShutdownStatus = 45,
  PowerInternalPowerRequestTerminalCoreWindow = 46,
  PowerInternalProcessorIdleVeto = 47,
  PowerInternalPlatformIdleVeto = 48,
  PowerInternalIsLongPowerButtonBugcheckEnabled = 49,
  PowerInternalAutoChkCausedReboot = 50,
  PowerInternalSetWakeAlarmOverride = 51,
  PowerInternalDirectedFxAddTestDevice = 53,
  PowerInternalDirectedFxRemoveTestDevice = 54,
  PowerInternalDirectedFxSetMode = 56,
  PowerInternalRegisterPowerPlane = 57,
  PowerInternalSetDirectedDripsFlags = 58,
  PowerInternalClearDirectedDripsFlags = 59,
  PowerInternalRetrieveHiberFileResumeContext = 60,
  PowerInternalReadHiberFilePage = 61,
  PowerInternalLastBootSucceeded = 62,
  PowerInternalQuerySleepStudyHelperRoutineBlock = 63,
  PowerInternalDirectedDripsQueryCapabilities = 64,
  PowerInternalClearConstraints = 65,
  PowerInternalSoftParkVelocityEnabled = 66,
  PowerInformationInternalMaximum = 67,
} POWER_INFORMATION_LEVEL_INTERNAL, *PPOWER_INFORMATION_LEVEL_INTERNAL;

