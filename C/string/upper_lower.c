#include <stdio.h>

void convertCase(char *str) {
    while (*str) { // *str is same as str[] we can do it with for loop like in operations.c
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        } else if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char inputString[100];
    char ch;
    int i = 0;

    printf("Enter a string: ");
    
    scanf("%s", inputString);

    convertCase(inputString);

    printf("Converted string: %s\n", inputString);

    return 0;
}
