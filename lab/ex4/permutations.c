#include<stdio.h>
#include<string.h>
void permut(char *str, int start , int end )
{
    char temp;
    int i,j;
    for (i-start; i<end-1;++i)
    {
        for (j=i+1; j<end; j++)
        {

            temp  = str[i];
            str[i]= str[j];
            str[j]= temp;

            permut(str,i+1,end);
            temp    = str[i];
            str[i]  =str[j];
            str[j]  = temp;

        }
    }
    printf("string are :\n%s",str);
}
int main()
{
    char str[30];
    printf("Enter the string :");
    gets(str);
    int n = strlen(str);
    printf("All the permutations of the string are : \n");
    permut(str,0,n);
}
