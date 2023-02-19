#include <stdio.h>
int main ()
{
    int x =10, y= 20, temp ;
    int * ptr1, *ptr2 ;

    ptr1 = &x ;   //pointer1 's variable /  x 's value
    ptr2 = &y ;

    temp = *ptr1 ;    //the variable of pointer 1/ the value of x variable , we put in temp
    *ptr1 = *ptr2 ;   //the variable of pointer 1 / x variable is empty, so we keep the value of ptr 2/ y in ptr 1
    *ptr2 = temp ;     //put the value of temp in the value of y/ptr2
    printf("x = %d\n",x) ;
    printf("y= %d\n",y) ;

    getch () ;
}
