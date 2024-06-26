const char *
kernel_syscalls[] =
{
    "_llseek", /* v3.3 */
    "_newselect", /* v3.3 */
    "_sysctl", /* v2.6.12 */
    "accept", /* v2.6.12 */
    "accept4", /* v2.6.28 */
    "access", /* v2.6.12 */
    "acct", /* v2.6.12 */
    "add_key", /* v2.6.12 */
    "adjtimex", /* v2.6.12 */
    "afs_syscall", /* v2.6.12 */
    "alarm", /* v2.6.12 */
    "arch_prctl", /* v2.6.12 */
    "arm_fadvise64_64", /* v4.10 */
    "arm_sync_file_range", /* v4.10 */
    "bdflush", /* v2.6.20 */
    "bind", /* v2.6.12 */
    "bpf", /* v3.18 */
    "break", /* v3.3 */
    "brk", /* v2.6.12 */
    "cachectl", /* v5.0 */
    "cacheflush", /* v5.0 */
    "capget", /* v2.6.12 */
    "capset", /* v2.6.12 */
    "chdir", /* v2.6.12 */
    "chmod", /* v2.6.12 */
    "chown", /* v2.6.12 */
    "chown32", /* v3.3 */
    "chroot", /* v2.6.12 */
    "clock_adjtime", /* v2.6.39 */
    "clock_adjtime64", /* v5.1 */
    "clock_getres", /* v2.6.12 */
    "clock_getres_time64", /* v5.1 */
    "clock_gettime", /* v2.6.12 */
    "clock_gettime64", /* v5.1 */
    "clock_nanosleep", /* v2.6.12 */
    "clock_nanosleep_time64", /* v5.1 */
    "clock_settime", /* v2.6.12 */
    "clock_settime64", /* v5.1 */
    "clone", /* v2.6.12 */
    "clone3", /* v5.3 */
    "close", /* v2.6.12 */
    "close_range", /* v5.9 */
    "connect", /* v2.6.12 */
    "copy_file_range", /* v4.5 */
    "creat", /* v2.6.12 */
    "create_module", /* v2.6.12 */
    "delete_module", /* v2.6.12 */
    "dup", /* v2.6.12 */
    "dup2", /* v2.6.12 */
    "dup3", /* v2.6.28 */
    "epoll_create", /* v2.6.12 */
    "epoll_create1", /* v2.6.28 */
    "epoll_ctl", /* v2.6.12 */
    "epoll_ctl_old", /* v2.6.12 */
    "epoll_pwait", /* v2.6.22 */
    "epoll_pwait2", /* v5.11 */
    "epoll_wait", /* v2.6.12 */
    "epoll_wait_old", /* v2.6.12 */
    "eventfd", /* v2.6.22 */
    "eventfd2", /* v2.6.28 */
    "execve", /* v2.6.12 */
    "execveat", /* v3.19 */
    "exit", /* v2.6.12 */
    "exit_group", /* v2.6.12 */
    "faccessat", /* v2.6.16 */
    "faccessat2", /* v5.8 */
    "fadvise64", /* v2.6.12 */
    "fadvise64_64", /* v3.3 */
    "fallocate", /* v2.6.23 */
    "fanotify_init", /* v2.6.36 */
    "fanotify_mark", /* v2.6.36 */
    "fchdir", /* v2.6.12 */
    "fchmod", /* v2.6.12 */
    "fchmodat", /* v2.6.16 */
    "fchown", /* v2.6.12 */
    "fchown32", /* v3.3 */
    "fchownat", /* v2.6.16 */
    "fcntl", /* v2.6.12 */
    "fcntl64", /* v3.3 */
    "fdatasync", /* v2.6.12 */
    "fgetxattr", /* v2.6.12 */
    "finit_module", /* v3.8 */
    "flistxattr", /* v2.6.12 */
    "flock", /* v2.6.12 */
    "fork", /* v2.6.12 */
    "fremovexattr", /* v2.6.12 */
    "fsconfig", /* v5.2 */
    "fsetxattr", /* v2.6.12 */
    "fsmount", /* v5.2 */
    "fsopen", /* v5.2 */
    "fspick", /* v5.2 */
    "fstat", /* v2.6.12 */
    "fstat64", /* v3.3 */
    "fstatat64", /* v2.6.23 */
    "fstatfs", /* v2.6.12 */
    "fstatfs64", /* v2.6.20 */
    "fsync", /* v2.6.12 */
    "ftime", /* v3.3 */
    "ftruncate", /* v2.6.12 */
    "ftruncate64", /* v3.3 */
    "futex", /* v2.6.12 */
    "futex_time64", /* v5.1 */
    "futimesat", /* v2.6.16 */
    "get_kernel_syms", /* v2.6.12 */
    "get_mempolicy", /* v2.6.12 */
    "get_robust_list", /* v2.6.17 */
    "get_thread_area", /* v2.6.12 */
    "getcpu", /* v2.6.23 */
    "getcwd", /* v2.6.12 */
    "getdents", /* v2.6.12 */
    "getdents64", /* v2.6.12 */
    "getegid", /* v2.6.12 */
    "getegid32", /* v3.3 */
    "geteuid", /* v2.6.12 */
    "geteuid32", /* v3.3 */
    "getgid", /* v2.6.12 */
    "getgid32", /* v3.3 */
    "getgroups", /* v2.6.12 */
    "getgroups32", /* v3.3 */
    "getitimer", /* v2.6.12 */
    "getpeername", /* v2.6.12 */
    "getpgid", /* v2.6.12 */
    "getpgrp", /* v2.6.12 */
    "getpid", /* v2.6.12 */
    "getpmsg", /* v2.6.12 */
    "getppid", /* v2.6.12 */
    "getpriority", /* v2.6.12 */
    "getrandom", /* v3.17 */
    "getresgid", /* v2.6.12 */
    "getresgid32", /* v3.3 */
    "getresuid", /* v2.6.12 */
    "getresuid32", /* v3.3 */
    "getrlimit", /* v2.6.12 */
    "getrusage", /* v2.6.12 */
    "getsid", /* v2.6.12 */
    "getsockname", /* v2.6.12 */
    "getsockopt", /* v2.6.12 */
    "gettid", /* v2.6.12 */
    "gettimeofday", /* v2.6.12 */
    "getuid", /* v2.6.12 */
    "getuid32", /* v3.3 */
    "getxattr", /* v2.6.12 */
    "gtty", /* v3.3 */
    "idle", /* v3.3 */
    "init_module", /* v2.6.12 */
    "inotify_add_watch", /* v2.6.13 */
    "inotify_init", /* v2.6.13 */
    "inotify_init1", /* v2.6.28 */
    "inotify_rm_watch", /* v2.6.13 */
    "io_cancel", /* v2.6.12 */
    "io_destroy", /* v2.6.12 */
    "io_getevents", /* v2.6.12 */
    "io_pgetevents", /* v4.18 */
    "io_pgetevents_time64", /* v5.1 */
    "io_setup", /* v2.6.12 */
    "io_submit", /* v2.6.12 */
    "io_uring_enter", /* v5.1 */
    "io_uring_register", /* v5.1 */
    "io_uring_setup", /* v5.1 */
    "ioctl", /* v2.6.12 */
    "ioperm", /* v2.6.12 */
    "iopl", /* v2.6.12 */
    "ioprio_get", /* v2.6.13 */
    "ioprio_set", /* v2.6.13 */
    "ipc", /* v3.3 */
    "kcmp", /* v3.5 */
    "kexec_file_load", /* v3.17 */
    "kexec_load", /* v2.6.12 */
    "keyctl", /* v2.6.12 */
    "kill", /* v2.6.12 */
    "landlock_add_rule", /* v5.13 */
    "landlock_create_ruleset", /* v5.13 */
    "landlock_restrict_self", /* v5.13 */
    "lchown", /* v2.6.12 */
    "lchown32", /* v3.3 */
    "lgetxattr", /* v2.6.12 */
    "link", /* v2.6.12 */
    "linkat", /* v2.6.16 */
    "listen", /* v2.6.12 */
    "listxattr", /* v2.6.12 */
    "llistxattr", /* v2.6.12 */
    "lock", /* v3.3 */
    "lookup_dcookie", /* v2.6.12 */
    "lremovexattr", /* v2.6.12 */
    "lseek", /* v2.6.12 */
    "lsetxattr", /* v2.6.12 */
    "lstat", /* v2.6.12 */
    "lstat64", /* v3.3 */
    "madvise", /* v2.6.12 */
    "mbind", /* v2.6.12 */
    "membarrier", /* v4.3 */
    "memfd_create", /* v3.17 */
    "memfd_secret", /* v5.14 */
    "migrate_pages", /* v2.6.16 */
    "mincore", /* v2.6.12 */
    "mkdir", /* v2.6.12 */
    "mkdirat", /* v2.6.16 */
    "mknod", /* v2.6.12 */
    "mknodat", /* v2.6.16 */
    "mlock", /* v2.6.12 */
    "mlock2", /* v4.4 */
    "mlockall", /* v2.6.12 */
    "mmap", /* v2.6.12 */
    "mmap2", /* v3.3 */
    "modify_ldt", /* v2.6.12 */
    "mount", /* v2.6.12 */
    "mount_setattr", /* v5.12 */
    "move_mount", /* v5.2 */
    "move_pages", /* v2.6.18 */
    "mprotect", /* v2.6.12 */
    "mpx", /* v3.3 */
    "mq_getsetattr", /* v2.6.12 */
    "mq_notify", /* v2.6.12 */
    "mq_open", /* v2.6.12 */
    "mq_timedreceive", /* v2.6.12 */
    "mq_timedreceive_time64", /* v5.1 */
    "mq_timedsend", /* v2.6.12 */
    "mq_timedsend_time64", /* v5.1 */
    "mq_unlink", /* v2.6.12 */
    "mremap", /* v2.6.12 */
    "msgctl", /* v2.6.12 */
    "msgget", /* v2.6.12 */
    "msgrcv", /* v2.6.12 */
    "msgsnd", /* v2.6.12 */
    "msync", /* v2.6.12 */
    "multiplexer", /* v5.0 */
    "munlock", /* v2.6.12 */
    "munlockall", /* v2.6.12 */
    "munmap", /* v2.6.12 */
    "name_to_handle_at", /* v2.6.39 */
    "nanosleep", /* v2.6.12 */
    "newfstatat", /* v2.6.16 */
    "nfsservctl", /* v2.6.12 */
    "nice", /* v3.3 */
    "oldfstat", /* v3.3 */
    "oldlstat", /* v3.3 */
    "oldolduname", /* v3.3 */
    "oldstat", /* v3.3 */
    "olduname", /* v3.3 */
    "open", /* v2.6.12 */
    "open_by_handle_at", /* v2.6.39 */
    "open_tree", /* v5.2 */
    "openat", /* v2.6.16 */
    "openat2", /* v5.6 */
    "pause", /* v2.6.12 */
    "pciconfig_iobase", /* v4.10 */
    "pciconfig_read", /* v4.10 */
    "pciconfig_write", /* v4.10 */
    "perf_event_open", /* v2.6.32 */
    "personality", /* v2.6.12 */
    "pidfd_getfd", /* v5.6 */
    "pidfd_open", /* v5.3 */
    "pidfd_send_signal", /* v5.1 */
    "pipe", /* v2.6.12 */
    "pipe2", /* v2.6.28 */
    "pivot_root", /* v2.6.12 */
    "pkey_alloc", /* v4.9 */
    "pkey_free", /* v4.9 */
    "pkey_mprotect", /* v4.9 */
    "poll", /* v2.6.12 */
    "ppoll", /* v2.6.16 */
    "ppoll_time64", /* v5.1 */
    "prctl", /* v2.6.12 */
    "pread64", /* v2.6.12 */
    "preadv", /* v2.6.30 */
    "preadv2", /* v4.6 */
    "prlimit64", /* v2.6.36 */
    "process_madvise", /* v5.10 */
    "process_mrelease", /* v5.15 */
    "process_vm_readv", /* v3.2 */
    "process_vm_writev", /* v3.2 */
    "prof", /* v3.3 */
    "profil", /* v3.3 */
    "pselect6", /* v2.6.16 */
    "pselect6_time64", /* v5.1 */
    "ptrace", /* v2.6.12 */
    "putpmsg", /* v2.6.12 */
    "pwrite64", /* v2.6.12 */
    "pwritev", /* v2.6.30 */
    "pwritev2", /* v4.6 */
    "query_module", /* v2.6.12 */
    "quotactl", /* v2.6.12 */
    "quotactl_fd", /* v5.14 */
    "read", /* v2.6.12 */
    "readahead", /* v2.6.12 */
    "readdir", /* v3.3 */
    "readlink", /* v2.6.12 */
    "readlinkat", /* v2.6.16 */
    "readv", /* v2.6.12 */
    "reboot", /* v2.6.12 */
    "recv", /* v2.6.20 */
    "recvfrom", /* v2.6.12 */
    "recvmmsg", /* v2.6.33 */
    "recvmmsg_time64", /* v5.1 */
    "recvmsg", /* v2.6.12 */
    "remap_file_pages", /* v2.6.12 */
    "removexattr", /* v2.6.12 */
    "rename", /* v2.6.12 */
    "renameat", /* v2.6.16 */
    "renameat2", /* v3.15 */
    "request_key", /* v2.6.12 */
    "restart_syscall", /* v2.6.12 */
    "rmdir", /* v2.6.12 */
    "rseq", /* v4.18 */
    "rt_sigaction", /* v2.6.12 */
    "rt_sigpending", /* v2.6.12 */
    "rt_sigprocmask", /* v2.6.12 */
    "rt_sigqueueinfo", /* v2.6.12 */
    "rt_sigreturn", /* v2.6.12 */
    "rt_sigsuspend", /* v2.6.12 */
    "rt_sigtimedwait", /* v2.6.12 */
    "rt_sigtimedwait_time64", /* v5.1 */
    "rt_tgsigqueueinfo", /* v2.6.31 */
    "rtas", /* v5.0 */
    "s390_guarded_storage", /* v4.16 */
    "s390_pci_mmio_read", /* v4.16 */
    "s390_pci_mmio_write", /* v4.16 */
    "s390_runtime_instr", /* v4.16 */
    "s390_sthyi", /* v4.16 */
    "sched_get_priority_max", /* v2.6.12 */
    "sched_get_priority_min", /* v2.6.12 */
    "sched_getaffinity", /* v2.6.12 */
    "sched_getattr", /* v3.14 */
    "sched_getparam", /* v2.6.12 */
    "sched_getscheduler", /* v2.6.12 */
    "sched_rr_get_interval", /* v2.6.12 */
    "sched_rr_get_interval_time64", /* v5.1 */
    "sched_setaffinity", /* v2.6.12 */
    "sched_setattr", /* v3.14 */
    "sched_setparam", /* v2.6.12 */
    "sched_setscheduler", /* v2.6.12 */
    "sched_yield", /* v2.6.12 */
    "seccomp", /* v3.17 */
    "security", /* v2.6.12 */
    "select", /* v2.6.12 */
    "semctl", /* v2.6.12 */
    "semget", /* v2.6.12 */
    "semop", /* v2.6.12 */
    "semtimedop", /* v2.6.12 */
    "semtimedop_time64", /* v5.1 */
    "send", /* v2.6.20 */
    "sendfile", /* v2.6.12 */
    "sendfile64", /* v2.6.20 */
    "sendmmsg", /* v3.0 */
    "sendmsg", /* v2.6.12 */
    "sendto", /* v2.6.12 */
    "set_mempolicy", /* v2.6.12 */
    "set_robust_list", /* v2.6.17 */
    "set_thread_area", /* v2.6.12 */
    "set_tid_address", /* v2.6.12 */
    "setdomainname", /* v2.6.12 */
    "setfsgid", /* v2.6.12 */
    "setfsgid32", /* v3.3 */
    "setfsuid", /* v2.6.12 */
    "setfsuid32", /* v3.3 */
    "setgid", /* v2.6.12 */
    "setgid32", /* v3.3 */
    "setgroups", /* v2.6.12 */
    "setgroups32", /* v3.3 */
    "sethostname", /* v2.6.12 */
    "setitimer", /* v2.6.12 */
    "setns", /* v3.0 */
    "setpgid", /* v2.6.12 */
    "setpriority", /* v2.6.12 */
    "setregid", /* v2.6.12 */
    "setregid32", /* v3.3 */
    "setresgid", /* v2.6.12 */
    "setresgid32", /* v3.3 */
    "setresuid", /* v2.6.12 */
    "setresuid32", /* v3.3 */
    "setreuid", /* v2.6.12 */
    "setreuid32", /* v3.3 */
    "setrlimit", /* v2.6.12 */
    "setsid", /* v2.6.12 */
    "setsockopt", /* v2.6.12 */
    "settimeofday", /* v2.6.12 */
    "setuid", /* v2.6.12 */
    "setuid32", /* v3.3 */
    "setxattr", /* v2.6.12 */
    "sgetmask", /* v3.3 */
    "shmat", /* v2.6.12 */
    "shmctl", /* v2.6.12 */
    "shmdt", /* v2.6.12 */
    "shmget", /* v2.6.12 */
    "shutdown", /* v2.6.12 */
    "sigaction", /* v3.3 */
    "sigaltstack", /* v2.6.12 */
    "signal", /* v3.3 */
    "signalfd", /* v2.6.22 */
    "signalfd4", /* v2.6.28 */
    "sigpending", /* v3.3 */
    "sigprocmask", /* v3.3 */
    "sigreturn", /* v3.3 */
    "sigsuspend", /* v3.3 */
    "socket", /* v2.6.12 */
    "socketcall", /* v3.3 */
    "socketpair", /* v2.6.12 */
    "splice", /* v2.6.17 */
    "spu_create", /* v5.0 */
    "spu_run", /* v5.0 */
    "ssetmask", /* v3.3 */
    "stat", /* v2.6.12 */
    "stat64", /* v3.3 */
    "statfs", /* v2.6.12 */
    "statfs64", /* v2.6.20 */
    "statx", /* v4.11 */
    "stime", /* v3.3 */
    "stty", /* v3.3 */
    "subpage_prot", /* v5.0 */
    "swapcontext", /* v5.0 */
    "swapoff", /* v2.6.12 */
    "swapon", /* v2.6.12 */
    "switch_endian", /* v5.0 */
    "symlink", /* v2.6.12 */
    "symlinkat", /* v2.6.16 */
    "sync", /* v2.6.12 */
    "sync_file_range", /* v2.6.17 */
    "sync_file_range2", /* v5.0 */
    "syncfs", /* v2.6.39 */
    "sys_debug_setcontext", /* v5.0 */
    "syscall", /* v4.10 */
    "sysfs", /* v2.6.12 */
    "sysinfo", /* v2.6.12 */
    "syslog", /* v2.6.12 */
    "sysmips", /* v5.0 */
    "tee", /* v2.6.17 */
    "tgkill", /* v2.6.12 */
    "time", /* v2.6.12 */
    "timer_create", /* v2.6.12 */
    "timer_delete", /* v2.6.12 */
    "timer_getoverrun", /* v2.6.12 */
    "timer_gettime", /* v2.6.12 */
    "timer_gettime64", /* v5.1 */
    "timer_settime", /* v2.6.12 */
    "timer_settime64", /* v5.1 */
    "timerfd", /* v2.6.22 */
    "timerfd_create", /* v2.6.28 */
    "timerfd_gettime", /* v2.6.28 */
    "timerfd_gettime64", /* v5.1 */
    "timerfd_settime", /* v2.6.28 */
    "timerfd_settime64", /* v5.1 */
    "times", /* v2.6.12 */
    "tkill", /* v2.6.12 */
    "truncate", /* v2.6.12 */
    "truncate64", /* v3.3 */
    "tuxcall", /* v2.6.12 */
    "ugetrlimit", /* v3.3 */
    "ulimit", /* v3.3 */
    "umask", /* v2.6.12 */
    "umount", /* v2.6.20 */
    "umount2", /* v2.6.12 */
    "uname", /* v2.6.12 */
    "unlink", /* v2.6.12 */
    "unlinkat", /* v2.6.16 */
    "unshare", /* v2.6.16 */
    "uselib", /* v2.6.12 */
    "userfaultfd", /* v4.3 */
    "ustat", /* v2.6.12 */
    "utime", /* v2.6.12 */
    "utimensat", /* v2.6.22 */
    "utimensat_time64", /* v5.1 */
    "utimes", /* v2.6.12 */
    "vfork", /* v2.6.12 */
    "vhangup", /* v2.6.12 */
    "vm86", /* v3.3 */
    "vm86old", /* v3.3 */
    "vmsplice", /* v2.6.17 */
    "vserver", /* v2.6.12 */
    "wait4", /* v2.6.12 */
    "waitid", /* v2.6.12 */
    "waitpid", /* v3.3 */
    "write", /* v2.6.12 */
    "writev", /* v2.6.12 */
    0
};

