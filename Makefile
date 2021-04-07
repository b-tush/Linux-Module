ifeq ($(KERNELRELEASE),)

KERNELDIR := ~/linux-at91
PWD := $(shell pwd)

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions \
		modules.order Module.symvers

.PHONY: modules modules_install clean

else
	obj-m := hello.o
endif
