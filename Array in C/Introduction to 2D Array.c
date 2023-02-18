
#include <stdio.h>
int main ()
{
    int i, j ;
    int a[3][4] = {   {1,2,3,4}, {5,6,7,8}, {9,10,11,12 }     }  ;   // declaring & directly initializing a 2d array

    for (i=0; i<3; i++)   //i variable for row
    {
        for(j=0;j<3; j++)     //j variable for column
        {
            printf("%d ",a[i][j]) ;  //printing the elements
        }
    printf("\n") ;  //before moving to the second row, a new line
    }
}
