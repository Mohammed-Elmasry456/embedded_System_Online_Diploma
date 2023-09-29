CC =arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC =$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
project_name=learn-in-depth-cortex_m4


all: $(project_name).bin
	@echo "=================== Build is Done ==================="

%.o: %.c
	$(CC)gCC.exe -c $(CFLAGS) $(INCS) $< -o $@


%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@


$(project_name).elf: $(AsOBJ) $(OBJ)
	$(CC)ld.exe -T linker.ld $(LIBS) -Map=output.map $(OBJ) $(AsOBJ) -o $@
	cp $(project_name).elf $(project_name).axf     



$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.bin *.elf

clean:
	rm *.elf *.bin 
