#include <stdio.h>
struct person {
         char name[50];
         int age;
         float salary;
};
void display (struct person p)                       ///passing structure in display function
{
    printf("\nname : %s\n",p.name);
      printf("age : %d\n",p.age);
      printf("salary : %.2f\n",p.salary);

}
int main()
{
    struct person p1,p2;                                  ///initializing structure type variable->p1,p2
    strcpy(p1.name,"mi_chan");
    p1.age=22;
    p1.salary=12250.25;

    display(p1);                         ///calling display function to print these

    strcpy(p2.name,"Doraeme");
    p2.age=22;
    p2.salary=29250.25;

    display(p2);

getch();
}
