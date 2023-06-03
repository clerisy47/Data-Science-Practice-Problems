#include <stdio.h>
int swap(int, int);
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
}
 
int swap(int a, int b)
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;  
 printf("After Swapping\nx = %d\ny = %d\n", a, b);
}