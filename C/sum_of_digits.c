// Sum of digits using recursion until it become one digit
#include<stdio.h>
int sum_of_digits(int n){
    if (n == 0){
        return 0;
    }
    else{
        return n%10 + sum_of_digits(n/10);
    }
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    while(n>10){
        n = sum_of_digits(n);
    }
    printf("\nThe one digit number is %d", n);
    return 0;
}