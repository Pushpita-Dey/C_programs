#include <stdio.h>
struct docinfo
{
    char name[800];
    char hometown[900];
    char designation[900];
    char registeredhospital[900];
     char profession [200] ;
    int age;
    int id;
    float salary;
    char blood_type[900];
};
int main()
{
    struct docinfo I[5];
    int i;
    for(i=0; i<2; i++)
    {
        printf("\n Enter information for doctor %d ->\n",i+1);
        printf("enter name : ");
        fflush(stdin);
        gets(I[i].name);
        printf("enter hometown : ");
        fflush(stdin);
        gets(I[i].hometown);
        printf("enter designation : ");
        fflush(stdin);
        gets(I[i].designation);
        printf("enter registered hospital: ");
        fflush(stdin);
        gets(I[i].registeredhospital);
        printf("enter age : ");
        scanf("%d",&I[i].age);
        printf("enter id : ");
        scanf("%d",&I[i].id);
        printf("enter profession: ");
        fflush(stdin);
        gets(I[i].profession);
        printf("enter salary : ");
        scanf("%f",&I[i].salary);
        printf("enter blood type : ");
        fflush(stdin);
        gets(I[i].blood_type);

    }
    for(i=0; i<2; i++)
    {
        printf("\n\nDoctor Information no %d =>\n",i+1);
        printf(" name: %s\n",I[i].name);
        printf(" Home town : %s\n",I[i].hometown);
        printf(" Designation : %s\n",I[i].designation);
        printf(" Registered Hospital : %s\n",I[i].registeredhospital);
        printf(" age : %d\n",I[i].age);
        printf(" ID : %d\n",I[i].id);
         printf(" Profession : %s\n",I[i].profession) ;
        printf(" salary : %.2f\n",I[i].salary);
        printf(" Blood type : %s\n",I[i] .blood_type);
    }
    getch();
}
