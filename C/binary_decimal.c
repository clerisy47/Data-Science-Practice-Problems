#include <stdio.h>
#include <math.h>

int binary_decimal(long long);
long long decimal_binary(int);

int main() {
    int choice;
    long long n;

    printf("Choose conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%lld", &n);
        printf("%lld in binary = %d in decimal\n", n, binary_decimal(n));
    } else if (choice == 2) {
        int int_n = (int)n;
        printf("Enter a decimal number: ");
        scanf("%d", &int_n);
        printf("%d in decimal = %lld in binary\n", int_n, decimal_binary(int_n));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

int binary_decimal(long long n) {
    int dec = 0, i, rem;

    for(i=0; n!=0; i++) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
    }

    return dec;
}

long long decimal_binary(int n) {
    long long bin = 0;
    int rem, i;

    for(i=0; n!=0; i++) {
        rem = n % 2;
        n /= 2;
        bin += rem * pow(10,i);

    }

    return bin;
}
