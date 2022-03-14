#include<stdio.h>
void max(int x,int y);
int main()
{
    int a, b ;
    printf("Enter the values of a ,b :");
    scanf("%d%d",&a,&b);
    max(a,b);
}
void max(int x,int y)
{
    if (x>y)
        printf("Max = %d",x);
    else
        printf("Max = %d",y);
}
