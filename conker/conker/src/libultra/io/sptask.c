#include <ultra64.h>

// libultra's tmp_task: the copy of a task that osSpTaskLoad gives the RSP.
extern OSTask D_80036B60;

// Copies a task into D_80036B60 with its buffer pointers converted to physical
// addresses, which is what the RSP reads (libultra's sptask.c). Returns the copy.
OSTask *_VirtualToPhysicalTask(OSTask *intp) {
    OSTask *tp = &D_80036B60;

    bcopy(intp, tp, sizeof(OSTask));
    if (tp->t.ucode != NULL) {
        tp->t.ucode = (u64 *) osVirtualToPhysical(tp->t.ucode);
    }
    if (tp->t.ucode_data != NULL) {
        tp->t.ucode_data = (u64 *) osVirtualToPhysical(tp->t.ucode_data);
    }
    if (tp->t.dram_stack != NULL) {
        tp->t.dram_stack = (u64 *) osVirtualToPhysical(tp->t.dram_stack);
    }
    if (tp->t.output_buff != NULL) {
        tp->t.output_buff = (u64 *) osVirtualToPhysical(tp->t.output_buff);
    }
    if (tp->t.output_buff_size != NULL) {
        tp->t.output_buff_size = (u64 *) osVirtualToPhysical(tp->t.output_buff_size);
    }
    if (tp->t.data_ptr != NULL) {
        tp->t.data_ptr = (u64 *) osVirtualToPhysical(tp->t.data_ptr);
    }
    if (tp->t.yield_data_ptr != NULL) {
        tp->t.yield_data_ptr = (u64 *) osVirtualToPhysical(tp->t.yield_data_ptr);
    }
    return tp;
}

void osSpTaskLoad(OSTask *intp)
{

    OSTask *tp;
    tp = _VirtualToPhysicalTask(intp);
    if (tp->t.flags & OS_TASK_YIELDED)
    {
        tp->t.ucode_data = tp->t.yield_data_ptr;
        tp->t.ucode_data_size = tp->t.yield_data_size;
        intp->t.flags &= ~OS_TASK_YIELDED;
        if (tp->t.flags & OS_TASK_LOADABLE)
          tp->t.ucode = (u64 *)IO_READ((u32)intp->t.yield_data_ptr + OS_YIELD_DATA_SIZE - 4);
    }
    osWritebackDCache(tp, sizeof(OSTask));
    __osSpSetStatus(SP_CLR_YIELD | SP_CLR_YIELDED | SP_CLR_TASKDONE | SP_SET_INTR_BREAK);
    while (__osSpSetPc(SP_IMEM_START) == -1)
        ;

    while (__osSpRawStartDma(1, (SP_IMEM_START - sizeof(*tp)), tp,
                 sizeof(OSTask)) == -1)
        ;

    while (__osSpDeviceBusy())
        ;

    while (__osSpRawStartDma(1, SP_IMEM_START, tp->t.ucode_boot,
                 tp->t.ucode_boot_size) == -1)
        ;
}

void osSpTaskStartGo(OSTask *tp) {
    while(__osSpDeviceBusy())
        ;
    __osSpSetStatus(SP_SET_INTR_BREAK | SP_CLR_SSTEP | SP_CLR_BROKE | SP_CLR_HALT);
}
