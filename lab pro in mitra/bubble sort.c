#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,temp,a[10];
    printf("Enter how many numbers you want to sort :\n");
    scanf("%d",&n);
    printf("Enter the Numbers :\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("The sorted array is ");
    for (i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}
