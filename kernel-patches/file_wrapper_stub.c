// SPDX-License-Identifier: GPL-2.0
/*
 * file_wrapper.c - Kernel 4.19 compatibility stubs
 *
 * SukiSU-Ultra's file_wrapper.c uses kernel 5.x APIs not available in 4.19.
 * This file provides stub implementations for kernel 4.19.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/security.h>

struct ksu_file_operations {
    struct file_operations *f_op;
};

void ksu_wrapper_iopoll(struct kiocb *kiocb, bool spin)
{
    pr_info("ksu: iopoll stub\n");
}
EXPORT_SYMBOL(ksu_wrapper_iopoll);

ssize_t ksu_wrapper_remap_file_range(struct file *file_in, loff_t pos_in,
                                      struct file *file_out, loff_t pos_out,
                                      size_t len, unsigned int remap_flags)
{
    pr_info("ksu: remap_file_range stub\n");
    return -EOPNOTSUPP;
}
EXPORT_SYMBOL(ksu_wrapper_remap_file_range);

int ksu_wrapper_init_security(struct inode *inode, struct inode *dir,
                               struct qstr *qname, const char **name,
                               size_t *len, umode_t mode, void **context)
{
    pr_info("ksu: init_security stub\n");
    return -EOPNOTSUPP;
}
EXPORT_SYMBOL(ksu_wrapper_init_security);

void *ksu_get_inode_security(struct inode *inode, struct inode *inode_out)
{
    pr_info("ksu: get_inode_security stub\n");
    return NULL;
}
EXPORT_SYMBOL(ksu_get_inode_security);

int __init ksu_file_wrapper_init(void)
{
    pr_info("ksu: file_wrapper_init stub (kernel 4.19)\n");
    return 0;
}

void __exit ksu_file_wrapper_exit(void)
{
    pr_info("ksu: file_wrapper_exit stub (kernel 4.19)\n");
}

int ksu_install_file_wrapper(struct file *file)
{
    pr_info("ksu: install_file_wrapper stub (kernel 4.19)\n");
    return 0;
}
EXPORT_SYMBOL(ksu_install_file_wrapper);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("KSU file wrapper stubs for kernel 4.19");
MODULE_AUTHOR("SukiSU-Ultra");
