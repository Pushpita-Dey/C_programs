#include <stdio.h>
struct person {

         int age;
         float salary;
};

 int main()
 {
     struct person p1= {25,275500};                    ///local variable
     struct person p2,p3;
     ///element wise assigning.....
     p2.age = 27;                                                   ///p2 initialize
     p2.salary = 2675000;
     ///structure variable assignment.....
     p3=p2;                                                          ///p3 initialize, putting the values of p2 into p3

     printf("Person 1->  \n");
     printf("age: %d\n",p1.age);
     printf("Salary : %.2f\n",p1.salary);

      printf("\nPerson 2->  \n");
     printf("age: %d\n",p2.age);
     printf("Salary : %.2f\n",p2.salary);

      printf("\nPerson 3->  \n");
     printf("age: %d\n",p3.age);
     printf("Salary : %.2f\n",p3.salary);



getch();
 }
