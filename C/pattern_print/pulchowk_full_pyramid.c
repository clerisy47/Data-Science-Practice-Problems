                //        k
                //       o k
                //      w o k
                //     h w o k
                //    c h w o k
                //   l c h w o k
                //  u l c h w o k
                // p u l c h w o k


#include <stdio.h>
#include<string.h>

int main() {
    char word[] = "pulchowk"; 
    int length;
    for(length=0; word[length]!='\0';length++);
    // length = strlen(word);
    for(int i=1; i<=8; i++){
        for(int space=7; space>=i;space--){
            putchar(' ');
        }
        for(int j=9-i; j<=8; j++){
            putchar(word[j-1]);
            putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}