#include <stdio.h>
int main ()
{
    int a1[5] = {1,2,3,4,5} , a2[5], i ;

   printf("\n array 1 : ") ;
   for (i=0; i<5; i++)
   {
       printf("%d ",a1[i]) ;
   }
   //copying all the elements from array 1
   for(i=0; i<5; i++)
   {
       a2[i] = a1[i] ; //keeping the values of array 1 in the indexes of array 2
   }
   printf("\n array 2 :") ;
   for(i=0; i<5; i++)
   {
       printf("%d ",a2[i])  ;
   }



   getch() ;
}
