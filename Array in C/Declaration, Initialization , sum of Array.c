//array is a collection of variable of same data type
//array declaration,initialization
#include <stdio.h>
int main ()
{
    //declaring an 1d array
    int n[5] ;                    //data_type array_name [array_size]
    //array variable initialize
   n[0] =10,n[1]=20,n[2] =30,n[3]=40,n[4]=50;
            printf("element at zero index : %d\n",n[0])   ;

            printf("element at 4th index : %d\n",n[4])   ;

             int sum = 0;
             sum = n[0] + n[1] + n[2] + n[3] + n[4] ;

             printf("\n sum is : %d",sum) ;

             int a[] = {10,20,30,40,50} ;  //declaring and directly initializing an array
             printf ("\n element on zero index : %d\n",a[0]) ;



}
