#include <stdio.h>
int main()
{
    int i=0, num;

    printf("Enter a number:\n ");                          ///syntax:

    scanf("%d",&num);                             ///      do{

    do                                          ///      code to be executed ;
    {
        printf("%d\n",i) ;                     ///       increment/decrement ;
        i=i+2;
                                              ///        } while(condition);
    }
    while(i<num);

    return 0;
}
///.............do while loop executes at least once.
