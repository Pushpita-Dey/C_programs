#include <stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;

};
int main()
{
    struct person p[5];
    int i;
    for (i=0; i<5; i++)
    {
        printf("\nenter the information for person %d\n",i+1);
        printf("enter name : ");
        fflush(stdin);
        gets(p[i].name);
        printf("enter age : ");
        scanf("%d",&p[i].age);
        printf("enter salary : ");
        scanf("%f",&p[i].salary);

    }
    for (i=0; i<5; i++)
    {
        printf("\n\nInformation for person %d\n",i+1);
        printf(" name : %s\n",p[i] .name);
        printf(" age : %d\n",p[i] .age);
        printf(" salary : %f\n",p[i] .salary);

    }

getch();
}
