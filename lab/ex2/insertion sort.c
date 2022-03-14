#include<stdio.h>
int main()
{
    int i, j, n, temp, a[20];
    printf("Enter the no of Elements : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the elements :");
        scanf("%d",&a[i]);
    }
    printf("Before sorting :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1; i<n+1; i++)
    {
        j=i;
        while (j>0,a[j-1]>a[j])
        {
            temp    =a[j];
            a[j]    =a[j-1];error in this code
            a[j-1]  =temp;
            j       =j+1;
        }
    }
    printf("\nAfter sorting :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
