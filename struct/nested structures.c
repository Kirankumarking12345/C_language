#include<stdio.h>
struct dob
{
    int day;
    int month;
    int year;
};
struct student
{
    int id;
    char name[100];
    struct dob d1;
};
int main()
{
    struct student s1;
    printf("Enter Id : ");
    scanf("%d",&s1.id);
    printf("Enter the name : ");
    scanf("%s",s1.name);
    printf("Enter date of birth  dd/mm/yyyy: \n");
    scanf("%d%d%d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
    printf("\nId \t:%d\nName \t:%s\n",s1.id,s1.name);
    printf("Day \t:%d\nMonth \t:%d\nYear \t:%d",s1.d1.day,s1.d1.month,s1.d1.year);
}
