#include<stdio.h>
#include<conio.h>

int fib(int i)
{
    if (i==0)
        return 0;
    if (i==1)
        return 1;

    return fib(i-1)+fib(i-2);
}
int main()
{
    int i,n;
    printf("Enter the no of terms you want ?\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\n%d",fib(i));
    }
    return 0;
}
