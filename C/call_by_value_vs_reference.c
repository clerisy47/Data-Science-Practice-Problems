#include <stdio.h>

void swapByValue(int, int);
void swapByReference(int*, int*);

int main()
{
    int x, y;
 
    printf("Enter the value of x and y\n");
    scanf("%d%d", &x, &y);
 
    printf("Before Swapping : x = %d y = %d\n", x, y);

    swapByValue(x, y);
    printf("After Swapping by Value  x = %d\ny = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After Swapping by Reference x = %d\ny = %d\n", x, y);
   
    return 0;
}

void swapByValue(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;

    
}

void swapByReference(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
