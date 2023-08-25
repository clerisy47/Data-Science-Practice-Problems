//     N
//    e e 
//   P P P 
//  A A A A
// L L L L L

#include <stdio.h>

int main() {
    char characters[30] = "NePAL";
    int length = 5;

    for (int i = 0; i < length; i++) {
        // space print garne
        for (int  space = 0; space < length - i - 1; space++) {
            printf(" ");
        }

        // i+1 times print garne
        for (int j = 0; j <= i; j++) {
            printf("%c ", characters[i]);
        }

        printf("\n");
    }

    return 0;
}
