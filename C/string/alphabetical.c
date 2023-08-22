#include <stdio.h>
#include <string.h>

void bubbleSortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[] = "bcaed";
    
    printf("Original string: %s\n", str);

    bubbleSortString(str);

    printf("String in alphabetical order: %s\n", str);

    return 0;
}
