#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str;
    str = "kirankumar \n";
    printf("%s",str);
    str = malloc(20 *sizeof(char));
    if (str == NULL)
    {
        printf("Couldn't able to allocate the requested memory\n");
    }
    else
    {
        strcpy(str,"Hello World");
        printf("Dynamically allocated memory is %s ",str);
    }
}
