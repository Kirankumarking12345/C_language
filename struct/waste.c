#include<stdio.h>
union point
{
    int id;
    char name[10];
}s;

int main()
{
printf("enter the student details\n");
scanf("%d",&s.id);
scanf("%s",s.name);
printf("id :%d\n",s.id);
printf("name : %s\n",s.name);
printf("size of the union is depends on the maximum size element in union\n");
printf("size is %d",sizeof(s));


}
