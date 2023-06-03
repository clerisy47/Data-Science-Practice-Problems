#include <stdio.h>
int fun(int arg);
int main() {

  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  fun(n);
} 
int fun(int arg){
    int i, flag;
  if (arg == 0 || arg == 1)
    flag = 1;

  for (i = 2; i <= arg / 2; ++i) {
    if (arg % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("%d is a prime number.", arg);
  else
    printf("%d is a composite number.", arg);

}