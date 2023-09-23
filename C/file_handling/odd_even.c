// Stores odd and even numbers in separate files
#include <stdio.h>

int main() {
    int num;
    char choice = 'y';
    char buffer[1024];
    
    FILE *evenFile = fopen("even.txt", "w+");
    FILE *oddFile = fopen("odd.txt", "w+");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (choice == 'y' || choice == 'Y') {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } 
    rewind(evenFile); // rewind moves the curson to start of the file. Or fseek(evenFIle, 0, 0)
    printf("Even Numbers written to the file are:");
    while (fscanf(evenFile, "%s", buffer)!= EOF)
    {
        printf("%s \n", buffer);
    }
    printf("Odd Numbers written to the file are:");

    rewind(oddFile);    
    while (fscanf(oddFile, "%s", buffer)!= EOF)
    {
        printf("%s \n", buffer);
    }
    printf("Numbers have been written to even.txt and odd.txt.\n");

    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
