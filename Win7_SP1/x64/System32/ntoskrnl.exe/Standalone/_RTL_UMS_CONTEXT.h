typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XSAVE_FORMAT FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _RTL_UMS_CONTEXT
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY Link;
  /* 0x0010 */ struct _CONTEXT Context;
  /* 0x04e0 */ void* Teb;
  /* 0x04e8 */ void* UserContext;
  union
  {
    struct /* bitfield */
    {
      /* 0x04f0 */ volatile unsigned long ScheduledThread : 1; /* bit position: 0 */
      /* 0x04f0 */ volatile unsigned long HasQuantumReq : 1; /* bit position: 1 */
      /* 0x04f0 */ volatile unsigned long HasAffinityReq : 1; /* bit position: 2 */
      /* 0x04f0 */ volatile unsigned long HasPriorityReq : 1; /* bit position: 3 */
      /* 0x04f0 */ volatile unsigned long Suspended : 1; /* bit position: 4 */
      /* 0x04f0 */ volatile unsigned long VolatileContext : 1; /* bit position: 5 */
      /* 0x04f0 */ volatile unsigned long Terminated : 1; /* bit position: 6 */
      /* 0x04f0 */ volatile unsigned long DebugActive : 1; /* bit position: 7 */
      /* 0x04f0 */ volatile unsigned long RunningOnSelfThread : 1; /* bit position: 8 */
      /* 0x04f0 */ volatile unsigned long DenyRunningOnSelfThread : 1; /* bit position: 9 */
      /* 0x04f0 */ volatile unsigned long ReservedFlags : 22; /* bit position: 10 */
    }; /* bitfield */
    /* 0x04f0 */ volatile long Flags;
  }; /* size: 0x0004 */
  union
  {
    struct /* bitfield */
    {
      /* 0x04f8 */ volatile unsigned __int64 KernelUpdateLock : 1; /* bit position: 0 */
      /* 0x04f8 */ volatile unsigned __int64 Reserved : 1; /* bit position: 1 */
      /* 0x04f8 */ volatile unsigned __int64 PrimaryClientID : 62; /* bit position: 2 */
    }; /* bitfield */
    /* 0x04f8 */ volatile unsigned __int64 ContextLock;
  }; /* size: 0x0008 */
  /* 0x0500 */ unsigned __int64 QuantumValue;
  /* 0x0508 */ struct _GROUP_AFFINITY AffinityMask;
  /* 0x0518 */ long Priority;
  /* 0x0520 */ struct _RTL_UMS_CONTEXT* PrimaryUmsContext;
  /* 0x0528 */ unsigned long SwitchCount;
  /* 0x052c */ unsigned long KernelYieldCount;
  /* 0x0530 */ unsigned long MixedYieldCount;
  /* 0x0534 */ unsigned long YieldCount;
  /* 0x0538 */ long __PADDING__[2];
} RTL_UMS_CONTEXT, *PRTL_UMS_CONTEXT; /* size: 0x0540 */

