#include<stdio.h>
    struct data
    {
        int i;
        char k[10];
        float j;
    };
int main()
{
    struct data s1,s2;
    printf("Enter Student ID :\t");
    scanf("%d",&s1.i);
    printf("Enter the name of the Student: \t");
    scanf("%s",&s1.k);
    printf("Enter the percentage of student :\t");
    scanf("%f",&s1.j);

    printf("\nEnter Student ID :\t");
    scanf("%d",&s2.i);
    printf("Enter the name of the Student: \t");
    scanf("%s",&s2.k);
    printf("Enter the percentage of student :\t");
    scanf("%f",&s2.j);

    printf("\nDetails of Student 1 :");
    printf("ID no : %d \nName = %s \nPercentage = %f",s1.i,s1.k,s1.j);
    printf("\nDetails of Student 1 :");
    printf("ID no : %d \nName = %s \nPercentage = %f",s2.i,s2.k,s2.j);


}
