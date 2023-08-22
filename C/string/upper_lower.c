#include <stdio.h>

void convertCase(char *str) {
    while (*str) { // *str is same as str[]
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
    
    while (1) {
        ch = getchar();
        if (ch == '\n' || ch == EOF) {
            inputString[i] = '\0';
            break;
        }
        inputString[i] = ch;
        i++;
    }

    convertCase(inputString);

    printf("Converted string: %s\n", inputString);

    return 0;
}
