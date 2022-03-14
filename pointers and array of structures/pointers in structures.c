#include<stdio.h>
struct student
{
    char name[20];
    int id;
    float perc;
};
int main()
{
    struct student *p1,s1={"kiran",13891,12.3};
    p1 = &s1;
    printf("Student name\t : %s",p1->name);
}

