#include <stdio.h>

int sum(int n) {
    int sum = 0, i;

    for(i=0; i<n; i++){
        sum+=i;
    }
    return sum;
}

int main() {
    int num, i, flag=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++){
        if (num == sum(i)){
            flag =1;
        }
    }

    if (flag==1) {
        printf("%d is a triangular number.\n", num);
    } else {
        printf("%d is not a triangular number.\n", num);
    }

    return 0;
}
