#include <stdio.h>
#include <stdlib.h>

#define CHUNK_SIZE 1024 * 1024  // Read 1 MB at a time

int main() {
    FILE *file;
    char *buffer;
    size_t bytesRead;

    // Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Allocate memory for the buffer
    buffer = (char *)malloc(CHUNK_SIZE);
    if (buffer == NULL) {
        perror("Error allocating memory");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Read the file in chunks
    while ((bytesRead = fread(buffer, 1, CHUNK_SIZE, file)) > 0) {
        // Process the data read (for now, just printing the size read)
        printf("Read %zu bytes\n", bytesRead);

        // Optional: process the buffer content here
    }

    // Cleanup
    free(buffer);
    fclose(file);

    printf("File reading completed.\n");
    return EXIT_SUCCESS;
}

