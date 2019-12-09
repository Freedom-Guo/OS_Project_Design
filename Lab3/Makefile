obj-m := mydev.o

PWD := $(shell pwd)
KERNELDIR := /usr/src/linux-headers-4.15.0-51-generic
all:
	make -C $(KERNELDIR) M=$(PWD) modules

.PHONY: clean
	rm -rf *.o *~ core *.ko *.mod.c modules.order Module.symvers
