#ccflags-y  := -O3 -Os -DMODULE -D__KERNEL__
#ldflags-y  := -s

obj-m := dm-snapshot.o

dm-snapshot-objs := dm-snap.o dm-exception-store.o dm-snap-transient.o \
			dm-snap-persistent.o

fakeall :
	sh make.sh

.PHONY : clean
clean :
	-rm -fr .tmp*
	-rm -f *.o *.ko* *.mod.* .* modules.order Module.symvers
