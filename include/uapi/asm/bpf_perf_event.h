/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef __ASM_BPF_PERF_EVENT_H__
#define __ASM_BPF_PERF_EVENT_H__

#if defined(__aarch64__)
# include <asm/ptrace.h>

typedef struct user_pt_regs bpf_user_pt_regs_t;
#else
# include <linux/ptrace.h>

typedef struct pt_regs bpf_user_pt_regs_t;
#endif

#endif /* __ASM_BPF_PERF_EVENT_H__ */
