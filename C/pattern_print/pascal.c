   //                   1
   //                 1   1
   //               1   2   1
   //             1   3   3   1
   //           1   4   6   4   1
   //         1   5  10  10   5   1
   //       1   6  15  20  15   6   1
   //     1   7  21  35  35  21   7   1
   //   1   8  28  56  70  56  28   8   1
   // 1   9  36  84 126 126  84  36   9   1


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
