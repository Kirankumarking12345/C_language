#include<stdio.h>
int main()
{
    char a[20]={"kirankumar"};
    int i;
    printf("Vowels are :\t");
    for (i=0; i!='/0'; i++)
    {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            printf("%c",a[i]);
        }
    }
}
