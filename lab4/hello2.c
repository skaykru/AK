// SPDX-License-Identifier: GPL-2-Clause
#include <hello1.h>

MODULE_AUTHOR("IO-14 Denys Ukhach");
MODULE_DESCRIPTION("Lab4");
MODULE_LICENSE("Dual BSD/GPL");

static uint amount = 1;

module_param(amount, uint, 0);
MODULE_PARM_DESC(amount, "Amount for lab\n");

static int __init init_hello(void)
{
	pr_info("Hello2 initiated\n");
	print_hello(amount);
	return 0;
}

static void __exit exit_hello(void)
{
	pr_info("Hello2 unloaded\n");
}

module_init(init_hello);
module_exit(exit_hello);
