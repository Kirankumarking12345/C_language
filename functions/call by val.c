#include<stdio.h>
#include<conio.h>
void num(int);
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    printf("\nBefore calling function value of x= %d",x);
    num(x);
    printf("\nAfter calling function x= %d",x);
    return 0;

}
num(int x)
{
    x=x+10;
    printf("\nValue of x= %d",x);
}
