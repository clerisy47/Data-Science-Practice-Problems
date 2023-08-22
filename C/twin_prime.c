#include <stdio.h>

int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0; 

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Twin primes are pairs of prime numbers that have a difference of 2
    
    if (is_prime(num1) && is_prime(num2) && abs(num1 - num2) == 2) {
        printf("%d and %d are twin primes.\n", num1, num2); 
    } else {
        printf("%d and %d are not twin primes.\n", num1, num2);
    }
    
    return 0;
}
