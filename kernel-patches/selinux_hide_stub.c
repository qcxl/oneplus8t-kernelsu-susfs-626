// SPDX-License-Identifier: GPL-2.0
/*
 * selinux_hide.c - Kernel 4.19 compatibility stubs
 *
 * SukiSU-Ultra's selinux_hide.c uses kernel 5.x SELinux APIs not available in 4.19.
 * This file provides stub implementations for kernel 4.19.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/printk.h>

void ksu_hide_selinux_status(void)
{
    pr_info("ksu: ksu_hide_selinux_status stub (kernel 4.19)\n");
}

void ksu_restore_selinux_status(void)
{
    pr_info("ksu: ksu_restore_selinux_status stub (kernel 4.19)\n");
}
