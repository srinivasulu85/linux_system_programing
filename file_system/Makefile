# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -std=c99

# Target Executable
TARGET =  copy

# Build Targets
all: $(TARGET)

$(TARGET):  copy.c
	$(CC) $(CFLAGS) -o $(TARGET) copy.c

clean:
	rm -f $(TARGET) *.o

