#include <stdio.h>

int main() {
    unsigned int a = 12;
    unsigned int b = 10;

    // Bitwise AND
    printf("a & b = %d\n", a & b); // Output: a & b = 8

    // Bitwise OR
    printf("a | b = %d\n", a | b); // Output: a | b = 14

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b); // Output: a ^ b = 6

    // Bitwise NOT (complement)
    printf("~a = %d, ~b = %d\n", ~a, ~b); // Output: ~a = 4294967283, ~b = 4294967285

    // Left shift
    printf("a << 1 = %d\n", a << 1); // Output: a << 1 = 24

    // Right shift
    printf("b >> 1 = %d\n", b >> 1); // Output: b >> 1 = 5

    return 0;
}
