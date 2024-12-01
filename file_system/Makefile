# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -std=c99

# Target Executable
TARGET = test1

# Build Targets
all: $(TARGET)

$(TARGET): test1.c
	$(CC) $(CFLAGS) -o $(TARGET) test1.c

clean:
	rm -f $(TARGET) *.o

