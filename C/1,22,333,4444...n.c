#include <stdio.h>
int main()
{
    int n,out,in;
    printf("Enter the value of n: ");
    scanf("%d",&n);

  for(out=1;out<=n;out++)
  {
      for(in=1;in<=out;in++)
      {
           printf("%d",out);
      }
      printf(" ");

  }
}