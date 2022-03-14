#include<stdio.h>
#include<string.h>
int main()
{
    char s1[15] = "Kiran kumar ";
    char s2[15] = "is good boy";
    strcpy(s1,s2);
    printf("The resultant string is : %s\n",s1);
    printf(" %s",s2);
}
