#include <stdio.h>

int main() {
   int rows, coeff, space, i, j;
   rows = 5;
   for (i = 1; i <= rows; i++) {
      for (space = 1; space <= rows - i; space++){
         printf("  ");
      }
      coeff =1;
      for (j = 1; j <= i; j++) {
         printf("%d   ", coeff);
         coeff = coeff * (i - j) / j;
      }
      printf("\n");
   }
   return 0;
}
