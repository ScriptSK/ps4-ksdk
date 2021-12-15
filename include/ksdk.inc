// golden
// 6/12/2018
//

/* functions */
KFUNC(0x1C0, Xfast_syscall, void, (void));
KFUNC(0x2716a0, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x2715b0, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x38cd0, printf, int, (const char *fmt, ... ));
KFUNC(0xb7aa0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x301b20, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x301ce0, free, void, (void *addr, void *type));
KFUNC(0x2713f0, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x1496c0, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x271e20, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x37be70, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x30f450, strlen, uint64_t, (const char *str));
KFUNC(0x453ea0, pause, void, (const char *wmesg, int timo));
KFUNC(0x96f40, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x97230, kthread_exit, void, (void));
KFUNC(0x1cbb90, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x1cc690, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x4541b0, kern_yield, void, (uint64_t p));
KFUNC(0x314870, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x3149a0, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x1ed670, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x969e0, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x978a0, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom name
KFUNC(0x97640, kthread_suspend_check, void, (void));
KFUNC(0x97750, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x43e390, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x43610, sx_xlock, void, (struct sx *sx));
KFUNC(0x43e7d0, sx_xunlock, void, (struct sx *sx));
KFUNC(0x2ef960, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x2ef2d0, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x2ef4a0, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x2eeeb0, mtx_lock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x2ef170, mtx_unlock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x29a380, kern_reboot, int, (int magic));
KFUNC(0x7bb80, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x7c1c0, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x7bbd0, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x7b9e0, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x7b810, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x7e680, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x809c0, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x7ec40, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x7cd80, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x7ba30, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x7baa0, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x41eb00, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x19ECEB0, disable_console_output, uint8_t); //not uptaded
KDATA(0x14B4110, M_TEMP, void);  //not uptaded
KDATA(0x1AC60E0, kernel_map, void *); //not uptaded
KDATA(0x10986a0, prison0, void *); //not uptaded
KDATA(0x22C1A70, rootvnode, void *); //not uptaded
KDATA(0x2382FF8, allproc, struct proc *); //not uptaded
KDATA(0x107C610, sysents, struct sysent); //not uptaded
