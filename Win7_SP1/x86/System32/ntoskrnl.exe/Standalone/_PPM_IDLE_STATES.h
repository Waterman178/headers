typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _PPM_IDLE_STATE
{
  /* 0x0000 */ struct _KAFFINITY_EX DomainMembers;
  /* 0x000c */ void* IdleCheck /* function */;
  /* 0x0010 */ void* IdleHandler /* function */;
  /* 0x0018 */ unsigned __int64 HvConfig;
  /* 0x0020 */ void* Context;
  /* 0x0024 */ unsigned long Latency;
  /* 0x0028 */ unsigned long Power;
  /* 0x002c */ unsigned long TimeCheck;
  /* 0x0030 */ unsigned long StateFlags;
  /* 0x0034 */ unsigned char PromotePercent;
  /* 0x0035 */ unsigned char DemotePercent;
  /* 0x0036 */ unsigned char PromotePercentBase;
  /* 0x0037 */ unsigned char DemotePercentBase;
  /* 0x0038 */ unsigned char StateType;
  /* 0x0039 */ char __PADDING__[7];
} PPM_IDLE_STATE, *PPPM_IDLE_STATE; /* size: 0x0040 */

typedef struct _PPM_IDLE_STATES
{
  /* 0x0000 */ unsigned long Count;
  union
  {
    union
    {
      /* 0x0004 */ unsigned long AsULONG;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long AllowScaling : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long Disabled : 1; /* bit position: 1 */
        /* 0x0004 */ unsigned long HvMaxCState : 4; /* bit position: 2 */
        /* 0x0004 */ unsigned long Reserved : 26; /* bit position: 6 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0008 */ unsigned long TargetState;
  /* 0x000c */ unsigned long ActualState;
  /* 0x0010 */ unsigned long OldState;
  /* 0x0014 */ struct _KAFFINITY_EX TargetProcessors;
  /* 0x0020 */ struct _PPM_IDLE_STATE State[1];
} PPM_IDLE_STATES, *PPPM_IDLE_STATES; /* size: 0x0060 */

