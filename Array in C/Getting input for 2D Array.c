#include <stdio.h>
int main()
{
    int r, c, i, j, a[10][10] ;
    printf("\n enter the number of row and column for A matrix : ") ;
    scanf("%d %d",&r,&c) ;
    //taking user input for A matrix
    printf("\n enter elements for A matrix -> \n") ;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf(" a[%d][%d] = ",i,j) ;
            scanf("%d",&a[i][j]) ;
        }
        printf("\n") ;
    }
    printf("\n A matrix :\n\n ") ;
     for(i=0; i<r; i++)
    {
          printf("\t") ;
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]) ;
        }
    printf("\n") ;
    }
}
