// Copies data from one file to another

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char buffer[1024];

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Unable to create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while (fscanf(sourceFile, "%s", buffer) != EOF) {
        fprintf(destinationFile, "%s ", buffer);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
