#include <stdio.h>
int main ()
{
   int i,j, a[3] [3] , sum=0 ;
   printf("enter the element for the matrix ->\n\n") ;
   for(i=0; i<3; i++)
   {
       for(j=0;j<3;j++)
       {
       printf(" a[%d][%d] = ",i,j) ;
       scanf("%d",&a[i][j]) ;
       }
   }
   printf("\nentered matrix->\n\n") ;

   for(i=0; i<3; i++)
   {
       for(j=0;j<3;j++)
       {
       printf("\t%d",a[i][j]) ;
       }
       printf("\n") ;
   }
   //sum of diagonal elements
   printf("\n Diagonal elements are -> ") ;
   for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           if(i==j)      //the index's where row and column values are exactly same
          {
             printf("%d ",a[i][j]) ;
           sum = sum + a[i][j] ;    //where the index of row & column is the same, will add those elements with sum which is initialized with 0
          }
       }
   }
printf ("\n sum of diagonal elements of this matrix is : %d\n",sum) ;
}
