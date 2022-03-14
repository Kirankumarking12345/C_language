#include<stdio.h>
int main()
{
    int a[5]={234,2,23,4,45};
    int i,k,t,p;
    printf("Enter Element to search ?\n");
    scanf("%d",&k);
    for (i=0; i<5; i++)
    {
        if(k==a[i])
        {
            t=1;
            p=i+1;
        }
    }
    if(t==1)
    {
        printf("The Element is found");
        printf("\nThe position is : %d",p);
    }
    else
        printf("The Element was not found");
}
