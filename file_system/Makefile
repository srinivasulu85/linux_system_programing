# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -std=c99

# Target Executable
TARGET =  test2

# Build Targets
all: $(TARGET)

$(TARGET):  test2.c
	$(CC) $(CFLAGS) -o $(TARGET) test2.c

clean:
	rm -f $(TARGET) *.o

