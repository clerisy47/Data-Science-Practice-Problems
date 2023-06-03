#include<stdio.h>
struct Student
{
 char name[50];
 int roll_no;
 int m1,m2,m3;
};
main()
{   int i;
  struct Student s[5];
  for(i=0;i<5;i++)
  {   printf("\nEnter data for Student %d.....\n",i+1);
    printf("Enter name           : ");
    scanf("%s",&s[i].name);
    printf("Enter Roll No.       : ");
    scanf("%d",&s[i].roll_no);
    printf("Enter marks for sub1 : ");
    scanf("%d",&s[i].m1);
    printf("Enter marks for sub2 : ");
    scanf("%d",&s[i].m2);
    printf("Enter marks for sub3 : ");
    scanf("%d",&s[i].m3);
  }
  for(i=0;i<5;i++)
  {   printf("\nStudent   %d\n",i+1);
    printf("Name    : %s\n",s[i].name);
    printf("Roll No.: %d\n",s[i].roll_no);
    printf("Sub1    : %d\n",s[i].m1);
    printf("Sub2    : %d\n",s[i].m2);
    printf("Sub3    : %d\n",s[i].m3);
  }
}