// Programming
// rogrammin
// ogrammi
// gramm
// ram
// a

#include<stdio.h>

int main()
{
 int i,j;
 char str[20] = "Programming";
 for(i=0;i< 6;i++) 
 {
  for(j=i;j< 11-i;j++) 
  {
   printf("%c", str[j]);
  }
  printf("/n");
 }

 return(0);
}