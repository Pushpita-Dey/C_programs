#include <stdio.h>
int main ()
{
    int x = 10, y= 20, z= 30 ;
    int *ptr ;     // declaring a pointer
    ptr =  &x   ;  //pointer pointing x 's address
    printf("x = %d\n",*ptr)  ;     //when a pointer is pointing to a variable then to find the value of that pointing variable, asterisk sign should be used

    ptr =  &y   ;  //pointer pointing y 's address
    printf("y = %d\n",*ptr) ;
    ptr =  &z   ;  //pointer pointing x 's address
    printf("z = %d\n",*ptr) ;
}
