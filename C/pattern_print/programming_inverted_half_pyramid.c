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
 for(i=0;i< 6;i++) // 6 rows xa so 6 choti
 {
  for(j=i;j< 11-i;j++) // first row ma 11 ota xa second ma 9 ota (first ko ra last ko hatexa so starting index or final index duitai ghataune)
  {
   printf("%c", str[j]);
  }
  printf("/n");
 }

 return(0);
}