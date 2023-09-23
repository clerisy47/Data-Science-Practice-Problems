// Triangular numbers from n1 to n2
// Triangular numbers are the numbers which can be represented by summation of natural numbers

#include <stdio.h>

int sum(int n) {
    return n*(n+1)/2;
}

int main() {
    int n1, n2, i, j;

    printf("Enter a number n1 and n2: ");
    scanf("%d %d", &n1, &n2);
    for(i=n1; i<=n2; i++){
        for(j=0; j<=i; j++){
            if (i == sum(j)){
                printf("%d ", i);
            }
        }
    }
    return 0;
}
