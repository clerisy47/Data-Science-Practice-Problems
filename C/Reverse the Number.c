#include <stdio.h>
int fun(int n);

int main() {

  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);
  fun(n);
}
int fun(int n){
    int reverse = 0, remainder;
      while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);
}