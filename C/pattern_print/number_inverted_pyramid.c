#include<stdio.h>
int main(){
    int i, j, space;
    for(i=1; i<=5; i++){
        for(space=1; space<=i-1; space++){
            printf("  ");
        }
        for(j=1; j<=5-i+1; j++){
            printf("%d ", j);
        }
        for(j=5-i; j>=1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}