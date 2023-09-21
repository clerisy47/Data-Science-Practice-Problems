//     N
//    e e 
//   P P P 
//  a a a a
// L L L L L

#include <stdio.h>

int main() {
    char characters[30] = "NEPAL";
    int length = 5, i, j, space;

    for (i = 1; i <= length; i++) {
        for (space = 1; space < length - i; space++) {
            putchar(' ');
        }

        for (j = 1; j <= i; j++) {
            if(i%2!=0){
            putchar(characters[i-1]);
            putchar(' ');
            }
            else{
            putchar(characters[i-1]+'a'-'A'); // or + 32 
            putchar(' ');
            }
        }

        putchar('\n');
    }

    return 0;
}
