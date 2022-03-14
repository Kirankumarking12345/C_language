#include<stdio.h>
int main()
{
    char k[20];
    printf("Enter the string \t");
    scanf("%[^\n]",k);
    printf("Entered string is :\t%s",k);
    return 0;

}
