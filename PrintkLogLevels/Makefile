PWD   := $(shell pwd)
obj-m += printk_log_levels.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
install:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules_install
clean:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean