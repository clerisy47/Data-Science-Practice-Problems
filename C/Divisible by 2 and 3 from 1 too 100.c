#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int i; 
printf("The numbers divisible by 2 and 3 are: "); 
for(i=1; i<=100; i++) 
{ 
if(i%2==0 && i%3==0) 
{ 
printf("\n%d", i); 
} 
} 
}