#include<stdio.h>
int main ()
{
int i, marks[100],p=0,f=0;

for(i=0;i<5;i++)
{
printf("Enter the marks : "); 
scanf("%d",&marks[i]);
if(marks[i]>=40)
{
p++;
}
else
{
f++;
}
}
printf("Number of students passed : %d",p);
printf("\nNumber of students failed : %d",f);
}