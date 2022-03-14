#include<stdio.h>
#include<conio.h>
void main()
{
    int fact=1;
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Please do not give negative numbers\n");
    }
    else
    {
        for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("The value of %d factorial is :%d",n,fact);
    getch();
    }
}
