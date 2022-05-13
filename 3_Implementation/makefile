CC = arm-none-eabi-
MCPU = cortex-m4
BOARD = STM32F4-Discovery
MCU = STM32F407VG

SRCS := $(wildcard *.c)
INCS := $(wildcard *.h)
OBJS := $(SRCS:.c=.o)

TARGET = out.elf

ARCH_FLAGS = -mcpu=$(MCPU) -mthumb -mfloat-abi=soft
CFLAGS = -c
LDFLAGS = -nostdlib -T linker_file.ld -Wl,-Map=out.map

%.o: %.c ${INCS}
	$(CC)gcc $(CFLAGS) $(ARCH_FLAGS) $^

out.elf: ${OBJS}
	$(CC)gcc $(LDFLAGS) $(ARCH_FLAGS) -o $@ $^
	
clean:
	rm -rf *.o *.elf *.gch

run: ${TARGET}
	-qemu-system-gnuarmeclipse.exe -M ${BOARD} -mcu ${MCU} --image ${TARGET}
