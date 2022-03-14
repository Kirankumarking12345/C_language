#include<stdio.h>
#include<conio.h>
struct student
{
 char name[10];
 int id;
 float percentage;
} s1;
int main()
{
  printf("enter name of the student:\n");
  scanf("%s",&s1.name);
  printf("enter the id of the student:\n");
  scanf("%d",&s1.id);
  printf("enter percentage of the student:\n");
  scanf("%f",&s1.percentage);
  printf("student details are:\n");
  printf("name of the student is:%s\n",s1.name);
  printf("id of the student is:%d\n",s1.id);
  printf("percentage of student :%f\n",s1.percentage);

}
