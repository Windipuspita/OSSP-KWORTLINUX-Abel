# OSSP-KWORTLINUX-Abel

## a. OS Installation  
This project focuses on installing and configuring KWORT LINUX — a lightweight, fast, and minimalist Linux distribution. The motivation behind choosing KWORT LINUX is its simplicity and transparency, which exposed me directly to core system components such as file systems, bootloaders, and run levels without abstraction. Unlike more automated operating systems (e.g., Ubuntu or Windows), KWORT requires manual configuration, making it ideal for an educational environment where hands-on learning is emphasized.
Moreover, performing the installation in a virtual environment using VMware added value by teaching me about virtualization technologies, which are essential in today’s cloud-based and DevOps-driven world. Virtual machines provided a safe and flexible way to test operating systems without affecting the host system, allowing me to experiment, troubleshoot, and understand low-level processes without risk.


## b. System Call  
Eventually, in this project, I created a C program using the execv() system call to replace the current process image with a new one (/bin/ls). This helped me understand how process execution works at the system level and how the Linux kernel loads and runs programs. The exec() system call replaces the currently running process with a new process — in this case, the ls command. My program successfully demonstrated this behavior by displaying the contents of the current directory and exiting immediately, without returning to the original program logic.
