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

    // Tyo pattern lai 2 parts ma divide garam:
    // First part:
    // H
    // HE
    // HEL
    // HELL
    // HELLO
    for (int i = 1; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", pattern[j]);
        }
        printf("\n");
    }

    // Second part:
    // HELL
    // HEL
    // HE
    // H
    for (int i = length - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", pattern[j]);
        }
        printf("\n");
    }

    return 0;
}
