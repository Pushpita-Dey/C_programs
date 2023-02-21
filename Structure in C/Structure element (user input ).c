#include <stdio.h>
struct person
{
    int age;
    float salary;
};

int main()
{
    struct person p1,p2;

    printf("enter information for person 1-> \n");
    printf("Enter age : ");
    scanf("%d",&p1.age);
    printf("Enter salary : ");
    scanf("%f",&p1.salary);

    printf("\nPerson 1 : \n");
    printf("age = %d\n",p1.age);
    printf("Salary = %.2f\n",p1.salary);

    printf("\n\nenter information for person 2-> \n");
    printf("Enter age : ");
    scanf("%d",&p2.age);
    printf("Enter salary : ");
    scanf("%f",&p2.salary);

    printf("\nPerson 2 : \n");
    printf("age = %d\n",p2.age);
    printf("Salary = %.2f\n",p2.salary);


}
