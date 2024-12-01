#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define FILE_NAME "example.txt"
#define BUFFER_SIZE 1024

int main() {
    int fd;
    ssize_t bytes_written, bytes_read;
    char buffer[BUFFER_SIZE] = "Hello, this is a sample text written using system calls!\n";
    char read_buffer[BUFFER_SIZE];

    // Create and open the file
    fd = open(FILE_NAME, O_CREAT | O_RDWR, 0644);
    if (fd == -1) {
        perror("Error opening/creating file");
        exit(EXIT_FAILURE);
    }

    // Write to the file
    bytes_written = write(fd, buffer, sizeof(buffer));
    if (bytes_written == -1) {
        perror("Error writing to file");
        close(fd);
        exit(EXIT_FAILURE);
    }
    printf("Written to file: %s\n", buffer);

    // Reset file pointer to the beginning
    lseek(fd, 0, SEEK_SET);

    // Read from the file
    bytes_read = read(fd, read_buffer, BUFFER_SIZE);
    if (bytes_read == -1) {
        perror("Error reading file");
        close(fd);
        exit(EXIT_FAILURE);
    }

    // Print what was read
    printf("Read from file: %s\n", read_buffer);

    // Close the file
    close(fd);
    return 0;
}

