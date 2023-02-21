#include <stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    ///local variables
    struct person p1= {25,275500};
    struct person p2,p3;
    ///element wise assigning
    p2.age=27;
    p2.salary=2675000;

    p3=p2;     ///p3 initialize, putting the values of p2 into p3

    if(p2.age==p3.age&&p2.salary==p3.salary)       ///as we have put the info of p2 into p3 so basically p2 & p3 info are the same
        printf("Person 2 equal to person 3");
    else
        printf("Person 2 not equal to person 3");

    getch();
}
