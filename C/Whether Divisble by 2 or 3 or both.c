#include <stdio.h>
int fun(int arg);
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); 
    fun(num);
}

int fun(int arg){
    if(arg % 2 == 0 && arg % 3 == 0){
        printf("%d is divisible by both 2 and 3.", arg);}
    else if(arg % 2 == 0){
       printf("%d is divisible by 2", arg);}
    else if(arg % 3 == 0){
        printf("%d is divisible by 3", arg);}
    else{
        printf("%d is not divisible by 2 nor by 3", arg);}
    
    return 0;
}
