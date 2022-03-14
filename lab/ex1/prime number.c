#include<stdio.h>
int main()
{
    int n,i,k=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            k++;
        }
    }
    if(k==2)
    {
        printf("The given number %d is Prime number",n);
    }
    else
        printf("The given number %d is not a Prime number",n);
}
