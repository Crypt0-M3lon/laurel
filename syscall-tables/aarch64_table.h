/* aarch64_table.h --
 * Copyright 2013-21 Red Hat Inc.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Steve Grubb <sgrubb@redhat.com>
 */

_S(0, "io_setup")
_S(1, "io_destroy")
_S(2, "io_submit")
_S(3, "io_cancel")
_S(4, "io_getevents")
_S(5, "setxattr")
_S(6, "lsetxattr")
_S(7, "fsetxattr")
_S(8, "getxattr")
_S(9, "lgetxattr")
_S(10, "fgetxattr")
_S(11, "listxattr")
_S(12, "llistxattr")
_S(13, "flistxattr")
_S(14, "removexattr")
_S(15, "lremovexattr")
_S(16, "fremovexattr")
_S(17, "getcwd")
_S(18, "lookup_dcookie")
_S(19, "eventfd2")
_S(20, "epoll_create1")
_S(21, "epoll_ctl")
_S(22, "epoll_pwait")
_S(23, "dup")
_S(24, "dup3")
_S(25, "fcntl")
_S(26, "inotify_init1")
_S(27, "inotify_add_watch")
_S(28, "inotify_rm_watch")
_S(29, "ioctl")
_S(30, "ioprio_set")
_S(31, "ioprio_get")
_S(32, "flock")
_S(33, "mknodat")
_S(34, "mkdirat")
_S(35, "unlinkat")
_S(36, "symlinkat")
_S(37, "linkat")
_S(38, "renameat")
_S(39, "umount2")
_S(40, "mount")
_S(41, "pivot_root")
_S(42, "nfsservctl")
_S(43, "statfs")
_S(44, "fstatfs")
_S(45, "truncate")
_S(46, "ftruncate")
_S(47, "fallocate")
_S(48, "faccessat")
_S(49, "chdir")
_S(50, "fchdir")
_S(51, "chroot")
_S(52, "fchmod")
_S(53, "fchmodat")
_S(54, "fchownat")
_S(55, "fchown")
_S(56, "openat")
_S(57, "close")
_S(58, "vhangup")
_S(59, "pipe2")
_S(60, "quotactl")
_S(61, "getdents")
_S(62, "lseek")
_S(63, "read")
_S(64, "write")
_S(65, "readv")
_S(66, "writev")
_S(67, "pread")
_S(68, "pwrite")
_S(69, "preadv")
_S(70, "pwritev")
_S(71, "sendfile")
_S(72, "pselect6")
_S(73, "ppoll")
_S(74, "signalfd4")
_S(75, "vmsplice")
_S(76, "splice")
_S(77, "tee")
_S(78, "readlinkat")
_S(79, "newfstatat")
_S(80, "newfstat")
_S(81, "sync")
_S(82, "fsync")
_S(83, "fdatasync")
_S(84, "sync_file_range")
_S(85, "timerfd_create")
_S(86, "timerfd_settime")
_S(87, "timerfd_gettime")
_S(88, "utimensat")
_S(89, "acct")
_S(90, "capget")
_S(91, "capset")
_S(92, "personality")
_S(93, "exit")
_S(94, "exit_group")
_S(95, "waitid")
_S(96, "set_tid_address")
_S(97, "unshare")
_S(98, "futex")
_S(99, "set_robust_list")
_S(100, "get_robust_list")
_S(101, "nanosleep")
_S(102, "getitimer")
_S(103, "setitimer")
_S(104, "kexec_load")
_S(105, "init_module")
_S(106, "delete_module")
_S(107, "timer_create")
_S(108, "timer_gettime")
_S(109, "timer_getoverrun")
_S(110, "timer_settime")
_S(111, "timer_delete")
_S(112, "clock_settime")
_S(113, "clock_gettime")
_S(114, "clock_getres")
_S(115, "clock_nanosleep")
_S(116, "syslog")
_S(117, "ptrace")
_S(118, "sched_setparam")
_S(119, "sched_setscheduler")
_S(120, "sched_getscheduler")
_S(121, "sched_getparam")
_S(122, "sched_setaffinity")
_S(123, "sched_getaffinity")
_S(124, "sched_yield")
_S(125, "sched_get_priority_max")
_S(126, "sched_get_priority_min")
_S(127, "sched_rr_get_interval")
_S(128, "restart_syscall")
_S(129, "kill")
_S(130, "tkill")
_S(131, "tgkill")
_S(132, "sigaltstack")
_S(133, "rt_sigsuspend")
_S(134, "rt_sigaction")
_S(135, "rt_sigprocmask")
_S(136, "rt_sigpending")
_S(137, "rt_sigtimedwait")
_S(138, "rt_sigqueueinfo")
_S(139, "rt_sigreturn")
_S(140, "setpriority")
_S(141, "getpriority")
_S(142, "reboot")
_S(143, "setregid")
_S(144, "setgid")
_S(145, "setreuid")
_S(146, "setuid")
_S(147, "setresuid")
_S(148, "getresuid")
_S(149, "setresgid")
_S(150, "getresgid")
_S(151, "setfsuid")
_S(152, "setfsgid")
_S(153, "times")
_S(154, "setpgid")
_S(155, "getpgid")
_S(156, "getsid")
_S(157, "setsid")
_S(158, "getgroups")
_S(159, "setgroups")
_S(160, "uname")
_S(161, "sethostname")
_S(162, "setdomainname")
_S(163, "getrlimit")
_S(164, "setrlimit")
_S(165, "getrusage")
_S(166, "umask")
_S(167, "prctl")
_S(168, "getcpu")
_S(169, "gettimeofday")
_S(170, "settimeofday")
_S(171, "adjtimex")
_S(172, "getpid")
_S(173, "getppid")
_S(174, "getuid")
_S(175, "geteuid")
_S(176, "getgid")
_S(177, "getegid")
_S(178, "gettid")
_S(179, "sysinfo")
_S(180, "mq_open")
_S(181, "mq_unlink")
_S(182, "mq_timedsend")
_S(183, "mq_timedreceive")
_S(184, "mq_notify")
_S(185, "mq_getsetattr")
_S(186, "msgget")
_S(187, "msgctl")
_S(188, "msgrcv")
_S(189, "msgsnd")
_S(190, "semget")
_S(191, "semctl")
_S(192, "semtimedop")
_S(193, "semop")
_S(194, "shmget")
_S(195, "shmctl")
_S(196, "shmat")
_S(197, "shmdt")
_S(198, "socket")
_S(199, "socketpair")
_S(200, "bind")
_S(201, "listen")
_S(202, "accept")
_S(203, "connect")
_S(204, "getsockname")
_S(205, "getpeername")
_S(206, "sendto")
_S(207, "recvfrom")
_S(208, "setsockopt")
_S(209, "getsockopt")
_S(210, "shutdown")
_S(211, "sendmsg")
_S(212, "recvmsg")
_S(213, "readahead")
_S(214, "brk")
_S(215, "munmap")
_S(216, "mremap")
_S(217, "add_key")
_S(218, "request_key")
_S(219, "keyctl")
_S(220, "clone")
_S(221, "execve")
_S(222, "mmap")
_S(223, "fadvise64")
_S(224, "swapon")
_S(225, "swapoff")
_S(226, "mprotect")
_S(227, "msync")
_S(228, "mlock")
_S(229, "munlock")
_S(230, "mlockall")
_S(231, "munlockall")
_S(232, "mincore")
_S(233, "madvise")
_S(234, "remap_file_pages")
_S(235, "mbind")
_S(236, "get_mempolicy")
_S(237, "set_mempolicy")
_S(238, "migrate_pages")
_S(239, "move_pages")
_S(240, "rt_tgsigqueueinfo")
_S(241, "perf_event_open")
_S(242, "accept4")
_S(243, "recvmmsg")
_S(260, "wait4")
_S(261, "prlimit64")
_S(262, "fanotify_init")
_S(263, "fanotify_mark")
_S(264, "name_to_handle_at")
_S(265, "open_by_handle_at")
_S(266, "clock_adjtime")
_S(267, "syncfs")
_S(268, "setns")
_S(269, "sendmmsg")
_S(270, "process_vm_readv")
_S(271, "process_vm_writev")
_S(272, "kcmp")
_S(273, "finit_module")
_S(274, "sched_setattr")
_S(275, "sched_getattr")
_S(276, "renameat2")
_S(277, "seccomp")
_S(278, "getrandom")
_S(279, "memfd_create")
_S(280, "bpf")
_S(281, "execveat")
_S(282, "userfaultfd")
_S(283, "membarrier")
_S(284, "mlock2")
_S(285, "copy_file_range")
_S(286, "preadv2")
_S(287, "pwritev2")
_S(288, "pkey_mprotect")
_S(289, "pkey_alloc")
_S(290, "pkey_free")
_S(291, "statx")
_S(292, "io_pgetevents")
_S(293, "rseq")
_S(294, "kexec_file_load")
_S(424, "pidfd_send_signal")
_S(425, "io_uring_setup")
_S(426, "io_uring_enter")
_S(427, "io_uring_register")
_S(428, "open_tree")
_S(429, "move_mount")
_S(430, "fsopen")
_S(431, "fsconfig")
_S(432, "fsmount")
_S(433, "fspick")
_S(434, "pidfd_open")
_S(435, "clone3")
_S(436, "close_range")
_S(437, "openat2")
_S(438, "pidfd_getfd")
_S(439, "faccessat2")
_S(440, "process_madvise")
_S(441, "epoll_pwait2")
_S(442, "mount_setattr")
_S(443, "quotactl_fd")
_S(444, "landlock_create_ruleset")
_S(445, "landlock_add_rule")
_S(446, "landlock_restrict_self")
_S(447, "memfd_secret")
_S(448, "process_mrelease")
_S(449, "futex_waitv")

