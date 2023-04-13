TARGET=hello
include ../shared/Makefile.shared
HEADS=/home/mokunhua/code/sniper/sniper/include

$(TARGET): $(TARGET).o
	$(CC) $(TARGET).o -lstdc++ -lm $(SNIPER_LDFLAGS) -o $(TARGET)

run_$(TARGET):
	../../run-sniper -v --viz --power -n 1 -c gainestown --roi -- ./hello -p 1

CLEAN_EXTRA=viz
