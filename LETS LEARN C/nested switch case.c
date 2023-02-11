#include <stdio.h>
int main()
{
    int age, marks;
    printf("enter your age: ") ;
    scanf("%d",&age);

    printf("enter your marks: ");
    scanf("%d",&marks);

    switch (age)
    {
       case 3:
          printf("the age is : 3\n");
          switch (marks)
          {
            case 45:
               printf("the marks is : 45");
               break;

            default:
                printf("your marks are not 45");
        }
    }


}
