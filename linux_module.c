/*
* Copyright (C) 2021 bits_bytes

* Tushar Bhanarkar <tush.projects05@gmail.com>
*
* Very simple device driver module, only prints out "Hello world"

* when installed, and prints "Hello world exit" when uninstalled.

* This program is free software, you can redistribute it and/or modify

* it under the terms of the GNU General Public License version 2 as

* published by the Free Software Foundation; either version 2 of the

* License, or (at your discretion) any later version.

*/
#include <linux/module.h>
#include <linux/init.h>

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello World!\n");
	return 0; /* OK */
}
module_init(hello_init);

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Goodbye World!\n");
}
module_exit(hello_exit);

MODULE_DESCRIPTION("Simple Kernel Module");
MODULE_AUTHOR("Tushar Bhanarkar <tush-projects05@gmail.com>");
MODULE_LICENSE("GPL");
