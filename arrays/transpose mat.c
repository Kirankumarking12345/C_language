#include<stdio.h>
void main()
{
    int m,n,a[10][10],i,j,transpose[10][10];
    printf("Enter the dimension of matrix a:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the values of matrix a :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("The transpose matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            {
                transpose[i][j]=a[j][i];
                printf(" %d\t",transpose[i][j]);
            }
        printf("\n");
    }


}
