typedef struct _PROC_IDLE_POLICY
{
  /* 0x0000 */ unsigned char PromotePercent;
  /* 0x0001 */ unsigned char DemotePercent;
  /* 0x0002 */ unsigned char PromotePercentBase;
  /* 0x0003 */ unsigned char DemotePercentBase;
  /* 0x0004 */ unsigned char AllowScaling;
  /* 0x0005 */ unsigned char ForceLightIdle;
} PROC_IDLE_POLICY, *PPROC_IDLE_POLICY; /* size: 0x0006 */

typedef union _PPM_IDLE_SYNCHRONIZATION_STATE
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ long RefCount : 24; /* bit position: 0 */
      /* 0x0000 */ unsigned long State : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_IDLE_SYNCHRONIZATION_STATE, *PPPM_IDLE_SYNCHRONIZATION_STATE; /* size: 0x0004 */

typedef struct _PROC_FEEDBACK
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned __int64 CyclesLast;
  /* 0x0010 */ unsigned __int64 CyclesActive;
  /* 0x0018 */ struct _PROC_FEEDBACK_COUNTER* Counters[2];
  /* 0x0028 */ unsigned __int64 LastUpdateTime;
  /* 0x0030 */ unsigned __int64 UnscaledTime;
  /* 0x0038 */ volatile __int64 UnaccountedTime;
  /* 0x0040 */ unsigned __int64 ScaledTime[2];
  /* 0x0050 */ unsigned __int64 UnaccountedKernelTime;
  /* 0x0058 */ unsigned __int64 PerformanceScaledKernelTime;
  /* 0x0060 */ unsigned long UserTimeLast;
  /* 0x0064 */ unsigned long KernelTimeLast;
  /* 0x0068 */ unsigned __int64 IdleGenerationNumberLast;
  /* 0x0070 */ unsigned __int64 HvActiveTimeLast;
  /* 0x0078 */ unsigned char KernelTimesIndex;
  /* 0x0079 */ unsigned char CounterDiscardsIdleTime;
  /* 0x007a */ char __PADDING__[6];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0080 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
  ProcHypervisorHvCounters = 3,
} PROC_HYPERVISOR_STATE, *PPROC_HYPERVISOR_STATE;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _PPM_FFH_THROTTLE_STATE_INFO
{
  /* 0x0000 */ unsigned char EnableLogging;
  /* 0x0004 */ unsigned long MismatchCount;
  /* 0x0008 */ unsigned char Initialized;
  /* 0x0010 */ unsigned __int64 LastValue;
  /* 0x0018 */ union _LARGE_INTEGER LastLogTickCount;
} PPM_FFH_THROTTLE_STATE_INFO, *PPPM_FFH_THROTTLE_STATE_INFO; /* size: 0x0020 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef enum _KHETERO_CPU_QOS
{
  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDynamic = 4,
  KHeteroCpuQosMax = 4,
} KHETERO_CPU_QOS, *PKHETERO_CPU_QOS;

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ volatile unsigned __int64 IdleTimeEntry;
  /* 0x0028 */ unsigned __int64 IdleTimeExpiration;
  /* 0x0030 */ unsigned char NonInterruptibleTransition;
  /* 0x0031 */ unsigned char PepWokenTransition;
  /* 0x0032 */ unsigned char HvTargetState;
  /* 0x0033 */ unsigned char SoftParked;
  /* 0x0034 */ unsigned long TargetIdleState;
  /* 0x0038 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x0040 */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0048 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00c8 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00cc */ unsigned long LastSysTime;
  /* 0x00d0 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00d8 */ long WmiInterfaceEnabled;
  /* 0x00e0 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0100 */ struct _KDPC PerfActionDpc;
  /* 0x0140 */ volatile long PerfActionMask;
  /* 0x0148 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0150 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0158 */ struct _PROC_PERF_CONSTRAINT* PerfConstraint;
  /* 0x0160 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x0168 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x0170 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0178 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0180 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x0181 */ unsigned char PerformanceSchedulingClass;
  /* 0x0182 */ unsigned char EfficiencySchedulingClass;
  /* 0x0183 */ unsigned char GuaranteedPerformancePercent;
  /* 0x0184 */ unsigned char Parked;
  /* 0x0185 */ unsigned char LongPriorQosPeriod;
  /* 0x0186 */ unsigned short LatestAffinitizedPercent;
  /* 0x0188 */ unsigned long LatestPerformancePercent;
  /* 0x018c */ unsigned long AveragePerformancePercent;
  /* 0x0190 */ unsigned long RelativePerformance;
  /* 0x0194 */ unsigned long Utility;
  /* 0x0198 */ unsigned long AffinitizedUtility;
  /* 0x019c */ unsigned long MediaUtility;
  union
  {
    /* 0x01a0 */ unsigned __int64 SnapTimeLast;
    /* 0x01a0 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01a8 */ unsigned __int64 ActiveTime;
  /* 0x01b0 */ unsigned __int64 TotalTime;
  /* 0x01b8 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x01c0 */ unsigned __int64 LastQosTranstionTsc;
  /* 0x01c8 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x01d0 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x01d4 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x01d8 */ unsigned short QosEquivalencyMask;
  /* 0x01da */ char __PADDING__[6];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x01e0 */

