# 创建于2024.11.2
# StarsailerOS Makefile

BuildDir = Build
KernelDir = Kernel
IncludesDir = Includes

QemuMemory = 1024 # Qemu内存

all:

Debug: all
	@qemu-system-x86_64 -bios "UEFI.FD" -m $(QemuMemory)