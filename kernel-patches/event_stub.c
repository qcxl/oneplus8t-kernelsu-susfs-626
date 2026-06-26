// SPDX-License-Identifier: GPL-2.0
/*
 * event.c - Kernel 4.19 compatibility stubs
 *
 * SukiSU-Ultra's event.c uses kernel 5.x APIs not available in 4.19.
 * This file provides stub implementations for kernel 4.19.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/printk.h>

int __init ksu_sulog_events_init(void)
{
    pr_info("ksu: sulog events stub (kernel 4.19)\n");
    return 0;
}

void __exit ksu_sulog_events_exit(void)
{
    pr_info("ksu: sulog events exit stub (kernel 4.19)\n");
}
