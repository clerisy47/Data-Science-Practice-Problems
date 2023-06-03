#include <stdio.h>
void main()
{
    int a,b,c,max,mid,min;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if(a>=b && a>=c)
     {
      max=a;
       if(b>c)
       {
        mid=b;
        min=c;
       }
      else
      {
       mid=c;
       min=b;
      }
    }
   if(b>=a && b>=c)
     {
       max=b;
       if(a>c)
       {
        mid=a;
        min=c;
      }
      else
      {
       mid=c;
       min=a;
      }
    }
   if(c>=b && c>=a)
     {
      max=c;
       if(a>b)
       {
        mid=a;
        min=b;
      }
      else
      {
       mid=b;
       min=a;
      }
    }
  printf("The largest no=%d, middle number=%d and the smallest number=%d",max,mid,min);
}