#include <stdio.h>
struct person       ///global structure-> can be accessed from any function
{
    int age ;                  ///person structure's members
    float salary ;
};

int main ()
{
    struct person p1,p2    ;     /// it is a person named data-type. here p1,p2 are different local variables

    ///to access the members of the structure

       p1.age=27   ;                  ///if p1 wants to use these variables p1 has to use a (.) operator
    p1.salary=27750.50;

    printf("\n person 1 : \n");
    printf("age = %d\n", p1.age);
    printf("Salary = %.2f\n", p1.salary);

      p2.age=23  ;                  ///if p2 wants to use these variables p1 has to use a (.) operator
    p2.salary=29750.50;

    printf("\n  person 2 : \n");
    printf("age = %d\n", p2.age);
    printf("Salary = %.2f\n", p2.salary);



    getch();
}
