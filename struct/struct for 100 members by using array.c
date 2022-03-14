#include<Stdio.h>
struct student
{
    int id;
    char name[100];
    float perc;
};

int main()
{
    struct student s[100];
    int i;
    printf("Enter the student details\n");
    for (i = 0; i<10;i++)
    {
        printf("\nEnter student no.%d details :\n\n",i+1);
        printf("Enter the id :");
        scanf("%d",&s[i].id);
        printf("Enter the name :");
        scanf("%s",s[i].name);
        printf("Enter the percentage");
        scanf("%f",&s[i].perc);
    }
    printf("\n\nStudent details are :\n");
    for (i=0;i<10;i++)
    {
        printf("\nID no\t:%d\nNAME \t:%s\nPERCENTAGE \t:%f\n",s[i].id,s[i].name,s[i].perc);
    }

}
