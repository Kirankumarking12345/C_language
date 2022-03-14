#include<stdio.h>
int max();
int main()
{
    max();
    return 0;
}
int max()
{
    int a, b;
    printf("Enter the value of a, b :");
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("Max = %d",a);
    else
        printf("Max = %d",b);
}
