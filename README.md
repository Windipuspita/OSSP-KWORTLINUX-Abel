# OSSP-KWORTLINUX-Abel

## a. OS Installation
Installed KWORT Linux using VMware. Partitioned the disk, mounted the filesystem, and configured bootloader manually. Fixed issues like GRUB directory errors and command typos to complete installation successfully.

## b. System Call
Created a simple C program that uses the `execv()` system call to run the `ls -l` command. The program replaces its process image with `/bin/ls`, demonstrating low-level process control in Linux.
