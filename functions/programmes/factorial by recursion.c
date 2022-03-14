#include<stdio.h>
int fact(int n);
int main()
{
    int n, result;
    printf("Enter the n value :");
    scanf("%d",&n);
    result = fact(n);
    printf("Result is :%d",result);
    return 0;
}
int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
