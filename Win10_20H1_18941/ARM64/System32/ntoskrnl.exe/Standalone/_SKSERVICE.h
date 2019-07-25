typedef enum _SKSERVICE
{
  SECURESERVICE_NONE = 0,
  SECURESERVICE_PHASE4_INIT = 1,
  SECURESERVICE_START_PROCESSOR = 2,
  SECURESERVICE_FINISH_START_PROCESSOR = 3,
  SECURESERVICE_REGISTER_SYSTEM_DLLS = 4,
  SECURESERVICE_REGISTER_SYSTEM_PROCESS = 5,
  SECURESERVICE_CREATE_PROCESS = 6,
  SECURESERVICE_INITIALIZE_PROCESS = 7,
  SECURESERVICE_CREATE_THREAD = 8,
  SECURESERVICE_REQUEST_THREAD_EXIT = 9,
  SECURESERVICE_TERMINATE_THREAD = 10,
  SECURESERVICE_RUNDOWN_PROCESS = 11,
  SECURESERVICE_DEBUG_PROCESS = 12,
  SECURESERVICE_GET_TEB_ADDRESS = 13,
  SECURESERVICE_GET_CONTEXT = 14,
  SECURESERVICE_SET_CONTEXT = 15,
  SECURESERVICE_SEND_ATTACH_NOTIFICATIONS = 16,
  SECURESERVICE_GET_ETW_DEBUG_ID = 17,
  SECURESERVICE_GET_ON_DEMAND_DEBUG_CHALLENGE = 18,
  SECURESERVICE_ENABLE_ON_DEMAND_DEBUG_WITH_RESPONSE = 19,
  SECURESERVICE_RETRIEVE_MAILBOX = 20,
  SECURESERVICE_IS_TRUSTLET_RUNNING = 21,
  SECURESERVICE_CREATE_SECURE_ALLOCATION = 22,
  SECURESERVICE_FILL_SECURE_ALLOCATION = 23,
  SECURESERVICE_MAKE_CODE_CATALOG = 24,
  SECURESERVICE_CREATE_SECURE_IMAGE = 25,
  SECURESERVICE_FINALIZE_SECURE_IMAGE_HASH = 26,
  SECURESERVICE_FINISH_SECURE_IMAGE_VALIDATION = 27,
  SECURESERVICE_PREPARE_IMAGE_RELOCATIONS = 28,
  SECURESERVICE_RELOCATE_IMAGE = 29,
  SECURESERVICE_CLOSE_SECURE_HANDLE = 30,
  SECURESERVICE_VALIDATE_DYNAMIC_CODE = 31,
  SECURESERVICE_TRANSFER_IMAGE_VERSION_RESOURCE = 32,
  SECURESERVICE_SET_CODE_INTEGRITY_POLICY = 33,
  SECURESERVICE_EXCHANGE_ENTROPY = 34,
  SECURESERVICE_ALLOCATE_HIBERNATE_RESOURCES = 35,
  SECURESERVICE_FREE_HIBERNATE_RESOURCES = 36,
  SECURESERVICE_CONFIGURE_DYNAMIC_MEMORY = 37,
  SECURESERVICE_DEBUG_PROTECT_MEMORY = 38,
  SECURESERVICE_DEBUG_READ_WRITE_MEMORY = 39,
  SECURESERVICE_QUERY_VIRTUAL_MEMORY = 40,
  SECURESERVICE_CAPTURE_IMAGE_IAT = 41,
  SECURESERVICE_FREE_IMAGE_IAT = 42,
  SECURESERVICE_APPLY_FIXUPS = 43,
  SECURESERVICE_CREATE_ENCLAVE = 44,
  SECURESERVICE_LOAD_ENCLAVE_DATA = 45,
  SECURESERVICE_LOAD_ENCLAVE_MODULE = 46,
  SECURESERVICE_INITIALIZE_ENCLAVE = 47,
  SECURESERVICE_TERMINATE_ENCLAVE = 48,
  SECURESERVICE_DELETE_ENCLAVE = 49,
  SECURESERVICE_CONNECT_SW_INTERRUPT = 50,
  SECURESERVICE_RELAX_HYPERGUARD_QUOTA = 51,
  SECURESERVICE_LIVEDUMP_QUERY_SECONDARYDATA_SIZE = 52,
  SECURESERVICE_LIVEDUMP_START = 53,
  SECURESERVICE_LIVEDUMP_ADD_BUFFER = 54,
  SECURESERVICE_LIVEDUMP_SETUP_BUFFER = 55,
  SECURESERVICE_LIVEDUMP_FINALIZE = 56,
  SECURESERVICE_LIVEDUMP_ABORT = 57,
  SECURESERVICE_LIVEDUMP_CAPTURE_PROCESS = 58,
  SECURESERVICE_NOTIFY_POWER_STATE = 59,
  SECURESERVICE_QUERY_PROFILE_INFORMATION = 60,
  SECURESERVICE_UPDATE_FREEZE_BIAS = 61,
  SECURESERVICE_CREATE_SECURE_SECTION = 62,
  SECURESERVICE_DELETE_SECURE_SECTION = 63,
  SECURESERVICE_QUERY_SECURE_DEVICE = 64,
  SECURESERVICE_UNPROTECT_SECURE_DEVICE = 65,
  SECURESERVICE_DETERMINE_HOT_PATCH_TYPE = 66,
  SECURESERVICE_OBTAIN_PATCH_UNDO_TABLE_SIZE = 67,
  SECURESERVICE_OBTAIN_PATCH_UNDO_TABLE = 68,
  SECURESERVICE_APPLY_HOT_PATCH = 69,
  SECURESERVICE_REVERT_HOT_PATCH = 70,
  SECURESERVICE_PREPARE_DRIVER_FOR_PATCH = 71,
  SECURESERVICE_PROVISION_DUMP_KEYS = 72,
  SECURESERVICE_CAPTURE_PGO_DATA = 73,
  SECURESERVICE_DEBUG_SWEEP_ICACHE_RANGE = 74,
  SECURESERVICE_SET_TRACEPOINT = 75,
  SECURESERVICE_NO_TRACING_FIRST = 191,
  SECURESERVICE_GET_PEB_ADDRESS = 192,
  SECURESERVICE_VALIDATE_SECURE_IMAGE_PAGES = 193,
  SECURESERVICE_PRE_INIT_FIRST = 207,
  SECURESERVICE_PHASE3_INIT = 208,
  SECURESERVICE_PERIODIC = 209,
  SECURESERVICE_WORK_QUEUE = 210,
  SECURESERVICE_RESERVE_PROTECTED_PAGES = 211,
  SECURESERVICE_APPLY_DYNAMIC_RELOCATIONS = 212,
  SECURESERVICE_ETW_ENABLE_CALLBACK = 213,
  SECURESERVICE_INITIALIZE_KERNEL_CFG = 214,
  SECURESERVICE_LOAD_DRIVER = 215,
  SECURESERVICE_UNLOAD_DRIVER = 216,
  SECURESERVICE_ENABLE_CFG_TARGET = 217,
  SECURESERVICE_COMPLETE_SLAB_CONFIGURATION = 218,
  SECURESERVICE_UPDATE_IMPORT_RELOCATIONS = 219,
  SECURESERVICE_DISPATCH_LEVEL_FIRST = 239,
  SECURESERVICE_FLUSH_ADDRESS_SPACE = 240,
  SECURESERVICE_FAST_FLUSH_RANGE_LIST = 241,
  SECURESERVICE_SLOW_FLUSH_RANGE_LIST = 242,
  SECURESERVICE_REMOVE_PROTECTED_PAGE = 243,
  SECURESERVICE_COPY_PROTECTED_PAGE = 244,
  SECURESERVICE_REGISTER_PROTECTED_PAGE = 245,
  SECURESERVICE_DISAMBIGUATE_PROTECTED_PAGE = 246,
  SECURESERVICE_MAKE_PROTECTED_PAGE_WRITABLE = 247,
  SECURESERVICE_MAKE_PROTECTED_PAGE_EXECUTABLE = 248,
  SECURESERVICE_QUERY_STRONG_CODE_FEATURES = 249,
  SECURESERVICE_INVOKE_EFI_RUNTIME_SERVICE = 250,
  SECURESERVICE_LIVEDUMP_COLLECT_LIVE_DUMP = 251,
  SECURESERVICE_REGISTER_LOG_PAGES = 252,
  SECURESERVICE_RECLAIM_PARTITION_PAGES = 253,
  SECURESERVICE_BIND_NT_KERNEL_IMPORTS = 254,
  SECURESERVICE_SET_PLACEHOLDER_PAGES = 255,
  SECURESERVICE_VERIFY_PAGE = 256,
  SECURESERVICE_PREPARE_FOR_HIBERNATION = 257,
  SECURESERVICE_PREPARE_FOR_CRASHDUMP = 258,
  SECURESERVICE_REPORT_BUGCHECK_PROGRESS = 259,
  SECURESERVICE_SHUTDOWN = 260,
  SECURESERVICE_QUERY_SECURE_PCI_INFO = 261,
  SECURESERVICE_ACCESS_PCI_DEVICE = 262,
  SECURESERVICE_REINITIALIZE_DEBUGGER_TRANSPORT = 263,
  SECURESERVICE_KSR_CALL = 264,
  SECURESERVICE_SVC_CALL = 265,
  SECURESERVICE_SVC_SMC = 266,
  SECURESERVICE_BUGCHECK = 1792,
  SECURESERVICE_LIMITED_MODE_SERVICE_START = 2048,
} SKSERVICE, *PSKSERVICE;

