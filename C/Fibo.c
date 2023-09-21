// First n Fibonacci Series

#include<stdio.h>
 
int Fibonacci(int n) // Function to return nth number of fibonacci series
{
   if ( n == 0 || n == 1)
      return n;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
 
int main()
{
   int n, i;
   printf("Enter total number of values you want in the Fibonacci series: ");
   scanf("%d",&n);
 
   printf("Fibonacci series:\n");
 
   for ( i = 0 ; i < n ; i++ )
   {
      printf("%d\n", Fibonacci(i));
   }
 
   return 0;
}
 

