#include<stdio.h>
void swap(int* ,int*);
int main()
{
    int a=20,b=30;
    printf("value of a=%d\n",a);
    printf("value of b=%d\n\n",b);
    swap(&a,&b);
    printf("value of a=%d\n",a);
    printf("value of b=%d",b);
}
void swap(int *x,int *y)
{
    int k;
    k  =*x;
    *x =*y;
    *y =k;
}
