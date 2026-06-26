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

void __init ksu_selinux_hide_init(void)
{
    pr_info("ksu: ksu_selinux_hide_init stub (kernel 4.19)\n");
}

void __exit ksu_selinux_hide_exit(void)
{
    pr_info("ksu: ksu_selinux_hide_exit stub (kernel 4.19)\n");
}

void ksu_selinux_hide_handle_post_fs_data(void)
{
    pr_info("ksu: ksu_selinux_hide_handle_post_fs_data stub (kernel 4.19)\n");
}

void ksu_selinux_hide_handle_second_stage(void)
{
    pr_info("ksu: ksu_selinux_hide_handle_second_stage stub (kernel 4.19)\n");
}

void ksu_selinux_hide_drop_backup_if_unused(void)
{
    pr_info("ksu: ksu_selinux_hide_drop_backup_if_unused stub (kernel 4.19)\n");
}
