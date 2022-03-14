#include<stdio.h>
int main()
{
    int n,i,x=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for (i =0;i<=n;i++)
    {
        x=x+i;

    }
    printf("The sum of %d natural numbers is : %d",n,x);

}
