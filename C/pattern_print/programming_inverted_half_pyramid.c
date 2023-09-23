// Programming
// rogrammin
// ogrammi
// gramm
// ram
// a

#include<stdio.h>

int main(){
    int i,j;
    char str[20]= "Programming";
    for(i=1; i<=6; i++){
        for(j=i; j<13-i; j++){
            printf("%c", str[j-1]);
        }
        printf("\n");
    }
}