// H
// HE
// HEL
// HELL
// HELLO
// HELL
// HEL
// HE
// H

#include <stdio.h>

int main() {
    char pattern[] = "HELLO";
    int length = 5;

    // First loop for rows
    // Second loop for each elements

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= i; j++) {
            putchar( pattern[j-1]);
        }
        putchar('\n');
    }
    
    for (int i = 1; i <= length-1; i++) {
        for (int j = 1; j <= length-i; j++) {
            putchar(pattern[j-1]);
        }
        putchar('\n');
    }

    return 0;
}
