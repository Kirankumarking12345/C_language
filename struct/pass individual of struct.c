#include<stdio.h>
display(int ,float );
struct student
{
    int id;
    float perc;
};
display(int a,float b)
{
    printf("\nID :\t%d\nPercentage :\t%f\n",a,b);
}
int main()
{
    struct student s1;
    printf("Enter ID :");
    scanf("%d",&s1.id);
    printf("Enter percentage :");
    scanf("%f",&s1.perc);
    display(s1.id,s1.perc);
    return 0;
}
