#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);
    printf("\nEnter the operator : ");
    scanf(" %c",&c);

    switch(c)
    {
    case '+':
        printf("\nThe addtion of a and b is : %d",a+b);
        break;
    case '-':
        printf("\nThe substraction of a and b is : %d",a-b);
        break;
    case '*':
        printf("\nThe multiplication of a and b is : %d",a*b);
        break;
    case '/':
        printf("\nThe division of a and b is : %d",a/b);
        break;
    }
}
