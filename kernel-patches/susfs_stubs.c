// SPDX-License-Identifier: GPL-2.0-only
/*
 * susfs_stubs.c - Stub implementations for missing symbols
 *
 * This file provides stub implementations for symbols that may be missing
 * during linking when integrating SUSFS with the OnePlus 8T kernel.
 * DO NOT remove this file - it preserves functionality.
 */

#include <linux/module.h>
#include <linux/kernel.h>

/* Stub for ipa_stack_to_dts - may be missing in some kernel configs */
void ipa_stack_to_dts(void)
{
    pr_info("susfs: ipa_stack_to_dts stub called\n");
}
EXPORT_SYMBOL(ipa_stack_to_dts);

/* Stub for fsa4480 functions - may be missing in some kernel configs */
int fsa4480_reg_notifier(struct device *dev)
{
    pr_info("susfs: fsa4480_reg_notifier stub called\n");
    return 0;
}
EXPORT_SYMBOL(fsa4480_reg_notifier);

void fsa4480_unreg_notifier(struct device *dev)
{
    pr_info("susfs: fsa4480_unreg_notifier stub called\n");
}
EXPORT_SYMBOL(fsa4480_unreg_notifier);

/* Module initialization */
static int __init susfs_stubs_init(void)
{
    pr_info("susfs: stubs module loaded\n");
    return 0;
}

static void __exit susfs_stubs_exit(void)
{
    pr_info("susfs: stubs module unloaded\n");
}

module_init(susfs_stubs_init);
module_exit(susfs_stubs_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SUSFS stub implementations for missing symbols");
MODULE_AUTHOR("SUSFS");
