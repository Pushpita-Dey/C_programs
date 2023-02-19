#include <stdio.h>
int main ()
{
    int x =10, y=20, sum ;

    int *ptr1, *ptr2 ;

    ptr1 = &x ;     //pointer 1 will point to the address of X

    ptr2 = &y ;     //pointer 2 will point to the address of Y

    sum = *ptr1 + *ptr2 ;

    printf("sum = %d ",sum) ;
    getch () ;
}
