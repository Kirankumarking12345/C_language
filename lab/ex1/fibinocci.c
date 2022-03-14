#include<stdio.h>
int main()
{
    int n,i,z=0;
    int x=0, y=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        if (z<n)
        {
            printf("%d\n",z);
            x = y;
            y = z;
            z = x+y;
        }

    }
}
