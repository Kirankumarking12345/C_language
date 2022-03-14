#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,count=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    i=0;

    while(i<=n)
    {
        i++;
        if(n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("Its a prime number");
    }
    else
        printf("Its not a prime number");

}
