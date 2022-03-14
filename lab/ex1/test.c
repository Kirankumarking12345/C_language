#include<stdio.h>
int fun()
{
  static int count = 0;
  int k =0;
  count++;
  k++;
  printf("%d \t",k);
  return count;
}
int main()
{
    /*enum d{kiran, ravi, raju};
    printf("The number of kiran : %d",kiran);
    printf("%d\t",fun());
    printf("%d\t",fun());*/
    char a[] = "kiran";
    char b[] = {'k','u','m','a','r','\0'};
    int c[]  = {1,2,3,4,5};
    int  d[3][3] = {{1,2,3},{5,6,3}}; //multidimensional arrays intialization must be specified 
                                      //with size of the 2d array
    printf("%s\n%s\n%d\n",a,b,c[3]);
    
    int x = 30;
    int *p;
    p = &x;
    printf("Pointers :\n");
    printf("%p\n",p);
    char k[] = {'l','k','j'};
    char *ptr;
    ptr  = k;
    printf("The pointer p : %p\n",ptr);
    printf("The pointer value of p : %c\n",*ptr);

}