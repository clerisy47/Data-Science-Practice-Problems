// Pallindrome are the numbers whose reverse is same as the original number

#include <stdio.h>

int isPalindrome(int num) {
    int org = num, rev = 0, rem;
    
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    
    return org == rev;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
