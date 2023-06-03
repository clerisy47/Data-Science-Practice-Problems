#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, sub, mult, mod;  
    float div;  
  

    printf("Input the first number: ");  
    scanf("%d", &num1);  
    printf("Input the second number: ");  
    scanf("%d", &num2);  
  

    sum = num1 + num2;  
    sub = num1 - num2;  
    mult = num1 * num2;  
    div = (float)num1 / num2;  
    mod = num1 % num2;  
  
 
    printf("The sum of the given numbers : %d\n", sum);  
    printf("The difference of the given numbers : %d\n", sub);  
    printf("The product of the given numbers : %d\n", mult);  
    printf("The quotient of the given numbers : %f\n", div);  
    printf("MODULUS = %d\n", mod);  
  
    return 0;   
} 