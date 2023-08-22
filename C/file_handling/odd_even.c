#include <stdio.h>

int main() {
    int num;
    char choice;
    
    FILE *evenFile = fopen("even.txt", "w");
    FILE *oddFile = fopen("odd.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers have been written to even.txt and odd.txt.\n");

    return 0;
}
