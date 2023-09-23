// 1+11+111+1111 for first n terms using recursion

#include<stdio.h>
#include<math.h>
int fun_sum(int n){
    if (n==1){
        return 1;
    }
    else{
        return pow(10,n-1) + fun_sum(n-1);
    }
}
int main(){
    int n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum += fun_sum(i);
    }
    printf("The value of sum of series is: %d", sum);
}