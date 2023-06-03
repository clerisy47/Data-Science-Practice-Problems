#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i;
   printf("Enter any positive integer: ");
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( i = 1 ; i <= n ; i++ )
   {
      printf("%d\n", Fibonacci(i));
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
