#include<stdio.h>
#include<conio.h>
int main()
{
    int a[8],i,temp,j,k,m;
    printf("Enter the array");
    for(m=0;m<8;m++)
    {
        scanf("%d",&a[m]);
    }
    for (i=0;i<8;i++)
    {
        for(j=i+1;j<=8;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array");
    for (k=0;k<=8;k++)
    {
        printf("%d\n",a[k]);
    }
}
