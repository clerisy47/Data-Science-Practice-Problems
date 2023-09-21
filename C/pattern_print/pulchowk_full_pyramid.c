                //       k
                //      o k
                //      w o k
                //     h w o k
                //    c h w o k
                //   l c h w o k
                //  u l c h w o k
                // p u l c h w o k


#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "kwohclup"; 
    int length = strlen(word); 

    for (int i = 0; i < length; i++) {
        for (int space = 0; space < length - i - 1; space++) {
            printf(" ");
        }
        
        for (int j = i; j >= 0; j--) {
            printf("%2c", word[j]);
        }

        printf("\n");
    }

    return 0;
}