const int
kernel_version_for_syscalls[] =
{
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33954816, /* v2.6.28 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    67764224, /* v4.10 */
    67764224, /* v4.10 */
    33952768, /* v2.6.20 */
    33950720, /* v2.6.12 */
    51511296, /* v3.18 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    83886080, /* v5.0 */
    83886080, /* v5.0 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33957632, /* v2.6.39 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    84082688, /* v5.3 */
    33950720, /* v2.6.12 */
    84475904, /* v5.9 */
    33950720, /* v2.6.12 */
    67436544, /* v4.5 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33954816, /* v2.6.28 */
    33950720, /* v2.6.12 */
    33954816, /* v2.6.28 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33953280, /* v2.6.22 */
    84606976, /* v5.11 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33953280, /* v2.6.22 */
    33954816, /* v2.6.28 */
    33950720, /* v2.6.12 */
    51576832, /* v3.19 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    84410368, /* v5.8 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33953536, /* v2.6.23 */
    33956864, /* v2.6.36 */
    33956864, /* v2.6.36 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50855936, /* v3.8 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    84017152, /* v5.2 */
    33950720, /* v2.6.12 */
    84017152, /* v5.2 */
    84017152, /* v5.2 */
    84017152, /* v5.2 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33953536, /* v2.6.23 */
    33950720, /* v2.6.12 */
    33952768, /* v2.6.20 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33952000, /* v2.6.17 */
    33950720, /* v2.6.12 */
    33953536, /* v2.6.23 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    51445760, /* v3.17 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950976, /* v2.6.13 */
    33950976, /* v2.6.13 */
    33954816, /* v2.6.28 */
    33950976, /* v2.6.13 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    68288512, /* v4.18 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    83951616, /* v5.1 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950976, /* v2.6.13 */
    33950976, /* v2.6.13 */
    50528256, /* v3.3 */
    50659328, /* v3.5 */
    51445760, /* v3.17 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    84738048, /* v5.13 */
    84738048, /* v5.13 */
    84738048, /* v5.13 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    67305472, /* v4.3 */
    51445760, /* v3.17 */
    84803584, /* v5.14 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    67371008, /* v4.4 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    84672512, /* v5.12 */
    84017152, /* v5.2 */
    33952256, /* v2.6.18 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83886080, /* v5.0 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33957632, /* v2.6.39 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33957632, /* v2.6.39 */
    84017152, /* v5.2 */
    33951744, /* v2.6.16 */
    84279296, /* v5.6 */
    33950720, /* v2.6.12 */
    67764224, /* v4.10 */
    67764224, /* v4.10 */
    67764224, /* v4.10 */
    33955840, /* v2.6.32 */
    33950720, /* v2.6.12 */
    84279296, /* v5.6 */
    84082688, /* v5.3 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33954816, /* v2.6.28 */
    33950720, /* v2.6.12 */
    67698688, /* v4.9 */
    67698688, /* v4.9 */
    67698688, /* v4.9 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33955328, /* v2.6.30 */
    67502080, /* v4.6 */
    33956864, /* v2.6.36 */
    84541440, /* v5.10 */
    84869120, /* v5.15 */
    50462720, /* v3.2 */
    50462720, /* v3.2 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    33951744, /* v2.6.16 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33955328, /* v2.6.30 */
    67502080, /* v4.6 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    84803584, /* v5.14 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33952768, /* v2.6.20 */
    33950720, /* v2.6.12 */
    33956096, /* v2.6.33 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    51314688, /* v3.15 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    68288512, /* v4.18 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33955584, /* v2.6.31 */
    83886080, /* v5.0 */
    68157440, /* v4.16 */
    68157440, /* v4.16 */
    68157440, /* v4.16 */
    68157440, /* v4.16 */
    68157440, /* v4.16 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    51249152, /* v3.14 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    51249152, /* v3.14 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    51445760, /* v3.17 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33952768, /* v2.6.20 */
    33950720, /* v2.6.12 */
    33952768, /* v2.6.20 */
    50331648, /* v3.0 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33952000, /* v2.6.17 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50331648, /* v3.0 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33953280, /* v2.6.22 */
    33954816, /* v2.6.28 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33952000, /* v2.6.17 */
    83886080, /* v5.0 */
    83886080, /* v5.0 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33952768, /* v2.6.20 */
    67829760, /* v4.11 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    83886080, /* v5.0 */
    83886080, /* v5.0 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83886080, /* v5.0 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    33952000, /* v2.6.17 */
    83886080, /* v5.0 */
    33957632, /* v2.6.39 */
    83886080, /* v5.0 */
    67764224, /* v4.10 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83886080, /* v5.0 */
    33952000, /* v2.6.17 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    83951616, /* v5.1 */
    33953280, /* v2.6.22 */
    33954816, /* v2.6.28 */
    33954816, /* v2.6.28 */
    83951616, /* v5.1 */
    33954816, /* v2.6.28 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33952768, /* v2.6.20 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33951744, /* v2.6.16 */
    33951744, /* v2.6.16 */
    33950720, /* v2.6.12 */
    67305472, /* v4.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33953280, /* v2.6.22 */
    83951616, /* v5.1 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    50528256, /* v3.3 */
    33952000, /* v2.6.17 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    50528256, /* v3.3 */
    33950720, /* v2.6.12 */
    33950720, /* v2.6.12 */
    0
};
