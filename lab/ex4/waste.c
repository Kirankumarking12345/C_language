#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n=20;
    char *mem;
    mem = calloc(20 , sizeof(char));
    if(mem==NULL)
    {
        printf("do not allocate memory");

    }
    else if(mem!=NULL)
    {

        strcpy(mem, "kiran");
        mem = (char*)realloc(mem,n*sizeof(char));
    }
    printf("allocated memory : \t%s\n",mem);
    free(mem);
}
