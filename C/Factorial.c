#include<stdio.h>
int facto(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, facto(n));
    return 0;
}

int facto(int n) {
    if (n<=1)
        return 1;
    else
        return n*facto(n-1);
}
