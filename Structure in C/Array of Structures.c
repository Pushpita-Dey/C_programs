#include <stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{         ///preparing an array ( p )for person structure
        struct person p[2];   ///here we have prepare 5 variables for person structure
       int i;
       for(i=0; i<2; i++){
       printf("enter information for person %d\n ", i+1);
       printf("Enter age : ");
       scanf("%d",&p[i].age);
       printf(" Enter salary : ");
       scanf("%f",&p[i].salary);
       }
       for(i=0; i<2; i++){
       printf("\n\nInformation for person %d\n ", i+1);
       printf(" Age : %d\n",p[i].age);
       printf(" salary : %f\n",p[i].salary);

       }

  getch()  ;
}
