#include <stdio.h>

int main() {
   int rows, coeff, space, i, j;
   rows = 10;
   for (i = 1; i <= rows; i++) {
      for (space = 1; space <= rows - i; space++){
         printf("  ");
      }
      coeff =1;
      for (j = 1; j <= i; j++) {
         printf("%4d", coeff);
         coeff = coeff * (i - j) / j;
      }
      printf("\n");
   }
   return 0;
}
