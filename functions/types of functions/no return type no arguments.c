#include<stdio.h>
void max(void);
int main()
{
    max();
    return 0;

}
void max()
{
    int a,b;
    printf("Enter values of a,b :");
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("Max = %d",a);
    else
        printf("Max = %d",b);
}
