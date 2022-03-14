#include<stdio.h>
int max(int x,int y);
int main()
{
    int a,b,m;
    printf("Enter the value of a,b :");
    scanf("%d%d",&a,&b);
    m = max(a,b);
    printf("Maximum value is %d",m);
}
int max(int x,int y)
{
    if (x>y)
        return x;
    else
        return y;
}
