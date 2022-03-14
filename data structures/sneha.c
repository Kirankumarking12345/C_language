#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
printf("enter a number to display its factors:\n");
scanf("%d",&n);
printf("factors a given number are:\n");
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d\t",i);
}
}
getch();
return 0;
}
