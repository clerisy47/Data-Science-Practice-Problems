// 1+2+3+4+5 for first n terms using recursion
#include<stdio.h>
int sum_number(int n){
    if (n==1){
        return 1;
    }
    else{
        return n+ sum_number(n-1);
    }
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The results of series is %d", sum_number(n));
}