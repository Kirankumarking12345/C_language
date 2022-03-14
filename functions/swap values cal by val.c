#include<stdio.h>
void swap(int ,int);
int a=20,b=30;
int main()
{
    printf("value of a=%d\n",a);
    printf("value of b=%d\n\n",b);
    swap(a,b);

}
void swap(int x,int y)
{
    int k;
    k =x;
    x =y;
    y =k;
    printf("value of a=%d\n",x);
    printf("value of b=%d",y);
}
