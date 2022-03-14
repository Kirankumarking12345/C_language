#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter a number which you want the factors :\n");
    scanf("%d",&n);
    printf("The factors are :");

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}
