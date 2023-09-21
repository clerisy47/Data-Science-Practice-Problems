#include<stdio.h>
long int facto_rec(int n);
long int facto_dyn(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("By Recursion Factorial of %d = %ld", n, facto_rec(n));
    printf("\nBy DP Factorial of %d = %ld", n, facto_dyn(n));
    return 0;
}
// Recursion
long int facto_rec(int n) {
    if (n==0)
        return 1;
    else
        return n*facto_rec(n-1);
}

// Dynamic Programming:
long int facto_dyn(int n){
    int arr[n+1], i;
    arr[0]=1;
    for(i=1; i<n+1; i++){
        arr[i]=i*arr[i-1];
    }
    return arr[n];
}
