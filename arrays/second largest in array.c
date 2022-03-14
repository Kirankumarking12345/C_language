#include<stdio.h>
int main()
{
    int array[100],max, size, c, secondMax;
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
    printf("Enter %d integers\n",size);
    for (c=0;c<size;c++)
    {
        scanf("%d",&array[c]);
    }
    max = array[0];
    for (c=1;c<size;c++)
    {
        if(array[c]>max)
        {
            secondMax=max;
            max  = array[c];
        }
    }
    printf("Second maximum element is :%d\n", secondMax);
    return 0;
}

