// 1 2 3 4 5 4 3 2 1 
//   1 2 3 4 3 2 1 
//     1 2 3 2 1 
//       1 2 1 
//         1 


#include<stdio.h>
int main(){
    int i, j, space;
    for(i=1; i<=5; i++){
        for(space=1; space<=i-1; space++){
            printf("  ");
        }
        for(j=1; j<=5-i+1; j++){
            printf("%2d", j);
        }
        for(j=5-i; j>=1; j--){
            printf("%2d", j);
        }
        printf("\n");
    }
    
    return 0;
}