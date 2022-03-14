#include<stdio.h>
int main()
{
    int i, n, a, r, s=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    a = n;

    while(n!=0)
    {
        //to check what happening in program
        r = n%10;
        s = s*10+r;
        n = n/10;
        printf("%d %d %d\n",r,s,n);
    }
    if(a==s)
        printf("The given is palindrome");
    else
        printf("Its not a palindrome");
}
