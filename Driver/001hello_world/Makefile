obj-m := linux_module.o

ARCH=arm
CROSS_COMPILE=arm-linux-gnueabi
KER_DIR=/home/tushar/delete_today/linux-at91
HOST_KER_DIR=/lib/modules/$(shell uname -r)/build/


all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE)- -C $(KER_DIR) M=$(PWD) modules
	
clean:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE)- -C $(KER_DIR) M=$(PWD) clean

help:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE)- -C $(KER_DIR) M=$(PWD) help	

host:
	make  -C $(HOST_KER_DIR) M=$(PWD) modules
