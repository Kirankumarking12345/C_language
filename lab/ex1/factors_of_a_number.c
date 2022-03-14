#include<stdio.h>
int main()
{
    int i, n, s=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("The factors of %d is :\n",n);
    for(i=1; i<=n; i++)
    {
        if(n%i ==0)
        {
            printf("%d \n",i);
            s=s+i;
        }
    }
    printf("\nSum of the factors is : %d",s);
}
