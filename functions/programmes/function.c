#include<stdio.h>
#include<conio.h>
void main()
{
    int add(int,int);
    int n1, n2, result;
    printf("Enter values :");
    scanf("%d%d",&n1,&n2);
    result= add(n1,n2);
    printf("Sum= %d",result);
    getch();
}
 int add(int a,int b)
 {
     return(a+b);
 }
