#include <stdio.h>
int main() {
  int a, b, x, y, t, hcf, lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  hcf = a;
  lcm = (x*y)/hcf;

  printf("HCF of %d and %d = %d\n", x, y, hcf);
  printf("LCM of %d and %d = %d\n", x, y, lcm);

  return 0;
}