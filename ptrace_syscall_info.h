/*
 * Copyright (c) 2018 Dmitry V. Levin <ldv@altlinux.org>
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#ifndef STRACE_PTRACE_SYSCALL_INFO_H
#define STRACE_PTRACE_SYSCALL_INFO_H

extern bool ptrace_get_syscall_info_supported;
extern bool test_ptrace_get_syscall_info(void);

#endif /* !STRACE_PTRACE_SYSCALL_INFO_H */