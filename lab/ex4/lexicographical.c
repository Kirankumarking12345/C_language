#include<stdio.h>
#include<String.h>
void main()
{
    char a[4][25],temp[25];
    int i,j;
    printf("Enter the name:\n");
    for (i=0; i<4; i++)
    {
        gets(a[i]);
    }
    for (i=0;i<3;i++)
        for(j=i+1;j<4;j++)
    {
        if(strcmp(a[i],a[j])>0)
        {
            strcpy(temp,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],temp);

        }
    }
    printf("Sorted strings are :\n");
    for(i=0; i<4; i++)
    {
        puts(a[i]);

    }
}
